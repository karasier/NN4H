#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_60587520;

SignalI clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeclk_60585140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_840_60587520;
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

SignalI rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makerst_60585120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_840_60587520;
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

SignalI fill_60585100_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makefill_60585100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_60585100_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_840_60587520;
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

SignalI req_60585080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makereq_60585080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_60585080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_840_60587520;
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

SignalI _5866_60804360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_5866_60804360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5866_60804360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_840_60587520;
   signalI->name = ":66";
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

SignalI _5867_60950080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_5867_60950080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_60950080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_840_60587520;
   signalI->name = ":67";
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

SignalI ack__layer_60950040_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeack__layer_60950040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_60950040_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_840_60587520;
   signalI->name = "ack_layer";
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

SignalI _5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_5868_60949940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_840_60587520;
   signalI->name = ":68";
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

SignalI _5832_61202360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_5832_61202360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_61202360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_840_60587520;
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

Block __59178240;

Block __59177580;

Block __59177380;

void code__59177380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_48579920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,value__z0_49596220_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53519880(),flag__z0_49877080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__59177380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59177380 = block;
   block->owner = (Object)__59177580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59177380;

   return block;
};

void code__59177580() {
 code__59177380();
}

Block make__59177580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59177580 = block;
   block->owner = (Object)__59178240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59177580;

   return block;
};

Block __59178040;

void code__59178040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53519760(),flag__z0_49877080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__59178040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59178040 = block;
   block->owner = (Object)__59178240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59178040;

   return block;
};

void code__59178240() {
   {
      Value cond = ack__add_60843920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59177580();
   }
   else {
  code__59178040();
   }
      }
   }
}

Block make__59178240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59178240 = block;
   block->owner = (Object)__59405160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59178240;

   return block;
};

Block __59405040;

Block __59404820;

Block __59404660;

void code__59404660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_49877140_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_5832_61202360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53519580(),ack__a0_49877060_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__59404660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59404660 = block;
   block->owner = (Object)__59404820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59404660;

   return block;
};

void code__59404820() {
 code__59404660();
}

Block make__59404820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59404820 = block;
   block->owner = (Object)__59405040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59404820;

   return block;
};

void code__59405040() {
   {
      Value cond = flag__z0_49877080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59404820();
   }
      }
   }
}

Block make__59405040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59405040 = block;
   block->owner = (Object)__59727140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59405040;

   return block;
};

Block __59727020;

Block __59726860;

Block __59726480;

void code__59726480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53519320(),_58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__59726480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59726480 = block;
   block->owner = (Object)__59726860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59726480;

   return block;
};

void code__59726860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53519480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59726480();
   }
      }
   }
}

Block make__59726860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59726860 = block;
   block->owner = (Object)__59727020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59726860;

   return block;
};

Block __59725900;

Block __59725300;

void code__59725300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53518960(),_58269_53557420_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__59725300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59725300 = block;
   block->owner = (Object)__59725900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59725300;

   return block;
};

void code__59725900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53519080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59725300();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53518700(),_58268_53557580_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__59725900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59725900 = block;
   block->owner = (Object)__59727020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59725900;

   return block;
};

Block __59724520;

void code__59724520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53518360(),address__weights0_49876860_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53559140(),address__bias_49876720_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__59724520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59724520 = block;
   block->owner = (Object)__59727020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59724520;

   return block;
};

Block __59723620;

Block __59723360;

Block __59723000;

void code__59723000() {
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
                  src0 = _58269_53557420_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53558420();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58269_53557420_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53558240(),_58268_53557580_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
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
            ref = w0_52715720_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
            idx = value2integer(address__weights0_49876860_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58270_51478000_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__59723000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59723000 = block;
   block->owner = (Object)__59723360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59723000;

   return block;
};

void code__59723360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53558700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59723000();
   }
      }
   }
}

Block make__59723360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59723360 = block;
   block->owner = (Object)__59723620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59723360;

   return block;
};

Block __60182680;

Block __60182320;

Block __60181600;

void code__60181600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_53557600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
            idx = value2integer(address__bias_49876720_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58324_50176080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__60181600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60181600 = block;
   block->owner = (Object)__60182320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60181600;

   return block;
};

void code__60182320() {
{
      Value value = _58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__53556040())) {
    code__60181600();
         }
      }
   }
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
                  src0 = _58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53555160();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__60182320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60182320 = block;
   block->owner = (Object)__60182680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60182320;

   return block;
};

void code__60182680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53556200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60182320();
   }
      }
   }
}

Block make__60182680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60182680 = block;
   block->owner = (Object)__59723620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60182680;

   return block;
};

void code__59723620() {
 code__59723360();
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
                  src0 = address__weights0_49876860_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53556800();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights0_49876860_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
 code__60182680();
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
                  src0 = address__bias_49876720_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53553920();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_49876720_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__59723620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59723620 = block;
   block->owner = (Object)__59727020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59723620;

   return block;
};

Block __60565060;

void code__60565060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53553560(),address__weights0_49876860_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__60565060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60565060 = block;
   block->owner = (Object)__59727020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60565060;

   return block;
};

Block __60564120;

void code__60564120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53553220(),address__bias_49876720_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__60564120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60564120 = block;
   block->owner = (Object)__59727020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60564120;

   return block;
};

void code__59727020() {
 code__59726860();
 code__59725900();
   {
      Value cond = rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59724520();
   }
      }
   }
   {
      Value cond = fill_60585100_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59723620();
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
               src0 = address__weights0_49876860_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53553760();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60565060();
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
               src0 = address__bias_49876720_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53553360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60564120();
   }
      }
   }
}

Block make__59727020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59727020 = block;
   block->owner = (Object)__60587840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59727020;

   return block;
};

Block __52980860;

void code__52980860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_60585080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_60843940_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_60843980_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__52980860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52980860 = block;
   block->owner = (Object)__52979680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52980860;

   return block;
};

Block __52981520;

