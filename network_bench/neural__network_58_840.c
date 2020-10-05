#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT neural__network_58_840_56730500;

SignalI clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeclk_56768440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)neural__network_58_840_56730500;
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

SignalI rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makerst_56768400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)neural__network_58_840_56730500;
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

SignalI req_56768380_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makereq_56768380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_56768380_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)neural__network_58_840_56730500;
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

SignalI fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makefill_56768360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)neural__network_58_840_56730500;
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

SignalI ack__network_56768320_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeack__network_56768320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_56768320_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)neural__network_58_840_56730500;
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

Block __56280520;

Block __56280040;

void code__56280040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57619980(),ack__0_47804540_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57619780(),ack__1_47804420_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__56280040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56280040 = block;
   block->owner = (Object)__56280520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56280040;

   return block;
};

void code__56280520() {
   {
      Value cond = rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56280040();
   }
      }
   }
}

Block make__56280520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56280520 = block;
   block->owner = (Object)__56279120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56280520;

   return block;
};

Block __56303520;

Block __56303220;

Block __56302700;

void code__56302700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57619620(),_5818_49356880_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__56302700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56302700 = block;
   block->owner = (Object)__56303220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56302700;

   return block;
};

void code__56303220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57619700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56302700();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57619540(),_5817_49356960_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__56303220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56303220 = block;
   block->owner = (Object)__56303520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56303220;

   return block;
};

Block __56301640;

void code__56301640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57619420(),address__inputs_47803820_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57619360(),ack__inputs_47803600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__56301640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56301640 = block;
   block->owner = (Object)__56303520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56301640;

   return block;
};

Block __56300620;

Block __56300320;

Block __56299780;

void code__56299780() {
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
                  src0 = _5818_49356880_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57619020();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_49356880_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57618900(),_5817_49356960_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
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
            ref = rom__inputs_49357020_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
            idx = value2integer(address__inputs_47803820_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_5819_49500720_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__56299780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56299780 = block;
   block->owner = (Object)__56300320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56299780;

   return block;
};

void code__56300320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57619180();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56299780();
   }
      }
   }
}

Block make__56300320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56300320 = block;
   block->owner = (Object)__56300620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56300320;

   return block;
};

void code__56300620() {
 code__56300320();
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
                  src0 = address__inputs_47803820_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57618540();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_47803820_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__56300620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56300620 = block;
   block->owner = (Object)__56303520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56300620;

   return block;
};

Block __56731700;

void code__56731700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57618160(),ack__inputs_47803600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__56731700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56731700 = block;
   block->owner = (Object)__56303520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56731700;

   return block;
};

void code__56303520() {
 code__56303220();
   {
      Value cond = rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56301640();
   }
      }
   }
   {
      Value cond = fill__inputs_47804300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56300620();
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
               src0 = address__inputs_47803820_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57618300();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56731700();
   }
      }
   }
}

Block make__56303520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56303520 = block;
   block->owner = (Object)__56730940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56303520;

   return block;
};

Block __57265960;

void code__57265960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__inputs_47803600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_47804300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57265960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57265960 = block;
   block->owner = (Object)__57265640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57265960;

   return block;
};

Block __57136160;

void code__57136160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_47804420_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,ack__network_56768320_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,clk_58688560_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,rst_58688540_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,fill_58688520_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_56768380_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,req_58688500_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,clk_50847340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,rst_50847260_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,fill_50847240_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_47804540_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,req_50847220_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57136160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57136160 = block;
   block->owner = (Object)__57265380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57136160;

   return block;
};

Block __57136100;

void code__57136100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_58944500_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,ack__0_47804540_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_50620940_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,ack__1_47804420_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57136100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57136100 = block;
   block->owner = (Object)__57265200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57136100;

   return block;
};

Block __49819200;

Block __50390360;

