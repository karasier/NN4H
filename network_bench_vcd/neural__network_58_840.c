#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT neural__network_58_840_49652680;

SignalI clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeclk_49725120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)neural__network_58_840_49652680;
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

SignalI rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makerst_49723500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)neural__network_58_840_49652680;
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

SignalI req_49723440_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makereq_49723440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49723440_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)neural__network_58_840_49652680;
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

SignalI fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makefill_49723420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)neural__network_58_840_49652680;
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

SignalI ack__network_49723340_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeack__network_49723340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_49723340_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)neural__network_58_840_49652680;
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

Block __41836860;

Block __42201020;

void code__42201020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51440960(),ack__0_45119720_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51440760(),ack__1_45119660_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__42201020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42201020 = block;
   block->owner = (Object)__41836860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42201020;

   return block;
};

void code__41836860() {
   {
      Value cond = rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42201020();
   }
      }
   }
}

Block make__41836860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __41836860 = block;
   block->owner = (Object)__42278200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__41836860;

   return block;
};

Block __42277540;

Block __42276920;

Block __42336160;

void code__42336160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51440060(),_5818_48929800_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__42336160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42336160 = block;
   block->owner = (Object)__42276920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42336160;

   return block;
};

void code__42276920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51440420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42336160();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51440000(),_5817_48930100_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__42276920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42276920 = block;
   block->owner = (Object)__42277540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42276920;

   return block;
};

Block __49659460;

void code__49659460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51439900(),address__inputs_45119160_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51439820(),ack__inputs_45119140_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__49659460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49659460 = block;
   block->owner = (Object)__42277540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49659460;

   return block;
};

Block __42349760;

Block __42382200;

Block __42415200;

Block __42457760;

void code__42457760() {
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
                  src0 = _5818_48929800_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51438920();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_48929800_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51438680(),_5817_48930100_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
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
            ref = rom__inputs_48930120_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
            idx = value2integer(address__inputs_45119160_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_5819_49222400_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__42457760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42457760 = block;
   block->owner = (Object)__42415200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42457760;

   return block;
};

void code__42415200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51439620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42457760();
   }
      }
   }
}

Block make__42415200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42415200 = block;
   block->owner = (Object)__42382200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42415200;

   return block;
};

void code__42382200() {
 code__42415200();
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
                  src0 = address__inputs_45119160_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51437640();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_45119160_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__42382200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42382200 = block;
   block->owner = (Object)__42349760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42382200;

   return block;
};

Block __49638180;

void code__49638180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51461880(),ack__inputs_45119140_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__49638180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49638180 = block;
   block->owner = (Object)__42349760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49638180;

   return block;
};

void code__42349760() {
   {
      Value cond = fill__inputs_45119500_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42382200();
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
               src0 = address__inputs_45119160_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51461960();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49638180();
   }
      }
   }
}

Block make__42349760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42349760 = block;
   block->owner = (Object)__42277540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42349760;

   return block;
};

void code__42277540() {
 code__42276920();
   {
      Value cond = rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49659460();
   }
   else {
  code__42349760();
   }
      }
   }
}

Block make__42277540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42277540 = block;
   block->owner = (Object)__49654980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42277540;

   return block;
};

Block __50788120;

void code__50788120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__inputs_45119140_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_45119500_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50788120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50788120 = block;
   block->owner = (Object)__50787040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50788120;

   return block;
};

Block __50602980;

void code__50602980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_45119660_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,ack__network_49723340_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,clk_59532520_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,rst_59532500_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,fill_59532480_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_49723440_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,req_59532460_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,fill_59812320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_45119720_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,req_59812300_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50602980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50602980 = block;
   block->owner = (Object)__50786520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50602980;

   return block;
};

Block __50602800;

void code__50602800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_59734420_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,ack__0_45119720_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_60067320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,ack__1_45119660_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50602800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50602800 = block;
   block->owner = (Object)__50786000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50602800;

   return block;
};

