#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_52937200;

Block __52366240;

Block __52366020;

Block __52365380;

void code__52365380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53228540(),_5818_42218680___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__52365380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52365380 = block;
   block->owner = (Object)__52366020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52365380;

   return block;
};

void code__52366020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49171700___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53228640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52365380();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53228460(),_5817_42219840___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__52366020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52366020 = block;
   block->owner = (Object)__52366240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52366020;

   return block;
};

Block __52363880;

Block __52363300;

Block __52411860;

void code__52411860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _5818_42218680___48385240______58_840_52937200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53227740();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_42218680___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53227560(),_5817_42219840___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_48350580___48385240______58_840_52937200->c_value,_5819_44106140___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__52411860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52411860 = block;
   block->owner = (Object)__52363300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52411860;

   return block;
};

void code__52363300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49171700___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53228020();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52411860();
   }
      }
   }
}

Block make__52363300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52363300 = block;
   block->owner = (Object)__52363880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52363300;

   return block;
};

void code__52363880() {
 code__52363300();
}

Block make__52363880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52363880 = block;
   block->owner = (Object)__52366240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52363880;

   return block;
};

void code__52366240() {
 code__52366020();
   {
      Value cond = fill_49171620___48385240______58_840_52937200->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52363880();
   }
      }
   }
}

Block make__52366240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52366240 = block;
   block->owner = (Object)__52879220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52366240;

   return block;
};

Block __52878940;

