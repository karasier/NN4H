#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT neural__network_58_840_50526860;

SignalI clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeclk_50521300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)neural__network_58_840_50526860;
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

SignalI rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makerst_50521280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)neural__network_58_840_50526860;
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

SignalI req_50521240_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makereq_50521240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_50521240_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)neural__network_58_840_50526860;
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

SignalI fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makefill_50521220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)neural__network_58_840_50526860;
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

SignalI ack__network_50521140_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack__network_50521140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_50521140_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)neural__network_58_840_50526860;
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

Block __48420240;

Block __48419380;

void code__48419380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56007020(),ack__0_50527660_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56006940(),ack__1_50527640_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48419380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48419380 = block;
   block->owner = (Object)__48420240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48419380;

   return block;
};

void code__48420240() {
   {
      Value cond = rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48419380();
   }
      }
   }
}

Block make__48420240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48420240 = block;
   block->owner = (Object)__48416480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48420240;

   return block;
};

Block __48415040;

Block __48946640;

Block __48944460;

void code__48944460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56006760(),_5818_50894460_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48944460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48944460 = block;
   block->owner = (Object)__48946640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48944460;

   return block;
};

void code__48946640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56006860();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48944460();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56006660(),_5817_50894540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48946640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48946640 = block;
   block->owner = (Object)__48415040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48946640;

   return block;
};

Block __48939080;

void code__48939080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56006560(),address__inputs_50527540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56006500(),ack__inputs_50527520_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48939080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48939080 = block;
   block->owner = (Object)__48415040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48939080;

   return block;
};

Block __49248640;

Block __49248420;

Block __49247100;

void code__49247100() {
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
                  src0 = _5818_50894460_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56006220();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_50894460_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56006080(),_5817_50894540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
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
            ref = rom__inputs_50894560_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            idx = value2integer(address__inputs_50527540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_5819_42133600_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__49247100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49247100 = block;
   block->owner = (Object)__49248420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49247100;

   return block;
};

void code__49248420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56006380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49247100();
   }
      }
   }
}

Block make__49248420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49248420 = block;
   block->owner = (Object)__49248640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49248420;

   return block;
};

void code__49248640() {
 code__49248420();
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
                  src0 = address__inputs_50527540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56005600();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_50527540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__49248640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49248640 = block;
   block->owner = (Object)__48415040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49248640;

   return block;
};

Block __50505540;

void code__50505540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56005160(),ack__inputs_50527520_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50505540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50505540 = block;
   block->owner = (Object)__48415040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50505540;

   return block;
};

void code__48415040() {
 code__48946640();
   {
      Value cond = rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48939080();
   }
      }
   }
   {
      Value cond = fill__inputs_50527620_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49248640();
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
               src0 = address__inputs_50527540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56005400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50505540();
   }
      }
   }
}

Block make__48415040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48415040 = block;
   block->owner = (Object)__50504160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48415040;

   return block;
};

Block __48567260;

void code__48567260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__inputs_50527520_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_50527620_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48567260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48567260 = block;
   block->owner = (Object)__48566760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48567260;

   return block;
};

Block __50890800;

void code__50890800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_50527640_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,ack__network_50521140_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,fill_57914840_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_50521240_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,req_57914780_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,clk_47293260_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,rst_47292940_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,fill_47292560_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_50527660_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,req_47316920_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50890800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50890800 = block;
   block->owner = (Object)__48566480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50890800;

   return block;
};

Block __50890680;

void code__50890680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_57982420_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,ack__0_50527660_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_48998940_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,ack__1_50527640_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50890680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50890680 = block;
   block->owner = (Object)__48566180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50890680;

   return block;
};

Block __47392360;

Block __48406380;

void code__48406380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50973640_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,make_ref_rangeS(mem_44812300_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640,value2integer(abus__w_50973480_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value),value2integer(abus__w_50973480_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__48406380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48406380 = block;
   block->owner = (Object)__47392360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48406380;

   return block;
};

void code__47392360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_44812300_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            idx = value2integer(abus__r_50973560_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50857060_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_50794540_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48406380();
   }
      }
   }
}

