`timescale 1ps/1ps

module _____00003aT0_00003a_00003amy__table_00003aT0( addr, base, next__data ); 
   input [7:0] addr;
   output signed[31:0] base;
   output reg signed[31:0] next__data;
   wire signed[31:0] table  :4[255:0];

   assign base = table[addr];

   always @( * ) begin

      if ((addr == {1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1})) begin
         next__data <= table[addr];
      end
      else begin
         next__data <= table[(addr + 32'd1)];
      end

   end

   initial begin

      table[32'd0] = 32'b00000000000000000000000000000000;

      table[32'd1] = 32'b00000000010111111111101110000000;

      table[32'd2] = 32'b00000000101111111101110000001000;

      table[32'd3] = 32'b00000001000111111000011010111101;

      table[32'd4] = 32'b00000001011111101110000100000010;

      table[32'd5] = 32'b00000001110111011101000010010010;

      table[32'd6] = 32'b00000010001111000011101110100000;

      table[32'd7] = 32'b00000010100110100000100011110000;

      table[32'd8] = 32'b00000010111101110001111111110010;

      table[32'd9] = 32'b00000011010100110110100011011010;

      table[32'd10] = 32'b00000011101011101100110010111001;

      table[32'd11] = 32'b00000100000010010011010110010010;

      table[32'd12] = 32'b00000100011000101000111001100111;

      table[32'd13] = 32'b00000100101110101100001101010100;

      table[32'd14] = 32'b00000101000100011100000110010100;

      table[32'd15] = 32'b00000101011001110111011110010011;

      table[32'd16] = 32'b00000101101110111101010011110111;

      table[32'd17] = 32'b00000110000011101100101010100111;

      table[32'd18] = 32'b00000110011000000100101011001110;

      table[32'd19] = 32'b00000110101100000100100011100100;

      table[32'd20] = 32'b00000110111111101011100110101010;

      table[32'd21] = 32'b00000111010010111001001100101011;

      table[32'd22] = 32'b00000111100101101100110010110111;

      table[32'd23] = 32'b00000111111000000101111011100001;

      table[32'd24] = 32'b00001000001010000100001101111001;

      table[32'd25] = 32'b00001000011011100111010110000000;

      table[32'd26] = 32'b00001000101100101111000100100010;

      table[32'd27] = 32'b00001000111101011011001110101011;

      table[32'd28] = 32'b00001001001101101011101101111011;

      table[32'd29] = 32'b00001001011101100000011111111001;

      table[32'd30] = 32'b00001001101100111001100110001000;

      table[32'd31] = 32'b00001001111011110111000101110110;

      table[32'd32] = 32'b00001010001010011001000111110010;

      table[32'd33] = 32'b00001010011000011111110111111010;

      table[32'd34] = 32'b00001010100110001011100101001110;

      table[32'd35] = 32'b00001010110011011100100001100001;

      table[32'd36] = 32'b00001011000000010011000001001101;

      table[32'd37] = 32'b00001011001100101111011011000000;

      table[32'd38] = 32'b00001011011000110010000111110001;

      table[32'd39] = 32'b00001011100100011011100010010100;

      table[32'd40] = 32'b00001011101111101100000111000111;

      table[32'd41] = 32'b00001011111010100100010100001010;

      table[32'd42] = 32'b00001100000101000100101000110011;

      table[32'd43] = 32'b00001100001111001101100101011101;

      table[32'd44] = 32'b00001100011000111111101011100011;

      table[32'd45] = 32'b00001100100010011011011101010001;

      table[32'd46] = 32'b00001100101011100001011101011100;

      table[32'd47] = 32'b00001100110100010010001111010111;

      table[32'd48] = 32'b00001100111100101110010110101101;

      table[32'd49] = 32'b00001101000100110110010111010110;

      table[32'd50] = 32'b00001101001100101010110101010001;

      table[32'd51] = 32'b00001101010100001100010100011011;

      table[32'd52] = 32'b00001101011011011011011000101100;

      table[32'd53] = 32'b00001101100010011000100101101101;

      table[32'd54] = 32'b00001101101001000100011110111000;

      table[32'd55] = 32'b00001101101111011111100111001101;

      table[32'd56] = 32'b00001101110101101010100001010010;

      table[32'd57] = 32'b00001101111011100101101111001110;

      table[32'd58] = 32'b00001110000001010001110010100111;

      table[32'd59] = 32'b00001110000110101111001100011010;

      table[32'd60] = 32'b00001110001011111110011101000000;

      table[32'd61] = 32'b00001110010001000000000100000110;

      table[32'd62] = 32'b00001110010101110100100000101101;

      table[32'd63] = 32'b00001110011010011100010001001000;

      table[32'd64] = 32'b00001110011110110111110010111100;

      table[32'd65] = 32'b00001110100011000111100010111110;

      table[32'd66] = 32'b00001110100111001011111101010100;

      table[32'd67] = 32'b00001110101011000101011101001111;

      table[32'd68] = 32'b00001110101110110100011101010100;

      table[32'd69] = 32'b00001110110010011001010111010010;

      table[32'd70] = 32'b00001110110101110100100100001001;

      table[32'd71] = 32'b00001110111001000110011100001000;

      table[32'd72] = 32'b00001110111100001111010110101100;

      table[32'd73] = 32'b00001110111111001111101010100011;

      table[32'd74] = 32'b00001111000010000111101101101011;

      table[32'd75] = 32'b00001111000100110111110101010001;

      table[32'd76] = 32'b00001111000111100000010101111000;

      table[32'd77] = 32'b00001111001010000001100011010001;

      table[32'd78] = 32'b00001111001100011011110000100100;

      table[32'd79] = 32'b00001111001110101111010000001011;

      table[32'd80] = 32'b00001111010000111100010011110110;

      table[32'd81] = 32'b00001111010011000011001100101101;

      table[32'd82] = 32'b00001111010101000100001011001100;

      table[32'd83] = 32'b00001111010110111111011111001100;

      table[32'd84] = 32'b00001111011000110101010111111100;

      table[32'd85] = 32'b00001111011010100110000100001000;

      table[32'd86] = 32'b00001111011100010001110001110101;

      table[32'd87] = 32'b00001111011101111000101110100111;

      table[32'd88] = 32'b00001111011111011011000111100000;

      table[32'd89] = 32'b00001111100000111001001001000001;

      table[32'd90] = 32'b00001111100010010010111111001001;

      table[32'd91] = 32'b00001111100011101000110101011100;

      table[32'd92] = 32'b00001111100100111010110110111011;

      table[32'd93] = 32'b00001111100110001001001110001111;

      table[32'd94] = 32'b00001111100111010100000101100100;

      table[32'd95] = 32'b00001111101000011011100110101001;

      table[32'd96] = 32'b00001111101001011111111010110110;

      table[32'd97] = 32'b00001111101010100001001011001000;

      table[32'd98] = 32'b00001111101011011111100000000101;

      table[32'd99] = 32'b00001111101100011011000001111100;

      table[32'd100] = 32'b00001111101101010011111000100110;

      table[32'd101] = 32'b00001111101110001010001011100111;

      table[32'd102] = 32'b00001111101110111110000010001100;

      table[32'd103] = 32'b00001111101111101111100011010001;

      table[32'd104] = 32'b00001111110000011110110101011111;

      table[32'd105] = 32'b00001111110001001011111111001011;

      table[32'd106] = 32'b00001111110001110111000110011010;

      table[32'd107] = 32'b00001111110010100000010000111111;

      table[32'd108] = 32'b00001111110011000111100100011110;

      table[32'd109] = 32'b00001111110011101101000110001100;

      table[32'd110] = 32'b00001111110100010000111011001101;

      table[32'd111] = 32'b00001111110100110011001000011001;

      table[32'd112] = 32'b00001111110101010011110010011010;

      table[32'd113] = 32'b00001111110101110010111101101100;

      table[32'd114] = 32'b00001111110110010000101110011111;

      table[32'd115] = 32'b00001111110110101101001000111000;

      table[32'd116] = 32'b00001111110111001000010000101110;

      table[32'd117] = 32'b00001111110111100010001001110000;

      table[32'd118] = 32'b00001111110111111010110111100001;

      table[32'd119] = 32'b00001111111000010010011101011010;

      table[32'd120] = 32'b00001111111000101000111110101011;

      table[32'd121] = 32'b00001111111000111110011110011001;

      table[32'd122] = 32'b00001111111001010010111111100010;

      table[32'd123] = 32'b00001111111001100110100100111011;

      table[32'd124] = 32'b00001111111001111001010001010010;

      table[32'd125] = 32'b00001111111010001011000111001010;

      table[32'd126] = 32'b00001111111010011100001001000011;

      table[32'd127] = 32'b00001111111010101100011001010010;

      table[32'd128] = 32'b11110000000101000100000101111000;

      table[32'd129] = 32'b11110000000101010011100110101110;

      table[32'd130] = 32'b11110000000101100011110110111101;

      table[32'd131] = 32'b11110000000101110100111000110110;

      table[32'd132] = 32'b11110000000110000110101110101110;

      table[32'd133] = 32'b11110000000110011001011011000101;

      table[32'd134] = 32'b11110000000110101101000000011110;

      table[32'd135] = 32'b11110000000111000001100001100111;

      table[32'd136] = 32'b11110000000111010111000001010101;

      table[32'd137] = 32'b11110000000111101101100010100110;

      table[32'd138] = 32'b11110000001000000101001000011111;

      table[32'd139] = 32'b11110000001000011101110110010000;

      table[32'd140] = 32'b11110000001000110111101111010010;

      table[32'd141] = 32'b11110000001001010010110111001000;

      table[32'd142] = 32'b11110000001001101111010001100001;

      table[32'd143] = 32'b11110000001010001101000010010100;

      table[32'd144] = 32'b11110000001010101100001101100110;

      table[32'd145] = 32'b11110000001011001100110111100111;

      table[32'd146] = 32'b11110000001011101111000100110011;

      table[32'd147] = 32'b11110000001100010010111001110100;

      table[32'd148] = 32'b11110000001100111000011011100010;

      table[32'd149] = 32'b11110000001101011111101111000001;

      table[32'd150] = 32'b11110000001110001000111001100110;

      table[32'd151] = 32'b11110000001110110100000000110101;

      table[32'd152] = 32'b11110000001111100001001010100001;

      table[32'd153] = 32'b11110000010000010000011100101111;

      table[32'd154] = 32'b11110000010001000001111101110100;

      table[32'd155] = 32'b11110000010001110101110100011001;

      table[32'd156] = 32'b11110000010010101100000111011010;

      table[32'd157] = 32'b11110000010011100100111110000100;

      table[32'd158] = 32'b11110000010100100000011111111011;

      table[32'd159] = 32'b11110000010101011110110100111000;

      table[32'd160] = 32'b11110000010110100000000101001010;

      table[32'd161] = 32'b11110000010111100100011001010111;

      table[32'd162] = 32'b11110000011000101011111010011100;

      table[32'd163] = 32'b11110000011001110110110001110001;

      table[32'd164] = 32'b11110000011011000101001001000101;

      table[32'd165] = 32'b11110000011100010111001010100100;

      table[32'd166] = 32'b11110000011101101101000000110111;

      table[32'd167] = 32'b11110000011111000110110110111111;

      table[32'd168] = 32'b11110000100000100100111000100000;

      table[32'd169] = 32'b11110000100010000111010001011001;

      table[32'd170] = 32'b11110000100011101110001110001011;

      table[32'd171] = 32'b11110000100101011001111011111000;

      table[32'd172] = 32'b11110000100111001010101000000100;

      table[32'd173] = 32'b11110000101001000000100000110100;

      table[32'd174] = 32'b11110000101010111011110100110100;

      table[32'd175] = 32'b11110000101100111100110011010011;

      table[32'd176] = 32'b11110000101111000011101100001010;

      table[32'd177] = 32'b11110000110001010000101111110101;

      table[32'd178] = 32'b11110000110011100100001111011100;

      table[32'd179] = 32'b11110000110101111110011100101111;

      table[32'd180] = 32'b11110000111000011111101010001000;

      table[32'd181] = 32'b11110000111011001000001010101111;

      table[32'd182] = 32'b11110000111101111000010010010101;

      table[32'd183] = 32'b11110001000000110000010101011101;

      table[32'd184] = 32'b11110001000011110000101001010100;

      table[32'd185] = 32'b11110001000110111001100011111000;

      table[32'd186] = 32'b11110001001010001011011011110111;

      table[32'd187] = 32'b11110001001101100110101000101110;

      table[32'd188] = 32'b11110001010001001011100010101100;

      table[32'd189] = 32'b11110001010100111010100010110001;

      table[32'd190] = 32'b11110001011000110100000010101100;

      table[32'd191] = 32'b11110001011100111000011101000010;

      table[32'd192] = 32'b11110001100001001000001101000100;

      table[32'd193] = 32'b11110001100101100011101110111000;

      table[32'd194] = 32'b11110001101010001011011111010011;

      table[32'd195] = 32'b11110001101110111111111011111010;

      table[32'd196] = 32'b11110001110100000001100011000000;

      table[32'd197] = 32'b11110001111001010000110011100110;

      table[32'd198] = 32'b11110001111110101110001101011001;

      table[32'd199] = 32'b11110010000100011010010000110010;

      table[32'd200] = 32'b11110010001010010101011110101110;

      table[32'd201] = 32'b11110010010000100000011000110011;

      table[32'd202] = 32'b11110010010110111011100001001000;

      table[32'd203] = 32'b11110010011101100111011010010011;

      table[32'd204] = 32'b11110010100100100100100111010100;

      table[32'd205] = 32'b11110010101011110011101011100101;

      table[32'd206] = 32'b11110010110011010101001010101111;

      table[32'd207] = 32'b11110010111011001001101000101010;

      table[32'd208] = 32'b11110011000011010001101001010011;

      table[32'd209] = 32'b11110011001011101101110000101001;

      table[32'd210] = 32'b11110011010100011110100010100100;

      table[32'd211] = 32'b11110011011101100100100010101111;

      table[32'd212] = 32'b11110011100111000000010100011101;

      table[32'd213] = 32'b11110011110000110010011010100011;

      table[32'd214] = 32'b11110011111010111011010111001101;

      table[32'd215] = 32'b11110100000101011011101011110110;

      table[32'd216] = 32'b11110100010000010011111000111001;

      table[32'd217] = 32'b11110100011011100100011101101100;

      table[32'd218] = 32'b11110100100111001101111000001111;

      table[32'd219] = 32'b11110100110011010000100101000000;

      table[32'd220] = 32'b11110100111111101100111110110011;

      table[32'd221] = 32'b11110101001100100011011110011111;

      table[32'd222] = 32'b11110101011001110100011010110010;

      table[32'd223] = 32'b11110101100111100000001000000110;

      table[32'd224] = 32'b11110101110101100110111000001110;

      table[32'd225] = 32'b11110110000100001000111010001010;

      table[32'd226] = 32'b11110110010011000110011001111000;

      table[32'd227] = 32'b11110110100010011111100000000111;

      table[32'd228] = 32'b11110110110010010100010010000101;

      table[32'd229] = 32'b11110111000010100100110001010101;

      table[32'd230] = 32'b11110111010011010000111011011110;

      table[32'd231] = 32'b11110111100100011000101010000000;

      table[32'd232] = 32'b11110111110101111011110010000111;

      table[32'd233] = 32'b11111000000111111010000100011111;

      table[32'd234] = 32'b11111000011010010011001101001001;

      table[32'd235] = 32'b11111000101101000110110011010101;

      table[32'd236] = 32'b11111001000000010100011001010110;

      table[32'd237] = 32'b11111001010011111011011100011100;

      table[32'd238] = 32'b11111001100111111011010100110010;

      table[32'd239] = 32'b11111001111100010011010101011001;

      table[32'd240] = 32'b11111010010001000010101100001001;

      table[32'd241] = 32'b11111010100110001000100001101101;

      table[32'd242] = 32'b11111010111011100011111001101100;

      table[32'd243] = 32'b11111011010001010011110010101100;

      table[32'd244] = 32'b11111011100111010111000110011001;

      table[32'd245] = 32'b11111011111101101100101001101110;

      table[32'd246] = 32'b11111100010100010011001101000111;

      table[32'd247] = 32'b11111100101011001001011100100110;

      table[32'd248] = 32'b11111101000010001110000000001110;

      table[32'd249] = 32'b11111101011001011111011100010000;

      table[32'd250] = 32'b11111101110000111100010001100000;

      table[32'd251] = 32'b11111110001000100010111101101110;

      table[32'd252] = 32'b11111110100000010001111011111110;

      table[32'd253] = 32'b11111110111000000111100101000011;

      table[32'd254] = 32'b11111111010000000010001111111000;

      table[32'd255] = 32'b11111111101000000000010010000000;

   end

endmodule