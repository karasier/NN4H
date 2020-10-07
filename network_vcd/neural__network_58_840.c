#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT neural__network_58_840_50116760;

SignalI clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeclk_50110560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)neural__network_58_840_50116760;
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

SignalI rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makerst_50110540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)neural__network_58_840_50116760;
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

SignalI req_50110520_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makereq_50110520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_50110520_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)neural__network_58_840_50116760;
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

SignalI fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makefill_50110480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)neural__network_58_840_50116760;
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

SignalI ack__network_50429860_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeack__network_50429860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_50429860_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)neural__network_58_840_50116760;
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

Block __47581160;

Block __47580780;

void code__47580780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51142460(),ack__0_48141780_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51142340(),ack__1_48141760_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__47580780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47580780 = block;
   block->owner = (Object)__47581160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47580780;

   return block;
};

void code__47581160() {
   {
      Value cond = rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47580780();
   }
      }
   }
}

Block make__47581160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47581160 = block;
   block->owner = (Object)__47692540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47581160;

   return block;
};

Block __47692360;

Block __47691900;

Block __47687140;

void code__47687140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51141940(),_5818_49840400_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__47687140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47687140 = block;
   block->owner = (Object)__47691900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47687140;

   return block;
};

void code__47691900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51142240();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47687140();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51141820(),_5817_49840520_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__47691900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47691900 = block;
   block->owner = (Object)__47692360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47691900;

   return block;
};

Block __47723720;

void code__47723720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51141600(),address__inputs_48140900_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51141380(),ack__inputs_48140480_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__47723720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47723720 = block;
   block->owner = (Object)__47692360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47723720;

   return block;
};

Block __47720260;

Block __47719040;

Block __47741740;

void code__47741740() {
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
                  src0 = _5818_49840400_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51140540();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_49840400_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51140360(),_5817_49840520_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
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
            ref = rom__inputs_49840620_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            idx = value2integer(address__inputs_48140900_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_5819_50281360_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__47741740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47741740 = block;
   block->owner = (Object)__47719040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47741740;

   return block;
};

void code__47719040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51141000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47741740();
   }
      }
   }
}

Block make__47719040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47719040 = block;
   block->owner = (Object)__47720260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47719040;

   return block;
};

void code__47720260() {
 code__47719040();
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
                  src0 = address__inputs_48140900_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51139760();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_48140900_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__47720260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47720260 = block;
   block->owner = (Object)__47692360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47720260;

   return block;
};

Block __50094760;

void code__50094760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51138760(),ack__inputs_48140480_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50094760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50094760 = block;
   block->owner = (Object)__47692360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50094760;

   return block;
};

void code__47692360() {
 code__47691900();
   {
      Value cond = rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47723720();
   }
      }
   }
   {
      Value cond = fill__inputs_48141740_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47720260();
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
               src0 = address__inputs_48140900_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51139220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50094760();
   }
      }
   }
}

Block make__47692360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47692360 = block;
   block->owner = (Object)__50117800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47692360;

   return block;
};

Block __50804440;

void code__50804440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__inputs_48140480_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_48141740_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50804440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50804440 = block;
   block->owner = (Object)__50804160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50804440;

   return block;
};

Block __50737160;

void code__50737160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_48141760_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,ack__network_50429860_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,clk_50904940_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,rst_50904920_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,fill_50904880_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_50110520_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,req_50904860_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,fill_58726620_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_48141780_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,req_58726560_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50737160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50737160 = block;
   block->owner = (Object)__50803560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50737160;

   return block;
};

Block __50737060;

void code__50737060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_51053500_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,ack__0_48141780_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_59166280_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,ack__1_48141760_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50737060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50737060 = block;
   block->owner = (Object)__50802340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50737060;

   return block;
};

Block __50111120;

Block __50593020;