void code__52878940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53227320(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53227240(),rst_49171700___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53227140(),req_49171680___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53227080(),fill_49171620___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53227020(),rst_49171700___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53226960(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53226880(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53226800(),rst_49171700___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53226740(),fill_49171620___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53226640(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53226500(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53226400(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53226300(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53226140(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53226080(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53225940(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53225780(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53225660(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53225540(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53225480(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53225280(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53225120(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53224900(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53224820(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53224720(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53224660(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53224600(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53224520(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53224440(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53224380(),fill_49171620___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53224320(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53224200(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53224140(),req_49171680___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53224080(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53224020(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53223940(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53223840(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53223740(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53223600(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53223520(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53280680(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53280560(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53280460(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53280300(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53280200(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53280080(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53279800(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53279720(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53279620(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53279440(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53279360(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53279240(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53279080(),clk_49171720___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__52937500);
}

Block make__52878940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52878940 = block;
   block->owner = (Object)__52937500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52878940;

   return block;
};

Block __53004100;

void code__53004100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53278980(),val_48350580___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53004100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53004100 = block;
   block->owner = (Object)__53003960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53004100;

   return block;
};

Block __53009880;

void code__53009880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49171720___48385240______58_840_52937200->c_value,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49171700___48385240______58_840_52937200->c_value,rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_49171680___48385240______58_840_52937200->c_value,req_52135020_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49171620___48385240______58_840_52937200->c_value,fill_52135000_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53009880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53009880 = block;
   block->owner = (Object)__53003760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53009880;

   return block;
};

Block __53009760;

void code__53009760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_52134940_layer0_58_840_52138560___48385240______58_840_52937200->c_value,ack__0_49171660___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53009760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53009760 = block;
   block->owner = (Object)__53003460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53009760;

   return block;
};

Block __49124360;

Block __44020480;

void code__44020480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48774060___48384940___48385240______58_840_52937200->c_value,make_ref_rangeS(mem_48819920___48384940___48385240______58_840_52937200,value2integer(abus__w_48773900___48384940___48385240______58_840_52937200->c_value),value2integer(abus__w_48773900___48384940___48385240______58_840_52937200->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__44020480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44020480 = block;
   block->owner = (Object)__49124360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44020480;

   return block;
};

void code__49124360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48819920___48384940___48385240______58_840_52937200->c_value;
            idx = value2integer(abus__r_48773980___48384940___48385240______58_840_52937200->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48482860___48384940___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48437300___48384940___48385240______58_840_52937200->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__44020480();
   }
      }
   }
}

Block make__49124360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49124360 = block;
   block->owner = (Object)__47975500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49124360;

   return block;
};

Block __53026720;

void code__53026720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48482860___48384940___48385240______58_840_52937200->c_value,_5815_42221240___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53026720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53026720 = block;
   block->owner = (Object)__53026440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53026720;

   return block;
};

Block __53026340;

void code__53026340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_42221240___48385240______58_840_52937200->c_value,dbus__r_48482860___48384940___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53026340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53026340 = block;
   block->owner = (Object)__53026140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53026340;

   return block;
};

Block __53025740;

void code__53025740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48437320___48384940___48385240______58_840_52937200->c_value,_5813_42221180___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53025740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53025740 = block;
   block->owner = (Object)__53025420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53025740;

   return block;
};

Block __53025340;

void code__53025340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_42221180___48385240______58_840_52937200->c_value,trig__r_48437320___48384940___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53025340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53025340 = block;
   block->owner = (Object)__53025160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53025340;

   return block;
};

Block __53024620;

void code__53024620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48773980___48384940___48385240______58_840_52937200->c_value,_5814_42219880___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53024620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53024620 = block;
   block->owner = (Object)__53024180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53024620;

   return block;
};

Block __53024120;

void code__53024120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_42219880___48385240______58_840_52937200->c_value,abus__r_48773980___48384940___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53024120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53024120 = block;
   block->owner = (Object)__53023860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53024120;

   return block;
};

Block __53023380;

void code__53023380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48437300___48384940___48385240______58_840_52937200->c_value,_5817_42219840___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53023380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53023380 = block;
   block->owner = (Object)__53023020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53023380;

   return block;
};

Block __53022960;

void code__53022960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_42219840___48385240______58_840_52937200->c_value,trig__w_48437300___48384940___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53022960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53022960 = block;
   block->owner = (Object)__53022740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53022960;

   return block;
};

Block __53022080;

void code__53022080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48773900___48384940___48385240______58_840_52937200->c_value,_5818_42218680___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53022080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53022080 = block;
   block->owner = (Object)__53021920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53022080;

   return block;
};

Block __53021860;

void code__53021860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_42218680___48385240______58_840_52937200->c_value,abus__w_48773900___48384940___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53021860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53021860 = block;
   block->owner = (Object)__53021600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53021860;

   return block;
};

Block __53020520;

void code__53020520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48774060___48384940___48385240______58_840_52937200->c_value,_5819_44106140___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53020520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53020520 = block;
   block->owner = (Object)__53020300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53020520;

   return block;
};

Block __53020220;

void code__53020220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_44106140___48385240______58_840_52937200->c_value,dbus__w_48774060___48384940___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53020220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53020220 = block;
   block->owner = (Object)__53020000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53020220;

   return block;
};

Block __53074680;

void code__53074680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48336580___47975380___48385240______58_840_52937200->c_value,_5832_46360980___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53074680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53074680 = block;
   block->owner = (Object)__53074400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53074680;

   return block;
};

Block __53074360;

void code__53074360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_46360980___48385240______58_840_52937200->c_value,reg__0_48336580___47975380___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53074360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53074360 = block;
   block->owner = (Object)__53074200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53074360;

   return block;
};

Block __53073820;

void code__53073820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48450120___47975380___48385240______58_840_52937200->c_value,_5833_47690040___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53073820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53073820 = block;
   block->owner = (Object)__53073540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53073820;

   return block;
};

Block __53073400;

void code__53073400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_47690040___48385240______58_840_52937200->c_value,reg__1_48450120___47975380___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53073400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53073400 = block;
   block->owner = (Object)__53072980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53073400;

   return block;
};

Block __53070520;

void code__53070520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49004720___48941940___48385240______58_840_52937200->c_value,_5862_48690340___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53070520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53070520 = block;
   block->owner = (Object)__53070260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53070520;

   return block;
};

Block __53070180;

void code__53070180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_48690340___48385240______58_840_52937200->c_value,reg__0_49004720___48941940___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53070180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53070180 = block;
   block->owner = (Object)__53070000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53070180;

   return block;
};

Value make__53228640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53228540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53228460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53228020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53227740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53227560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53227320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53227240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53227140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53227080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53227020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53226960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53226880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53226800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53226740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53226640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53226500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53226400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53226300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53226140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53226080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53225940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53225780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53225660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53225540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53225480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53225280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53225120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53224900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53224820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53224720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53224660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53224600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53224520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53224440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53224380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53224320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53224200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53224140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53224080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53224020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53223940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53223840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53223740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53223600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53223520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53280680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53280560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53280460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53280300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53280200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53280080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53279800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53279720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53279620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53279440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53279360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53279240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53279080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53278980() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Scope __48385240;

SignalI clk_49171720___48385240______58_840_52937200;

SignalI makeclk_49171720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49171720___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = "clk";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI rst_49171700___48385240______58_840_52937200;

SignalI makerst_49171700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49171700___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = "rst";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI req_49171680___48385240______58_840_52937200;

SignalI makereq_49171680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49171680___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = "req";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__0_49171660___48385240______58_840_52937200;

SignalI makeack__0_49171660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49171660___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = "ack_0";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__1_49171640___48385240______58_840_52937200;

SignalI makeack__1_49171640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49171640___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = "ack_1";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI fill_49171620___48385240______58_840_52937200;

SignalI makefill_49171620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49171620___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = "fill";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5815_42221240___48385240______58_840_52937200;

SignalI make_5815_42221240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_42221240___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = ":15";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5813_42221180___48385240______58_840_52937200;

SignalI make_5813_42221180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_42221180___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = ":13";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5814_42219880___48385240______58_840_52937200;

SignalI make_5814_42219880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_42219880___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = ":14";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5817_42219840___48385240______58_840_52937200;

SignalI make_5817_42219840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_42219840___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = ":17";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5818_42218680___48385240______58_840_52937200;

SignalI make_5818_42218680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_42218680___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = ":18";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5819_44106140___48385240______58_840_52937200;

SignalI make_5819_44106140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_44106140___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = ":19";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5832_46360980___48385240______58_840_52937200;

SignalI make_5832_46360980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_46360980___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = ":32";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5833_47690040___48385240______58_840_52937200;

SignalI make_5833_47690040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_47690040___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = ":33";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5862_48690340___48385240______58_840_52937200;

SignalI make_5862_48690340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_48690340___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = ":62";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI val_48350580___48385240______58_840_52937200;

SignalI makeval_48350580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   val_48350580___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48385240;
   signalI->name = "val";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SystemI layer0_52134700;

SystemI makelayer0_52134700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_52134700 = systemI;
   systemI->owner = (Object)__48385240;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_52138560;

   return systemI;
};

Scope __48384940;

SignalI trig__r_48437320___48384940___48385240______58_840_52937200;

SignalI maketrig__r_48437320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48437320___48384940___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48384940;
   signalI->name = "trig_r";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI trig__w_48437300___48384940___48385240______58_840_52937200;

SignalI maketrig__w_48437300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48437300___48384940___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48384940;
   signalI->name = "trig_w";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI dbus__r_48482860___48384940___48385240______58_840_52937200;

SignalI makedbus__r_48482860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48482860___48384940___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48384940;
   signalI->name = "dbus_r";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI dbus__w_48774060___48384940___48385240______58_840_52937200;

SignalI makedbus__w_48774060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48774060___48384940___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48384940;
   signalI->name = "dbus_w";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI abus__r_48773980___48384940___48385240______58_840_52937200;

SignalI makeabus__r_48773980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48773980___48384940___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48384940;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI abus__w_48773900___48384940___48385240______58_840_52937200;

SignalI makeabus__w_48773900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48773900___48384940___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48384940;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI mem_48819920___48384940___48385240______58_840_52937200;

SignalI makemem_48819920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48819920___48384940___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48384940;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope __48384640;

Scope make__48384640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48384640 = scope;
   scope->owner = (Object)__48384940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48383460;

Scope make__48383460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48383460 = scope;
   scope->owner = (Object)__48384940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48439020;

Scope make__48439020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48439020 = scope;
   scope->owner = (Object)__48384940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48438600;

Scope make__48438600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48438600 = scope;
   scope->owner = (Object)__48384940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48438180;

Scope make__48438180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48438180 = scope;
   scope->owner = (Object)__48384940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48437760;

Scope make__48437760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48437760 = scope;
   scope->owner = (Object)__48384940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47975500;

Behavior make__47975500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47975500 = behavior;
   behavior->owner = (Object)__48384940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49171720___48385240______58_840_52937200);
   clk_49171720___48385240______58_840_52937200->num_neg += 1;
   clk_49171720___48385240______58_840_52937200->neg = realloc(clk_49171720___48385240______58_840_52937200->neg,clk_49171720___48385240______58_840_52937200->num_neg*sizeof(Object));
clk_49171720___48385240______58_840_52937200->neg[clk_49171720___48385240______58_840_52937200->num_neg-1] = (Object)behavior;
   behavior->block = make__49124360();

   return behavior;
}

Behavior __53026440;

Behavior make__53026440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53026440 = behavior;
   behavior->owner = (Object)__48384940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48482860___48384940___48385240______58_840_52937200);
   dbus__r_48482860___48384940___48385240______58_840_52937200->num_any += 1;
   dbus__r_48482860___48384940___48385240______58_840_52937200->any = realloc(dbus__r_48482860___48384940___48385240______58_840_52937200->any,dbus__r_48482860___48384940___48385240______58_840_52937200->num_any*sizeof(Object));
dbus__r_48482860___48384940___48385240______58_840_52937200->any[dbus__r_48482860___48384940___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53026720();

   return behavior;
}

Behavior __53026140;

Behavior make__53026140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53026140 = behavior;
   behavior->owner = (Object)__48384940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5815_42221240___48385240______58_840_52937200);
   _5815_42221240___48385240______58_840_52937200->num_any += 1;
   _5815_42221240___48385240______58_840_52937200->any = realloc(_5815_42221240___48385240______58_840_52937200->any,_5815_42221240___48385240______58_840_52937200->num_any*sizeof(Object));
_5815_42221240___48385240______58_840_52937200->any[_5815_42221240___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53026340();

   return behavior;
}

Behavior __53025420;

Behavior make__53025420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53025420 = behavior;
   behavior->owner = (Object)__48384940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48437320___48384940___48385240______58_840_52937200);
   trig__r_48437320___48384940___48385240______58_840_52937200->num_any += 1;
   trig__r_48437320___48384940___48385240______58_840_52937200->any = realloc(trig__r_48437320___48384940___48385240______58_840_52937200->any,trig__r_48437320___48384940___48385240______58_840_52937200->num_any*sizeof(Object));
trig__r_48437320___48384940___48385240______58_840_52937200->any[trig__r_48437320___48384940___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53025740();

   return behavior;
}

Behavior __53025160;

Behavior make__53025160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53025160 = behavior;
   behavior->owner = (Object)__48384940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_42221180___48385240______58_840_52937200);
   _5813_42221180___48385240______58_840_52937200->num_any += 1;
   _5813_42221180___48385240______58_840_52937200->any = realloc(_5813_42221180___48385240______58_840_52937200->any,_5813_42221180___48385240______58_840_52937200->num_any*sizeof(Object));
_5813_42221180___48385240______58_840_52937200->any[_5813_42221180___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53025340();

   return behavior;
}

Behavior __53024180;

Behavior make__53024180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53024180 = behavior;
   behavior->owner = (Object)__48384940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48773980___48384940___48385240______58_840_52937200);
   abus__r_48773980___48384940___48385240______58_840_52937200->num_any += 1;
   abus__r_48773980___48384940___48385240______58_840_52937200->any = realloc(abus__r_48773980___48384940___48385240______58_840_52937200->any,abus__r_48773980___48384940___48385240______58_840_52937200->num_any*sizeof(Object));
abus__r_48773980___48384940___48385240______58_840_52937200->any[abus__r_48773980___48384940___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53024620();

   return behavior;
}

Behavior __53023860;

Behavior make__53023860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53023860 = behavior;
   behavior->owner = (Object)__48384940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_42219880___48385240______58_840_52937200);
   _5814_42219880___48385240______58_840_52937200->num_any += 1;
   _5814_42219880___48385240______58_840_52937200->any = realloc(_5814_42219880___48385240______58_840_52937200->any,_5814_42219880___48385240______58_840_52937200->num_any*sizeof(Object));
_5814_42219880___48385240______58_840_52937200->any[_5814_42219880___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53024120();

   return behavior;
}

Behavior __53023020;

Behavior make__53023020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53023020 = behavior;
   behavior->owner = (Object)__48384940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48437300___48384940___48385240______58_840_52937200);
   trig__w_48437300___48384940___48385240______58_840_52937200->num_any += 1;
   trig__w_48437300___48384940___48385240______58_840_52937200->any = realloc(trig__w_48437300___48384940___48385240______58_840_52937200->any,trig__w_48437300___48384940___48385240______58_840_52937200->num_any*sizeof(Object));
trig__w_48437300___48384940___48385240______58_840_52937200->any[trig__w_48437300___48384940___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53023380();

   return behavior;
}

Behavior __53022740;

Behavior make__53022740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53022740 = behavior;
   behavior->owner = (Object)__48384940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_42219840___48385240______58_840_52937200);
   _5817_42219840___48385240______58_840_52937200->num_any += 1;
   _5817_42219840___48385240______58_840_52937200->any = realloc(_5817_42219840___48385240______58_840_52937200->any,_5817_42219840___48385240______58_840_52937200->num_any*sizeof(Object));
_5817_42219840___48385240______58_840_52937200->any[_5817_42219840___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53022960();

   return behavior;
}

Behavior __53021920;

Behavior make__53021920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53021920 = behavior;
   behavior->owner = (Object)__48384940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48773900___48384940___48385240______58_840_52937200);
   abus__w_48773900___48384940___48385240______58_840_52937200->num_any += 1;
   abus__w_48773900___48384940___48385240______58_840_52937200->any = realloc(abus__w_48773900___48384940___48385240______58_840_52937200->any,abus__w_48773900___48384940___48385240______58_840_52937200->num_any*sizeof(Object));
abus__w_48773900___48384940___48385240______58_840_52937200->any[abus__w_48773900___48384940___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53022080();

   return behavior;
}

Behavior __53021600;

Behavior make__53021600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53021600 = behavior;
   behavior->owner = (Object)__48384940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_42218680___48385240______58_840_52937200);
   _5818_42218680___48385240______58_840_52937200->num_any += 1;
   _5818_42218680___48385240______58_840_52937200->any = realloc(_5818_42218680___48385240______58_840_52937200->any,_5818_42218680___48385240______58_840_52937200->num_any*sizeof(Object));
_5818_42218680___48385240______58_840_52937200->any[_5818_42218680___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53021860();

   return behavior;
}

Behavior __53020300;

Behavior make__53020300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53020300 = behavior;
   behavior->owner = (Object)__48384940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48774060___48384940___48385240______58_840_52937200);
   dbus__w_48774060___48384940___48385240______58_840_52937200->num_any += 1;
   dbus__w_48774060___48384940___48385240______58_840_52937200->any = realloc(dbus__w_48774060___48384940___48385240______58_840_52937200->any,dbus__w_48774060___48384940___48385240______58_840_52937200->num_any*sizeof(Object));
dbus__w_48774060___48384940___48385240______58_840_52937200->any[dbus__w_48774060___48384940___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53020520();

   return behavior;
}

Behavior __53020000;

Behavior make__53020000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53020000 = behavior;
   behavior->owner = (Object)__48384940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_44106140___48385240______58_840_52937200);
   _5819_44106140___48385240______58_840_52937200->num_any += 1;
   _5819_44106140___48385240______58_840_52937200->any = realloc(_5819_44106140___48385240______58_840_52937200->any,_5819_44106140___48385240______58_840_52937200->num_any*sizeof(Object));
_5819_44106140___48385240______58_840_52937200->any[_5819_44106140___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53020220();

   return behavior;
}

Scope make__48384940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48384940 = scope;
   scope->owner = (Object)__48385240;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48437320();
   scope->inners[1] = maketrig__w_48437300();
   scope->inners[2] = makedbus__r_48482860();
   scope->inners[3] = makedbus__w_48774060();
   scope->inners[4] = makeabus__r_48773980();
   scope->inners[5] = makeabus__w_48773900();
   scope->inners[6] = makemem_48819920();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__48384640();
   scope->scopes[1] = make__48383460();
   scope->scopes[2] = make__48439020();
   scope->scopes[3] = make__48438600();
   scope->scopes[4] = make__48438180();
   scope->scopes[5] = make__48437760();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47975500();
   scope->behaviors[1] = make__53026440();
   scope->behaviors[2] = make__53026140();
   scope->behaviors[3] = make__53025420();
   scope->behaviors[4] = make__53025160();
   scope->behaviors[5] = make__53024180();
   scope->behaviors[6] = make__53023860();
   scope->behaviors[7] = make__53023020();
   scope->behaviors[8] = make__53022740();
   scope->behaviors[9] = make__53021920();
   scope->behaviors[10] = make__53021600();
   scope->behaviors[11] = make__53020300();
   scope->behaviors[12] = make__53020000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47975380;

SignalI reg__0_48336580___47975380___48385240______58_840_52937200;

SignalI makereg__0_48336580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48336580___47975380___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__47975380;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI reg__1_48450120___47975380___48385240______58_840_52937200;

SignalI makereg__1_48450120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_48450120___47975380___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__47975380;
   signalI->name = "reg_1";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope __47975060;

Scope make__47975060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47975060 = scope;
   scope->owner = (Object)__47975380;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47974520;

Scope make__47974520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47974520 = scope;
   scope->owner = (Object)__47975380;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47973980;

Scope make__47973980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47973980 = scope;
   scope->owner = (Object)__47975380;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47973160;

SignalI abus__r_47972680___47973160___47975380___48385240______58_840_52937200;

SignalI makeabus__r_47972680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47972680___47973160___47975380___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__47973160;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope make__47973160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47973160 = scope;
   scope->owner = (Object)__47975380;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47972680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47972560;

SignalI abus__w_48676540___47972560___47975380___48385240______58_840_52937200;

SignalI makeabus__w_48676540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48676540___47972560___47975380___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__47972560;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope make__47972560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47972560 = scope;
   scope->owner = (Object)__47975380;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48676540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48676420;

SignalI abus__r_48675700___48676420___47975380___48385240______58_840_52937200;

SignalI makeabus__r_48675700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48675700___48676420___47975380___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48676420;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope make__48676420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48676420 = scope;
   scope->owner = (Object)__47975380;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48675700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48675580;

SignalI abus__w_48675060___48675580___47975380___48385240______58_840_52937200;

SignalI makeabus__w_48675060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48675060___48675580___47975380___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48675580;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope make__48675580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48675580 = scope;
   scope->owner = (Object)__47975380;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48675060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53074400;

Behavior make__53074400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53074400 = behavior;
   behavior->owner = (Object)__47975380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48336580___47975380___48385240______58_840_52937200);
   reg__0_48336580___47975380___48385240______58_840_52937200->num_any += 1;
   reg__0_48336580___47975380___48385240______58_840_52937200->any = realloc(reg__0_48336580___47975380___48385240______58_840_52937200->any,reg__0_48336580___47975380___48385240______58_840_52937200->num_any*sizeof(Object));
reg__0_48336580___47975380___48385240______58_840_52937200->any[reg__0_48336580___47975380___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53074680();

   return behavior;
}

Behavior __53074200;

Behavior make__53074200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53074200 = behavior;
   behavior->owner = (Object)__47975380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_46360980___48385240______58_840_52937200);
   _5832_46360980___48385240______58_840_52937200->num_any += 1;
   _5832_46360980___48385240______58_840_52937200->any = realloc(_5832_46360980___48385240______58_840_52937200->any,_5832_46360980___48385240______58_840_52937200->num_any*sizeof(Object));