void code__50390360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49530140_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,make_ref_rangeS(mem_49739340_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100,value2integer(abus__w_49529980_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value),value2integer(abus__w_49529980_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50390360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50390360 = block;
   block->owner = (Object)__49819200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50390360;

   return block;
};

void code__49819200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49739340_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
            idx = value2integer(abus__r_49530060_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49445820_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49325600_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50390360();
   }
      }
   }
}

Block make__49819200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49819200 = block;
   block->owner = (Object)__50553220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49819200;

   return block;
};

Block __57264100;

void code__57264100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49325600_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,_5817_49356960_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57264100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57264100 = block;
   block->owner = (Object)__57263940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57264100;

   return block;
};

Block __57263880;

void code__57263880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_49356960_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,trig__w_49325600_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57263880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57263880 = block;
   block->owner = (Object)__57263640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57263880;

   return block;
};

Block __57263140;

void code__57263140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49529980_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,_5818_49356880_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57263140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57263140 = block;
   block->owner = (Object)__57262900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57263140;

   return block;
};

Block __57262860;

void code__57262860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_49356880_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,abus__w_49529980_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57262860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57262860 = block;
   block->owner = (Object)__57262580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57262860;

   return block;
};

Block __57262260;

void code__57262260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49530140_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,_5819_49500720_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57262260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57262260 = block;
   block->owner = (Object)__57425800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57262260;

   return block;
};

Block __57425740;

void code__57425740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_49500720_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,dbus__w_49530140_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57425740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57425740 = block;
   block->owner = (Object)__57425400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57425740;

   return block;
};

Block __57424500;

void code__57424500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49445820_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,_5815_58944540_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57424500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57424500 = block;
   block->owner = (Object)__57439720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57424500;

   return block;
};

Block __57424440;

void code__57424440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_58944480_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,trig__r_49325620_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_58944400_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,abus__r_49530060_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57424440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57424440 = block;
   block->owner = (Object)__57439540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57424440;

   return block;
};

Block __57436100;

void code__57436100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50759420_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,_5832_56284800_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57436100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57436100 = block;
   block->owner = (Object)__57435820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57436100;

   return block;
};

Block __57435760;

void code__57435760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_56284800_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,reg__0_50759420_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57435760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57435760 = block;
   block->owner = (Object)__57435440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57435760;

   return block;
};

Block __57489080;

void code__57489080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,_5855_59102060_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57489080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57489080 = block;
   block->owner = (Object)__57488720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57489080;

   return block;
};

Block __57488640;

void code__57488640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5855_59102060_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57488640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57488640 = block;
   block->owner = (Object)__57488360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57488640;

   return block;
};

Block __57486700;

void code__57486700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,_5856_59308860_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57486700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57486700 = block;
   block->owner = (Object)__57486100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57486700;

   return block;
};

Block __57486040;

void code__57486040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5856_59308860_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57486040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57486040 = block;
   block->owner = (Object)__57485400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57486040;

   return block;
};

Block __57492080;

void code__57492080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_51056440_rinc_5865_51056820_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,_5868_50620760_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57492080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57492080 = block;
   block->owner = (Object)__57491720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57492080;

   return block;
};

Block __57491660;

void code__57491660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5868_50620760_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,abus__r_51056440_rinc_5865_51056820_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57491660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57491660 = block;
   block->owner = (Object)__57491460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57491660;

   return block;
};

Block __57483420;

void code__57483420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,_5866_51073520_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,_5867_50620980_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__57483420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57483420 = block;
   block->owner = (Object)__57515760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57483420;

   return block;
};

Value make__57622200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57622180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57619980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57619780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57619700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57619620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57619540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57619420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57619360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57619180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57619020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57618900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57618540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57618300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57618160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope neural__network_58_84_49127360;

SignalI ack__0_47804540_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeack__0_47804540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_47804540_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)neural__network_58_84_49127360;
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

SignalI ack__1_47804420_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeack__1_47804420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_47804420_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)neural__network_58_84_49127360;
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

SignalI fill__inputs_47804300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makefill__inputs_47804300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_47804300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)neural__network_58_84_49127360;
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