void code__50593020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49949900_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,make_ref_rangeS(mem_50275740_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480,value2integer(abus__w_49949280_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value),value2integer(abus__w_49949280_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50593020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50593020 = block;
   block->owner = (Object)__50111120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50593020;

   return block;
};

void code__50111120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50275740_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            idx = value2integer(abus__r_49949820_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49630380_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49504460_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50593020();
   }
      }
   }
}

Block make__50111120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50111120 = block;
   block->owner = (Object)__50806440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50111120;

   return block;
};

Block __50799980;

void code__50799980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49504460_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_5817_49840520_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50799980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50799980 = block;
   block->owner = (Object)__50799140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50799980;

   return block;
};

Block __50799040;

void code__50799040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_49840520_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,trig__w_49504460_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50799040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50799040 = block;
   block->owner = (Object)__50798600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50799040;

   return block;
};

Block __50822220;

void code__50822220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49949280_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_5818_49840400_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50822220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50822220 = block;
   block->owner = (Object)__50821900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50822220;

   return block;
};

Block __50821620;

void code__50821620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_49840400_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,abus__w_49949280_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50821620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50821620 = block;
   block->owner = (Object)__50821060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50821620;

   return block;
};

Block __50820360;

void code__50820360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49949900_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_5819_50281360_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50820360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50820360 = block;
   block->owner = (Object)__50819420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50820360;

   return block;
};

Block __50819120;

void code__50819120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_50281360_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,dbus__w_49949900_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50819120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50819120 = block;
   block->owner = (Object)__50816700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50819120;

   return block;
};

Block __50839500;

void code__50839500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49630380_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_5815_51053540_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50839500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50839500 = block;
   block->owner = (Object)__50885620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50839500;

   return block;
};

Block __50839400;

void code__50839400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_51053480_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,trig__r_49504480_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_51053320_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,abus__r_49949820_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50839400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50839400 = block;
   block->owner = (Object)__50885180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50839400;

   return block;
};

Block __50899840;

void code__50899840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50984120_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_5832_47566320_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50899840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50899840 = block;
   block->owner = (Object)__50899440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50899840;

   return block;
};

Block __50899380;

void code__50899380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_47566320_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,reg__0_50984120_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50899380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50899380 = block;
   block->owner = (Object)__50899120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50899380;

   return block;
};

Block __50934460;

void code__50934460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_5855_51183620_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50934460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50934460 = block;
   block->owner = (Object)__50933340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50934460;

   return block;
};

Block __50932920;

void code__50932920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5855_51183620_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50932920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50932920 = block;
   block->owner = (Object)__50932380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50932920;

   return block;
};

Block __50951120;

void code__50951120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_5856_55295440_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50951120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50951120 = block;
   block->owner = (Object)__50950820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50951120;

   return block;
};

Block __50950720;

void code__50950720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5856_55295440_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50950720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50950720 = block;
   block->owner = (Object)__50950280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50950720;

   return block;
};

Block __50980800;

void code__50980800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_51236100_rinc_5865_51236480_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50980800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50980800 = block;
   block->owner = (Object)__50979700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50980800;

   return block;
};

Block __50979660;

void code__50979660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,abus__r_51236100_rinc_5865_51236480_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50979660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50979660 = block;
   block->owner = (Object)__51027720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50979660;

   return block;
};

Block __50947240;

void code__50947240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_5866_58963520_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_5867_59166380_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50947240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50947240 = block;
   block->owner = (Object)__51027460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50947240;

   return block;
};

Value make__51121620() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51121520() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51142460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51142340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51142240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51141940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51141820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51141600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__51141380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51141000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51140540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51140360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51139760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51139220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51138760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope neural__network_58_84_49011620;

SignalI ack__0_48141780_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeack__0_48141780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_48141780_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)neural__network_58_84_49011620;
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

SignalI ack__1_48141760_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeack__1_48141760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_48141760_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)neural__network_58_84_49011620;
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

SignalI fill__inputs_48141740_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makefill__inputs_48141740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_48141740_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)neural__network_58_84_49011620;
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