_5832_46360980___48385240______58_840_52937200->any[_5832_46360980___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53074360();

   return behavior;
}

Behavior __53073540;

Behavior make__53073540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53073540 = behavior;
   behavior->owner = (Object)__47975380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48450120___47975380___48385240______58_840_52937200);
   reg__1_48450120___47975380___48385240______58_840_52937200->num_any += 1;
   reg__1_48450120___47975380___48385240______58_840_52937200->any = realloc(reg__1_48450120___47975380___48385240______58_840_52937200->any,reg__1_48450120___47975380___48385240______58_840_52937200->num_any*sizeof(Object));
reg__1_48450120___47975380___48385240______58_840_52937200->any[reg__1_48450120___47975380___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53073820();

   return behavior;
}

Behavior __53072980;

Behavior make__53072980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53072980 = behavior;
   behavior->owner = (Object)__47975380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_47690040___48385240______58_840_52937200);
   _5833_47690040___48385240______58_840_52937200->num_any += 1;
   _5833_47690040___48385240______58_840_52937200->any = realloc(_5833_47690040___48385240______58_840_52937200->any,_5833_47690040___48385240______58_840_52937200->num_any*sizeof(Object));
_5833_47690040___48385240______58_840_52937200->any[_5833_47690040___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53073400();

   return behavior;
}

