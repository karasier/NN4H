`timescale 1ps/1ps

module _____00003aT0( ); 
   reg clk;
   reg rst;
   reg req;
   reg flag;
   reg ack;
   wire [7:0] _00003a2;
   wire [7:0] _00003a3;
   wire [7:0] _00003a32;
   wire [7:0] _00003a33;
   wire [7:0] _00003a17;
   wire [7:0] _00003a18;
   wire [0:0] _00003a19;
   wire [7:0] _00003a47;
   wire [7:0] _00003a48;
   wire [0:0] _00003a49;
   wire [7:0] _00003a114_00003a_00003areg__0;
   wire [7:0] _00003a114_00003a_00003areg__1;
   wire [0:0] _00003a114_00003a_00003a_00003a93_00003a_00003aabus__r;
   wire [0:0] _00003a114_00003a_00003a_00003a94_00003a_00003aabus__w;
   wire [0:0] _00003a114_00003a_00003a_00003a95_00003a_00003aabus__r;
   wire [0:0] _00003a114_00003a_00003a_00003a96_00003a_00003aabus__w;
   wire [7:0] _00003a115_00003a_00003areg__0;
   wire [7:0] _00003a115_00003a_00003areg__1;
   wire [0:0] _00003a115_00003a_00003a_00003a100_00003a_00003aabus__r;
   wire [0:0] _00003a115_00003a_00003a_00003a101_00003a_00003aabus__w;
   wire [0:0] _00003a115_00003a_00003a_00003a102_00003a_00003aabus__r;
   wire [0:0] _00003a115_00003a_00003a_00003a103_00003a_00003aabus__w;
   wire _00005e_0000600;
   wire _00005e_0000601;
   wire _00005e_0000602;
   wire _00005e_0000603;
   wire _00005e_0000604;

   _____00003aT0_00003a_00003amy__layer_00003aT0 my__layer(.clk(_00005e_0000600),.rst(_00005e_0000601),.req(_00005e_0000602),.flag(_00005e_0000603),.ack(_00005e_0000604));
   assign _00005e_0000600 = clk;

   assign _00005e_0000601 = rst;

   assign _00005e_0000602 = req;

   assign _00005e_0000603 = flag;

   assign ack = _00005e_0000604;

   assign _00003a2 = _00003a114_00003a_00003areg__0;

   assign _00003a3 = _00003a114_00003a_00003areg__1;

   assign _00003a17 = _00003a114_00003a_00003areg__0;

   assign _00003a18 = _00003a114_00003a_00003areg__1;

   assign _00003a19 = _00003a114_00003a_00003a_00003a94_00003a_00003aabus__w;

   assign _00003a32 = _00003a115_00003a_00003areg__0;

   assign _00003a33 = _00003a115_00003a_00003areg__1;

   assign _00003a47 = _00003a115_00003a_00003areg__0;

   assign _00003a48 = _00003a115_00003a_00003areg__1;

   assign _00003a49 = _00003a115_00003a_00003a_00003a101_00003a_00003aabus__w;

   initial begin

      clk = 32'd0;

      rst = 32'd0;

      req = 32'd0;

      ack = 32'd0;

      #10000

      clk = 32'd1;

      rst = 32'd1;

      flag = 32'd1;

      #10000

      clk = 32'd0;

      clk = 32'd1;

      #10000

      clk = 32'd0;

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      #10000

      flag = 32'd0;

      clk = 32'd1;

      #10000

      clk = 32'd0;

      req = 32'd1;

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ack == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ack == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ack == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ack == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ack == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ack == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ack == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ack == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ack == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ack == 32'd1)) begin
         req = 32'd0;
      end

      #10000

   end

endmodule