SignalI address__inputs_48140900_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeaddress__inputs_48140900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_48140900_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)neural__network_58_84_49011620;
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

SignalI ack__inputs_48140480_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeack__inputs_48140480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_48140480_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)neural__network_58_84_49011620;
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

SignalI rom__inputs_49840620_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makerom__inputs_49840620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rom__inputs_49840620_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)neural__network_58_84_49011620;
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
         src0 = make__51121620();
         src1 = make__51121520();
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

SignalI _5817_49840520_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_5817_49840520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_49840520_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)neural__network_58_84_49011620;
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

SignalI _5818_49840400_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_5818_49840400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_49840400_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)neural__network_58_84_49011620;
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

SignalI _5819_50281360_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_5819_50281360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_50281360_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)neural__network_58_84_49011620;
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

SystemI layer0_55295280;

SystemI makelayer0_55295280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_55295280 = systemI;
   systemI->owner = (Object)neural__network_58_84_49011620;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_50885140;

   return systemI;
};

SystemI layer1_47566080;

SystemI makelayer1_47566080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_47566080 = systemI;
   systemI->owner = (Object)neural__network_58_84_49011620;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_58633240;

   return systemI;
};

Scope channel__input_581_49011320;

SignalI trig__r_49504480_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI maketrig__r_49504480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49504480_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__input_581_49011320;
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

SignalI trig__w_49504460_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI maketrig__w_49504460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49504460_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__input_581_49011320;
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

SignalI dbus__r_49630380_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makedbus__r_49630380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49630380_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__input_581_49011320;
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

SignalI dbus__w_49949900_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makedbus__w_49949900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49949900_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__input_581_49011320;
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

SignalI abus__r_49949820_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__r_49949820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49949820_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__input_581_49011320;
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

SignalI abus__w_49949280_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__w_49949280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49949280_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__input_581_49011320;
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

SignalI mem_50275740_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makemem_50275740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50275740_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__input_581_49011320;
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

Scope raddr_582_49011020;

Scope makeraddr_582_49011020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_49011020 = scope;
   scope->owner = (Object)channel__input_581_49011320;
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

Scope waddr_587_49010600;

Scope makewaddr_587_49010600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_49010600 = scope;
   scope->owner = (Object)channel__input_581_49011320;
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

Scope rinc_5812_49010180;

Behavior __50885620;

Behavior make__50885620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50885620 = behavior;
   behavior->owner = (Object)rinc_5812_49010180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49630380_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   dbus__r_49630380_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   dbus__r_49630380_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(dbus__r_49630380_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,dbus__r_49630380_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
dbus__r_49630380_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[dbus__r_49630380_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50839500();

   return behavior;
}

Behavior __50885180;

Behavior make__50885180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50885180 = behavior;
   behavior->owner = (Object)rinc_5812_49010180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_51053480_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _5813_51053480_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _5813_51053480_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_5813_51053480_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_5813_51053480_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_5813_51053480_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_5813_51053480_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_51053320_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _5814_51053320_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _5814_51053320_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_5814_51053320_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_5814_51053320_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_5814_51053320_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_5814_51053320_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50839400();

   return behavior;
}

Scope makerinc_5812_49010180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_49010180 = scope;
   scope->owner = (Object)channel__input_581_49011320;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50885620();
   scope->behaviors[1] = make__50885180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_49475300;

Scope makewinc_5816_49475300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_49475300 = scope;
   scope->owner = (Object)channel__input_581_49011320;
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

Scope rdec_5820_49474600;

Scope makerdec_5820_49474600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_49474600 = scope;
   scope->owner = (Object)channel__input_581_49011320;
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

Scope wdec_5825_49505340;

Scope makewdec_5825_49505340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_49505340 = scope;
   scope->owner = (Object)channel__input_581_49011320;
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

Behavior __50806440;