Scope make__47975380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47975380 = scope;
   scope->owner = (Object)__48385240;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48336580();
   scope->inners[1] = makereg__1_48450120();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__47975060();
   scope->scopes[1] = make__47974520();
   scope->scopes[2] = make__47973980();
   scope->scopes[3] = make__47973160();
   scope->scopes[4] = make__47972560();
   scope->scopes[5] = make__48676420();
   scope->scopes[6] = make__48675580();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53074400();
   scope->behaviors[1] = make__53074200();
   scope->behaviors[2] = make__53073540();
   scope->behaviors[3] = make__53072980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48941940;

SignalI reg__0_49004720___48941940___48385240______58_840_52937200;

SignalI makereg__0_49004720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49004720___48941940___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48941940;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope __48941640;

Scope make__48941640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48941640 = scope;
   scope->owner = (Object)__48941940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48941220;

Scope make__48941220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48941220 = scope;
   scope->owner = (Object)__48941940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48940800;

Scope make__48940800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48940800 = scope;
   scope->owner = (Object)__48941940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48940280;

SignalI abus__r_48939900___48940280___48941940___48385240______58_840_52937200;

SignalI makeabus__r_48939900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48939900___48940280___48941940___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48940280;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope make__48940280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48940280 = scope;
   scope->owner = (Object)__48941940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48939900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48939780;