void code__52981520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,clk_53206800_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_60843960_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,ack_53206780_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,rst_53206760_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_49596220_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,z__value_58455940_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_49877060_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,ack__layer_60950040_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__52981520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52981520 = block;
   block->owner = (Object)__53029320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52981520;

   return block;
};

Block __52981280;

void code__52981280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_53206720_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,ack__mac_60843940_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_58585140_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,value__a0_49877140_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__52981280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52981280 = block;
   block->owner = (Object)__53029000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52981280;

   return block;
};

Block __60379200;

Block __60779880;

void code__60779880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_59837480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,make_ref_rangeS(mem_60047480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640,value2integer(abus__w_59837320_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value),value2integer(abus__w_59837320_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__60779880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60779880 = block;
   block->owner = (Object)__60379200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60779880;

   return block;
};

void code__60379200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_60047480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
            idx = value2integer(abus__r_59837400_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_59725580_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_59531800_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60779880();
   }
      }
   }
}

Block make__60379200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60379200 = block;
   block->owner = (Object)__61196720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60379200;

   return block;
};

Block __53027480;

void code__53027480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_59725580_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_58266_61011260_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53027480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53027480 = block;
   block->owner = (Object)__53027120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53027480;

   return block;
};

Block __53026960;

void code__53026960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_61011260_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,dbus__r_59725580_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53026960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53026960 = block;
   block->owner = (Object)__53059300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53026960;

   return block;
};

Block __53058500;

void code__53058500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_59531820_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_58264_61011240_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53058500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53058500 = block;
   block->owner = (Object)__53057540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53058500;

   return block;
};

Block __53057300;

void code__53057300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58264_61011240_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,trig__r_59531820_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53057300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53057300 = block;
   block->owner = (Object)__53056600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53057300;

   return block;
};

Block __53056180;

void code__53056180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_59837400_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_58265_61011160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53056180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53056180 = block;
   block->owner = (Object)__53055880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53056180;

   return block;
};

Block __53055800;

void code__53055800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58265_61011160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,abus__r_59837400_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53055800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53055800 = block;
   block->owner = (Object)__53055120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53055800;

   return block;
};

Block __53053740;

void code__53053740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_59531800_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_58268_53557580_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53053740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53053740 = block;
   block->owner = (Object)__53053180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53053740;

   return block;
};

Block __53053140;

void code__53053140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_53557580_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,trig__w_59531800_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53053140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53053140 = block;
   block->owner = (Object)__53052980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53053140;

   return block;
};

Block __53052520;

void code__53052520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_59837320_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_58269_53557420_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53052520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53052520 = block;
   block->owner = (Object)__53052260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53052520;

   return block;
};

Block __53052200;

void code__53052200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_53557420_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,abus__w_59837320_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53052200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53052200 = block;
   block->owner = (Object)__53075520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53052200;

   return block;
};

Block __53074680;

void code__53074680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_59837480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_58270_51478000_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53074680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53074680 = block;
   block->owner = (Object)__53074340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53074680;

   return block;
};

Block __53074280;

void code__53074280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_51478000_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,dbus__w_59837480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53074280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53074280 = block;
   block->owner = (Object)__53073880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53074280;

   return block;
};

Block __53070240;

void code__53070240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47495700_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_58283_61218340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53070240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53070240 = block;
   block->owner = (Object)__53070020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53070240;

   return block;
};

Block __53069920;

void code__53069920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_61218340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,reg__0_47495700_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53069920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53069920 = block;
   block->owner = (Object)__53069580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53069920;

   return block;
};

Block __51312260;

Block __51311740;

Block __51310960;

void code__51310960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53480960(),_58265_61011160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__51310960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51310960 = block;
   block->owner = (Object)__51311740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51310960;

   return block;
};

void code__51311740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53481080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51310960();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53480580(),_58264_61011240_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__51311740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51311740 = block;
   block->owner = (Object)__51312260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51311740;

   return block;
};

Block __51308720;

Block __51307400;

void code__51307400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53479980(),_5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__51307400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51307400 = block;
   block->owner = (Object)__51308720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51307400;

   return block;
};

void code__51308720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53480140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51307400();
   }
      }
   }
}

Block make__51308720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51308720 = block;
   block->owner = (Object)__51312260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51308720;

   return block;
};

Block __51329460;

void code__51329460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53479360(),rvok_51312480_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53479240(),lvok0_51312500_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53479180(),av0_50036540_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__51329460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51329460 = block;
   block->owner = (Object)__51312260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51329460;

   return block;
};

Block __51590720;

Block __51590260;

Block __51589380;

Block __51588320;

void code__51588320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5866_60804360_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,rv_51312520_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__51588320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51588320 = block;
   block->owner = (Object)__51589380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51588320;

   return block;
};

Block __52124560;

void code__52124560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_60950080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,rv_51312520_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__52124560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52124560 = block;
   block->owner = (Object)__51589380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52124560;

   return block;
};

void code__51589380() {
{
      Value value = _5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__53478600())) {
    code__51588320();
         }
         else if (value2integer(value) == value2integer(make__53478120())) {
    code__52124560();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53477840(),rvok_51312480_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
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
                  src0 = _5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53477620();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5868_60949940_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__51589380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51589380 = block;
   block->owner = (Object)__51590260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51589380;

   return block;
};

void code__51590260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53478860();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51589380();
   }
      }
   }
}

Block make__51590260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51590260 = block;
   block->owner = (Object)__51590720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51590260;

   return block;
};

Block __52832560;

Block __52831780;

Block __52830600;

void code__52830600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_61011260_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,lv0_49766220_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53508740(),lvok0_51312500_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__52830600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52830600 = block;
   block->owner = (Object)__52831780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52830600;

   return block;
};

void code__52831780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58264_61011240_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53509540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52830600();
   }
      }
   }
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
                  src0 = _58265_61011160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53508240();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58265_61011160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53507020(),_58264_61011240_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__52831780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52831780 = block;
   block->owner = (Object)__52832560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52831780;

   return block;
};

void code__52832560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53509840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52831780();
   }
      }
   }
}