SignalI address__inputs_47803820_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeaddress__inputs_47803820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_47803820_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)neural__network_58_84_49127360;
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

SignalI ack__inputs_47803600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeack__inputs_47803600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_47803600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)neural__network_58_84_49127360;
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

SignalI rom__inputs_49357020_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makerom__inputs_49357020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rom__inputs_49357020_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)neural__network_58_84_49127360;
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
         src0 = make__57622200();
         src1 = make__57622180();
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

SignalI _5817_49356960_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI make_5817_49356960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_49356960_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)neural__network_58_84_49127360;
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

SignalI _5818_49356880_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI make_5818_49356880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_49356880_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)neural__network_58_84_49127360;
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

SignalI _5819_49500720_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI make_5819_49500720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_49500720_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)neural__network_58_84_49127360;
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

SystemI layer0_59308720;

SystemI makelayer0_59308720() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_59308720 = systemI;
   systemI->owner = (Object)neural__network_58_84_49127360;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_58690600;

   return systemI;
};

SystemI layer1_56284660;

SystemI makelayer1_56284660() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_56284660 = systemI;
   systemI->owner = (Object)neural__network_58_84_49127360;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_50828740;

   return systemI;
};

Scope channel__input_581_49127060;

SignalI trig__r_49325620_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI maketrig__r_49325620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49325620_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)channel__input_581_49127060;
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

SignalI trig__w_49325600_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI maketrig__w_49325600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49325600_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)channel__input_581_49127060;
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

SignalI dbus__r_49445820_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makedbus__r_49445820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49445820_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)channel__input_581_49127060;
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

SignalI dbus__w_49530140_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makedbus__w_49530140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49530140_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)channel__input_581_49127060;
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

SignalI abus__r_49530060_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeabus__r_49530060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49530060_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)channel__input_581_49127060;
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

SignalI abus__w_49529980_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeabus__w_49529980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49529980_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)channel__input_581_49127060;
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

SignalI mem_49739340_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makemem_49739340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49739340_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)channel__input_581_49127060;
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

Scope raddr_582_49126760;

Scope makeraddr_582_49126760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_49126760 = scope;
   scope->owner = (Object)channel__input_581_49127060;
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

Scope waddr_587_49126340;

Scope makewaddr_587_49126340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_49126340 = scope;
   scope->owner = (Object)channel__input_581_49127060;
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

Scope rinc_5812_49125920;

Behavior __57439720;