SignalI abus__w_48939400___48939780___48941940___48385240______58_840_52937200;

SignalI makeabus__w_48939400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48939400___48939780___48941940___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48939780;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope make__48939780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48939780 = scope;
   scope->owner = (Object)__48941940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48939400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48939280;

SignalI abus__r_48963440___48939280___48941940___48385240______58_840_52937200;

SignalI makeabus__r_48963440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48963440___48939280___48941940___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48939280;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope make__48939280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48939280 = scope;
   scope->owner = (Object)__48941940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48963440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48963320;

SignalI abus__w_48962880___48963320___48941940___48385240______58_840_52937200;

SignalI makeabus__w_48962880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48962880___48963320___48941940___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48963320;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope make__48963320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48963320 = scope;
   scope->owner = (Object)__48941940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48962880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53070260;

Behavior make__53070260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53070260 = behavior;
   behavior->owner = (Object)__48941940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49004720___48941940___48385240______58_840_52937200);
   reg__0_49004720___48941940___48385240______58_840_52937200->num_any += 1;
   reg__0_49004720___48941940___48385240______58_840_52937200->any = realloc(reg__0_49004720___48941940___48385240______58_840_52937200->any,reg__0_49004720___48941940___48385240______58_840_52937200->num_any*sizeof(Object));