Behavior make__50806440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50806440 = behavior;
   behavior->owner = (Object)channel__input_581_49011320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_neg += 1;
   clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->neg = realloc(clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->neg,clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_neg*sizeof(Object));
clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->neg[clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_neg-1] = (Object)behavior;
   behavior->block = make__50111120();

   return behavior;
}

Behavior __50799140;

Behavior make__50799140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50799140 = behavior;
   behavior->owner = (Object)channel__input_581_49011320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49504460_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   trig__w_49504460_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   trig__w_49504460_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(trig__w_49504460_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,trig__w_49504460_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
trig__w_49504460_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[trig__w_49504460_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50799980();

   return behavior;
}

Behavior __50798600;

Behavior make__50798600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50798600 = behavior;
   behavior->owner = (Object)channel__input_581_49011320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_49840520_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _5817_49840520_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _5817_49840520_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_5817_49840520_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_5817_49840520_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_5817_49840520_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_5817_49840520_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50799040();

   return behavior;
}

Behavior __50821900;

Behavior make__50821900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50821900 = behavior;
   behavior->owner = (Object)channel__input_581_49011320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49949280_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   abus__w_49949280_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   abus__w_49949280_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(abus__w_49949280_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,abus__w_49949280_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
abus__w_49949280_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[abus__w_49949280_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50822220();

   return behavior;
}

Behavior __50821060;

Behavior make__50821060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50821060 = behavior;
   behavior->owner = (Object)channel__input_581_49011320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_49840400_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _5818_49840400_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _5818_49840400_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_5818_49840400_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_5818_49840400_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_5818_49840400_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_5818_49840400_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50821620();

   return behavior;
}

Behavior __50819420;

Behavior make__50819420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50819420 = behavior;
   behavior->owner = (Object)channel__input_581_49011320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49949900_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   dbus__w_49949900_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   dbus__w_49949900_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(dbus__w_49949900_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,dbus__w_49949900_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
dbus__w_49949900_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[dbus__w_49949900_channel__input_581_49011320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50820360();

   return behavior;
}

Behavior __50816700;

Behavior make__50816700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50816700 = behavior;
   behavior->owner = (Object)channel__input_581_49011320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_50281360_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _5819_50281360_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _5819_50281360_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_5819_50281360_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_5819_50281360_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_5819_50281360_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_5819_50281360_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50819120();

   return behavior;
}

Scope makechannel__input_581_49011320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__input_581_49011320 = scope;
   scope->owner = (Object)neural__network_58_84_49011620;
   scope->name = "channel_input:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49504480();
   scope->inners[1] = maketrig__w_49504460();
   scope->inners[2] = makedbus__r_49630380();
   scope->inners[3] = makedbus__w_49949900();
   scope->inners[4] = makeabus__r_49949820();
   scope->inners[5] = makeabus__w_49949280();
   scope->inners[6] = makemem_50275740();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_49011020();
   scope->scopes[1] = makewaddr_587_49010600();
   scope->scopes[2] = makerinc_5812_49010180();
   scope->scopes[3] = makewinc_5816_49475300();
   scope->scopes[4] = makerdec_5820_49474600();
   scope->scopes[5] = makewdec_5825_49505340();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50806440();
   scope->behaviors[1] = make__50799140();
   scope->behaviors[2] = make__50798600();
   scope->behaviors[3] = make__50821900();
   scope->behaviors[4] = make__50821060();
   scope->behaviors[5] = make__50819420();
   scope->behaviors[6] = make__50816700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__output_5830_50806320;

SignalI reg__0_50984120_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makereg__0_50984120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50984120_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__output_5830_50806320;
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

Scope anum_5831_50806020;

Behavior __50899440;