Behavior make__57439720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57439720 = behavior;
   behavior->owner = (Object)rinc_5812_49125920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49445820_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   dbus__r_49445820_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   dbus__r_49445820_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(dbus__r_49445820_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,dbus__r_49445820_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
dbus__r_49445820_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[dbus__r_49445820_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57424500();

   return behavior;
}

Behavior __57439540;

Behavior make__57439540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57439540 = behavior;
   behavior->owner = (Object)rinc_5812_49125920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_58944480_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   _5813_58944480_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   _5813_58944480_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(_5813_58944480_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,_5813_58944480_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
_5813_58944480_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[_5813_58944480_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_58944400_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   _5814_58944400_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   _5814_58944400_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(_5814_58944400_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,_5814_58944400_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
_5814_58944400_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[_5814_58944400_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57424440();

   return behavior;
}

Scope makerinc_5812_49125920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_49125920 = scope;
   scope->owner = (Object)channel__input_581_49127060;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57439720();
   scope->behaviors[1] = make__57439540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_49327120;

Scope makewinc_5816_49327120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_49327120 = scope;
   scope->owner = (Object)channel__input_581_49127060;
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

Scope rdec_5820_49326700;

Scope makerdec_5820_49326700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_49326700 = scope;
   scope->owner = (Object)channel__input_581_49127060;
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

Scope wdec_5825_49326220;

Scope makewdec_5825_49326220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_49326220 = scope;
   scope->owner = (Object)channel__input_581_49127060;
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

Behavior __50553220;

Behavior make__50553220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50553220 = behavior;
   behavior->owner = (Object)channel__input_581_49127060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_neg += 1;
   clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->neg = realloc(clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->neg,clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_neg*sizeof(Object));
clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->neg[clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_neg-1] = (Object)behavior;
   behavior->block = make__49819200();

   return behavior;
}

Behavior __57263940;

Behavior make__57263940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57263940 = behavior;
   behavior->owner = (Object)channel__input_581_49127060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49325600_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   trig__w_49325600_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   trig__w_49325600_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(trig__w_49325600_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,trig__w_49325600_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
trig__w_49325600_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[trig__w_49325600_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57264100();

   return behavior;
}

Behavior __57263640;

Behavior make__57263640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57263640 = behavior;
   behavior->owner = (Object)channel__input_581_49127060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_49356960_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   _5817_49356960_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   _5817_49356960_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(_5817_49356960_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,_5817_49356960_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
_5817_49356960_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[_5817_49356960_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57263880();

   return behavior;
}

Behavior __57262900;

Behavior make__57262900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57262900 = behavior;
   behavior->owner = (Object)channel__input_581_49127060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49529980_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   abus__w_49529980_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   abus__w_49529980_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(abus__w_49529980_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,abus__w_49529980_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
abus__w_49529980_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[abus__w_49529980_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57263140();

   return behavior;
}

Behavior __57262580;

Behavior make__57262580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57262580 = behavior;
   behavior->owner = (Object)channel__input_581_49127060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_49356880_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   _5818_49356880_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   _5818_49356880_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(_5818_49356880_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,_5818_49356880_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
_5818_49356880_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[_5818_49356880_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57262860();

   return behavior;
}

Behavior __57425800;

Behavior make__57425800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57425800 = behavior;
   behavior->owner = (Object)channel__input_581_49127060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49530140_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   dbus__w_49530140_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   dbus__w_49530140_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(dbus__w_49530140_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,dbus__w_49530140_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
dbus__w_49530140_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[dbus__w_49530140_channel__input_581_49127060_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57262260();

   return behavior;
}

Behavior __57425400;

Behavior make__57425400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57425400 = behavior;
   behavior->owner = (Object)channel__input_581_49127060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_49500720_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   _5819_49500720_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   _5819_49500720_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(_5819_49500720_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,_5819_49500720_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
_5819_49500720_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[_5819_49500720_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57425740();

   return behavior;
}

Scope makechannel__input_581_49127060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__input_581_49127060 = scope;
   scope->owner = (Object)neural__network_58_84_49127360;
   scope->name = "channel_input:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49325620();
   scope->inners[1] = maketrig__w_49325600();
   scope->inners[2] = makedbus__r_49445820();
   scope->inners[3] = makedbus__w_49530140();
   scope->inners[4] = makeabus__r_49530060();
   scope->inners[5] = makeabus__w_49529980();
   scope->inners[6] = makemem_49739340();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_49126760();
   scope->scopes[1] = makewaddr_587_49126340();
   scope->scopes[2] = makerinc_5812_49125920();
   scope->scopes[3] = makewinc_5816_49327120();
   scope->scopes[4] = makerdec_5820_49326700();
   scope->scopes[5] = makewdec_5825_49326220();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50553220();
   scope->behaviors[1] = make__57263940();
   scope->behaviors[2] = make__57263640();
   scope->behaviors[3] = make__57262900();
   scope->behaviors[4] = make__57262580();
   scope->behaviors[5] = make__57425800();
   scope->behaviors[6] = make__57425400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__output_5830_50553100;

SignalI reg__0_50759420_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makereg__0_50759420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50759420_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)channel__output_5830_50553100;
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

Scope anum_5831_50577340;

Behavior __57435820;

Behavior make__57435820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57435820 = behavior;
   behavior->owner = (Object)anum_5831_50577340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50759420_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   reg__0_50759420_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   reg__0_50759420_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(reg__0_50759420_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,reg__0_50759420_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
reg__0_50759420_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[reg__0_50759420_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57436100();

   return behavior;
}

Behavior __57435440;

Behavior make__57435440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57435440 = behavior;
   behavior->owner = (Object)anum_5831_50577340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_56284800_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   _5832_56284800_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   _5832_56284800_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(_5832_56284800_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,_5832_56284800_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
_5832_56284800_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[_5832_56284800_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57435760();

   return behavior;
}

Scope makeanum_5831_50577340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_50577340 = scope;
   scope->owner = (Object)channel__output_5830_50553100;
   scope->name = "anum:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57435820();
   scope->behaviors[1] = make__57435440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5833_50715900;

Scope makeraddr_5833_50715900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5833_50715900 = scope;
   scope->owner = (Object)channel__output_5830_50553100;
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

Scope waddr_5836_50715480;

Scope makewaddr_5836_50715480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5836_50715480 = scope;
   scope->owner = (Object)channel__output_5830_50553100;
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

Scope rinc_5839_50715060;

SignalI abus__r_50714680_rinc_5839_50715060_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeabus__r_50714680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50714680_rinc_5839_50715060_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)rinc_5839_50715060;
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

Scope makerinc_5839_50715060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5839_50715060 = scope;
   scope->owner = (Object)channel__output_5830_50553100;
   scope->name = "rinc:39";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50714680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5842_50714560;

SignalI abus__w_50714180_winc_5842_50714560_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeabus__w_50714180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50714180_winc_5842_50714560_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)winc_5842_50714560;
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

Scope makewinc_5842_50714560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5842_50714560 = scope;
   scope->owner = (Object)channel__output_5830_50553100;
   scope->name = "winc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50714180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5845_50714060;

SignalI abus__r_50713680_rdec_5845_50714060_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeabus__r_50713680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50713680_rdec_5845_50714060_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)rdec_5845_50714060;
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

Scope makerdec_5845_50714060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5845_50714060 = scope;
   scope->owner = (Object)channel__output_5830_50553100;
   scope->name = "rdec:45";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50713680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5849_50713560;

SignalI abus__w_50713180_wdec_5849_50713560_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeabus__w_50713180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50713180_wdec_5849_50713560_channel__output_5830_50553100_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)wdec_5849_50713560;
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

Scope makewdec_5849_50713560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5849_50713560 = scope;
   scope->owner = (Object)channel__output_5830_50553100;
   scope->name = "wdec:49";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50713180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__output_5830_50553100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__output_5830_50553100 = scope;
   scope->owner = (Object)neural__network_58_84_49127360;
   scope->name = "channel_output:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50759420();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_50577340();
   scope->scopes[1] = makeraddr_5833_50715900();
   scope->scopes[2] = makewaddr_5836_50715480();
   scope->scopes[3] = makerinc_5839_50715060();
   scope->scopes[4] = makewinc_5842_50714560();
   scope->scopes[5] = makerdec_5845_50714060();
   scope->scopes[6] = makewdec_5849_50713560();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5853_50759300;

SignalI reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makereg__0_47527740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)channel__a0_5853_50759300;
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

SignalI reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makereg__1_47806520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)channel__a0_5853_50759300;
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

Scope anum_5854_50759000;

Behavior __57488720;

Behavior make__57488720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57488720 = behavior;
   behavior->owner = (Object)anum_5854_50759000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57489080();

   return behavior;
}

Behavior __57488360;

Behavior make__57488360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57488360 = behavior;
   behavior->owner = (Object)anum_5854_50759000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5855_59102060_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   _5855_59102060_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   _5855_59102060_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(_5855_59102060_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,_5855_59102060_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
_5855_59102060_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[_5855_59102060_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57488640();

   return behavior;
}

Behavior __57486100;

Behavior make__57486100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57486100 = behavior;
   behavior->owner = (Object)anum_5854_50759000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57486700();

   return behavior;
}

Behavior __57485400;

Behavior make__57485400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57485400 = behavior;
   behavior->owner = (Object)anum_5854_50759000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5856_59308860_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   _5856_59308860_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   _5856_59308860_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(_5856_59308860_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,_5856_59308860_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
_5856_59308860_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[_5856_59308860_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57486040();

   return behavior;
}

Scope makeanum_5854_50759000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5854_50759000 = scope;
   scope->owner = (Object)channel__a0_5853_50759300;
   scope->name = "anum:54";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57488720();
   scope->behaviors[1] = make__57488360();
   scope->behaviors[2] = make__57486100();
   scope->behaviors[3] = make__57485400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5857_51057660;

Scope makeraddr_5857_51057660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5857_51057660 = scope;
   scope->owner = (Object)channel__a0_5853_50759300;
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

Scope waddr_5861_51057240;

Scope makewaddr_5861_51057240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5861_51057240 = scope;
   scope->owner = (Object)channel__a0_5853_50759300;
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

Scope rinc_5865_51056820;

SignalI abus__r_51056440_rinc_5865_51056820_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeabus__r_51056440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51056440_rinc_5865_51056820_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)rinc_5865_51056820;
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

Behavior __57491720;

Behavior make__57491720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57491720 = behavior;
   behavior->owner = (Object)rinc_5865_51056820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_51056440_rinc_5865_51056820_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   abus__r_51056440_rinc_5865_51056820_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   abus__r_51056440_rinc_5865_51056820_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(abus__r_51056440_rinc_5865_51056820_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,abus__r_51056440_rinc_5865_51056820_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
abus__r_51056440_rinc_5865_51056820_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[abus__r_51056440_rinc_5865_51056820_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57492080();

   return behavior;
}

Behavior __57491460;

Behavior make__57491460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57491460 = behavior;
   behavior->owner = (Object)rinc_5865_51056820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5868_50620760_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   _5868_50620760_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   _5868_50620760_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(_5868_50620760_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,_5868_50620760_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
_5868_50620760_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[_5868_50620760_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57491660();

   return behavior;
}

Behavior __57515760;

Behavior make__57515760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57515760 = behavior;
   behavior->owner = (Object)rinc_5865_51056820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[reg__0_47527740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[reg__1_47806520_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57483420();

   return behavior;
}

Scope makerinc_5865_51056820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5865_51056820 = scope;
   scope->owner = (Object)channel__a0_5853_50759300;
   scope->name = "rinc:65";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51056440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57491720();
   scope->behaviors[1] = make__57491460();
   scope->behaviors[2] = make__57515760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5869_45543960;

SignalI abus__w_45644660_winc_5869_45543960_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeabus__w_45644660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45644660_winc_5869_45543960_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)winc_5869_45543960;
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

Scope makewinc_5869_45543960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5869_45543960 = scope;
   scope->owner = (Object)channel__a0_5853_50759300;
   scope->name = "winc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45644660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5873_45637640;

SignalI abus__r_45659940_rdec_5873_45637640_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeabus__r_45659940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45659940_rdec_5873_45637640_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)rdec_5873_45637640;
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

Scope makerdec_5873_45637640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5873_45637640 = scope;
   scope->owner = (Object)channel__a0_5853_50759300;
   scope->name = "rdec:73";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45659940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5878_45659740;

SignalI abus__w_45657960_wdec_5878_45659740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeabus__w_45657960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45657960_wdec_5878_45659740_channel__a0_5853_50759300_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)wdec_5878_45659740;
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

Scope makewdec_5878_45659740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5878_45659740 = scope;
   scope->owner = (Object)channel__a0_5853_50759300;
   scope->name = "wdec:78";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45657960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5853_50759300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5853_50759300 = scope;
   scope->owner = (Object)neural__network_58_84_49127360;
   scope->name = "channel_a0:53";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47527740();
   scope->inners[1] = makereg__1_47806520();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5854_50759000();
   scope->scopes[1] = makeraddr_5857_51057660();
   scope->scopes[2] = makewaddr_5861_51057240();
   scope->scopes[3] = makerinc_5865_51056820();
   scope->scopes[4] = makewinc_5869_45543960();
   scope->scopes[5] = makerdec_5873_45637640();
   scope->scopes[6] = makewdec_5878_45659740();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56279120;

Behavior make__56279120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56279120 = behavior;
   behavior->owner = (Object)neural__network_58_84_49127360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_pos += 1;
   clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->pos = realloc(clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->pos,clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_pos*sizeof(Object));
clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->pos[clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_pos-1] = (Object)behavior;
   behavior->block = make__56280520();

   return behavior;
}

Behavior __56730940;

Behavior make__56730940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56730940 = behavior;
   behavior->owner = (Object)neural__network_58_84_49127360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_pos += 1;
   clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->pos = realloc(clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->pos,clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_pos*sizeof(Object));
clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->pos[clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_pos-1] = (Object)behavior;
   behavior->block = make__56303520();

   return behavior;
}

Behavior __57265640;

Behavior make__57265640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57265640 = behavior;
   behavior->owner = (Object)neural__network_58_84_49127360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_47803600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   ack__inputs_47803600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   ack__inputs_47803600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(ack__inputs_47803600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,ack__inputs_47803600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
ack__inputs_47803600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[ack__inputs_47803600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57265960();

   return behavior;
}

Behavior __57265380;

Behavior make__57265380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57265380 = behavior;
   behavior->owner = (Object)neural__network_58_84_49127360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_47804420_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   ack__1_47804420_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   ack__1_47804420_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(ack__1_47804420_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,ack__1_47804420_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
ack__1_47804420_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[ack__1_47804420_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[clk_56768440_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[rst_56768400_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[fill_56768360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,req_56768380_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   req_56768380_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   req_56768380_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(req_56768380_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,req_56768380_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
req_56768380_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[req_56768380_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__0_47804540_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   ack__0_47804540_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   ack__0_47804540_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(ack__0_47804540_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,ack__0_47804540_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
ack__0_47804540_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[ack__0_47804540_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57136160();

   return behavior;
}

Behavior __57265200;

Behavior make__57265200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57265200 = behavior;
   behavior->owner = (Object)neural__network_58_84_49127360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_58944500_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   ack__layer_58944500_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   ack__layer_58944500_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(ack__layer_58944500_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,ack__layer_58944500_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
ack__layer_58944500_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[ack__layer_58944500_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_50620940_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   ack__layer_50620940_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   ack__layer_50620940_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(ack__layer_50620940_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,ack__layer_50620940_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
ack__layer_50620940_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[ack__layer_50620940_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__57136100();

   return behavior;
}

Scope makeneural__network_58_84_49127360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   neural__network_58_84_49127360 = scope;
   scope->owner = (Object)neural__network_58_840_56730500;
   scope->name = "neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_59308720();
   scope->systemIs[1] = makelayer1_56284660();
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_47804540();
   scope->inners[1] = makeack__1_47804420();
   scope->inners[2] = makefill__inputs_47804300();
   scope->inners[3] = makeaddress__inputs_47803820();
   scope->inners[4] = makeack__inputs_47803600();
   scope->inners[5] = makerom__inputs_49357020();
   scope->inners[6] = make_5817_49356960();
   scope->inners[7] = make_5818_49356880();
   scope->inners[8] = make_5819_49500720();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__input_581_49127060();
   scope->scopes[1] = makechannel__output_5830_50553100();
   scope->scopes[2] = makechannel__a0_5853_50759300();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56279120();
   scope->behaviors[1] = make__56730940();
   scope->behaviors[2] = make__57265640();
   scope->behaviors[3] = make__57265380();
   scope->behaviors[4] = make__57265200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makeneural__network_58_840_56730500() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   neural__network_58_840_56730500 = systemT;
systemT->owner = NULL;
   systemT->name = "neural_network:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_56768440();
   systemT->inputs[1] = makerst_56768400();
   systemT->inputs[2] = makereq_56768380();
   systemT->inputs[3] = makefill_56768360();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__network_56768320();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makeneural__network_58_84_49127360();

   return systemT;
}