reg__0_49004720___48941940___48385240______58_840_52937200->any[reg__0_49004720___48941940___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53070520();

   return behavior;
}

Behavior __53070000;

Behavior make__53070000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53070000 = behavior;
   behavior->owner = (Object)__48941940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_48690340___48385240______58_840_52937200);
   _5862_48690340___48385240______58_840_52937200->num_any += 1;
   _5862_48690340___48385240______58_840_52937200->any = realloc(_5862_48690340___48385240______58_840_52937200->any,_5862_48690340___48385240______58_840_52937200->num_any*sizeof(Object));
_5862_48690340___48385240______58_840_52937200->any[_5862_48690340___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53070180();

   return behavior;
}

Scope make__48941940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48941940 = scope;
   scope->owner = (Object)__48385240;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49004720();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__48941640();
   scope->scopes[1] = make__48941220();
   scope->scopes[2] = make__48940800();
   scope->scopes[3] = make__48940280();
   scope->scopes[4] = make__48939780();
   scope->scopes[5] = make__48939280();
   scope->scopes[6] = make__48963320();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53070260();
   scope->behaviors[1] = make__53070000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52879220;

Behavior make__52879220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52879220 = behavior;
   behavior->owner = (Object)__48385240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49171720___48385240______58_840_52937200);
   clk_49171720___48385240______58_840_52937200->num_pos += 1;
   clk_49171720___48385240______58_840_52937200->pos = realloc(clk_49171720___48385240______58_840_52937200->pos,clk_49171720___48385240______58_840_52937200->num_pos*sizeof(Object));