Block __50524320;

Block __51015140;

void code__51015140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48764080_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,make_ref_rangeS(mem_50374900_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420,value2integer(abus__w_48763920_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value),value2integer(abus__w_48763920_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__51015140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51015140 = block;
   block->owner = (Object)__50524320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51015140;

   return block;
};

void code__50524320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50374900_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
            idx = value2integer(abus__r_48764000_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49641040_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49389860_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51015140();
   }
      }
   }
}

Block make__50524320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50524320 = block;
   block->owner = (Object)__51407380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50524320;

   return block;
};

Block __50784320;

void code__50784320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49389860_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_5817_48930100_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50784320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50784320 = block;
   block->owner = (Object)__50784000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50784320;

   return block;
};

Block __50783600;

void code__50783600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_48930100_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,trig__w_49389860_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50783600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50783600 = block;
   block->owner = (Object)__50783000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50783600;

   return block;
};

Block __50945760;

void code__50945760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48763920_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_5818_48929800_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50945760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50945760 = block;
   block->owner = (Object)__50945500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50945760;

   return block;
};

Block __50945420;

void code__50945420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_48929800_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,abus__w_48763920_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50945420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50945420 = block;
   block->owner = (Object)__50945100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50945420;

   return block;
};

Block __50943900;

void code__50943900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48764080_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_5819_49222400_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50943900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50943900 = block;
   block->owner = (Object)__50943400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50943900;

   return block;
};

Block __50943320;

void code__50943320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_49222400_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,dbus__w_48764080_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50943320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50943320 = block;
   block->owner = (Object)__50943120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50943320;

   return block;
};

Block __50941780;

void code__50941780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49641040_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_5815_59734460_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50941780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50941780 = block;
   block->owner = (Object)__51013020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50941780;

   return block;
};

Block __50941680;

void code__50941680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_59734400_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,trig__r_49390020_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_59734320_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,abus__r_48764000_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50941680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50941680 = block;
   block->owner = (Object)__51012620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50941680;

   return block;
};

Block __51080960;

void code__51080960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51739120_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_5832_60318500_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__51080960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51080960 = block;
   block->owner = (Object)__51080480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51080960;

   return block;
};

Block __51080440;

void code__51080440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_60318500_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,reg__0_51739120_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__51080440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51080440 = block;
   block->owner = (Object)__51079880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51080440;

   return block;
};

Block __51105940;

void code__51105940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_5855_59797060_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__51105940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51105940 = block;
   block->owner = (Object)__51105380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51105940;

   return block;
};

Block __51105320;

void code__51105320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5855_59797060_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__51105320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51105320 = block;
   block->owner = (Object)__51104680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51105320;

   return block;
};

Block __51133720;

void code__51133720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_5856_59843440_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__51133720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51133720 = block;
   block->owner = (Object)__51133460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51133720;

   return block;
};

Block __51133420;

void code__51133420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5856_59843440_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__51133420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51133420 = block;
   block->owner = (Object)__51133140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51133420;

   return block;
};

Block __51194120;

void code__51194120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_52217060_rinc_5865_52217440_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__51194120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51194120 = block;
   block->owner = (Object)__51193660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51194120;

   return block;
};

Block __51193520;

void code__51193520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,abus__r_52217060_rinc_5865_52217440_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__51193520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51193520 = block;
   block->owner = (Object)__51192940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51193520;

   return block;
};

Block __51131880;

void code__51131880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_5866_59989000_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_5867_60067360_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__51131880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51131880 = block;
   block->owner = (Object)__51192300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51131880;

   return block;
};

Value make__51444520() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51444480() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51440960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51440760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51440420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51440060() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51440000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51439900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__51439820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51439620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51438920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51438680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51437640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51461960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51461880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope neural__network_58_84_48929680;

SignalI ack__0_45119720_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeack__0_45119720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_45119720_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)neural__network_58_84_48929680;
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

