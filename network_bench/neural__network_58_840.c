#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT neural__network_58_840_49798940;

SignalI clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeclk_49825240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)neural__network_58_840_49798940;
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

SignalI rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerst_49825220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)neural__network_58_840_49798940;
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

SignalI req_49825000_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereq_49825000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49825000_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)neural__network_58_840_49798940;
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

SignalI fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makefill_49824980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)neural__network_58_840_49798940;
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

SignalI ack__network_49824920_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__network_49824920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_49824920_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)neural__network_58_840_49798940;
   signalI->name = "ack_network";
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

Block __60824400;

Block __60824040;

void code__60824040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51690180(),ack__0_43435880_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51690120(),ack__1_43435340_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60824040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60824040 = block;
   block->owner = (Object)__60824400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60824040;

   return block;
};

void code__60824400() {
   {
      Value cond = rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60824040();
   }
      }
   }
}

Block make__60824400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60824400 = block;
   block->owner = (Object)__60823160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60824400;

   return block;
};

Block __60822940;

Block __60822780;

Block __60822440;

void code__60822440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51689780(),_5818_49245420_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60822440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60822440 = block;
   block->owner = (Object)__60822780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60822440;

   return block;
};

void code__60822780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51689940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60822440();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51689640(),_5817_49245520_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60822780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60822780 = block;
   block->owner = (Object)__60822940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60822780;

   return block;
};

Block __60820640;

void code__60820640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51689380(),address__inputs_43471700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51689300(),ack__inputs_43470700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60820640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60820640 = block;
   block->owner = (Object)__60822940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60820640;

   return block;
};

Block __60819420;

Block __60819200;

Block __60818880;

void code__60818880() {
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
                  src0 = _5818_49245420_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51688300();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_49245420_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51687980(),_5817_49245520_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = rom__inputs_49245540_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            idx = value2integer(address__inputs_43471700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_5819_49485080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60818880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60818880 = block;
   block->owner = (Object)__60819200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60818880;

   return block;
};

void code__60819200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51688960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60818880();
   }
      }
   }
}

Block make__60819200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60819200 = block;
   block->owner = (Object)__60819420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60819200;

   return block;
};

void code__60819420() {
 code__60819200();
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
                  src0 = address__inputs_43471700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51686180();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_43471700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60819420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60819420 = block;
   block->owner = (Object)__60822940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60819420;

   return block;
};

Block __49763240;

void code__49763240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51685260(),ack__inputs_43470700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49763240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49763240 = block;
   block->owner = (Object)__60822940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49763240;

   return block;
};

void code__60822940() {
 code__60822780();
   {
      Value cond = rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60820640();
   }
      }
   }
   {
      Value cond = fill__inputs_43434980_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60819420();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__inputs_43471700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51685360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49763240();
   }
      }
   }
}

Block make__60822940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60822940 = block;
   block->owner = (Object)__49779580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60822940;

   return block;
};

Block __50998640;

void code__50998640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__inputs_43470700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_43434980_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50998640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50998640 = block;
   block->owner = (Object)__50998020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50998640;

   return block;
};

Block __50860200;

void code__50860200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_43435340_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,ack__network_49824920_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,fill_57737960_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_49825000_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,req_57737940_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,fill_60124720_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_43435880_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,req_60124680_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50860200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50860200 = block;
   block->owner = (Object)__50997460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50860200;

   return block;
};

Block __50860100;

void code__50860100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_57798080_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,ack__0_43435880_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_60407100_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,ack__1_43435340_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50860100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50860100 = block;
   block->owner = (Object)__50996300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50860100;

   return block;
};

Block __50856260;

Block __51248780;

void code__51248780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50094780_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,make_ref_rangeS(mem_50436440_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740,value2integer(abus__w_50094620_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value),value2integer(abus__w_50094620_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__51248780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51248780 = block;
   block->owner = (Object)__50856260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51248780;

   return block;
};

void code__50856260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50436440_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            idx = value2integer(abus__r_50094700_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50019760_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49763120_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51248780();
   }
      }
   }
}

Block make__50856260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50856260 = block;
   block->owner = (Object)__51706600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50856260;

   return block;
};

Block __51036100;

void code__51036100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49763120_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5817_49245520_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51036100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51036100 = block;
   block->owner = (Object)__51035740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51036100;

   return block;
};

Block __51035700;

void code__51035700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_49245520_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,trig__w_49763120_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51035700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51035700 = block;
   block->owner = (Object)__51034760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51035700;

   return block;
};