Block make__47392360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47392360 = block;
   block->owner = (Object)__49148520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47392360;

   return block;
};

Block __48565240;

void code__48565240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_50794540_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5817_50894540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48565240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48565240 = block;
   block->owner = (Object)__48565060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48565240;

   return block;
};

Block __48564980;

void code__48564980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_50894540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,trig__w_50794540_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48564980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48564980 = block;
   block->owner = (Object)__48564760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48564980;

   return block;
};

Block __48564080;

void code__48564080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50973480_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5818_50894460_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48564080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48564080 = block;
   block->owner = (Object)__48563860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48564080;

   return block;
};

Block __48563820;

void code__48563820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_50894460_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,abus__w_50973480_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48563820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48563820 = block;
   block->owner = (Object)__48563580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48563820;

   return block;
};

Block __48563160;

void code__48563160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50973640_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5819_42133600_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48563160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48563160 = block;
   block->owner = (Object)__48562960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48563160;

   return block;
};

Block __48562920;

void code__48562920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_42133600_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,dbus__w_50973640_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48562920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48562920 = block;
   block->owner = (Object)__48562700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48562920;

   return block;
};

Block __48496300;

void code__48496300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50857060_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5815_57982460_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48496300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48496300 = block;
   block->owner = (Object)__52083140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48496300;

   return block;
};

Block __48496140;

void code__48496140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_57982400_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,trig__r_50794560_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_57982320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,abus__r_50973560_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48496140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48496140 = block;
   block->owner = (Object)__52082920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48496140;

   return block;
};

Block __52079960;

void code__52079960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49244900_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5832_50002900_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__52079960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52079960 = block;
   block->owner = (Object)__52079560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52079960;

   return block;
};

Block __52079520;

void code__52079520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_50002900_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,reg__0_49244900_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__52079520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52079520 = block;
   block->owner = (Object)__52079340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52079520;

   return block;
};

Block __54737880;

void code__54737880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5855_58115540_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__54737880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54737880 = block;
   block->owner = (Object)__54737580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54737880;

   return block;
};

Block __54737520;

void code__54737520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5855_58115540_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__54737520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54737520 = block;
   block->owner = (Object)__54737200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54737520;

   return block;
};

Block __54735280;

void code__54735280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5856_58314320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__54735280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54735280 = block;
   block->owner = (Object)__54734780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54735280;

   return block;
};

Block __54734740;

void code__54734740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5856_58314320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__54734740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54734740 = block;
   block->owner = (Object)__54734260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54734740;

   return block;
};

Block __55838680;

void code__55838680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50111280_rinc_5865_50111660_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5868_48998780_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__55838680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55838680 = block;
   block->owner = (Object)__55838400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55838680;

   return block;
};

Block __55838360;

void code__55838360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5868_48998780_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,abus__r_50111280_rinc_5865_50111660_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__55838360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55838360 = block;
   block->owner = (Object)__55837980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55838360;

   return block;
};

Block __54732620;

void code__54732620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5866_48680580_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5867_48999180_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__54732620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54732620 = block;
   block->owner = (Object)__55837800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54732620;

   return block;
};

Value make__55952400() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55952380() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56007020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56006940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56006860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56006760() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56006660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56006560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56006500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56006380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56006220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56006080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56005600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56005400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56005160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope neural__network_58_84_50661100;

SignalI ack__0_50527660_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack__0_50527660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_50527660_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)neural__network_58_84_50661100;
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

SignalI ack__1_50527640_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack__1_50527640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_50527640_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)neural__network_58_84_50661100;
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

SignalI fill__inputs_50527620_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makefill__inputs_50527620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_50527620_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)neural__network_58_84_50661100;
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