Behavior make__50899440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50899440 = behavior;
   behavior->owner = (Object)anum_5831_50806020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50984120_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   reg__0_50984120_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   reg__0_50984120_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(reg__0_50984120_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,reg__0_50984120_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
reg__0_50984120_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[reg__0_50984120_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50899840();

   return behavior;
}

Behavior __50899120;

Behavior make__50899120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50899120 = behavior;
   behavior->owner = (Object)anum_5831_50806020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_47566320_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _5832_47566320_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _5832_47566320_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_5832_47566320_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_5832_47566320_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_5832_47566320_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_5832_47566320_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50899380();

   return behavior;
}

Scope makeanum_5831_50806020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_50806020 = scope;
   scope->owner = (Object)channel__output_5830_50806320;
   scope->name = "anum:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50899440();
   scope->behaviors[1] = make__50899120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5833_50920360;

Scope makeraddr_5833_50920360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5833_50920360 = scope;
   scope->owner = (Object)channel__output_5830_50806320;
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

Scope waddr_5836_50919940;

Scope makewaddr_5836_50919940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5836_50919940 = scope;
   scope->owner = (Object)channel__output_5830_50806320;
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

Scope rinc_5839_50919520;

SignalI abus__r_50919140_rinc_5839_50919520_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__r_50919140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50919140_rinc_5839_50919520_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)rinc_5839_50919520;
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

Scope makerinc_5839_50919520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5839_50919520 = scope;
   scope->owner = (Object)channel__output_5830_50806320;
   scope->name = "rinc:39";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50919140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5842_50919020;

SignalI abus__w_50918640_winc_5842_50919020_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__w_50918640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50918640_winc_5842_50919020_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)winc_5842_50919020;
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

Scope makewinc_5842_50919020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5842_50919020 = scope;
   scope->owner = (Object)channel__output_5830_50806320;
   scope->name = "winc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50918640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5845_50918520;

SignalI abus__r_50918140_rdec_5845_50918520_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__r_50918140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50918140_rdec_5845_50918520_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)rdec_5845_50918520;
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

Scope makerdec_5845_50918520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5845_50918520 = scope;
   scope->owner = (Object)channel__output_5830_50806320;
   scope->name = "rdec:45";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50918140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5849_50918020;

SignalI abus__w_50917640_wdec_5849_50918020_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__w_50917640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50917640_wdec_5849_50918020_channel__output_5830_50806320_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)wdec_5849_50918020;
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

Scope makewdec_5849_50918020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5849_50918020 = scope;
   scope->owner = (Object)channel__output_5830_50806320;
   scope->name = "wdec:49";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50917640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__output_5830_50806320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__output_5830_50806320 = scope;
   scope->owner = (Object)neural__network_58_84_49011620;
   scope->name = "channel_output:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50984120();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_50806020();
   scope->scopes[1] = makeraddr_5833_50920360();
   scope->scopes[2] = makewaddr_5836_50919940();
   scope->scopes[3] = makerinc_5839_50919520();
   scope->scopes[4] = makewinc_5842_50919020();
   scope->scopes[5] = makerdec_5845_50918520();
   scope->scopes[6] = makewdec_5849_50918020();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5853_50984000;

SignalI reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makereg__0_47941020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__a0_5853_50984000;
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

SignalI reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makereg__1_48142920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__a0_5853_50984000;
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

Scope anum_5854_50983700;

Behavior __50933340;

Behavior make__50933340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50933340 = behavior;
   behavior->owner = (Object)anum_5854_50983700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50934460();

   return behavior;
}

Behavior __50932380;

Behavior make__50932380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50932380 = behavior;
   behavior->owner = (Object)anum_5854_50983700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5855_51183620_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _5855_51183620_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _5855_51183620_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_5855_51183620_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_5855_51183620_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_5855_51183620_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_5855_51183620_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50932920();

   return behavior;
}

Behavior __50950820;

Behavior make__50950820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50950820 = behavior;
   behavior->owner = (Object)anum_5854_50983700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50951120();

   return behavior;
}

Behavior __50950280;