clk_49171720___48385240______58_840_52937200->pos[clk_49171720___48385240______58_840_52937200->num_pos-1] = (Object)behavior;
   behavior->block = make__52366240();

   return behavior;
}

Behavior __52937500;

Behavior make__52937500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52937500 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__48385240;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__52878940();

   return behavior;
}

Behavior __53003960;

Behavior make__53003960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53003960 = behavior;
   behavior->owner = (Object)__48385240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__53004100();

   return behavior;
}

Behavior __53003760;

Behavior make__53003760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53003760 = behavior;
   behavior->owner = (Object)__48385240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49171720___48385240______58_840_52937200);
   clk_49171720___48385240______58_840_52937200->num_any += 1;
   clk_49171720___48385240______58_840_52937200->any = realloc(clk_49171720___48385240______58_840_52937200->any,clk_49171720___48385240______58_840_52937200->num_any*sizeof(Object));
clk_49171720___48385240______58_840_52937200->any[clk_49171720___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_49171700___48385240______58_840_52937200);
   rst_49171700___48385240______58_840_52937200->num_any += 1;
   rst_49171700___48385240______58_840_52937200->any = realloc(rst_49171700___48385240______58_840_52937200->any,rst_49171700___48385240______58_840_52937200->num_any*sizeof(Object));