SignalI address__inputs_50527540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeaddress__inputs_50527540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_50527540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)neural__network_58_84_50661100;
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

SignalI ack__inputs_50527520_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack__inputs_50527520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_50527520_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)neural__network_58_84_50661100;
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

SignalI rom__inputs_50894560_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makerom__inputs_50894560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rom__inputs_50894560_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)neural__network_58_84_50661100;
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
         src0 = make__55952400();
         src1 = make__55952380();
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

SignalI _5817_50894540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_5817_50894540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_50894540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)neural__network_58_84_50661100;
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

SignalI _5818_50894460_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_5818_50894460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_50894460_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)neural__network_58_84_50661100;
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

SignalI _5819_42133600_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_5819_42133600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_42133600_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)neural__network_58_84_50661100;
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

SystemI layer0_58314200;

SystemI makelayer0_58314200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_58314200 = systemI;
   systemI->owner = (Object)neural__network_58_84_50661100;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_57916920;

   return systemI;
};

SystemI layer1_50001460;

SystemI makelayer1_50001460() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_50001460 = systemI;
   systemI->owner = (Object)neural__network_58_84_50661100;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_47253500;

   return systemI;
};

Scope channel__input_581_50660800;

SignalI trig__r_50794560_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI maketrig__r_50794560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50794560_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__input_581_50660800;
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

SignalI trig__w_50794540_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI maketrig__w_50794540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_50794540_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__input_581_50660800;
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

SignalI dbus__r_50857060_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makedbus__r_50857060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50857060_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__input_581_50660800;
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

SignalI dbus__w_50973640_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makedbus__w_50973640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50973640_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__input_581_50660800;
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

SignalI abus__r_50973560_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__r_50973560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50973560_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__input_581_50660800;
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

SignalI abus__w_50973480_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__w_50973480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50973480_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__input_581_50660800;
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

SignalI mem_44812300_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makemem_44812300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_44812300_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__input_581_50660800;
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

Scope raddr_582_50660500;

Scope makeraddr_582_50660500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_50660500 = scope;
   scope->owner = (Object)channel__input_581_50660800;
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

Scope waddr_587_50660080;

Scope makewaddr_587_50660080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_50660080 = scope;
   scope->owner = (Object)channel__input_581_50660800;
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

Scope rinc_5812_50659660;

Behavior __52083140;

Behavior make__52083140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52083140 = behavior;
   behavior->owner = (Object)rinc_5812_50659660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50857060_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   dbus__r_50857060_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   dbus__r_50857060_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(dbus__r_50857060_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,dbus__r_50857060_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
dbus__r_50857060_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[dbus__r_50857060_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__48496300();

   return behavior;
}

Behavior __52082920;

Behavior make__52082920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52082920 = behavior;
   behavior->owner = (Object)rinc_5812_50659660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_57982400_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _5813_57982400_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _5813_57982400_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_5813_57982400_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_5813_57982400_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_5813_57982400_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_5813_57982400_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_57982320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _5814_57982320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _5814_57982320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_5814_57982320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_5814_57982320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_5814_57982320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_5814_57982320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__48496140();

   return behavior;
}

Scope makerinc_5812_50659660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_50659660 = scope;
   scope->owner = (Object)channel__input_581_50660800;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52083140();
   scope->behaviors[1] = make__52082920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_50795840;

Scope makewinc_5816_50795840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_50795840 = scope;
   scope->owner = (Object)channel__input_581_50660800;
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

Scope rdec_5820_50795420;

Scope makerdec_5820_50795420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_50795420 = scope;
   scope->owner = (Object)channel__input_581_50660800;
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

Scope wdec_5825_50795000;

Scope makewdec_5825_50795000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_50795000 = scope;
   scope->owner = (Object)channel__input_581_50660800;
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

Behavior __49148520;

Behavior make__49148520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49148520 = behavior;
   behavior->owner = (Object)channel__input_581_50660800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_neg += 1;
   clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->neg = realloc(clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->neg,clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_neg*sizeof(Object));
clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->neg[clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_neg-1] = (Object)behavior;
   behavior->block = make__47392360();

   return behavior;
}

Behavior __48565060;

Behavior make__48565060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48565060 = behavior;
   behavior->owner = (Object)channel__input_581_50660800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_50794540_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   trig__w_50794540_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   trig__w_50794540_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(trig__w_50794540_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,trig__w_50794540_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
trig__w_50794540_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[trig__w_50794540_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__48565240();

   return behavior;
}

Behavior __48564760;

Behavior make__48564760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48564760 = behavior;
   behavior->owner = (Object)channel__input_581_50660800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_50894540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _5817_50894540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _5817_50894540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_5817_50894540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_5817_50894540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_5817_50894540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_5817_50894540_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__48564980();

   return behavior;
}

Behavior __48563860;

Behavior make__48563860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48563860 = behavior;
   behavior->owner = (Object)channel__input_581_50660800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50973480_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   abus__w_50973480_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   abus__w_50973480_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(abus__w_50973480_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,abus__w_50973480_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
abus__w_50973480_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[abus__w_50973480_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__48564080();

   return behavior;
}

Behavior __48563580;

Behavior make__48563580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48563580 = behavior;
   behavior->owner = (Object)channel__input_581_50660800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_50894460_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _5818_50894460_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _5818_50894460_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_5818_50894460_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_5818_50894460_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_5818_50894460_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_5818_50894460_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__48563820();

   return behavior;
}

Behavior __48562960;

Behavior make__48562960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48562960 = behavior;
   behavior->owner = (Object)channel__input_581_50660800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50973640_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   dbus__w_50973640_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   dbus__w_50973640_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(dbus__w_50973640_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,dbus__w_50973640_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
dbus__w_50973640_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[dbus__w_50973640_channel__input_581_50660800_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__48563160();

   return behavior;
}

Behavior __48562700;

Behavior make__48562700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48562700 = behavior;
   behavior->owner = (Object)channel__input_581_50660800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_42133600_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _5819_42133600_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _5819_42133600_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_5819_42133600_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_5819_42133600_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_5819_42133600_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_5819_42133600_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__48562920();

   return behavior;
}

Scope makechannel__input_581_50660800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__input_581_50660800 = scope;
   scope->owner = (Object)neural__network_58_84_50661100;
   scope->name = "channel_input:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50794560();
   scope->inners[1] = maketrig__w_50794540();
   scope->inners[2] = makedbus__r_50857060();
   scope->inners[3] = makedbus__w_50973640();
   scope->inners[4] = makeabus__r_50973560();
   scope->inners[5] = makeabus__w_50973480();
   scope->inners[6] = makemem_44812300();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_50660500();
   scope->scopes[1] = makewaddr_587_50660080();
   scope->scopes[2] = makerinc_5812_50659660();
   scope->scopes[3] = makewinc_5816_50795840();
   scope->scopes[4] = makerdec_5820_50795420();
   scope->scopes[5] = makewdec_5825_50795000();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49148520();
   scope->behaviors[1] = make__48565060();
   scope->behaviors[2] = make__48564760();
   scope->behaviors[3] = make__48563860();
   scope->behaviors[4] = make__48563580();
   scope->behaviors[5] = make__48562960();
   scope->behaviors[6] = make__48562700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__output_5830_49148400;

SignalI reg__0_49244900_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makereg__0_49244900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49244900_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__output_5830_49148400;
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

Scope anum_5831_49148100;

Behavior __52079560;

Behavior make__52079560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52079560 = behavior;
   behavior->owner = (Object)anum_5831_49148100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49244900_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   reg__0_49244900_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   reg__0_49244900_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(reg__0_49244900_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,reg__0_49244900_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
reg__0_49244900_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[reg__0_49244900_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__52079960();

   return behavior;
}

Behavior __52079340;

Behavior make__52079340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52079340 = behavior;
   behavior->owner = (Object)anum_5831_49148100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_50002900_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _5832_50002900_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _5832_50002900_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_5832_50002900_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_5832_50002900_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_5832_50002900_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_5832_50002900_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__52079520();

   return behavior;
}