Block make__52832560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52832560 = block;
   block->owner = (Object)__51590720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52832560;

   return block;
};

Block __53333100;

Block __53331580;

Block __53331200;

void code__53331200() {
}

Block make__53331200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53331200 = block;
   block->owner = (Object)__53331580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53331200;

   return block;
};

Block __58453800;

void code__58453800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_50036540_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_58283_61218340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__58453800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58453800 = block;
   block->owner = (Object)__53331580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58453800;

   return block;
};

void code__53331580() {
 code__53331200();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_50036540_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0,src1,dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = lv0_49766220_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_51312520_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53504740();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_50036540_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
 code__58453800();
}

Block make__53331580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53331580 = block;
   block->owner = (Object)__53333100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53331580;

   return block;
};

void code__53333100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53505720(),ack_60843960_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53505420(),run_51312440_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
 code__53331580();
}

Block make__53333100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53333100 = block;
   block->owner = (Object)__51590720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53333100;

   return block;
};

void code__51590720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53479020(),run_51312440_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
 code__51590260();
 code__52832560();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_51312500_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
         src1 = rvok_51312480_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53333100();
   }
      }
   }
}

Block make__51590720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51590720 = block;
   block->owner = (Object)__51312260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51590720;

   return block;
};

void code__51312260() {
 code__51311740();
 code__51308720();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53479720(),ack_60843960_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53479560(),run_51312440_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_51312440_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51329460();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_60843980_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
         src1 = run_51312440_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51590720();
   }
      }
   }
}

Block make__51312260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51312260 = block;
   block->owner = (Object)__58697460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51312260;

   return block;
};

Block __53170900;

void code__53170900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_58313_47928620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53170900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53170900 = block;
   block->owner = (Object)__53170700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53170900;

   return block;
};

Block __53170660;

void code__53170660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_47928620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53170660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53170660 = block;
   block->owner = (Object)__53170420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53170660;

   return block;
};

Block __53169700;

void code__53169700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_58324_50176080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53169700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53169700 = block;
   block->owner = (Object)__53169220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53169700;

   return block;
};

Block __53169140;

void code__53169140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58324_50176080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53169140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53169140 = block;
   block->owner = (Object)__53168800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53169140;

   return block;
};

Block __53189300;

void code__53189300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_58752100_winc_58323_58752480_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53189300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53189300 = block;
   block->owner = (Object)__53188520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53189300;

   return block;
};

Block __53188480;

void code__53188480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,abus__w_58752100_winc_58323_58752480_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53188480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53188480 = block;
   block->owner = (Object)__53188000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53188480;

   return block;
};

Block __53185540;

void code__53185540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_59388040_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,_58336_48579920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53185540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53185540 = block;
   block->owner = (Object)__53185200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53185540;

   return block;
};

Block __53184620;

void code__53184620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_48579920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,reg__0_59388040_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53184620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53184620 = block;
   block->owner = (Object)__53184180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53184620;

   return block;
};

Block __59990760;

Block __60022340;

Block __60022020;

void code__60022020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_61218340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,lv0_59790540_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53525000(),lvok0_59990960_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__60022020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60022020 = block;
   block->owner = (Object)__60022340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60022020;

   return block;
};

Block __60168440;

void code__60168440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_47928620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,rv0_59990980_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53524520(),rvok0_59990940_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__60168440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60168440 = block;
   block->owner = (Object)__60022340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60168440;

   return block;
};

Block __60330660;

Block __60330100;

void code__60330100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_59790540_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      src1 = rv0_59990980_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58336_48579920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__60330100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60330100 = block;
   block->owner = (Object)__60330660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60330100;

   return block;
};

void code__60330660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53524280(),run_59990920_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53524200(),ack__add_60843920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
 code__60330100();
}

Block make__60330660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60330660 = block;
   block->owner = (Object)__60022340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60330660;

   return block;
};

void code__60022340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53525300(),run_59990920_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
 code__60022020();
 code__60168440();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_59990960_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
         src1 = rvok0_59990940_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60330660();
   }
      }
   }
}

Block make__60022340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60022340 = block;
   block->owner = (Object)__59990760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60022340;

   return block;
};

Block __59990220;

void code__59990220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53523560(),lvok0_59990960_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53523500(),rvok0_59990940_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__59990220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59990220 = block;
   block->owner = (Object)__59990760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59990220;

   return block;
};

void code__59990760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53526260(),ack__add_60843920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53525580(),run_59990920_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_60843940_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
         src1 = run_59990920_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60022340();
   }
   else {
  code__59990220();
   }
      }
   }
}

Block make__59990760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59990760 = block;
   block->owner = (Object)__60844120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59990760;

   return block;
};

Value make__53523240() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53523220() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53522640() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53481080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53480960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53480580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53480140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53479980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53479720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53479560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53479360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53479240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53479180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53479020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53478860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53478600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53478120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53477840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53477620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53509840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53509540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53508740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53508240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53507020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53505720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53505420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53504740() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53526260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53525580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53525300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53525000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53524520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53524280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53524200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53523560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53523500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53519880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53519760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53519580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53519480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53519320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__53519080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53518960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53518700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53518360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__53559140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53558700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53558420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53558240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53556800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53556200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53556040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__53555160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53553920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53553760() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53553560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__53553360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53553220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope layer1_58_84_59534960;

SignalI req__mac_60843980_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makereq__mac_60843980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_60843980_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = "req_mac";
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

SignalI ack_60843960_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeack_60843960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_60843960_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = "ack";
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

SignalI ack__mac_60843940_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeack__mac_60843940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_60843940_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = "ack_mac";
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

SignalI ack__add_60843920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeack__add_60843920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_60843920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = "ack_add";
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

SignalI _58266_61011260_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_58266_61011260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_61011260_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = ":266";
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

SignalI _58264_61011240_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_58264_61011240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58264_61011240_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = ":264";
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

SignalI _58265_61011160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_58265_61011160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58265_61011160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = ":265";
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