SignalI ack__1_45119660_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeack__1_45119660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_45119660_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)neural__network_58_84_48929680;
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

SignalI fill__inputs_45119500_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makefill__inputs_45119500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_45119500_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)neural__network_58_84_48929680;
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

SignalI address__inputs_45119160_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeaddress__inputs_45119160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_45119160_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)neural__network_58_84_48929680;
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

SignalI ack__inputs_45119140_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeack__inputs_45119140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_45119140_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)neural__network_58_84_48929680;
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

SignalI rom__inputs_48930120_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makerom__inputs_48930120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rom__inputs_48930120_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)neural__network_58_84_48929680;
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
         src0 = make__51444520();
         src1 = make__51444480();
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

SignalI _5817_48930100_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_5817_48930100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_48930100_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)neural__network_58_84_48929680;
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

SignalI _5818_48929800_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_5818_48929800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_48929800_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)neural__network_58_84_48929680;
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

SignalI _5819_49222400_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_5819_49222400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_49222400_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)neural__network_58_84_48929680;
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

SystemI layer0_59843320;

SystemI makelayer0_59843320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_59843320 = systemI;
   systemI->owner = (Object)neural__network_58_84_48929680;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_59534360;

   return systemI;
};

SystemI layer1_60318380;

SystemI makelayer1_60318380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_60318380 = systemI;
   systemI->owner = (Object)neural__network_58_84_48929680;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_59814780;

   return systemI;
};

Scope channel__input_581_48929340;

SignalI trig__r_49390020_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI maketrig__r_49390020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49390020_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__input_581_48929340;
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

SignalI trig__w_49389860_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI maketrig__w_49389860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49389860_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__input_581_48929340;
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

SignalI dbus__r_49641040_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makedbus__r_49641040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49641040_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__input_581_48929340;
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

SignalI dbus__w_48764080_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makedbus__w_48764080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48764080_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__input_581_48929340;
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

SignalI abus__r_48764000_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__r_48764000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48764000_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__input_581_48929340;
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

SignalI abus__w_48763920_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__w_48763920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48763920_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__input_581_48929340;
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

SignalI mem_50374900_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makemem_50374900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50374900_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__input_581_48929340;
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

Scope raddr_582_48928840;

Scope makeraddr_582_48928840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_48928840 = scope;
   scope->owner = (Object)channel__input_581_48929340;
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

Scope waddr_587_48928400;

Scope makewaddr_587_48928400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_48928400 = scope;
   scope->owner = (Object)channel__input_581_48929340;
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

Scope rinc_5812_48927980;

Behavior __51013020;

Behavior make__51013020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51013020 = behavior;
   behavior->owner = (Object)rinc_5812_48927980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49641040_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   dbus__r_49641040_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   dbus__r_49641040_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(dbus__r_49641040_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,dbus__r_49641040_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
dbus__r_49641040_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[dbus__r_49641040_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50941780();

   return behavior;
}

Behavior __51012620;

Behavior make__51012620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51012620 = behavior;
   behavior->owner = (Object)rinc_5812_48927980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_59734400_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _5813_59734400_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _5813_59734400_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_5813_59734400_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_5813_59734400_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_5813_59734400_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_5813_59734400_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_59734320_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _5814_59734320_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _5814_59734320_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_5814_59734320_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_5814_59734320_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_5814_59734320_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_5814_59734320_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50941680();

   return behavior;
}

Scope makerinc_5812_48927980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_48927980 = scope;
   scope->owner = (Object)channel__input_581_48929340;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51013020();
   scope->behaviors[1] = make__51012620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_49395920;

Scope makewinc_5816_49395920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_49395920 = scope;
   scope->owner = (Object)channel__input_581_48929340;
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

Scope rdec_5820_49394240;

Scope makerdec_5820_49394240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_49394240 = scope;
   scope->owner = (Object)channel__input_581_48929340;
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

Scope wdec_5825_49392220;

Scope makewdec_5825_49392220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_49392220 = scope;
   scope->owner = (Object)channel__input_581_48929340;
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