Block __51032620;

void code__51032620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50094620_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5818_49245420_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51032620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51032620 = block;
   block->owner = (Object)__51032120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51032620;

   return block;
};

Block __51032040;

void code__51032040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_49245420_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,abus__w_50094620_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51032040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51032040 = block;
   block->owner = (Object)__51031460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51032040;

   return block;
};

Block __51030740;

void code__51030740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50094780_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5819_49485080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51030740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51030740 = block;
   block->owner = (Object)__51030520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51030740;

   return block;
};

Block __51030480;

void code__51030480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_49485080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,dbus__w_50094780_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51030480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51030480 = block;
   block->owner = (Object)__51030280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51030480;

   return block;
};

Block __51142540;

void code__51142540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50019760_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5815_57798120_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51142540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51142540 = block;
   block->owner = (Object)__51189940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51142540;

   return block;
};

Block __51142260;

void code__51142260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_57798060_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,trig__r_49763180_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_57797980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,abus__r_50094700_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51142260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51142260 = block;
   block->owner = (Object)__51189140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51142260;

   return block;
};

Block __51184160;

void code__51184160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52054820_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5832_60786660_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51184160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51184160 = block;
   block->owner = (Object)__51183680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51184160;

   return block;
};

Block __51216340;

void code__51216340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_60786660_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__0_52054820_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51216340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51216340 = block;
   block->owner = (Object)__51216040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51216340;

   return block;
};

Block __51209500;

void code__51209500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5855_57932400_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51209500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51209500 = block;
   block->owner = (Object)__51209080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51209500;

   return block;
};

Block __51208960;

void code__51208960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5855_57932400_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51208960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51208960 = block;
   block->owner = (Object)__51208260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51208960;

   return block;
};

Block __51244880;

void code__51244880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5856_58034600_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51244880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51244880 = block;
   block->owner = (Object)__51243660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51244880;

   return block;
};

Block __51243580;

void code__51243580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5856_58034600_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51243580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51243580 = block;
   block->owner = (Object)__51243240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51243580;

   return block;
};

Block __51283680;

void code__51283680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_52631020_rinc_5865_52631400_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51283680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51283680 = block;
   block->owner = (Object)__51283260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51283680;

   return block;
};

Block __51283120;

void code__51283120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,abus__r_52631020_rinc_5865_52631400_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51283120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51283120 = block;
   block->owner = (Object)__51282200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51283120;

   return block;
};

Block __51241000;

void code__51241000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5866_60289820_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5867_60407180_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51241000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51241000 = block;
   block->owner = (Object)__51281960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51241000;

   return block;
};

Value make__51620860() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51620800() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51690180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51690120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51689940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51689780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51689640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51689380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__51689300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51688960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51688300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51687980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51686180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51685360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51685260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope neural__network_58_84_49449880;

SignalI ack__0_43435880_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__0_43435880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_43435880_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)neural__network_58_84_49449880;
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

SignalI ack__1_43435340_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__1_43435340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_43435340_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)neural__network_58_84_49449880;
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

SignalI fill__inputs_43434980_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makefill__inputs_43434980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_43434980_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)neural__network_58_84_49449880;
   signalI->name = "fill_inputs";
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

SignalI address__inputs_43471700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeaddress__inputs_43471700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_43471700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)neural__network_58_84_49449880;
   signalI->name = "address_inputs";
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

SignalI ack__inputs_43470700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__inputs_43470700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_43470700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)neural__network_58_84_49449880;
   signalI->name = "ack_inputs";
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

SignalI rom__inputs_49245540_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerom__inputs_49245540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rom__inputs_49245540_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)neural__network_58_84_49449880;
   signalI->name = "rom_inputs";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__51620860();
         src1 = make__51620800();
         concat_value(2,0,dst,src0,src1);
         set_value_pos(pool_state);
      dst; }),signalI->c_value);
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

SignalI _5817_49245520_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5817_49245520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_49245520_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)neural__network_58_84_49449880;
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

SignalI _5818_49245420_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5818_49245420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_49245420_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)neural__network_58_84_49449880;
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

SignalI _5819_49485080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5819_49485080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_49485080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)neural__network_58_84_49449880;
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

SystemI layer0_58034420;

SystemI makelayer0_58034420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_58034420 = systemI;
   systemI->owner = (Object)neural__network_58_84_49449880;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_57739940;

   return systemI;
};

SystemI layer1_60786480;