SignalI _58283_61218340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_58283_61218340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_61218340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = ":283";
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

SignalI _58313_47928620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_58313_47928620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58313_47928620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = ":313";
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

SignalI _58336_48579920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_58336_48579920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58336_48579920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = ":336";
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

SignalI value__z0_49596220_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makevalue__z0_49596220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_49596220_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = "value_z0";
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

SignalI value__a0_49877140_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makevalue__a0_49877140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_49877140_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = "value_a0";
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

SignalI flag__z0_49877080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeflag__z0_49877080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_49877080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = "flag_z0";
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

SignalI ack__a0_49877060_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeack__a0_49877060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_49877060_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = "ack_a0";
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

SignalI address__weights0_49876860_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeaddress__weights0_49876860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights0_49876860_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = "address_weights0";
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

SignalI address__bias_49876720_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeaddress__bias_49876720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_49876720_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = "address_bias";
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

SignalI _58324_50176080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_58324_50176080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58324_50176080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = ":324";
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

SignalI _58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_58325_50200380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = ":325";
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

SignalI w0_52715720_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makew0_52715720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w0_52715720_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = "w0";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__53523240();
         src1 = make__53523220();
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

SignalI b_53557600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeb_53557600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_53557600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = "b";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__53522640();
         concat_value(1,1,dst,src0);
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

SignalI _58268_53557580_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_58268_53557580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_53557580_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = ":268";
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

SignalI _58269_53557420_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_58269_53557420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_53557420_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = ":269";
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

SignalI _58270_51478000_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI make_58270_51478000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_51478000_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)layer1_58_84_59534960;
   signalI->name = ":270";
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

SystemI counter_53206580;

SystemI makecounter_53206580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_53206580 = systemI;
   systemI->owner = (Object)layer1_58_84_59534960;
   systemI->name = "counter";
   systemI->system = counter_58_8400_51472160;

   return systemI;
};

SystemI func0_58585000;

SystemI makefunc0_58585000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_58585000 = systemI;
   systemI->owner = (Object)layer1_58_84_59534960;
   systemI->name = "func0";
   systemI->system = func0_58_8400_58198620;

   return systemI;
};

Scope channel__w0_58252_59534660;

SignalI trig__r_59531820_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI maketrig__r_59531820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_59531820_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__w0_58252_59534660;
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

SignalI trig__w_59531800_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI maketrig__w_59531800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_59531800_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__w0_58252_59534660;
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

SignalI dbus__r_59725580_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makedbus__r_59725580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_59725580_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__w0_58252_59534660;
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

SignalI dbus__w_59837480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makedbus__w_59837480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_59837480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__w0_58252_59534660;
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

SignalI abus__r_59837400_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__r_59837400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59837400_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__w0_58252_59534660;
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

SignalI abus__w_59837320_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__w_59837320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59837320_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__w0_58252_59534660;
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

SignalI mem_60047480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makemem_60047480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_60047480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__w0_58252_59534660;
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

Scope raddr_58253_59534360;

Scope makeraddr_58253_59534360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58253_59534360 = scope;
   scope->owner = (Object)channel__w0_58252_59534660;
   scope->name = "raddr:253";
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

Scope waddr_58258_59533940;

Scope makewaddr_58258_59533940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58258_59533940 = scope;
   scope->owner = (Object)channel__w0_58252_59534660;
   scope->name = "waddr:258";
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

Scope rinc_58263_59533520;

Scope makerinc_58263_59533520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58263_59533520 = scope;
   scope->owner = (Object)channel__w0_58252_59534660;
   scope->name = "rinc:263";
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

Scope winc_58267_59533100;

Scope makewinc_58267_59533100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58267_59533100 = scope;
   scope->owner = (Object)channel__w0_58252_59534660;
   scope->name = "winc:267";
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

Scope rdec_58271_59532680;

Scope makerdec_58271_59532680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58271_59532680 = scope;
   scope->owner = (Object)channel__w0_58252_59534660;
   scope->name = "rdec:271";
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

Scope wdec_58276_59532260;

Scope makewdec_58276_59532260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58276_59532260 = scope;
   scope->owner = (Object)channel__w0_58252_59534660;
   scope->name = "wdec:276";
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

Behavior __61196720;

Behavior make__61196720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61196720 = behavior;
   behavior->owner = (Object)channel__w0_58252_59534660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_neg += 1;
   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->neg = realloc(clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->neg,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_neg*sizeof(Object));
clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->neg[clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_neg-1] = (Object)behavior;
   behavior->block = make__60379200();

   return behavior;
}

Behavior __53027120;

Behavior make__53027120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53027120 = behavior;
   behavior->owner = (Object)channel__w0_58252_59534660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_59725580_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   dbus__r_59725580_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   dbus__r_59725580_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(dbus__r_59725580_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,dbus__r_59725580_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
dbus__r_59725580_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[dbus__r_59725580_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53027480();

   return behavior;
}

Behavior __53059300;

Behavior make__53059300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53059300 = behavior;
   behavior->owner = (Object)channel__w0_58252_59534660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_61011260_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _58266_61011260_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _58266_61011260_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_58266_61011260_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_58266_61011260_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_58266_61011260_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_58266_61011260_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53026960();

   return behavior;
}

Behavior __53057540;

Behavior make__53057540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53057540 = behavior;
   behavior->owner = (Object)channel__w0_58252_59534660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_59531820_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   trig__r_59531820_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   trig__r_59531820_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(trig__r_59531820_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,trig__r_59531820_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
trig__r_59531820_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[trig__r_59531820_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53058500();

   return behavior;
}

Behavior __53056600;

Behavior make__53056600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53056600 = behavior;
   behavior->owner = (Object)channel__w0_58252_59534660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58264_61011240_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _58264_61011240_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _58264_61011240_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_58264_61011240_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_58264_61011240_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_58264_61011240_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_58264_61011240_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53057300();

   return behavior;
}

Behavior __53055880;