Behavior __51407380;

Behavior make__51407380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51407380 = behavior;
   behavior->owner = (Object)channel__input_581_48929340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_neg += 1;
   clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->neg = realloc(clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->neg,clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_neg*sizeof(Object));
clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->neg[clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_neg-1] = (Object)behavior;
   behavior->block = make__50524320();

   return behavior;
}

Behavior __50784000;

Behavior make__50784000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50784000 = behavior;
   behavior->owner = (Object)channel__input_581_48929340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49389860_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   trig__w_49389860_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   trig__w_49389860_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(trig__w_49389860_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,trig__w_49389860_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
trig__w_49389860_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[trig__w_49389860_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50784320();

   return behavior;
}

Behavior __50783000;

Behavior make__50783000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50783000 = behavior;
   behavior->owner = (Object)channel__input_581_48929340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_48930100_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _5817_48930100_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _5817_48930100_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_5817_48930100_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_5817_48930100_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_5817_48930100_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_5817_48930100_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50783600();

   return behavior;
}

Behavior __50945500;

Behavior make__50945500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50945500 = behavior;
   behavior->owner = (Object)channel__input_581_48929340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48763920_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   abus__w_48763920_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   abus__w_48763920_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(abus__w_48763920_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,abus__w_48763920_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
abus__w_48763920_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[abus__w_48763920_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50945760();

   return behavior;
}

Behavior __50945100;

Behavior make__50945100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50945100 = behavior;
   behavior->owner = (Object)channel__input_581_48929340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_48929800_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _5818_48929800_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _5818_48929800_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_5818_48929800_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_5818_48929800_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_5818_48929800_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_5818_48929800_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50945420();

   return behavior;
}

Behavior __50943400;

Behavior make__50943400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50943400 = behavior;
   behavior->owner = (Object)channel__input_581_48929340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48764080_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   dbus__w_48764080_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   dbus__w_48764080_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(dbus__w_48764080_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,dbus__w_48764080_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
dbus__w_48764080_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[dbus__w_48764080_channel__input_581_48929340_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50943900();

   return behavior;
}

Behavior __50943120;

Behavior make__50943120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50943120 = behavior;
   behavior->owner = (Object)channel__input_581_48929340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_49222400_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _5819_49222400_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _5819_49222400_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_5819_49222400_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_5819_49222400_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_5819_49222400_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_5819_49222400_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50943320();

   return behavior;
}

Scope makechannel__input_581_48929340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__input_581_48929340 = scope;
   scope->owner = (Object)neural__network_58_84_48929680;
   scope->name = "channel_input:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49390020();
   scope->inners[1] = maketrig__w_49389860();
   scope->inners[2] = makedbus__r_49641040();
   scope->inners[3] = makedbus__w_48764080();
   scope->inners[4] = makeabus__r_48764000();
   scope->inners[5] = makeabus__w_48763920();
   scope->inners[6] = makemem_50374900();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_48928840();
   scope->scopes[1] = makewaddr_587_48928400();
   scope->scopes[2] = makerinc_5812_48927980();
   scope->scopes[3] = makewinc_5816_49395920();
   scope->scopes[4] = makerdec_5820_49394240();
   scope->scopes[5] = makewdec_5825_49392220();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51407380();
   scope->behaviors[1] = make__50784000();
   scope->behaviors[2] = make__50783000();
   scope->behaviors[3] = make__50945500();
   scope->behaviors[4] = make__50945100();
   scope->behaviors[5] = make__50943400();
   scope->behaviors[6] = make__50943120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__output_5830_51407260;

SignalI reg__0_51739120_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makereg__0_51739120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51739120_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__output_5830_51407260;
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

Scope anum_5831_51406960;

Behavior __51080480;

