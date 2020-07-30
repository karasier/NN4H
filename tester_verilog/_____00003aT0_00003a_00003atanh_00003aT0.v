`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh_00003aT0( z__value, a ); 
   input signed[31:0] z__value;
   output signed[31:0] a;
   wire signed[31:0] base;
   wire signed[31:0] next__data;
   wire [7:0] addr;
   wire [23:0] remaining;
   wire signed[31:0] _00005e_00006012;
   wire [7:0] _00005e_00006013;
   wire [23:0] _00005e_00006014;
   wire [7:0] _00005e_00006015;
   wire signed[31:0] _00005e_00006016;
   wire signed[31:0] _00005e_00006017;
   wire [23:0] _00005e_00006018;
   wire signed[31:0] _00005e_00006019;
   wire signed[31:0] _00005e_00006020;
   wire signed[31:0] _00005e_00006021;
   wire signed[31:0] _00005e_00006022;
   wire signed[31:0] _00005e_00006023;

   _____00003aT0_00003a_00003atanh_00003aT0_00003a_00003amy__translator_00003aT0 my__translator(.z__value(_00005e_00006012),.addr(_00005e_00006013),.remaining(_00005e_00006014));
   _____00003aT0_00003a_00003atanh_00003aT0_00003a_00003amy__table_00003aT0 my__table(.addr(_00005e_00006015),.base(_00005e_00006016),.next__data(_00005e_00006017));
   _____00003aT0_00003a_00003atanh_00003aT0_00003a_00003amy__calculator_00003aT0 my__calculator(.remaining(_00005e_00006018),.z__value(_00005e_00006019),.base(_00005e_00006020),.next__data(_00005e_00006021),.addr(_00005e_00006022),.estimated__value(_00005e_00006023));
   assign _00005e_00006012 = z__value;

   assign addr = _00005e_00006013;

   assign remaining = _00005e_00006014;

   assign _00005e_00006015 = addr;

   assign base = _00005e_00006016;

   assign next__data = _00005e_00006017;

   assign _00005e_00006018 = remaining;

   assign _00005e_00006019 = z__value;

   assign _00005e_00006020 = base;

   assign _00005e_00006021 = next__data;

   assign _00005e_00006022 = (addr << 32'd24);

   assign a = _00005e_00006023;

endmodule