Behavior make__53055880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53055880 = behavior;
   behavior->owner = (Object)channel__w0_58252_59534660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_59837400_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   abus__r_59837400_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   abus__r_59837400_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(abus__r_59837400_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,abus__r_59837400_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
abus__r_59837400_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[abus__r_59837400_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53056180();

   return behavior;
}

Behavior __53055120;

Behavior make__53055120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53055120 = behavior;
   behavior->owner = (Object)channel__w0_58252_59534660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58265_61011160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _58265_61011160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _58265_61011160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_58265_61011160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_58265_61011160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_58265_61011160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_58265_61011160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53055800();

   return behavior;
}

Behavior __53053180;

Behavior make__53053180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53053180 = behavior;
   behavior->owner = (Object)channel__w0_58252_59534660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_59531800_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   trig__w_59531800_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   trig__w_59531800_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(trig__w_59531800_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,trig__w_59531800_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
trig__w_59531800_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[trig__w_59531800_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53053740();

   return behavior;
}

Behavior __53052980;

Behavior make__53052980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53052980 = behavior;
   behavior->owner = (Object)channel__w0_58252_59534660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_53557580_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _58268_53557580_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _58268_53557580_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_58268_53557580_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_58268_53557580_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_58268_53557580_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_58268_53557580_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53053140();

   return behavior;
}

Behavior __53052260;

Behavior make__53052260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53052260 = behavior;
   behavior->owner = (Object)channel__w0_58252_59534660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_59837320_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   abus__w_59837320_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   abus__w_59837320_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(abus__w_59837320_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,abus__w_59837320_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
abus__w_59837320_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[abus__w_59837320_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53052520();

   return behavior;
}

Behavior __53075520;

Behavior make__53075520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53075520 = behavior;
   behavior->owner = (Object)channel__w0_58252_59534660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_53557420_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _58269_53557420_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _58269_53557420_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_58269_53557420_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_58269_53557420_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_58269_53557420_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_58269_53557420_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53052200();

   return behavior;
}

Behavior __53074340;

Behavior make__53074340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53074340 = behavior;
   behavior->owner = (Object)channel__w0_58252_59534660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_59837480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   dbus__w_59837480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   dbus__w_59837480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(dbus__w_59837480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,dbus__w_59837480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
dbus__w_59837480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[dbus__w_59837480_channel__w0_58252_59534660_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53074680();

   return behavior;
}

Behavior __53073880;

Behavior make__53073880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53073880 = behavior;
   behavior->owner = (Object)channel__w0_58252_59534660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_51478000_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _58270_51478000_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _58270_51478000_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_58270_51478000_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_58270_51478000_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_58270_51478000_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_58270_51478000_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53074280();

   return behavior;
}

Scope makechannel__w0_58252_59534660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58252_59534660 = scope;
   scope->owner = (Object)layer1_58_84_59534960;
   scope->name = "channel_w0:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_59531820();
   scope->inners[1] = maketrig__w_59531800();
   scope->inners[2] = makedbus__r_59725580();
   scope->inners[3] = makedbus__w_59837480();
   scope->inners[4] = makeabus__r_59837400();
   scope->inners[5] = makeabus__w_59837320();
   scope->inners[6] = makemem_60047480();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58253_59534360();
   scope->scopes[1] = makewaddr_58258_59533940();
   scope->scopes[2] = makerinc_58263_59533520();
   scope->scopes[3] = makewinc_58267_59533100();
   scope->scopes[4] = makerdec_58271_59532680();
   scope->scopes[5] = makewdec_58276_59532260();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61196720();
   scope->behaviors[1] = make__53027120();
   scope->behaviors[2] = make__53059300();
   scope->behaviors[3] = make__53057540();
   scope->behaviors[4] = make__53056600();
   scope->behaviors[5] = make__53055880();
   scope->behaviors[6] = make__53055120();
   scope->behaviors[7] = make__53053180();
   scope->behaviors[8] = make__53052980();
   scope->behaviors[9] = make__53052260();
   scope->behaviors[10] = make__53075520();
   scope->behaviors[11] = make__53074340();
   scope->behaviors[12] = make__53073880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58281_61196600;

SignalI reg__0_47495700_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makereg__0_47495700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47495700_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__accum_58281_61196600;
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

Scope anum_58282_61196300;

Scope makeanum_58282_61196300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_61196300 = scope;
   scope->owner = (Object)channel__accum_58281_61196600;
   scope->name = "anum:282";
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

Scope raddr_58284_61195880;

Scope makeraddr_58284_61195880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58284_61195880 = scope;
   scope->owner = (Object)channel__accum_58281_61196600;
   scope->name = "raddr:284";
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

Scope waddr_58287_61195460;

Scope makewaddr_58287_61195460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58287_61195460 = scope;
   scope->owner = (Object)channel__accum_58281_61196600;
   scope->name = "waddr:287";
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

Scope rinc_58290_61195040;

SignalI abus__r_61194660_rinc_58290_61195040_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__r_61194660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_61194660_rinc_58290_61195040_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)rinc_58290_61195040;
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

Scope makerinc_58290_61195040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58290_61195040 = scope;
   scope->owner = (Object)channel__accum_58281_61196600;
   scope->name = "rinc:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_61194660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58294_61194540;

SignalI abus__w_61218680_winc_58294_61194540_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__w_61218680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_61218680_winc_58294_61194540_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)winc_58294_61194540;
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

Scope makewinc_58294_61194540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58294_61194540 = scope;
   scope->owner = (Object)channel__accum_58281_61196600;
   scope->name = "winc:294";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_61218680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58298_61218560;

SignalI abus__r_61218180_rdec_58298_61218560_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__r_61218180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_61218180_rdec_58298_61218560_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)rdec_58298_61218560;
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

Scope makerdec_58298_61218560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58298_61218560 = scope;
   scope->owner = (Object)channel__accum_58281_61196600;
   scope->name = "rdec:298";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_61218180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58302_61218060;

SignalI abus__w_61217680_wdec_58302_61218060_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__w_61217680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_61217680_wdec_58302_61218060_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)wdec_58302_61218060;
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

