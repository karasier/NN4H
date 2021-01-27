`timescale 1ps/1ps

module _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0_00003a_00003alayer1_00003aT20_00003a_00003afunc3_00003aT20_00003a_00003amy__lut_00003aT340( address, base, next__data ); 
   input [3:0] address;
   output signed[7:0] base;
   output reg signed[7:0] next__data;
   wire signed[7:0] lut  :0[0:15];

   assign base = lut[address];

   always @( * ) begin

      if ((address == 32'd15)) begin
         next__data <= lut[32'd0];
      end
      else begin
         if ((address == {1'b0,{1'b1,1'b1,1'b1}})) begin
            next__data <= lut[address];
         end
         else begin
            next__data <= lut[(address + 32'd1)];
         end
      end

   end

   initial begin

      lut[32'd0] = $signed(32'd0);

      lut[32'd1] = $signed(32'd16);

      lut[32'd2] = $signed(32'd32);

      lut[32'd3] = $signed(32'd48);

      lut[32'd4] = $signed(32'd64);

      lut[32'd5] = $signed(32'd80);

      lut[32'd6] = $signed(32'd96);

      lut[32'd7] = $signed(32'd112);

      lut[32'd8] = $signed(-32'd128);

      lut[32'd9] = $signed(-32'd112);

      lut[32'd10] = $signed(-32'd96);

      lut[32'd11] = $signed(-32'd80);

      lut[32'd12] = $signed(-32'd64);

      lut[32'd13] = $signed(-32'd48);

      lut[32'd14] = $signed(-32'd32);

      lut[32'd15] = $signed(-32'd16);

   end

endmodule