Behavior make__51080480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51080480 = behavior;
   behavior->owner = (Object)anum_5831_51406960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51739120_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   reg__0_51739120_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   reg__0_51739120_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(reg__0_51739120_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,reg__0_51739120_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
reg__0_51739120_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[reg__0_51739120_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__51080960();

   return behavior;
}

Behavior __51079880;

Behavior make__51079880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51079880 = behavior;
   behavior->owner = (Object)anum_5831_51406960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_60318500_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _5832_60318500_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _5832_60318500_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_5832_60318500_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_5832_60318500_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_5832_60318500_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_5832_60318500_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__51080440();

   return behavior;
}

Scope makeanum_5831_51406960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_51406960 = scope;
   scope->owner = (Object)channel__output_5830_51407260;
   scope->name = "anum:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51080480();
   scope->behaviors[1] = make__51079880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5833_51556380;

Scope makeraddr_5833_51556380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5833_51556380 = scope;
   scope->owner = (Object)channel__output_5830_51407260;
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

Scope waddr_5836_51555960;

Scope makewaddr_5836_51555960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5836_51555960 = scope;
   scope->owner = (Object)channel__output_5830_51407260;
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

Scope rinc_5839_51555540;

SignalI abus__r_51555160_rinc_5839_51555540_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__r_51555160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51555160_rinc_5839_51555540_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)rinc_5839_51555540;
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

Scope makerinc_5839_51555540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5839_51555540 = scope;
   scope->owner = (Object)channel__output_5830_51407260;
   scope->name = "rinc:39";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51555160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5842_51555040;

SignalI abus__w_51554660_winc_5842_51555040_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__w_51554660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51554660_winc_5842_51555040_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)winc_5842_51555040;
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

Scope makewinc_5842_51555040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5842_51555040 = scope;
   scope->owner = (Object)channel__output_5830_51407260;
   scope->name = "winc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51554660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5845_51554540;

SignalI abus__r_51554160_rdec_5845_51554540_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__r_51554160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51554160_rdec_5845_51554540_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)rdec_5845_51554540;
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

Scope makerdec_5845_51554540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5845_51554540 = scope;
   scope->owner = (Object)channel__output_5830_51407260;
   scope->name = "rdec:45";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51554160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5849_51554040;

SignalI abus__w_51553660_wdec_5849_51554040_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__w_51553660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51553660_wdec_5849_51554040_channel__output_5830_51407260_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)wdec_5849_51554040;
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

Scope makewdec_5849_51554040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5849_51554040 = scope;
   scope->owner = (Object)channel__output_5830_51407260;
   scope->name = "wdec:49";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51553660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__output_5830_51407260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__output_5830_51407260 = scope;
   scope->owner = (Object)neural__network_58_84_48929680;
   scope->name = "channel_output:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51739120();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_51406960();
   scope->scopes[1] = makeraddr_5833_51556380();
   scope->scopes[2] = makewaddr_5836_51555960();
   scope->scopes[3] = makerinc_5839_51555540();
   scope->scopes[4] = makewinc_5842_51555040();
   scope->scopes[5] = makerdec_5845_51554540();
   scope->scopes[6] = makewdec_5849_51554040();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5853_51739000;

SignalI reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makereg__0_52888240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__a0_5853_51739000;
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

SignalI reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makereg__1_45120220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__a0_5853_51739000;
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

Scope anum_5854_51738700;

Behavior __51105380;

Behavior make__51105380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51105380 = behavior;
   behavior->owner = (Object)anum_5854_51738700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__51105940();

   return behavior;
}

Behavior __51104680;

Behavior make__51104680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51104680 = behavior;
   behavior->owner = (Object)anum_5854_51738700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5855_59797060_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _5855_59797060_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _5855_59797060_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_5855_59797060_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_5855_59797060_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_5855_59797060_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_5855_59797060_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__51105320();

   return behavior;
}

Behavior __51133460;

Behavior make__51133460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51133460 = behavior;
   behavior->owner = (Object)anum_5854_51738700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__51133720();

   return behavior;
}

Behavior __51133140;

