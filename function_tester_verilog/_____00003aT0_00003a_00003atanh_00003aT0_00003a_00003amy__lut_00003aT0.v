`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh_00003aT0_00003a_00003amy__lut_00003aT0( address, base, next__data ); 
   input [5:0] address;
   output signed[7:0] base;
   output reg signed[7:0] next__data;
   wire signed[7:0] lut  :0[0:63];

   assign base = lut[address];

   always @( * ) begin

      if ((address == 32'd63)) begin
         next__data <= lut[32'd0];
      end
      else begin
         if ((address == {1'b0,{1'b1,1'b1,1'b1,1'b1,1'b1}})) begin
            next__data <= lut[address];
         end
         else begin
            next__data <= lut[(address + 32'd1)];
         end
      end

   end

   initial begin

      lut[32'd0] = $signed(32'd0);

      lut[32'd1] = $signed(32'd3);

      lut[32'd2] = $signed(32'd7);

      lut[32'd3] = $signed(32'd10);

      lut[32'd4] = $signed(32'd12);

      lut[32'd5] = $signed(32'd13);

      lut[32'd6] = $signed(32'd14);

      lut[32'd7] = $signed(32'd15);

      lut[32'd8] = $signed(32'd15);

      lut[32'd9] = $signed(32'd15);

      lut[32'd10] = $signed(32'd15);

      lut[32'd11] = $signed(32'd15);

      lut[32'd12] = $signed(32'd15);

      lut[32'd13] = $signed(32'd15);

      lut[32'd14] = $signed(32'd15);

      lut[32'd15] = $signed(32'd15);

      lut[32'd16] = $signed(32'd15);

      lut[32'd17] = $signed(32'd15);

      lut[32'd18] = $signed(32'd15);

      lut[32'd19] = $signed(32'd15);

      lut[32'd20] = $signed(32'd15);

      lut[32'd21] = $signed(32'd15);

      lut[32'd22] = $signed(32'd15);

      lut[32'd23] = $signed(32'd15);

      lut[32'd24] = $signed(32'd15);

      lut[32'd25] = $signed(32'd15);

      lut[32'd26] = $signed(32'd15);

      lut[32'd27] = $signed(32'd15);

      lut[32'd28] = $signed(32'd15);

      lut[32'd29] = $signed(32'd15);

      lut[32'd30] = $signed(32'd15);

      lut[32'd31] = $signed(32'd15);

      lut[32'd32] = $signed(-32'd15);

      lut[32'd33] = $signed(-32'd15);

      lut[32'd34] = $signed(-32'd15);

      lut[32'd35] = $signed(-32'd15);

      lut[32'd36] = $signed(-32'd15);

      lut[32'd37] = $signed(-32'd15);

      lut[32'd38] = $signed(-32'd15);

      lut[32'd39] = $signed(-32'd15);

      lut[32'd40] = $signed(-32'd15);

      lut[32'd41] = $signed(-32'd15);

      lut[32'd42] = $signed(-32'd15);

      lut[32'd43] = $signed(-32'd15);

      lut[32'd44] = $signed(-32'd15);

      lut[32'd45] = $signed(-32'd15);

      lut[32'd46] = $signed(-32'd15);

      lut[32'd47] = $signed(-32'd15);

      lut[32'd48] = $signed(-32'd15);

      lut[32'd49] = $signed(-32'd15);

      lut[32'd50] = $signed(-32'd15);

      lut[32'd51] = $signed(-32'd15);

      lut[32'd52] = $signed(-32'd15);

      lut[32'd53] = $signed(-32'd15);

      lut[32'd54] = $signed(-32'd15);

      lut[32'd55] = $signed(-32'd15);

      lut[32'd56] = $signed(-32'd15);

      lut[32'd57] = $signed(-32'd15);

      lut[32'd58] = $signed(-32'd14);

      lut[32'd59] = $signed(-32'd13);

      lut[32'd60] = $signed(-32'd12);

      lut[32'd61] = $signed(-32'd10);

      lut[32'd62] = $signed(-32'd7);

      lut[32'd63] = $signed(-32'd3);

   end

endmodule