Behavior make__50950280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50950280 = behavior;
   behavior->owner = (Object)anum_5854_50983700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5856_55295440_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _5856_55295440_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _5856_55295440_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_5856_55295440_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_5856_55295440_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_5856_55295440_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_5856_55295440_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50950720();

   return behavior;
}

Scope makeanum_5854_50983700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5854_50983700 = scope;
   scope->owner = (Object)channel__a0_5853_50984000;
   scope->name = "anum:54";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50933340();
   scope->behaviors[1] = make__50932380();
   scope->behaviors[2] = make__50950820();
   scope->behaviors[3] = make__50950280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5857_51237320;

Scope makeraddr_5857_51237320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5857_51237320 = scope;
   scope->owner = (Object)channel__a0_5853_50984000;
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

Scope waddr_5861_51236900;

Scope makewaddr_5861_51236900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5861_51236900 = scope;
   scope->owner = (Object)channel__a0_5853_50984000;
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

Scope rinc_5865_51236480;

SignalI abus__r_51236100_rinc_5865_51236480_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__r_51236100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51236100_rinc_5865_51236480_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)rinc_5865_51236480;
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

Behavior __50979700;

Behavior make__50979700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50979700 = behavior;
   behavior->owner = (Object)rinc_5865_51236480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_51236100_rinc_5865_51236480_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   abus__r_51236100_rinc_5865_51236480_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   abus__r_51236100_rinc_5865_51236480_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(abus__r_51236100_rinc_5865_51236480_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,abus__r_51236100_rinc_5865_51236480_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
abus__r_51236100_rinc_5865_51236480_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[abus__r_51236100_rinc_5865_51236480_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50980800();

   return behavior;
}

Behavior __51027720;

Behavior make__51027720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51027720 = behavior;
   behavior->owner = (Object)rinc_5865_51236480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50979660();

   return behavior;
}

Behavior __51027460;

Behavior make__51027460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51027460 = behavior;
   behavior->owner = (Object)rinc_5865_51236480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[reg__0_47941020_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[reg__1_48142920_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50947240();

   return behavior;
}

Scope makerinc_5865_51236480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5865_51236480 = scope;
   scope->owner = (Object)channel__a0_5853_50984000;
   scope->name = "rinc:65";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51236100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50979700();
   scope->behaviors[1] = make__51027720();
   scope->behaviors[2] = make__51027460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5869_47757760;

SignalI abus__w_47757380_winc_5869_47757760_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__w_47757380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47757380_winc_5869_47757760_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)winc_5869_47757760;
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

Scope makewinc_5869_47757760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5869_47757760 = scope;
   scope->owner = (Object)channel__a0_5853_50984000;
   scope->name = "winc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47757380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5873_47757260;

SignalI abus__r_47756880_rdec_5873_47757260_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__r_47756880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47756880_rdec_5873_47757260_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)rdec_5873_47757260;
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

Scope makerdec_5873_47757260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5873_47757260 = scope;
   scope->owner = (Object)channel__a0_5853_50984000;
   scope->name = "rdec:73";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47756880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5878_47756700;

SignalI abus__w_47756220_wdec_5878_47756700_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__w_47756220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47756220_wdec_5878_47756700_channel__a0_5853_50984000_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)wdec_5878_47756700;
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

Scope makewdec_5878_47756700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5878_47756700 = scope;
   scope->owner = (Object)channel__a0_5853_50984000;
   scope->name = "wdec:78";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47756220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5853_50984000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5853_50984000 = scope;
   scope->owner = (Object)neural__network_58_84_49011620;
   scope->name = "channel_a0:53";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47941020();
   scope->inners[1] = makereg__1_48142920();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5854_50983700();
   scope->scopes[1] = makeraddr_5857_51237320();
   scope->scopes[2] = makewaddr_5861_51236900();
   scope->scopes[3] = makerinc_5865_51236480();
   scope->scopes[4] = makewinc_5869_47757760();
   scope->scopes[5] = makerdec_5873_47757260();
   scope->scopes[6] = makewdec_5878_47756700();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47692540;

