require 'std/memory.rb'
require 'std/linear.rb'
require "std/fixpoint.rb"
require_relative "network_constructor.rb"
require_relative "network_loader.rb"
require_relative "quantize.rb"
require_relative "activation_function.rb"
require 'std/channel.rb'
require 'std/connector.rb'

include HDLRuby::High::Std

system :lstm_test do
    # データ型の宣言
    integer_width = 4 # 整数部のビット幅
    decimal_width = 4 # 実数部のビット幅
    address_width = 4 # lutのアドレスのビット幅
    typ = signed[integer_width, decimal_width] # データ型
    tanh = proc{ |x| Math.tanh(x) }
    sigmoid = proc{ |x| 1 / (1 + Math.exp(-x)) }
    linear = proc { |x| x }

    # ニューラルネットワークの構造
    columns = [8, 2, 8]
    func_sig = [sigmoid, linear] # 活性化関数

    func_tanh = [tanh, linear]   # 活性化関数

    parameters_sig = load_network("lstm1.json")
    parameters_tanh = load_network("lstm0.json")

    biases_sig = parameters_sig[:biases]
    weights_sig = parameters_sig[:weights]

    biases_tanh = parameters_tanh[:biases]
    weights_tanh = parameters_tanh[:weights]

    inputs = [1, 1, 0, 1, 0, 1, 1, 0]

    puts "inputs : #{inputs}"

    #---------------内部信号の宣言---------------------
    inner :clk,   # clock
          :rst,   # reset
          :req,   # request
          :fill   # 入力値のメモリへの書き込み

    inner :ack_fill_forget_sig, # 書き込みのack:forget_sig
          :ack_network_forget_sig, # ニューラルネット:ワークのack:forget_sig

          :ack_fill_input_sig, # 書き込みのack:input_sig
          :ack_network_input_sig, # ニューラルネットワークのack:input_sig

          :ack_fill_input_tanh, # 書き込みのack:input_tanh
          :ack_network_input_tanh, # ニューラルネットワークのack:input_tanh

          :ack_fill_output_sig, # 書き込みのack:output_sig
          :ack_network_output_sig, # ニューラルネットワークのack:output_sig

          :req_mul_forg,
          :ack_mul_forg,

          :req_mul_ing,
          :ack_mul_ing,

          :req_sum_ing,
          :ack_sum_ing,

          :req_mul_outg,
          :ack_mul_outg


    inputs = quantize(inputs, typ, decimal_width)
    # NOTE: 入力のメモリに関して
    # network_constructorにはbranchを渡すので、mem_romからmem_dualやmem_fileに変更できる。
    # ただし、branchはrincのみ。つまり、rincのbranchを持つメモリなら何でもOK。

    # mem_rom(typ, columns[-1], clk, rst, inputs, rinc: :rst, winc: :rst).(:rom_inputs_x) # 入力値を格納するrom(x)
    # mem_rom(typ, columns[-1], clk, rst, inputs, rinc: :rst, winc: :rst).(:rom_inputs_h) # 入力値を格納するrom(h)
    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_inputs_c) # 入力値を格納するrom(c)
    mem_file(typ, columns[0], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_inputs) # 入力値を格納するrom(x,h)

    # Initialization of the input memories
    init_ram_inputs_c = ram_inputs_c.branch(:winc)
    init_ram_inputs = ram_inputs.branch(:winc)
    [8].inner :init_idx

    par(clk.posedge) do
      hif(rst) { init_idx <= 0 }
      hif(fill) do
        hcase(init_idx)
        # puts inputs
        inputs.each_with_index do |inp, i|
          # puts init_ram_inputs_c.class
          hwhen(i) do
            # puts "init_inputs_c[#{i}]: #{inp}"
            init_ram_inputs_c.write(inp) { init_idx <= init_idx + 1 }
          end
          hwhen(i+inputs.size) do
            # puts "init_inputs[#{i}]: #{inp}"
            init_ram_inputs.write(inp) { init_idx <= init_idx + 1}
          end
        end
      end
    end

    mem_dual(typ, columns[0], clk, rst, rinc: :rst, winc: :rst).(:ram_input_forg) # 忘却ゲートNNの入力値を格納するram
    mem_dual(typ, columns[0], clk, rst, rinc: :rst, winc: :rst).(:ram_input_ingsig) # 入力ゲートNNの入力値を格納するram(sig)
    mem_dual(typ, columns[0], clk, rst, rinc: :rst, winc: :rst).(:ram_input_ingtanh) # 入力ゲートNNの入力値を格納するram(tanh)
    mem_dual(typ, columns[0], clk, rst, rinc: :rst, winc: :rst).(:ram_input_outg) # 出力ゲートNNの入力値を格納するram

    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_output_forg) # 忘却ゲートNNの出力値を格納するram
    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_output_ingsig) # 入力ゲートNNの出力値を格納するram(sig)
    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_output_ingtanh) # 入力ゲートNNの出力値を格納するram(tanh)
    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_output_outg) # 出力ゲートNNの出力値を格納するram

    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_output_mul_forg) # 忘却ゲート(mul)の出力値を格納するram
    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_output_mul_ing) # 入力ゲート(mul)の出力値を格納するram
    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_output_sum_ing) # 入力ゲート(sum)の出力値を格納するram

    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_input_tanh_outg) # 出力ゲート(tanh)の入力値を格納するram
    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_output_tanh_outg) # 出力ゲート(tanh)の出力値を格納するram
    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_outputs_c) # 長期記憶の出力値を格納するram

    mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_outputs_h) # 短期記憶の出力値を格納するram


    # mem_rom(typ, columns[0], clk, rst, inputs, rinc: :rst, winc: :rst).(:rom_inputs_sig) # 入力値を格納するrom(sig)

    # mem_dual(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst).(:ram_outputs_sig) # 出力値を格納するram(sig)

    # mem_rom(typ, columns[0], clk, rst, inputs, rinc: :rst, winc: :rst).(:rom_inputs_tanh) # 入力値を格納するrom(tanh)

    # mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst).(:ram_outputs_tanh) # 出力値を格納するram(tanh)

    # mem_file(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:ram_outputs_mul)  # 掛け算の出力値を格納する


    # reader_inputs_x = rom_inputs_x.branch(:rinc) # 入力値xの読みだし用branch
    # reader_inputs_h = rom_inputs_h.branch(:rinc) # 入力値hの読みだし用branch
    reader_inputs_c = ram_inputs_c.branch(:anum) # 入力値cの読みだし用branch
    # writer_inputs = ram_inputs.branch(:winc) # 入力値を合成した値の書き込み用branch
    reader_inputs = ram_inputs.branch(:rinc) # 入力値を合成した値の書き込み用branch

    writer_input_forg = ram_input_forg.branch(:winc)
    writer_input_ingsig = ram_input_ingsig.branch(:winc)
    writer_input_ingtanh = ram_input_ingtanh.branch(:winc)
    writer_input_outg = ram_input_outg.branch(:winc)

    reader_input_forg = ram_input_forg.branch(:rinc)
    reader_input_ingsig = ram_input_ingsig.branch(:rinc)
    reader_input_ingtanh = ram_input_ingtanh.branch(:rinc)
    reader_input_outg= ram_input_outg.branch(:rinc)

    writer_output_forg = ram_output_forg.branch(:winc)
    writer_output_ingsig = ram_output_ingsig.branch(:winc)
    writer_output_ingtanh = ram_output_ingtanh.branch(:winc)
    writer_output_outg = ram_output_outg.branch(:winc)

    reader_output_forg = ram_output_forg.branch(:anum)
    reader_output_ingsig = ram_output_ingsig.branch(:anum)
    reader_output_ingtanh = ram_output_ingtanh.branch(:anum)
    reader_output_outg = ram_output_outg.branch(:anum)

    # writer_output_mul_forg = ram_output_mul_forg.branch(:anam)
    # writer_output_mul_ing = ram_output_mul_ing.branch(:anam)

    # reader_output_mul_forg = ram_output_mul_forg.branch(:anam)
    # reader_output_mul_ing = ram_output_mul_ing.branch(:anam)
    output_mul_forg = ram_output_mul_forg.branch(:anum)
    output_mul_ing = ram_output_mul_ing.branch(:anum)
    writer_output_sum_ing = ram_output_sum_ing.branch(:anum)

    reader_output_sum_ing = ram_output_sum_ing.branch(:rinc)
    writer_outputs_c = ram_outputs_c.branch(:winc)
    writer_input_tanh_outg = ram_input_tanh_outg.branch(:winc)

    reader_input_tanh_outg = ram_input_tanh_outg.branch(:rinc)
    writer_output_tanh_outg = ram_output_tanh_outg.branch(:winc)
    reader_output_tanh_outg = ram_output_tanh_outg.branch(:anum)

    writer_output_mul_outg = ram_outputs_h.branch(:anum)

    # reader_inputs_sig = rom_inputs_sig.branch(:rinc) # 入力値の読み出し用branch
    # writer_outputs_sig = ram_outputs_sig.branch(:winc) # 出力値の書き込み用branch

    # reader_inputs_tanh = rom_inputs_tanh.branch(:rinc) # 入力値の読み出し用branch
    # writer_outputs_tanh = ram_outputs_tanh.branch(:winc) # 出力値の書き込み用branch

    # mul_inputs_sig = ram_outputs_sig.branch(:anum) # 掛け算計算の入力値(sig)用branch
    # mul_inputs_tanh = ram_outputs_tanh.branch(:anum) # 掛け算計算の入力値(tanh)用branch
    # mul_outputs = ram_outputs_mul.branch(:anum)# 掛け算計算の出力値用branch

    #        ↓ わからない
    # serializer(typ,clk.negedge,[reader_inputs_x,reader_inputs_h],reader_inputs)

    # duplicator(typ*2,clk.negedge,reader_inputs,[in_sig,in_tanh])

    # NNの入力用 duplicator
    duplicator(typ, clk.negedge, reader_inputs,[writer_input_forg, writer_input_ingsig, writer_input_ingtanh, writer_input_outg])

    # 忘却ゲートNN
    network_constructor(columns, func_sig, typ, integer_width, decimal_width, address_width, reader_input_forg, writer_output_forg, weights_sig, biases_sig).(:forget_sig_nn).(clk, rst, req, fill, ack_fill_forget_sig, ack_network_forget_sig)
    # 入力ゲートNN
    network_constructor(columns, func_sig, typ, integer_width, decimal_width, address_width, reader_input_ingsig, writer_output_ingsig, weights_sig, biases_sig).(:input_sig_nn).(clk, rst, req, fill, ack_fill_input_sig, ack_network_input_sig)
    network_constructor(columns, func_tanh, typ, integer_width, decimal_width, address_width, reader_input_ingtanh, writer_output_ingtanh, weights_tanh, biases_sig).(:input_tanh_nn).(clk, rst, req, fill, ack_fill_input_tanh, ack_network_input_tanh)
    # 出力ゲートNN
    network_constructor(columns, func_sig, typ, integer_width, decimal_width, address_width, reader_input_outg, writer_output_outg, weights_sig, biases_sig).(:output_sig_nn).(clk, rst, req, fill, ack_fill_output_sig, ack_network_output_sig)

    # network_constructor(columns, func_sig, typ, integer_width, decimal_width, address_width, reader_inputs_sig, writer_outputs_sig, weights_sig, biases_sig).(:sigmoid_neural_network).(clk, rst, req, fill, ack_fill_sig, ack_network_sig)

    # network_constructor(columns, func_tanh, typ, integer_width, decimal_width, address_width, reader_inputs_tanh, writer_outputs_tanh, weights_tanh, biases_tanh).(:tanh_neural_network).(clk, rst, req, fill, ack_fill_tanh, ack_network_tanh)

    # req_mul <= ack_network_sig & ack_network_tanh

    # 忘却ゲートでの演算
    req_mul_forg <= ack_network_forget_sig
    inputs_c = columns[-1].times.map{ |i| reader_inputs_c.wrap(i) }
    outputs_forg = columns[-1].times.map{ |i| reader_output_forg.wrap(i) }
    outputs_mul_forg = columns[-1].times.map{ |i| output_mul_forg.wrap(i) }
    mul_n(typ, clk, req_mul_forg, ack_mul_forg, inputs_c, outputs_forg, outputs_mul_forg)

    # 入力ゲートでの演算
    req_mul_ing <= ack_network_input_sig & ack_network_input_tanh
    outputs_ingsig = columns[-1].times.map{ |i| reader_output_ingsig.wrap(i) }
    outputs_ingtanh = columns[-1].times.map{ |i| reader_output_ingtanh.wrap(i) }
    outputs_mul_ing = columns[-1].times.map{ |i| output_mul_ing.wrap(i) }
    mul_n(typ, clk, req_mul_ing, ack_mul_ing, outputs_ingsig, outputs_ingtanh, outputs_mul_ing)

    req_sum_ing <= ack_mul_forg & ack_mul_ing
    outputs_sum_ing = columns[-1].times.map{ |i| writer_output_sum_ing.wrap(i) }
    add_n(typ, clk, req_sum_ing, ack_sum_ing, outputs_mul_forg, outputs_mul_ing, outputs_sum_ing)

    # 出力ゲートでの演算
    outputs_outg = columns[-1].times.map{ |i| reader_output_outg.wrap(i) }
    outputs_tanh_outg = columns[-1].times.map{ |i| reader_output_tanh_outg.wrap(i) }
    outputs_mul_outg = columns[-1].times.map{ |i| writer_output_mul_outg.wrap(i) }
    mul_n(typ, clk, req_mul_outg, ack_mul_outg, outputs_outg, outputs_tanh_outg, outputs_mul_outg)

    # sig_outputs = columns[-1].times.map{ |i| mul_inputs_sig.wrap(i) }
    # tanh_outputs = columns[-1].times.map{ |i| mul_inputs_tanh.wrap(i) }
    # mul_outputs = columns[-1].times.map{ |i| mul_outputs.wrap(i) }
    


    duplicator(typ,clk.negedge,reader_output_sum_ing,[writer_outputs_c, writer_input_tanh_outg])

    timed do
      # リセット
      clk <= 0
      rst <= 0
      req <= 0
      fill <= 0
      !10.ps

      # メモリ読み出し位置の初期化
      rst <= 1
      !10.ps
      clk <= 1
      !10.ps
      clk <= 0
      !10.ps
      clk <= 1
      !10.ps

      # パラメータのメモリへの書き込み
      clk <= 0
      rst <= 0
      fill <= 1

      !10.ps
      16.times do |i|
        clk <= 1
        !10.ps
        clk <= 0
        !10.ps
      end

      fill <= 0
      clk <= 1
      !10.ps

      # duplicatorの実行
      10.times do |i|
        clk <= 1
        !10.ps
        clk <= 0
        !10.ps
      end

      # 計算の実行
      clk <= 0
      req <= 1
      !10.ps
      clk <= 1
      !10.ps
      clk <= 0
      !10.ps
      50.times do
        clk <= 1
        !10.ps
        clk <= 0
        !10.ps
      end
    end
  end