SystemI makelayer1_60786480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_60786480 = systemI;
   systemI->owner = (Object)neural__network_58_84_49449880;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_60127080;

   return systemI;
};

Scope channel__input_581_49449460;

SignalI trig__r_49763180_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI maketrig__r_49763180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49763180_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__input_581_49449460;
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

SignalI trig__w_49763120_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI maketrig__w_49763120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49763120_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__input_581_49449460;
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

SignalI dbus__r_50019760_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makedbus__r_50019760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50019760_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__input_581_49449460;
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

SignalI dbus__w_50094780_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makedbus__w_50094780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50094780_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__input_581_49449460;
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

SignalI abus__r_50094700_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_50094700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50094700_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__input_581_49449460;
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

SignalI abus__w_50094620_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_50094620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50094620_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__input_581_49449460;
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

SignalI mem_50436440_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makemem_50436440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50436440_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__input_581_49449460;
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

Scope raddr_582_49449080;

Scope makeraddr_582_49449080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_49449080 = scope;
   scope->owner = (Object)channel__input_581_49449460;
   scope->name = "raddr:2";
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

Scope waddr_587_49448540;

Scope makewaddr_587_49448540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_49448540 = scope;
   scope->owner = (Object)channel__input_581_49449460;
   scope->name = "waddr:7";
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

Scope rinc_5812_49470720;

Behavior __51189940;

Behavior make__51189940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51189940 = behavior;
   behavior->owner = (Object)rinc_5812_49470720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50019760_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   dbus__r_50019760_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   dbus__r_50019760_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(dbus__r_50019760_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,dbus__r_50019760_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
dbus__r_50019760_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[dbus__r_50019760_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51142540();

   return behavior;
}

Behavior __51189140;

Behavior make__51189140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51189140 = behavior;
   behavior->owner = (Object)rinc_5812_49470720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_57798060_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _5813_57798060_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _5813_57798060_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_5813_57798060_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_5813_57798060_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_5813_57798060_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_5813_57798060_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_57797980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _5814_57797980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _5814_57797980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_5814_57797980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_5814_57797980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_5814_57797980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_5814_57797980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51142260();

   return behavior;
}

Scope makerinc_5812_49470720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_49470720 = scope;
   scope->owner = (Object)channel__input_581_49449460;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51189940();
   scope->behaviors[1] = make__51189140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_49764960;

Scope makewinc_5816_49764960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_49764960 = scope;
   scope->owner = (Object)channel__input_581_49449460;
   scope->name = "winc:16";
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

Scope rdec_5820_49764040;

Scope makerdec_5820_49764040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_49764040 = scope;
   scope->owner = (Object)channel__input_581_49449460;
   scope->name = "rdec:20";
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

Scope wdec_5825_49763620;

Scope makewdec_5825_49763620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_49763620 = scope;
   scope->owner = (Object)channel__input_581_49449460;
   scope->name = "wdec:25";
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

Behavior __51706600;

Behavior make__51706600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51706600 = behavior;
   behavior->owner = (Object)channel__input_581_49449460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg += 1;
   clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg = realloc(clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg,clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg*sizeof(Object));
clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg[clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg-1] = (Object)behavior;
   behavior->block = make__50856260();

   return behavior;
}

Behavior __51035740;

Behavior make__51035740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51035740 = behavior;
   behavior->owner = (Object)channel__input_581_49449460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49763120_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   trig__w_49763120_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   trig__w_49763120_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(trig__w_49763120_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,trig__w_49763120_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
trig__w_49763120_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[trig__w_49763120_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51036100();

   return behavior;
}

Behavior __51034760;

Behavior make__51034760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51034760 = behavior;
   behavior->owner = (Object)channel__input_581_49449460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_49245520_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _5817_49245520_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _5817_49245520_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_5817_49245520_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_5817_49245520_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_5817_49245520_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_5817_49245520_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51035700();

   return behavior;
}

Behavior __51032120;

Behavior make__51032120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51032120 = behavior;
   behavior->owner = (Object)channel__input_581_49449460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50094620_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   abus__w_50094620_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   abus__w_50094620_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(abus__w_50094620_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,abus__w_50094620_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
abus__w_50094620_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[abus__w_50094620_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51032620();

   return behavior;
}

Behavior __51031460;

Behavior make__51031460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51031460 = behavior;
   behavior->owner = (Object)channel__input_581_49449460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_49245420_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _5818_49245420_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _5818_49245420_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_5818_49245420_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_5818_49245420_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_5818_49245420_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_5818_49245420_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51032040();

   return behavior;
}