Behavior make__51133140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51133140 = behavior;
   behavior->owner = (Object)anum_5854_51738700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5856_59843440_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _5856_59843440_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _5856_59843440_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_5856_59843440_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_5856_59843440_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_5856_59843440_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_5856_59843440_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__51133420();

   return behavior;
}

Scope makeanum_5854_51738700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5854_51738700 = scope;
   scope->owner = (Object)channel__a0_5853_51739000;
   scope->name = "anum:54";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51105380();
   scope->behaviors[1] = make__51104680();
   scope->behaviors[2] = make__51133460();
   scope->behaviors[3] = make__51133140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5857_52218280;

Scope makeraddr_5857_52218280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5857_52218280 = scope;
   scope->owner = (Object)channel__a0_5853_51739000;
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

Scope waddr_5861_52217860;

Scope makewaddr_5861_52217860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5861_52217860 = scope;
   scope->owner = (Object)channel__a0_5853_51739000;
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

Scope rinc_5865_52217440;

SignalI abus__r_52217060_rinc_5865_52217440_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__r_52217060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52217060_rinc_5865_52217440_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)rinc_5865_52217440;
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

Behavior __51193660;

Behavior make__51193660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51193660 = behavior;
   behavior->owner = (Object)rinc_5865_52217440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_52217060_rinc_5865_52217440_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   abus__r_52217060_rinc_5865_52217440_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   abus__r_52217060_rinc_5865_52217440_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(abus__r_52217060_rinc_5865_52217440_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,abus__r_52217060_rinc_5865_52217440_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
abus__r_52217060_rinc_5865_52217440_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[abus__r_52217060_rinc_5865_52217440_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__51194120();

   return behavior;
}

Behavior __51192940;

Behavior make__51192940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51192940 = behavior;
   behavior->owner = (Object)rinc_5865_52217440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__51193520();

   return behavior;
}

Behavior __51192300;

Behavior make__51192300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51192300 = behavior;
   behavior->owner = (Object)rinc_5865_52217440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[reg__0_52888240_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[reg__1_45120220_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__51131880();

   return behavior;
}

Scope makerinc_5865_52217440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5865_52217440 = scope;
   scope->owner = (Object)channel__a0_5853_51739000;
   scope->name = "rinc:65";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52217060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51193660();
   scope->behaviors[1] = make__51192940();
   scope->behaviors[2] = make__51192300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5869_52737500;

SignalI abus__w_52737120_winc_5869_52737500_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__w_52737120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52737120_winc_5869_52737500_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)winc_5869_52737500;
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

Scope makewinc_5869_52737500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5869_52737500 = scope;
   scope->owner = (Object)channel__a0_5853_51739000;
   scope->name = "winc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52737120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5873_52737000;

SignalI abus__r_52736620_rdec_5873_52737000_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__r_52736620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52736620_rdec_5873_52737000_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)rdec_5873_52737000;
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

Scope makerdec_5873_52737000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5873_52737000 = scope;
   scope->owner = (Object)channel__a0_5853_51739000;
   scope->name = "rdec:73";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52736620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5878_52736500;

SignalI abus__w_52736120_wdec_5878_52736500_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__w_52736120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52736120_wdec_5878_52736500_channel__a0_5853_51739000_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)wdec_5878_52736500;
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

Scope makewdec_5878_52736500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5878_52736500 = scope;
   scope->owner = (Object)channel__a0_5853_51739000;
   scope->name = "wdec:78";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52736120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5853_51739000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5853_51739000 = scope;
   scope->owner = (Object)neural__network_58_84_48929680;
   scope->name = "channel_a0:53";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52888240();
   scope->inners[1] = makereg__1_45120220();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5854_51738700();
   scope->scopes[1] = makeraddr_5857_52218280();
   scope->scopes[2] = makewaddr_5861_52217860();
   scope->scopes[3] = makerinc_5865_52217440();
   scope->scopes[4] = makewinc_5869_52737500();
   scope->scopes[5] = makerdec_5873_52737000();
   scope->scopes[6] = makewdec_5878_52736500();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __42278200;