Behavior make__47692540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47692540 = behavior;
   behavior->owner = (Object)neural__network_58_84_49011620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos += 1;
   clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos = realloc(clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos,clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos*sizeof(Object));
clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos[clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos-1] = (Object)behavior;
   behavior->block = make__47581160();

   return behavior;
}

Behavior __50117800;

Behavior make__50117800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50117800 = behavior;
   behavior->owner = (Object)neural__network_58_84_49011620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos += 1;
   clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos = realloc(clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos,clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos*sizeof(Object));
clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos[clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos-1] = (Object)behavior;
   behavior->block = make__47692360();

   return behavior;
}

Behavior __50804160;

Behavior make__50804160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50804160 = behavior;
   behavior->owner = (Object)neural__network_58_84_49011620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_48140480_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   ack__inputs_48140480_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   ack__inputs_48140480_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(ack__inputs_48140480_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,ack__inputs_48140480_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
ack__inputs_48140480_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[ack__inputs_48140480_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50804440();

   return behavior;
}

Behavior __50803560;

Behavior make__50803560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50803560 = behavior;
   behavior->owner = (Object)neural__network_58_84_49011620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_48141760_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   ack__1_48141760_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   ack__1_48141760_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(ack__1_48141760_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,ack__1_48141760_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
ack__1_48141760_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[ack__1_48141760_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[clk_50110560_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[rst_50110540_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[fill_50110480_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,req_50110520_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   req_50110520_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   req_50110520_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(req_50110520_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,req_50110520_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
req_50110520_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[req_50110520_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__0_48141780_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   ack__0_48141780_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   ack__0_48141780_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(ack__0_48141780_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,ack__0_48141780_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
ack__0_48141780_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[ack__0_48141780_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50737160();

   return behavior;
}

Behavior __50802340;

Behavior make__50802340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50802340 = behavior;
   behavior->owner = (Object)neural__network_58_84_49011620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_51053500_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   ack__layer_51053500_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   ack__layer_51053500_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(ack__layer_51053500_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,ack__layer_51053500_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
ack__layer_51053500_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[ack__layer_51053500_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_59166280_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   ack__layer_59166280_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   ack__layer_59166280_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(ack__layer_59166280_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,ack__layer_59166280_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
ack__layer_59166280_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[ack__layer_59166280_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50737060();

   return behavior;
}

Scope makeneural__network_58_84_49011620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   neural__network_58_84_49011620 = scope;
   scope->owner = (Object)neural__network_58_840_50116760;
   scope->name = "neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_55295280();
   scope->systemIs[1] = makelayer1_47566080();
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_48141780();
   scope->inners[1] = makeack__1_48141760();
   scope->inners[2] = makefill__inputs_48141740();
   scope->inners[3] = makeaddress__inputs_48140900();
   scope->inners[4] = makeack__inputs_48140480();
   scope->inners[5] = makerom__inputs_49840620();
   scope->inners[6] = make_5817_49840520();
   scope->inners[7] = make_5818_49840400();
   scope->inners[8] = make_5819_50281360();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__input_581_49011320();
   scope->scopes[1] = makechannel__output_5830_50806320();
   scope->scopes[2] = makechannel__a0_5853_50984000();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47692540();
   scope->behaviors[1] = make__50117800();
   scope->behaviors[2] = make__50804160();
   scope->behaviors[3] = make__50803560();
   scope->behaviors[4] = make__50802340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makeneural__network_58_840_50116760() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   neural__network_58_840_50116760 = systemT;
systemT->owner = NULL;
   systemT->name = "neural_network:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_50110560();
   systemT->inputs[1] = makerst_50110540();
   systemT->inputs[2] = makereq_50110520();
   systemT->inputs[3] = makefill_50110480();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__network_50429860();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makeneural__network_58_84_49011620();

   return systemT;
}