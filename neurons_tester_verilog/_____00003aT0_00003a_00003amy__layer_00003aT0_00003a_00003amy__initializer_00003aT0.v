`timescale 1ps/1ps

module _____00003aT0_00003a_00003amy__layer_00003aT0_00003a_00003amy__initializer_00003aT0( clk,   input clk;
   input flag;
   wire val;

   assign val = 32'd1;

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a79 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a49 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a19 <= 32'd0;
      end

      if (flag) begin
         if ((rst == 32'd0)) begin
            case(_00003a19)
               32'd0: _00003a17 <= val;
               32'd1: _00003a18 <= val;
            endcase
            _00003a19 <= (_00003a19 + 32'd1);
         end
         if ((rst == 32'd0)) begin
            case(_00003a49)
               32'd0: _00003a47 <= val;
               32'd1: _00003a48 <= val;
            endcase
            _00003a49 <= (_00003a49 + 32'd1);
         end
         if ((rst == 32'd0)) begin
            case(_00003a79)
               32'd0: _00003a77 <= val;
               32'd1: _00003a78 <= val;
            endcase
            _00003a79 <= (_00003a79 + 32'd1);
         end
      end

   end

endmodule