Behavior make__42278200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42278200 = behavior;
   behavior->owner = (Object)neural__network_58_84_48929680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos += 1;
   clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos = realloc(clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos,clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos*sizeof(Object));
clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos[clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos-1] = (Object)behavior;
   behavior->block = make__41836860();

   return behavior;
}

Behavior __49654980;

Behavior make__49654980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49654980 = behavior;
   behavior->owner = (Object)neural__network_58_84_48929680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos += 1;
   clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos = realloc(clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos,clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos*sizeof(Object));
clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos[clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos-1] = (Object)behavior;
   behavior->block = make__42277540();

   return behavior;
}

Behavior __50787040;

Behavior make__50787040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50787040 = behavior;
   behavior->owner = (Object)neural__network_58_84_48929680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_45119140_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   ack__inputs_45119140_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   ack__inputs_45119140_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(ack__inputs_45119140_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,ack__inputs_45119140_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
ack__inputs_45119140_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[ack__inputs_45119140_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50788120();

   return behavior;
}

Behavior __50786520;

Behavior make__50786520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50786520 = behavior;
   behavior->owner = (Object)neural__network_58_84_48929680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_45119660_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   ack__1_45119660_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   ack__1_45119660_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(ack__1_45119660_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,ack__1_45119660_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
ack__1_45119660_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[ack__1_45119660_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[clk_49725120_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[rst_49723500_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[fill_49723420_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,req_49723440_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   req_49723440_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   req_49723440_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(req_49723440_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,req_49723440_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
req_49723440_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[req_49723440_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__0_45119720_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   ack__0_45119720_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   ack__0_45119720_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(ack__0_45119720_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,ack__0_45119720_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
ack__0_45119720_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[ack__0_45119720_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50602980();

   return behavior;
}

Behavior __50786000;

Behavior make__50786000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50786000 = behavior;
   behavior->owner = (Object)neural__network_58_84_48929680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_59734420_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   ack__layer_59734420_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   ack__layer_59734420_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(ack__layer_59734420_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,ack__layer_59734420_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
ack__layer_59734420_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[ack__layer_59734420_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_60067320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   ack__layer_60067320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   ack__layer_60067320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(ack__layer_60067320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,ack__layer_60067320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
ack__layer_60067320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[ack__layer_60067320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50602800();

   return behavior;
}

Scope makeneural__network_58_84_48929680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   neural__network_58_84_48929680 = scope;
   scope->owner = (Object)neural__network_58_840_49652680;
   scope->name = "neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_59843320();
   scope->systemIs[1] = makelayer1_60318380();
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_45119720();
   scope->inners[1] = makeack__1_45119660();
   scope->inners[2] = makefill__inputs_45119500();
   scope->inners[3] = makeaddress__inputs_45119160();
   scope->inners[4] = makeack__inputs_45119140();
   scope->inners[5] = makerom__inputs_48930120();
   scope->inners[6] = make_5817_48930100();
   scope->inners[7] = make_5818_48929800();
   scope->inners[8] = make_5819_49222400();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__input_581_48929340();
   scope->scopes[1] = makechannel__output_5830_51407260();
   scope->scopes[2] = makechannel__a0_5853_51739000();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__42278200();
   scope->behaviors[1] = make__49654980();
   scope->behaviors[2] = make__50787040();
   scope->behaviors[3] = make__50786520();
   scope->behaviors[4] = make__50786000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makeneural__network_58_840_49652680() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   neural__network_58_840_49652680 = systemT;
systemT->owner = NULL;
   systemT->name = "neural_network:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_49725120();
   systemT->inputs[1] = makerst_49723500();
   systemT->inputs[2] = makereq_49723440();
   systemT->inputs[3] = makefill_49723420();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__network_49723340();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makeneural__network_58_84_48929680();

   return systemT;
}