Scope makeanum_5831_49148100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_49148100 = scope;
   scope->owner = (Object)channel__output_5830_49148400;
   scope->name = "anum:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52079560();
   scope->behaviors[1] = make__52079340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5833_49394860;

Scope makeraddr_5833_49394860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5833_49394860 = scope;
   scope->owner = (Object)channel__output_5830_49148400;
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

Scope waddr_5836_49394400;

Scope makewaddr_5836_49394400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5836_49394400 = scope;
   scope->owner = (Object)channel__output_5830_49148400;
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

Scope rinc_5839_49393980;

SignalI abus__r_49393600_rinc_5839_49393980_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__r_49393600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49393600_rinc_5839_49393980_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)rinc_5839_49393980;
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

Scope makerinc_5839_49393980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5839_49393980 = scope;
   scope->owner = (Object)channel__output_5830_49148400;
   scope->name = "rinc:39";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49393600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5842_49393480;

SignalI abus__w_49393100_winc_5842_49393480_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__w_49393100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49393100_winc_5842_49393480_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)winc_5842_49393480;
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

Scope makewinc_5842_49393480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5842_49393480 = scope;
   scope->owner = (Object)channel__output_5830_49148400;
   scope->name = "winc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49393100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5845_49392980;

SignalI abus__r_49392600_rdec_5845_49392980_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__r_49392600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49392600_rdec_5845_49392980_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)rdec_5845_49392980;
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

Scope makerdec_5845_49392980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5845_49392980 = scope;
   scope->owner = (Object)channel__output_5830_49148400;
   scope->name = "rdec:45";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49392600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5849_49392480;

SignalI abus__w_49392100_wdec_5849_49392480_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__w_49392100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49392100_wdec_5849_49392480_channel__output_5830_49148400_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)wdec_5849_49392480;
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

Scope makewdec_5849_49392480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5849_49392480 = scope;
   scope->owner = (Object)channel__output_5830_49148400;
   scope->name = "wdec:49";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49392100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__output_5830_49148400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__output_5830_49148400 = scope;
   scope->owner = (Object)neural__network_58_84_50661100;
   scope->name = "channel_output:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49244900();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_49148100();
   scope->scopes[1] = makeraddr_5833_49394860();
   scope->scopes[2] = makewaddr_5836_49394400();
   scope->scopes[3] = makerinc_5839_49393980();
   scope->scopes[4] = makewinc_5842_49393480();
   scope->scopes[5] = makerdec_5845_49392980();
   scope->scopes[6] = makewdec_5849_49392480();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5853_49244780;

SignalI reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makereg__0_50456940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__a0_5853_49244780;
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

SignalI reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makereg__1_50527800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__a0_5853_49244780;
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

Scope anum_5854_49244480;

Behavior __54737580;

Behavior make__54737580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54737580 = behavior;
   behavior->owner = (Object)anum_5854_49244480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__54737880();

   return behavior;
}

Behavior __54737200;

Behavior make__54737200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54737200 = behavior;
   behavior->owner = (Object)anum_5854_49244480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5855_58115540_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _5855_58115540_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _5855_58115540_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_5855_58115540_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_5855_58115540_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_5855_58115540_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_5855_58115540_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__54737520();

   return behavior;
}

Behavior __54734780;

Behavior make__54734780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54734780 = behavior;
   behavior->owner = (Object)anum_5854_49244480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__54735280();

   return behavior;
}

Behavior __54734260;

Behavior make__54734260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54734260 = behavior;
   behavior->owner = (Object)anum_5854_49244480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5856_58314320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _5856_58314320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _5856_58314320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_5856_58314320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_5856_58314320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_5856_58314320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_5856_58314320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__54734740();

   return behavior;
}