Behavior __51030520;

Behavior make__51030520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51030520 = behavior;
   behavior->owner = (Object)channel__input_581_49449460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50094780_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   dbus__w_50094780_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   dbus__w_50094780_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(dbus__w_50094780_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,dbus__w_50094780_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
dbus__w_50094780_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[dbus__w_50094780_channel__input_581_49449460_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51030740();

   return behavior;
}

Behavior __51030280;

Behavior make__51030280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51030280 = behavior;
   behavior->owner = (Object)channel__input_581_49449460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_49485080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _5819_49485080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _5819_49485080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_5819_49485080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_5819_49485080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_5819_49485080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_5819_49485080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51030480();

   return behavior;
}

Scope makechannel__input_581_49449460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__input_581_49449460 = scope;
   scope->owner = (Object)neural__network_58_84_49449880;
   scope->name = "channel_input:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49763180();
   scope->inners[1] = maketrig__w_49763120();
   scope->inners[2] = makedbus__r_50019760();
   scope->inners[3] = makedbus__w_50094780();
   scope->inners[4] = makeabus__r_50094700();
   scope->inners[5] = makeabus__w_50094620();
   scope->inners[6] = makemem_50436440();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_49449080();
   scope->scopes[1] = makewaddr_587_49448540();
   scope->scopes[2] = makerinc_5812_49470720();
   scope->scopes[3] = makewinc_5816_49764960();
   scope->scopes[4] = makerdec_5820_49764040();
   scope->scopes[5] = makewdec_5825_49763620();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51706600();
   scope->behaviors[1] = make__51035740();
   scope->behaviors[2] = make__51034760();
   scope->behaviors[3] = make__51032120();
   scope->behaviors[4] = make__51031460();
   scope->behaviors[5] = make__51030520();
   scope->behaviors[6] = make__51030280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__output_5830_51706480;

SignalI reg__0_52054820_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereg__0_52054820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52054820_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__output_5830_51706480;
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

Scope anum_5831_51706180;

Behavior __51183680;

Behavior make__51183680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51183680 = behavior;
   behavior->owner = (Object)anum_5831_51706180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52054820_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__0_52054820_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__0_52054820_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__0_52054820_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__0_52054820_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__0_52054820_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__0_52054820_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51184160();

   return behavior;
}

Behavior __51216040;

Behavior make__51216040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51216040 = behavior;
   behavior->owner = (Object)anum_5831_51706180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_60786660_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _5832_60786660_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _5832_60786660_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_5832_60786660_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_5832_60786660_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_5832_60786660_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_5832_60786660_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51216340();

   return behavior;
}

Scope makeanum_5831_51706180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_51706180 = scope;
   scope->owner = (Object)channel__output_5830_51706480;
   scope->name = "anum:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51183680();
   scope->behaviors[1] = make__51216040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5833_51888460;

Scope makeraddr_5833_51888460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5833_51888460 = scope;
   scope->owner = (Object)channel__output_5830_51706480;
   scope->name = "raddr:33";
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

Scope waddr_5836_51928960;

Scope makewaddr_5836_51928960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5836_51928960 = scope;
   scope->owner = (Object)channel__output_5830_51706480;
   scope->name = "waddr:36";
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

Scope rinc_5839_51928540;

SignalI abus__r_51928160_rinc_5839_51928540_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_51928160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51928160_rinc_5839_51928540_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rinc_5839_51928540;
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

Scope makerinc_5839_51928540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5839_51928540 = scope;
   scope->owner = (Object)channel__output_5830_51706480;
   scope->name = "rinc:39";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51928160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5842_51928040;

SignalI abus__w_51927660_winc_5842_51928040_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_51927660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51927660_winc_5842_51928040_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)winc_5842_51928040;
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

Scope makewinc_5842_51928040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5842_51928040 = scope;
   scope->owner = (Object)channel__output_5830_51706480;
   scope->name = "winc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51927660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5845_51927540;

SignalI abus__r_51927160_rdec_5845_51927540_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_51927160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51927160_rdec_5845_51927540_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rdec_5845_51927540;
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

Scope makerdec_5845_51927540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5845_51927540 = scope;
   scope->owner = (Object)channel__output_5830_51706480;
   scope->name = "rdec:45";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51927160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5849_51927040;

SignalI abus__w_51926660_wdec_5849_51927040_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_51926660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51926660_wdec_5849_51927040_channel__output_5830_51706480_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)wdec_5849_51927040;
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