rst_49171700___48385240______58_840_52937200->any[rst_49171700___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_49171680___48385240______58_840_52937200);
   req_49171680___48385240______58_840_52937200->num_any += 1;
   req_49171680___48385240______58_840_52937200->any = realloc(req_49171680___48385240______58_840_52937200->any,req_49171680___48385240______58_840_52937200->num_any*sizeof(Object));
req_49171680___48385240______58_840_52937200->any[req_49171680___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,fill_49171620___48385240______58_840_52937200);
   fill_49171620___48385240______58_840_52937200->num_any += 1;
   fill_49171620___48385240______58_840_52937200->any = realloc(fill_49171620___48385240______58_840_52937200->any,fill_49171620___48385240______58_840_52937200->num_any*sizeof(Object));
fill_49171620___48385240______58_840_52937200->any[fill_49171620___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53009880();

   return behavior;
}

Behavior __53003460;

Behavior make__53003460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53003460 = behavior;
   behavior->owner = (Object)__48385240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_52134940_layer0_58_840_52138560___48385240______58_840_52937200);
   ack__0_52134940_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   ack__0_52134940_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(ack__0_52134940_layer0_58_840_52138560___48385240______58_840_52937200->any,ack__0_52134940_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
ack__0_52134940_layer0_58_840_52138560___48385240______58_840_52937200->any[ack__0_52134940_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53009760();

   return behavior;
}

Scope make__48385240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48385240 = scope;
   scope->owner = (Object)_____58_840_52937200;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_52134700();
   scope->num_inners = 16;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_49171720();
   scope->inners[1] = makerst_49171700();
   scope->inners[2] = makereq_49171680();
   scope->inners[3] = makeack__0_49171660();
   scope->inners[4] = makeack__1_49171640();
   scope->inners[5] = makefill_49171620();
   scope->inners[6] = make_5815_42221240();
   scope->inners[7] = make_5813_42221180();
   scope->inners[8] = make_5814_42219880();
   scope->inners[9] = make_5817_42219840();
   scope->inners[10] = make_5818_42218680();
   scope->inners[11] = make_5819_44106140();
   scope->inners[12] = make_5832_46360980();
   scope->inners[13] = make_5833_47690040();
   scope->inners[14] = make_5862_48690340();
   scope->inners[15] = makeval_48350580();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__48384940();
   scope->scopes[1] = make__47975380();
   scope->scopes[2] = make__48941940();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52879220();
   scope->behaviors[1] = make__52937500();
   scope->behaviors[2] = make__53003960();
   scope->behaviors[3] = make__53003760();
   scope->behaviors[4] = make__53003460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_52937200() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_52937200 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__48385240();

   return systemT;
}