Scope makeanum_5854_49244480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5854_49244480 = scope;
   scope->owner = (Object)channel__a0_5853_49244780;
   scope->name = "anum:54";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54737580();
   scope->behaviors[1] = make__54737200();
   scope->behaviors[2] = make__54734780();
   scope->behaviors[3] = make__54734260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5857_50112500;

Scope makeraddr_5857_50112500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5857_50112500 = scope;
   scope->owner = (Object)channel__a0_5853_49244780;
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

Scope waddr_5861_50112080;

Scope makewaddr_5861_50112080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5861_50112080 = scope;
   scope->owner = (Object)channel__a0_5853_49244780;
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

Scope rinc_5865_50111660;

SignalI abus__r_50111280_rinc_5865_50111660_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__r_50111280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50111280_rinc_5865_50111660_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)rinc_5865_50111660;
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

Behavior __55838400;

Behavior make__55838400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55838400 = behavior;
   behavior->owner = (Object)rinc_5865_50111660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50111280_rinc_5865_50111660_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   abus__r_50111280_rinc_5865_50111660_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   abus__r_50111280_rinc_5865_50111660_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(abus__r_50111280_rinc_5865_50111660_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,abus__r_50111280_rinc_5865_50111660_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
abus__r_50111280_rinc_5865_50111660_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[abus__r_50111280_rinc_5865_50111660_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__55838680();

   return behavior;
}

Behavior __55837980;

Behavior make__55837980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55837980 = behavior;
   behavior->owner = (Object)rinc_5865_50111660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5868_48998780_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _5868_48998780_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _5868_48998780_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_5868_48998780_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_5868_48998780_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_5868_48998780_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_5868_48998780_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__55838360();

   return behavior;
}

Behavior __55837800;

Behavior make__55837800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55837800 = behavior;
   behavior->owner = (Object)rinc_5865_50111660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[reg__0_50456940_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[reg__1_50527800_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__54732620();

   return behavior;
}

Scope makerinc_5865_50111660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5865_50111660 = scope;
   scope->owner = (Object)channel__a0_5853_49244780;
   scope->name = "rinc:65";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50111280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55838400();
   scope->behaviors[1] = make__55837980();
   scope->behaviors[2] = make__55837800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5869_50412340;

SignalI abus__w_50411960_winc_5869_50412340_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__w_50411960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50411960_winc_5869_50412340_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)winc_5869_50412340;
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

Scope makewinc_5869_50412340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5869_50412340 = scope;
   scope->owner = (Object)channel__a0_5853_49244780;
   scope->name = "winc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50411960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5873_50411840;

SignalI abus__r_50411460_rdec_5873_50411840_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__r_50411460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50411460_rdec_5873_50411840_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)rdec_5873_50411840;
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

Scope makerdec_5873_50411840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5873_50411840 = scope;
   scope->owner = (Object)channel__a0_5853_49244780;
   scope->name = "rdec:73";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50411460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5878_50411340;

SignalI abus__w_50410960_wdec_5878_50411340_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__w_50410960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50410960_wdec_5878_50411340_channel__a0_5853_49244780_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)wdec_5878_50411340;
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

Scope makewdec_5878_50411340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5878_50411340 = scope;
   scope->owner = (Object)channel__a0_5853_49244780;
   scope->name = "wdec:78";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50410960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5853_49244780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5853_49244780 = scope;
   scope->owner = (Object)neural__network_58_84_50661100;
   scope->name = "channel_a0:53";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50456940();
   scope->inners[1] = makereg__1_50527800();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5854_49244480();
   scope->scopes[1] = makeraddr_5857_50112500();
   scope->scopes[2] = makewaddr_5861_50112080();
   scope->scopes[3] = makerinc_5865_50111660();
   scope->scopes[4] = makewinc_5869_50412340();
   scope->scopes[5] = makerdec_5873_50411840();
   scope->scopes[6] = makewdec_5878_50411340();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48416480;