Scope makewdec_58302_61218060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58302_61218060 = scope;
   scope->owner = (Object)channel__accum_58281_61196600;
   scope->name = "wdec:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_61217680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53070020;

Behavior make__53070020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53070020 = behavior;
   behavior->owner = (Object)channel__accum_58281_61196600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47495700_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   reg__0_47495700_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   reg__0_47495700_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(reg__0_47495700_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,reg__0_47495700_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
reg__0_47495700_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[reg__0_47495700_channel__accum_58281_61196600_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53070240();

   return behavior;
}

Behavior __53069580;

Behavior make__53069580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53069580 = behavior;
   behavior->owner = (Object)channel__accum_58281_61196600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_61218340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _58283_61218340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _58283_61218340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_58283_61218340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_58283_61218340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_58283_61218340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_58283_61218340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53069920();

   return behavior;
}

Scope makechannel__accum_58281_61196600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58281_61196600 = scope;
   scope->owner = (Object)layer1_58_84_59534960;
   scope->name = "channel_accum:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47495700();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_61196300();
   scope->scopes[1] = makeraddr_58284_61195880();
   scope->scopes[2] = makewaddr_58287_61195460();
   scope->scopes[3] = makerinc_58290_61195040();
   scope->scopes[4] = makewinc_58294_61194540();
   scope->scopes[5] = makerdec_58298_61218560();
   scope->scopes[6] = makewdec_58302_61218060();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53070020();
   scope->behaviors[1] = make__53069580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58306_49529460;

SignalI lv0_49766220_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makelv0_49766220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49766220_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)mac__n1_58306_49529460;
   signalI->name = "lv0";
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

SignalI av0_50036540_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeav0_50036540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_50036540_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)mac__n1_58306_49529460;
   signalI->name = "av0";
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

SignalI rv_51312520_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makerv_51312520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_51312520_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)mac__n1_58306_49529460;
   signalI->name = "rv";
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

SignalI lvok0_51312500_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makelvok0_51312500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_51312500_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)mac__n1_58306_49529460;
   signalI->name = "lvok0";
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

SignalI rvok_51312480_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makervok_51312480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_51312480_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)mac__n1_58306_49529460;
   signalI->name = "rvok";
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

SignalI run_51312440_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makerun_51312440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_51312440_mac__n1_58306_49529460_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)mac__n1_58306_49529460;
   signalI->name = "run";
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

Behavior __58697460;

Behavior make__58697460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58697460 = behavior;
   behavior->owner = (Object)mac__n1_58306_49529460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos += 1;
   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos = realloc(clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos*sizeof(Object));
clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos[clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos-1] = (Object)behavior;
   behavior->block = make__51312260();

   return behavior;
}

Scope makemac__n1_58306_49529460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58306_49529460 = scope;
   scope->owner = (Object)layer1_58_84_59534960;
   scope->name = "mac_n1:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49766220();
   scope->inners[1] = makeav0_50036540();
   scope->inners[2] = makerv_51312520();
   scope->inners[3] = makelvok0_51312500();
   scope->inners[4] = makervok_51312480();
   scope->inners[5] = makerun_51312440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58697460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58311_58697340;

SignalI reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makereg__0_58795400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__bias_58311_58697340;
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

Scope anum_58312_58697040;

Scope makeanum_58312_58697040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58312_58697040 = scope;
   scope->owner = (Object)channel__bias_58311_58697340;
   scope->name = "anum:312";
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

Scope raddr_58314_58696620;

Scope makeraddr_58314_58696620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58314_58696620 = scope;
   scope->owner = (Object)channel__bias_58311_58697340;
   scope->name = "raddr:314";
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

Scope waddr_58317_58696100;

Scope makewaddr_58317_58696100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58317_58696100 = scope;
   scope->owner = (Object)channel__bias_58311_58697340;
   scope->name = "waddr:317";
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

Scope rinc_58320_58752980;

SignalI abus__r_58752600_rinc_58320_58752980_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__r_58752600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58752600_rinc_58320_58752980_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)rinc_58320_58752980;
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

Scope makerinc_58320_58752980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58320_58752980 = scope;
   scope->owner = (Object)channel__bias_58311_58697340;
   scope->name = "rinc:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58752600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58323_58752480;

SignalI abus__w_58752100_winc_58323_58752480_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__w_58752100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58752100_winc_58323_58752480_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)winc_58323_58752480;
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

Behavior __53188520;

Behavior make__53188520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53188520 = behavior;
   behavior->owner = (Object)winc_58323_58752480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_58752100_winc_58323_58752480_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   abus__w_58752100_winc_58323_58752480_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   abus__w_58752100_winc_58323_58752480_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(abus__w_58752100_winc_58323_58752480_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,abus__w_58752100_winc_58323_58752480_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
abus__w_58752100_winc_58323_58752480_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[abus__w_58752100_winc_58323_58752480_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53189300();

   return behavior;
}

Behavior __53188000;

Behavior make__53188000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53188000 = behavior;
   behavior->owner = (Object)winc_58323_58752480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_58325_50200380_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53188480();

   return behavior;
}

Scope makewinc_58323_58752480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58323_58752480 = scope;
   scope->owner = (Object)channel__bias_58311_58697340;
   scope->name = "winc:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58752100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53188520();
   scope->behaviors[1] = make__53188000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58326_58751700;

SignalI abus__r_58751240_rdec_58326_58751700_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__r_58751240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58751240_rdec_58326_58751700_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)rdec_58326_58751700;
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

Scope makerdec_58326_58751700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58326_58751700 = scope;
   scope->owner = (Object)channel__bias_58311_58697340;
   scope->name = "rdec:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58751240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58330_58751120;

SignalI abus__w_58750740_wdec_58330_58751120_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__w_58750740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58750740_wdec_58330_58751120_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)wdec_58330_58751120;
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

Scope makewdec_58330_58751120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58330_58751120 = scope;
   scope->owner = (Object)channel__bias_58311_58697340;
   scope->name = "wdec:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58750740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53170700;

