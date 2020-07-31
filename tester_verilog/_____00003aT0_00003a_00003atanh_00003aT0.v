`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh_00003aT0( z__value, a ); 
   input signed[31:0] z__value;
   output signed[31:0] a;
   wire signed[31:0] base;
   wire signed[31:0] next__data;
   wire [7:0] addr;
   wire [23:0] remaining;
   wire signed[31:0] _00005e_00006010;
   wire [7:0] _00005e_00006011;
   wire [23:0] _00005e_00006012;
   wire [7:0] _00005e_00006013;
   wire signed[31:0] _00005e_00006014;
   wire signed[31:0] _00005e_00006015;
   wire [23:0] _00005e_00006016;
   wire signed[31:0] _00005e_00006017;
   wire signed[31:0] _00005e_00006018;
   wire signed[31:0] _00005e_00006019;
   wire signed[31:0] _00005e_00006020;
   wire signed[31:0] _00005e_00006021;

   _____00003aT0_00003a_00003atanh_00003aT0_00003a_00003amy__translator_00003aT0 my__translator(.z__value(_00005e_00006010),.addr(_00005e_00006011),.remaining(_00005e_00006012));
   _____00003aT0_00003a_00003atanh_00003aT0_00003a_00003amy__table_00003aT0 my__table(.addr(_00005e_00006013),.base(_00005e_00006014),.next__data(_00005e_00006015));
   _____00003aT0_00003a_00003atanh_00003aT0_00003a_00003amy__calculator_00003aT0 my__calculator(.remaining(_00005e_00006016),.z__value(_00005e_00006017),.base(_00005e_00006018),.next__data(_00005e_00006019),.addr(_00005e_00006020),.estimated__value(_00005e_00006021));
   assign _00005e_00006010 = z__value;

   assign addr = _00005e_00006011;

   assign remaining = _00005e_00006012;

   assign _00005e_00006013 = addr;

   assign base = _00005e_00006014;

   assign next__data = _00005e_00006015;

   assign _00005e_00006016 = remaining;

   assign _00005e_00006017 = z__value;

   assign _00005e_00006018 = base;

   assign _00005e_00006019 = next__data;

   assign _00005e_00006020 = (addr << 32'd24);

   assign a = _00005e_00006021;

endmodule