Behavior make__48416480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48416480 = behavior;
   behavior->owner = (Object)neural__network_58_84_50661100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos += 1;
   clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos = realloc(clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos,clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos*sizeof(Object));
clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos[clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos-1] = (Object)behavior;
   behavior->block = make__48420240();

   return behavior;
}

Behavior __50504160;

Behavior make__50504160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50504160 = behavior;
   behavior->owner = (Object)neural__network_58_84_50661100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos += 1;
   clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos = realloc(clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos,clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos*sizeof(Object));
clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos[clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos-1] = (Object)behavior;
   behavior->block = make__48415040();

   return behavior;
}

Behavior __48566760;

Behavior make__48566760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48566760 = behavior;
   behavior->owner = (Object)neural__network_58_84_50661100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_50527520_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   ack__inputs_50527520_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   ack__inputs_50527520_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(ack__inputs_50527520_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,ack__inputs_50527520_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
ack__inputs_50527520_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[ack__inputs_50527520_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__48567260();

   return behavior;
}

Behavior __48566480;

Behavior make__48566480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48566480 = behavior;
   behavior->owner = (Object)neural__network_58_84_50661100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_50527640_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   ack__1_50527640_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   ack__1_50527640_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(ack__1_50527640_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,ack__1_50527640_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
ack__1_50527640_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[ack__1_50527640_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[clk_50521300_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[rst_50521280_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[fill_50521220_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,req_50521240_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   req_50521240_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   req_50521240_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(req_50521240_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,req_50521240_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
req_50521240_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[req_50521240_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__0_50527660_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   ack__0_50527660_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   ack__0_50527660_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(ack__0_50527660_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,ack__0_50527660_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
ack__0_50527660_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[ack__0_50527660_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__50890800();

   return behavior;
}

Behavior __48566180;

Behavior make__48566180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48566180 = behavior;
   behavior->owner = (Object)neural__network_58_84_50661100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_57982420_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   ack__layer_57982420_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   ack__layer_57982420_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(ack__layer_57982420_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,ack__layer_57982420_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
ack__layer_57982420_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[ack__layer_57982420_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_48998940_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   ack__layer_48998940_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   ack__layer_48998940_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(ack__layer_48998940_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,ack__layer_48998940_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
ack__layer_48998940_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[ack__layer_48998940_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__50890680();

   return behavior;
}

Scope makeneural__network_58_84_50661100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   neural__network_58_84_50661100 = scope;
   scope->owner = (Object)neural__network_58_840_50526860;
   scope->name = "neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_58314200();
   scope->systemIs[1] = makelayer1_50001460();
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_50527660();
   scope->inners[1] = makeack__1_50527640();
   scope->inners[2] = makefill__inputs_50527620();
   scope->inners[3] = makeaddress__inputs_50527540();
   scope->inners[4] = makeack__inputs_50527520();
   scope->inners[5] = makerom__inputs_50894560();
   scope->inners[6] = make_5817_50894540();
   scope->inners[7] = make_5818_50894460();
   scope->inners[8] = make_5819_42133600();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__input_581_50660800();
   scope->scopes[1] = makechannel__output_5830_49148400();
   scope->scopes[2] = makechannel__a0_5853_49244780();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48416480();
   scope->behaviors[1] = make__50504160();
   scope->behaviors[2] = make__48566760();
   scope->behaviors[3] = make__48566480();
   scope->behaviors[4] = make__48566180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makeneural__network_58_840_50526860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   neural__network_58_840_50526860 = systemT;
systemT->owner = NULL;
   systemT->name = "neural_network:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_50521300();
   systemT->inputs[1] = makerst_50521280();
   systemT->inputs[2] = makereq_50521240();
   systemT->inputs[3] = makefill_50521220();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__network_50521140();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makeneural__network_58_84_50661100();

   return systemT;
}