`timescale 1ps/1ps

module _____00003aT0( ); 
   reg ack;
   reg rst;
   wire ack__mac;
   wire _00005e_0000600;
   wire _00005e_0000601;
   wire _00005e_0000602;

   _____00003aT0_00003a_00003amy__cnt_00003aT0 my__cnt(.ack(_00005e_0000600),.rst(_00005e_0000601),.ack__mac(_00005e_0000602));
   assign _00005e_0000600 = ack;

   assign _00005e_0000601 = rst;

   assign ack__mac = _00005e_0000602;

   initial begin

      rst = 32'd0;

      ack = 32'd0;

      #5

      rst = 32'd1;

      #5

      ack = 32'd1;

      #5

      ack = 32'd0;

      #5

      ack = 32'd1;

      #5

      ack = 32'd0;

      #5

      ack = 32'd1;

      #5

      ack = 32'd0;

      #5

      ack = 32'd1;

      #5

      ack = 32'd0;

      #5

      ack = 32'd1;

      #5

      ack = 32'd0;

      #5

      ack = 32'd1;

      #5

      ack = 32'd0;

      #5

      ack = 32'd1;

      #5

      ack = 32'd0;

      #5

      ack = 32'd1;

      #5

      ack = 32'd0;

      #5

      ack = 32'd1;

      #5

      ack = 32'd0;

      #5

      ack = 32'd1;

      #5

      ack = 32'd0;

      #5

      $finish;
   end

   initial begin
      $dumpfile("mac.vcd");
      $dumpvars(0, _____00003aT0);
   end

endmodule