Scope makewdec_5849_51927040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5849_51927040 = scope;
   scope->owner = (Object)channel__output_5830_51706480;
   scope->name = "wdec:49";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51926660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__output_5830_51706480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__output_5830_51706480 = scope;
   scope->owner = (Object)neural__network_58_84_49449880;
   scope->name = "channel_output:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52054820();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_51706180();
   scope->scopes[1] = makeraddr_5833_51888460();
   scope->scopes[2] = makewaddr_5836_51928960();
   scope->scopes[3] = makerinc_5839_51928540();
   scope->scopes[4] = makewinc_5842_51928040();
   scope->scopes[5] = makerdec_5845_51927540();
   scope->scopes[6] = makewdec_5849_51927040();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5853_52054700;

SignalI reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereg__0_53302820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__a0_5853_52054700;
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

SignalI reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereg__1_43436800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__a0_5853_52054700;
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

Scope anum_5854_52054400;

Behavior __51209080;

Behavior make__51209080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51209080 = behavior;
   behavior->owner = (Object)anum_5854_52054400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51209500();

   return behavior;
}

Behavior __51208260;

Behavior make__51208260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51208260 = behavior;
   behavior->owner = (Object)anum_5854_52054400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5855_57932400_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _5855_57932400_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _5855_57932400_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_5855_57932400_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_5855_57932400_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_5855_57932400_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_5855_57932400_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51208960();

   return behavior;
}

Behavior __51243660;

Behavior make__51243660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51243660 = behavior;
   behavior->owner = (Object)anum_5854_52054400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51244880();

   return behavior;
}

Behavior __51243240;

Behavior make__51243240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51243240 = behavior;
   behavior->owner = (Object)anum_5854_52054400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5856_58034600_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _5856_58034600_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _5856_58034600_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_5856_58034600_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_5856_58034600_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_5856_58034600_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_5856_58034600_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51243580();

   return behavior;
}

Scope makeanum_5854_52054400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5854_52054400 = scope;
   scope->owner = (Object)channel__a0_5853_52054700;
   scope->name = "anum:54";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51209080();
   scope->behaviors[1] = make__51208260();
   scope->behaviors[2] = make__51243660();
   scope->behaviors[3] = make__51243240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5857_52632240;

Scope makeraddr_5857_52632240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5857_52632240 = scope;
   scope->owner = (Object)channel__a0_5853_52054700;
   scope->name = "raddr:57";
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

Scope waddr_5861_52631820;

Scope makewaddr_5861_52631820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5861_52631820 = scope;
   scope->owner = (Object)channel__a0_5853_52054700;
   scope->name = "waddr:61";
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

Scope rinc_5865_52631400;

SignalI abus__r_52631020_rinc_5865_52631400_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_52631020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52631020_rinc_5865_52631400_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rinc_5865_52631400;
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

Behavior __51283260;

Behavior make__51283260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51283260 = behavior;
   behavior->owner = (Object)rinc_5865_52631400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_52631020_rinc_5865_52631400_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   abus__r_52631020_rinc_5865_52631400_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   abus__r_52631020_rinc_5865_52631400_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(abus__r_52631020_rinc_5865_52631400_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,abus__r_52631020_rinc_5865_52631400_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
abus__r_52631020_rinc_5865_52631400_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[abus__r_52631020_rinc_5865_52631400_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51283680();

   return behavior;
}

Behavior __51282200;

Behavior make__51282200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51282200 = behavior;
   behavior->owner = (Object)rinc_5865_52631400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51283120();

   return behavior;
}

Behavior __51281960;

Behavior make__51281960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51281960 = behavior;
   behavior->owner = (Object)rinc_5865_52631400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__0_53302820_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__1_43436800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51241000();

   return behavior;
}

Scope makerinc_5865_52631400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5865_52631400 = scope;
   scope->owner = (Object)channel__a0_5853_52054700;
   scope->name = "rinc:65";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52631020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51283260();
   scope->behaviors[1] = make__51282200();
   scope->behaviors[2] = make__51281960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5869_53036800;

SignalI abus__w_53036420_winc_5869_53036800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_53036420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53036420_winc_5869_53036800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)winc_5869_53036800;
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

Scope makewinc_5869_53036800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5869_53036800 = scope;
   scope->owner = (Object)channel__a0_5853_52054700;
   scope->name = "winc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53036420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5873_53036300;

SignalI abus__r_53035920_rdec_5873_53036300_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_53035920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53035920_rdec_5873_53036300_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rdec_5873_53036300;
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

