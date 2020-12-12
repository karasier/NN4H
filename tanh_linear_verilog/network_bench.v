`timescale 1ps/1ps

module _____00003aT0( ); 
   reg clk;
   reg rst;
   reg req;
   reg fill;
   wire ack__fill;
   wire ack__network;
   wire _00005e_0000600;
   wire _00005e_0000601;
   wire _00005e_0000602;
   wire _00005e_0000603;
   wire _00005e_0000604;
   wire _00005e_0000605;

   _____00003aT0_00003a_00003ann__simulator_00003aT0 nn__simulator(.clk(_00005e_0000600),.rst(_00005e_0000601),.req(_00005e_0000602),.fill(_00005e_0000603),.ack__fill(_00005e_0000604),.ack__network(_00005e_0000605));
   assign _00005e_0000600 = clk;

   assign _00005e_0000601 = rst;

   assign _00005e_0000602 = req;

   assign _00005e_0000603 = fill;

   assign ack__fill = _00005e_0000604;

   assign ack__network = _00005e_0000605;

   initial begin

      clk = 32'd0;

      rst = 32'd0;

      req = 32'd0;

      fill = 32'd0;

      #10

      rst = 32'd1;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      rst = 32'd0;

      fill = 32'd1;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      fill = 32'd0;

      clk = 32'd1;

      #10

      clk = 32'd0;

      req = 32'd1;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

   end

endmodule