Behavior make__53170700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53170700 = behavior;
   behavior->owner = (Object)channel__bias_58311_58697340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53170900();

   return behavior;
}

Behavior __53170420;

Behavior make__53170420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53170420 = behavior;
   behavior->owner = (Object)channel__bias_58311_58697340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58313_47928620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _58313_47928620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _58313_47928620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_58313_47928620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_58313_47928620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_58313_47928620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_58313_47928620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53170660();

   return behavior;
}

Behavior __53169220;

Behavior make__53169220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53169220 = behavior;
   behavior->owner = (Object)channel__bias_58311_58697340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[reg__0_58795400_channel__bias_58311_58697340_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53169700();

   return behavior;
}

Behavior __53168800;

Behavior make__53168800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53168800 = behavior;
   behavior->owner = (Object)channel__bias_58311_58697340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58324_50176080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _58324_50176080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _58324_50176080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_58324_50176080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_58324_50176080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_58324_50176080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_58324_50176080_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53169140();

   return behavior;
}

Scope makechannel__bias_58311_58697340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58311_58697340 = scope;
   scope->owner = (Object)layer1_58_84_59534960;
   scope->name = "channel_bias:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_58795400();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58312_58697040();
   scope->scopes[1] = makeraddr_58314_58696620();
   scope->scopes[2] = makewaddr_58317_58696100();
   scope->scopes[3] = makerinc_58320_58752980();
   scope->scopes[4] = makewinc_58323_58752480();
   scope->scopes[5] = makerdec_58326_58751700();
   scope->scopes[6] = makewdec_58330_58751120();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53170700();
   scope->behaviors[1] = make__53170420();
   scope->behaviors[2] = make__53169220();
   scope->behaviors[3] = make__53168800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58334_59256920;

SignalI reg__0_59388040_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makereg__0_59388040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_59388040_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)channel__z_58334_59256920;
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

Scope anum_58335_59256620;

Scope makeanum_58335_59256620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58335_59256620 = scope;
   scope->owner = (Object)channel__z_58334_59256920;
   scope->name = "anum:335";
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

Scope raddr_58337_59256200;

Scope makeraddr_58337_59256200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58337_59256200 = scope;
   scope->owner = (Object)channel__z_58334_59256920;
   scope->name = "raddr:337";
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

Scope waddr_58340_59255780;

Scope makewaddr_58340_59255780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58340_59255780 = scope;
   scope->owner = (Object)channel__z_58334_59256920;
   scope->name = "waddr:340";
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

Scope rinc_58343_59255360;

SignalI abus__r_59254880_rinc_58343_59255360_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__r_59254880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59254880_rinc_58343_59255360_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)rinc_58343_59255360;
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

Scope makerinc_58343_59255360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58343_59255360 = scope;
   scope->owner = (Object)channel__z_58334_59256920;
   scope->name = "rinc:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59254880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58346_59254760;

SignalI abus__w_59254380_winc_58346_59254760_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__w_59254380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59254380_winc_58346_59254760_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)winc_58346_59254760;
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

Scope makewinc_58346_59254760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58346_59254760 = scope;
   scope->owner = (Object)channel__z_58334_59256920;
   scope->name = "winc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59254380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58349_59254260;

SignalI abus__r_59253880_rdec_58349_59254260_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__r_59253880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59253880_rdec_58349_59254260_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)rdec_58349_59254260;
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

Scope makerdec_58349_59254260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58349_59254260 = scope;
   scope->owner = (Object)channel__z_58334_59256920;
   scope->name = "rdec:349";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59253880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58353_59253760;

SignalI abus__w_59253380_wdec_58353_59253760_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeabus__w_59253380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59253380_wdec_58353_59253760_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)wdec_58353_59253760;
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

Scope makewdec_58353_59253760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58353_59253760 = scope;
   scope->owner = (Object)channel__z_58334_59256920;
   scope->name = "wdec:353";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59253380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53185200;

Behavior make__53185200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53185200 = behavior;
   behavior->owner = (Object)channel__z_58334_59256920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_59388040_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   reg__0_59388040_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   reg__0_59388040_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(reg__0_59388040_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,reg__0_59388040_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
reg__0_59388040_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[reg__0_59388040_channel__z_58334_59256920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53185540();

   return behavior;
}

Behavior __53184180;

Behavior make__53184180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53184180 = behavior;
   behavior->owner = (Object)channel__z_58334_59256920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58336_48579920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   _58336_48579920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   _58336_48579920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(_58336_48579920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,_58336_48579920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
_58336_48579920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[_58336_48579920_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53184620();

   return behavior;
}

Scope makechannel__z_58334_59256920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58334_59256920 = scope;
   scope->owner = (Object)layer1_58_84_59534960;
   scope->name = "channel_z:334";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_59388040();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58335_59256620();
   scope->scopes[1] = makeraddr_58337_59256200();
   scope->scopes[2] = makewaddr_58340_59255780();
   scope->scopes[3] = makerinc_58343_59255360();
   scope->scopes[4] = makewinc_58346_59254760();
   scope->scopes[5] = makerdec_58349_59254260();
   scope->scopes[6] = makewdec_58353_59253760();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53185200();
   scope->behaviors[1] = make__53184180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58357_59590440;

SignalI lv0_59790540_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makelv0_59790540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_59790540_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)add__n_58357_59590440;
   signalI->name = "lv0";
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

SignalI rv0_59990980_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makerv0_59990980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_59990980_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)add__n_58357_59590440;
   signalI->name = "rv0";
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

SignalI lvok0_59990960_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makelvok0_59990960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_59990960_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)add__n_58357_59590440;
   signalI->name = "lvok0";
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

SignalI rvok0_59990940_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makervok0_59990940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_59990940_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)add__n_58357_59590440;
   signalI->name = "rvok0";
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

SignalI run_59990920_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makerun_59990920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_59990920_add__n_58357_59590440_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)add__n_58357_59590440;
   signalI->name = "run";
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