Scope makerdec_5873_53036300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5873_53036300 = scope;
   scope->owner = (Object)channel__a0_5853_52054700;
   scope->name = "rdec:73";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53035920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5878_53035800;

SignalI abus__w_53035420_wdec_5878_53035800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_53035420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53035420_wdec_5878_53035800_channel__a0_5853_52054700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)wdec_5878_53035800;
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

Scope makewdec_5878_53035800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5878_53035800 = scope;
   scope->owner = (Object)channel__a0_5853_52054700;
   scope->name = "wdec:78";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53035420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5853_52054700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5853_52054700 = scope;
   scope->owner = (Object)neural__network_58_84_49449880;
   scope->name = "channel_a0:53";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53302820();
   scope->inners[1] = makereg__1_43436800();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5854_52054400();
   scope->scopes[1] = makeraddr_5857_52632240();
   scope->scopes[2] = makewaddr_5861_52631820();
   scope->scopes[3] = makerinc_5865_52631400();
   scope->scopes[4] = makewinc_5869_53036800();
   scope->scopes[5] = makerdec_5873_53036300();
   scope->scopes[6] = makewdec_5878_53035800();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60823160;

Behavior make__60823160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60823160 = behavior;
   behavior->owner = (Object)neural__network_58_84_49449880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__60824400();

   return behavior;
}

Behavior __49779580;

Behavior make__49779580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49779580 = behavior;
   behavior->owner = (Object)neural__network_58_84_49449880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__60822940();

   return behavior;
}

Behavior __50998020;

Behavior make__50998020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50998020 = behavior;
   behavior->owner = (Object)neural__network_58_84_49449880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_43470700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__inputs_43470700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__inputs_43470700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__inputs_43470700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__inputs_43470700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__inputs_43470700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__inputs_43470700_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__50998640();

   return behavior;
}

Behavior __50997460;

Behavior make__50997460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50997460 = behavior;
   behavior->owner = (Object)neural__network_58_84_49449880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_43435340_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__1_43435340_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__1_43435340_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__1_43435340_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__1_43435340_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__1_43435340_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__1_43435340_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[clk_49825240_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[rst_49825220_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[fill_49824980_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,req_49825000_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   req_49825000_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   req_49825000_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(req_49825000_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,req_49825000_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
req_49825000_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[req_49825000_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__0_43435880_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__0_43435880_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__0_43435880_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__0_43435880_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__0_43435880_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__0_43435880_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__0_43435880_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__50860200();

   return behavior;
}

Behavior __50996300;

Behavior make__50996300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50996300 = behavior;
   behavior->owner = (Object)neural__network_58_84_49449880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_57798080_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__layer_57798080_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__layer_57798080_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__layer_57798080_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__layer_57798080_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__layer_57798080_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__layer_57798080_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_60407100_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__layer_60407100_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__layer_60407100_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__layer_60407100_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__layer_60407100_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__layer_60407100_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__layer_60407100_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__50860100();

   return behavior;
}

Scope makeneural__network_58_84_49449880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   neural__network_58_84_49449880 = scope;
   scope->owner = (Object)neural__network_58_840_49798940;
   scope->name = "neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_58034420();
   scope->systemIs[1] = makelayer1_60786480();
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_43435880();
   scope->inners[1] = makeack__1_43435340();
   scope->inners[2] = makefill__inputs_43434980();
   scope->inners[3] = makeaddress__inputs_43471700();
   scope->inners[4] = makeack__inputs_43470700();
   scope->inners[5] = makerom__inputs_49245540();
   scope->inners[6] = make_5817_49245520();
   scope->inners[7] = make_5818_49245420();
   scope->inners[8] = make_5819_49485080();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__input_581_49449460();
   scope->scopes[1] = makechannel__output_5830_51706480();
   scope->scopes[2] = makechannel__a0_5853_52054700();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60823160();
   scope->behaviors[1] = make__49779580();
   scope->behaviors[2] = make__50998020();
   scope->behaviors[3] = make__50997460();
   scope->behaviors[4] = make__50996300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makeneural__network_58_840_49798940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   neural__network_58_840_49798940 = systemT;
systemT->owner = NULL;
   systemT->name = "neural_network:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_49825240();
   systemT->inputs[1] = makerst_49825220();
   systemT->inputs[2] = makereq_49825000();
   systemT->inputs[3] = makefill_49824980();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__network_49824920();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makeneural__network_58_84_49449880();

   return systemT;
}