Behavior __60844120;

Behavior make__60844120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60844120 = behavior;
   behavior->owner = (Object)add__n_58357_59590440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos += 1;
   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos = realloc(clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos*sizeof(Object));
clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos[clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos-1] = (Object)behavior;
   behavior->block = make__59990760();

   return behavior;
}

Scope makeadd__n_58357_59590440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58357_59590440 = scope;
   scope->owner = (Object)layer1_58_84_59534960;
   scope->name = "add_n:357";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_59790540();
   scope->inners[1] = makerv0_59990980();
   scope->inners[2] = makelvok0_59990960();
   scope->inners[3] = makervok0_59990940();
   scope->inners[4] = makerun_59990920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60844120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59405160;

Behavior make__59405160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59405160 = behavior;
   behavior->owner = (Object)layer1_58_84_59534960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos += 1;
   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos = realloc(clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos*sizeof(Object));
clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos[clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos-1] = (Object)behavior;
   behavior->block = make__59178240();

   return behavior;
}

Behavior __59727140;

Behavior make__59727140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59727140 = behavior;
   behavior->owner = (Object)layer1_58_84_59534960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos += 1;
   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos = realloc(clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos*sizeof(Object));
clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos[clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos-1] = (Object)behavior;
   behavior->block = make__59405040();

   return behavior;
}

Behavior __60587840;

Behavior make__60587840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60587840 = behavior;
   behavior->owner = (Object)layer1_58_84_59534960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos += 1;
   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos = realloc(clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos*sizeof(Object));
clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos[clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos-1] = (Object)behavior;
   behavior->block = make__59727020();

   return behavior;
}

Behavior __52979680;

Behavior make__52979680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52979680 = behavior;
   behavior->owner = (Object)layer1_58_84_59534960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_60585080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   req_60585080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   req_60585080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(req_60585080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,req_60585080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
req_60585080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[req_60585080_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_60843940_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   ack__mac_60843940_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   ack__mac_60843940_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(ack__mac_60843940_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,ack__mac_60843940_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
ack__mac_60843940_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[ack__mac_60843940_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__52980860();

   return behavior;
}

Behavior __53029320;

Behavior make__53029320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53029320 = behavior;
   behavior->owner = (Object)layer1_58_84_59534960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[clk_60585140_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_60843960_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   ack_60843960_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   ack_60843960_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(ack_60843960_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,ack_60843960_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
ack_60843960_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[ack_60843960_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[rst_60585120_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_49596220_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   value__z0_49596220_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   value__z0_49596220_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(value__z0_49596220_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,value__z0_49596220_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
value__z0_49596220_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[value__z0_49596220_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_49877060_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   ack__a0_49877060_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   ack__a0_49877060_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(ack__a0_49877060_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,ack__a0_49877060_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
ack__a0_49877060_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[ack__a0_49877060_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__52981520();

   return behavior;
}

Behavior __53029000;

Behavior make__53029000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53029000 = behavior;
   behavior->owner = (Object)layer1_58_84_59534960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_53206720_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   ack__mac_53206720_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   ack__mac_53206720_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(ack__mac_53206720_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,ack__mac_53206720_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
ack__mac_53206720_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[ack__mac_53206720_counter_58_8400_51472160_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_58585140_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   a_58585140_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   a_58585140_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(a_58585140_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,a_58585140_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
a_58585140_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[a_58585140_func0_58_8400_58198620_layer1_58_84_59534960_layer1_58_840_60587520_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__52981280();

   return behavior;
}

Scope makelayer1_58_84_59534960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_59534960 = scope;
   scope->owner = (Object)layer1_58_840_60587520;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_53206580();
   scope->systemIs[1] = makefunc0_58585000();
   scope->num_inners = 23;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_60843980();
   scope->inners[1] = makeack_60843960();
   scope->inners[2] = makeack__mac_60843940();
   scope->inners[3] = makeack__add_60843920();
   scope->inners[4] = make_58266_61011260();
   scope->inners[5] = make_58264_61011240();
   scope->inners[6] = make_58265_61011160();
   scope->inners[7] = make_58283_61218340();
   scope->inners[8] = make_58313_47928620();
   scope->inners[9] = make_58336_48579920();
   scope->inners[10] = makevalue__z0_49596220();
   scope->inners[11] = makevalue__a0_49877140();
   scope->inners[12] = makeflag__z0_49877080();
   scope->inners[13] = makeack__a0_49877060();
   scope->inners[14] = makeaddress__weights0_49876860();
   scope->inners[15] = makeaddress__bias_49876720();
   scope->inners[16] = make_58324_50176080();
   scope->inners[17] = make_58325_50200380();
   scope->inners[18] = makew0_52715720();
   scope->inners[19] = makeb_53557600();
   scope->inners[20] = make_58268_53557580();
   scope->inners[21] = make_58269_53557420();
   scope->inners[22] = make_58270_51478000();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58252_59534660();
   scope->scopes[1] = makechannel__accum_58281_61196600();
   scope->scopes[2] = makemac__n1_58306_49529460();
   scope->scopes[3] = makechannel__bias_58311_58697340();
   scope->scopes[4] = makechannel__z_58334_59256920();
   scope->scopes[5] = makeadd__n_58357_59590440();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59405160();
   scope->behaviors[1] = make__59727140();
   scope->behaviors[2] = make__60587840();
   scope->behaviors[3] = make__52979680();
   scope->behaviors[4] = make__53029320();
   scope->behaviors[5] = make__53029000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_60587520() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_60587520 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_60585140();
   systemT->inputs[1] = makerst_60585120();
   systemT->inputs[2] = makefill_60585100();
   systemT->inputs[3] = makereq_60585080();
   systemT->inputs[4] = make_5866_60804360();
   systemT->inputs[5] = make_5867_60950080();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_60950040();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5868_60949940();
   systemT->inouts[1] = make_5832_61202360();

   systemT->scope = makelayer1_58_84_59534960();

   return systemT;
}