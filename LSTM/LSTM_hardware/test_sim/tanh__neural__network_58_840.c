#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh__neural__network_58_840_74258180;

SignalI clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeclk_74256220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_74258180;
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

SignalI rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makerst_74256200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_74258180;
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

SignalI req_74256180_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makereq_74256180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_74256180_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_74258180;
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

SignalI fill_74256160_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makefill_74256160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_74256160_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_74258180;
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

SignalI _5848_74456320_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_5848_74456320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5848_74456320_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_74258180;
   signalI->name = ":48";
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

SignalI ack__fill_74456280_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack__fill_74456280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__fill_74456280_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_74258180;
   signalI->name = "ack_fill";
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

SignalI ack__network_74456260_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack__network_74456260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_74456260_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_74258180;
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

SignalI _5846_74456240_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_5846_74456240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5846_74456240_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_74258180;
   signalI->name = ":46";
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

SignalI _5847_74456100_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_5847_74456100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5847_74456100_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_74258180;
   signalI->name = ":47";
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

SignalI _5867_74517040_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_5867_74517040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_74517040_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_74258180;
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

SignalI _5868_74516920_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_5868_74516920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5868_74516920_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_74258180;
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

Block __73089400;

Block __73089180;

void code__73089180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76865840(),ack__0_63807300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76865780(),ack__1_63807280_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73089180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73089180 = block;
   block->owner = (Object)__73089400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73089180;

   return block;
};

void code__73089400() {
   {
      Value cond = rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73089180();
   }
      }
   }
}

Block make__73089400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73089400 = block;
   block->owner = (Object)__73112920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73089400;

   return block;
};

Block __73112800;

Block __73112600;

Block __73112220;

void code__73112220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76865600(),_58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73112220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73112220 = block;
   block->owner = (Object)__73112600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73112220;

   return block;
};

void code__73112600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76865700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73112220();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76865540(),_58409_63915240_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73112600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73112600 = block;
   block->owner = (Object)__73112800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73112600;

   return block;
};

Block __73111600;

Block __73111260;

void code__73111260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76906300(),_5847_74456100_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73111260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73111260 = block;
   block->owner = (Object)__73111600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73111260;

   return block;
};

void code__73111600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76906380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73111260();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76906240(),_5846_74456240_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73111600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73111600 = block;
   block->owner = (Object)__73112800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73111600;

   return block;
};

Block __73110160;

void code__73110160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76906140(),address__inputs_63915360_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76906080(),flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76906020(),ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73110160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73110160 = block;
   block->owner = (Object)__73112800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73110160;

   return block;
};

Block __73109300;

Block __73109140;

Block __73108820;

Block __73106900;

Block __73106740;

void code__73106740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5848_74456320_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,value__inputs_63915440_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76905560(),flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73106740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73106740 = block;
   block->owner = (Object)__73106900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73106740;

   return block;
};

void code__73106900() {
 code__73106740();
}

Block make__73106900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73106900 = block;
   block->owner = (Object)__73108820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73106900;

   return block;
};

Block __73108660;

void code__73108660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value sel;
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      sel = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _5847_74456100_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                  src1 = make__76905400();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76905360();
            dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);            set_value_pos(pool_state);
         dst; });
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = _5847_74456100_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__76905120();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__76905060();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5847_74456100_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76904940(),_5846_74456240_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73108660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73108660 = block;
   block->owner = (Object)__73108820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73108660;

   return block;
};

void code__73108820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5846_74456240_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76905740();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73106900();
   }
   else {
  code__73108660();
   }
      }
   }
}

Block make__73108820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73108820 = block;
   block->owner = (Object)__73109140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73108820;

   return block;
};

void code__73109140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76905860();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73108820();
   }
      }
   }
}

Block make__73109140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73109140 = block;
   block->owner = (Object)__73109300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73109140;

   return block;
};

void code__73109300() {
 code__73109140();
}

Block make__73109300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73109300 = block;
   block->owner = (Object)__73112800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73109300;

   return block;
};

Block __73489880;

Block __73489680;

Block __73488660;

void code__73488660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76904480(),ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73488660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73488660 = block;
   block->owner = (Object)__73489680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73488660;

   return block;
};

void code__73489680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = address__inputs_63915360_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76904740();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_63915360_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76904640(),flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__inputs_63915360_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76904560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73488660();
   }
      }
   }
}

Block make__73489680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73489680 = block;
   block->owner = (Object)__73489880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73489680;

   return block;
};

Block __73488240;

Block __73487920;

void code__73487920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value sel;
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      sel = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                  src1 = make__76904260();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76904220();
            dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);            set_value_pos(pool_state);
         dst; });
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = _58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__76903980();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__76903920();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76903800(),_58409_63915240_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__inputs_63915440_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58411_64064200_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73487920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73487920 = block;
   block->owner = (Object)__73488240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73487920;

   return block;
};

void code__73488240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76904380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73487920();
   }
      }
   }
}

Block make__73488240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73488240 = block;
   block->owner = (Object)__73489880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73488240;

   return block;
};

void code__73489880() {
 code__73489680();
 code__73488240();
}

Block make__73489880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73489880 = block;
   block->owner = (Object)__73112800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73489880;

   return block;
};

Block __73110620;

void code__73110620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76903600(),flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73110620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73110620 = block;
   block->owner = (Object)__73112800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73110620;

   return block;
};

void code__73112800() {
 code__73112600();
 code__73111600();
   {
      Value cond = rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73110160();
   }
   else if (value2integer(fill__inputs_63807260_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value)) {
  code__73109300();
   }
   else if (value2integer(flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value)) {
  code__73489880();
   }
   else {
  code__73110620();
   }
      }
   }
}

Block make__73112800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73112800 = block;
   block->owner = (Object)__73706020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73112800;

   return block;
};

Block __73705900;

Block __73705740;

Block __73705420;

void code__73705420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76903400(),_5868_74516920_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73705420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73705420 = block;
   block->owner = (Object)__73705740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73705420;

   return block;
};

void code__73705740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76903500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73705420();
   }
      }
   }
}

Block make__73705740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73705740 = block;
   block->owner = (Object)__73705900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73705740;

   return block;
};

Block __73704860;

Block __73704540;

void code__73704540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76903200(),_58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73704540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73704540 = block;
   block->owner = (Object)__73704860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73704540;

   return block;
};

void code__73704860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76903280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73704540();
   }
      }
   }
}

Block make__73704860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73704860 = block;
   block->owner = (Object)__73705900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73704860;

   return block;
};

Block __73703680;

void code__73703680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76903100(),address__outputs_64319660_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76903040(),flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76902980(),ack__network_74456260_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73703680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73703680 = block;
   block->owner = (Object)__73705900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73703680;

   return block;
};

Block __73743660;

Block __73743500;

Block __73743180;

Block __73742700;

void code__73742700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58432_64385160_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,value__outputs_64319740_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73742700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73742700 = block;
   block->owner = (Object)__73743180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73742700;

   return block;
};

void code__73743180() {
{
      Value value = _58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__76902700())) {
    code__73742700();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76902560(),flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value sel;
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      sel = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                  src1 = make__76902460();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76902420();
            dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);            set_value_pos(pool_state);
         dst; });
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = _58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__76902160();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__76902100();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73743180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73743180 = block;
   block->owner = (Object)__73743500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73743180;

   return block;
};

void code__73743500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76902820();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73743180();
   }
      }
   }
}

Block make__73743500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73743500 = block;
   block->owner = (Object)__73743660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73743500;

   return block;
};

void code__73743660() {
 code__73743500();
}

Block make__73743660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73743660 = block;
   block->owner = (Object)__73705900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73743660;

   return block;
};

Block __73952740;

Block __73952580;

Block __73951600;

void code__73951600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76901560(),ack__network_74456260_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73951600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73951600 = block;
   block->owner = (Object)__73952580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73951600;

   return block;
};

void code__73952580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = address__outputs_64319660_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76901840();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__outputs_64319660_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76901740(),flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__outputs_64319660_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76901660();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73951600();
   }
      }
   }
}

Block make__73952580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73952580 = block;
   block->owner = (Object)__73952740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73952580;

   return block;
};

Block __73951160;

Block __73950780;

Block __73950320;

void code__73950320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__outputs_64319740_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_5867_74517040_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73950320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73950320 = block;
   block->owner = (Object)__73950780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73950320;

   return block;
};

void code__73950780() {
{
      Value value = _5868_74516920_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__76901320())) {
    code__73950320();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value sel;
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      sel = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _5868_74516920_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                  src1 = make__76901100();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76901060();
            dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);            set_value_pos(pool_state);
         dst; });
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = _5868_74516920_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__76900820();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__76900760();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5868_74516920_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73950780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73950780 = block;
   block->owner = (Object)__73951160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73950780;

   return block;
};

void code__73951160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76901460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73950780();
   }
      }
   }
}

Block make__73951160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73951160 = block;
   block->owner = (Object)__73952740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73951160;

   return block;
};

void code__73952740() {
 code__73952580();
 code__73951160();
}

Block make__73952740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73952740 = block;
   block->owner = (Object)__73705900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73952740;

   return block;
};

Block __73704080;

void code__73704080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76900600(),flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__73704080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73704080 = block;
   block->owner = (Object)__73705900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73704080;

   return block;
};

void code__73705900() {
 code__73705740();
 code__73704860();
   {
      Value cond = rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73703680();
   }
   else if (value2integer(fill__outputs_64064180_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value)) {
  code__73743660();
   }
   else if (value2integer(flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value)) {
  code__73952740();
   }
   else {
  code__73704080();
   }
      }
   }
}

Block make__73705900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73705900 = block;
   block->owner = (Object)__74258500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73705900;

   return block;
};

Block __76518540;

void code__76518540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = fill_74256160_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                  dst = not_value(src0,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = and_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_63807260_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76518540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76518540 = block;
   block->owner = (Object)__76518180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76518540;

   return block;
};

Block __76518120;

void code__76518120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__1_63807280_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__network_74456260_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                  dst = not_value(src0,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = and_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__outputs_64064180_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76518120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76518120 = block;
   block->owner = (Object)__76517760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76518120;

   return block;
};

Block __76501760;

void code__76501760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,clk_64929880_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,rst_64929860_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_74256180_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,req_64929800_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,clk_68952840_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,rst_68952820_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_63807300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,req_68952800_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,ack__fill_74456280_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76501760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76501760 = block;
   block->owner = (Object)__76517600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76501760;

   return block;
};

Block __76501700;

void code__76501700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_65243280_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,ack__0_63807300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_72998480_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,ack__1_63807280_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76501700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76501700 = block;
   block->owner = (Object)__76517440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76501700;

   return block;
};

Block __55728680;

Block __56794680;

void code__56794680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_54840920_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,make_ref_rangeS(mem_55170320_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080,value2integer(abus__w_54840600_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value),value2integer(abus__w_54840600_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__56794680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56794680 = block;
   block->owner = (Object)__55728680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56794680;

   return block;
};

void code__55728680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55170320_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(abus__r_54840780_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54390440_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_54123620_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56794680();
   }
      }
   }
}

Block make__55728680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55728680 = block;
   block->owner = (Object)__54806780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55728680;

   return block;
};

Block __76516700;

void code__76516700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_54123620_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58409_63915240_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76516700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76516700 = block;
   block->owner = (Object)__76516540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76516700;

   return block;
};

Block __76516500;

void code__76516500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58409_63915240_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,trig__w_54123620_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76516500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76516500 = block;
   block->owner = (Object)__76516340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76516500;

   return block;
};

Block __76515940;

void code__76515940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_54840600_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76515940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76515940 = block;
   block->owner = (Object)__76515780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76515940;

   return block;
};

Block __76515740;

void code__76515740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,abus__w_54840600_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76515740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76515740 = block;
   block->owner = (Object)__76515580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76515740;

   return block;
};

Block __76515280;

void code__76515280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_54840920_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58411_64064200_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76515280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76515280 = block;
   block->owner = (Object)__76515120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76515280;

   return block;
};

Block __76515080;

void code__76515080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58411_64064200_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,dbus__w_54840920_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76515080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76515080 = block;
   block->owner = (Object)__76514900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76515080;

   return block;
};

Block __76514260;

void code__76514260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54390440_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58407_65243340_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76514260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76514260 = block;
   block->owner = (Object)__76638480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76514260;

   return block;
};

Block __76514180;

void code__76514180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58405_65243160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,trig__r_54123680_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58406_65243000_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,abus__r_54840780_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76514180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76514180 = block;
   block->owner = (Object)__76638300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76514180;

   return block;
};

Block __76637220;

void code__76637220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58432_64385160_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76637220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76637220 = block;
   block->owner = (Object)__76637060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76637220;

   return block;
};

Block __76637020;

void code__76637020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58432_64385160_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76637020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76637020 = block;
   block->owner = (Object)__76636860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76637020;

   return block;
};

Block __76675860;

void code__76675860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58424_73092100_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76675860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76675860 = block;
   block->owner = (Object)__76675680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76675860;

   return block;
};

Block __76675640;

void code__76675640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58424_73092100_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76675640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76675640 = block;
   block->owner = (Object)__76675460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76675640;

   return block;
};

Block __76673960;

void code__76673960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_62036900_rinc_58431_62037580_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76673960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76673960 = block;
   block->owner = (Object)__76673800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76673960;

   return block;
};

Block __76673760;

void code__76673760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,abus__r_62036900_rinc_58431_62037580_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76673760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76673760 = block;
   block->owner = (Object)__76673600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76673760;

   return block;
};

Block __76671280;

void code__76671280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58447_65355960_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76671280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76671280 = block;
   block->owner = (Object)__76671060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76671280;

   return block;
};

Block __76671020;

void code__76671020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58447_65355960_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76671020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76671020 = block;
   block->owner = (Object)__76670780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76671020;

   return block;
};

Block __76669580;

void code__76669580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58448_65641160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76669580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76669580 = block;
   block->owner = (Object)__76669400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76669580;

   return block;
};

Block __76669360;

void code__76669360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58448_65641160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76669360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76669360 = block;
   block->owner = (Object)__76669180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76669360;

   return block;
};

Block __76687900;

void code__76687900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_62940840_rinc_58457_62941260_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76687900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76687900 = block;
   block->owner = (Object)__76687720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76687900;

   return block;
};

Block __76687680;

void code__76687680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,abus__r_62940840_rinc_58457_62941260_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76687680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76687680 = block;
   block->owner = (Object)__76687500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76687680;

   return block;
};

Block __76692980;

void code__76692980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58458_67317900_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value,_58459_72998520_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76692980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76692980 = block;
   block->owner = (Object)__76687300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76692980;

   return block;
};

Value make__76865840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76865780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76865700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76865600() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76865540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76906380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76906300() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76906240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76906140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__76906080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76906020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76905860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76905740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76905560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76905400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76905360() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76905120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76905060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76904940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76904740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76904640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76904560() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76904480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76904380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76904260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76904220() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76903980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76903920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76903800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76903600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76903500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76903400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76903280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76903200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76903100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76903040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76902980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76902820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76902700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76902560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76902460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76902420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76902160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76902100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76901840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76901740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76901660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76901560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76901460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76901320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76901100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76901060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76900820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76900760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76900600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope tanh__neural__network_58_84_51775500;

SignalI ack__0_63807300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack__0_63807300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_63807300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
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

SignalI ack__1_63807280_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack__1_63807280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_63807280_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
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

SignalI fill__inputs_63807260_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makefill__inputs_63807260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_63807260_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
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

SignalI value__inputs_63915440_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makevalue__inputs_63915440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__inputs_63915440_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
   signalI->name = "value_inputs";
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

SignalI address__inputs_63915360_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeaddress__inputs_63915360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_63915360_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
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

SignalI flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeflag__inputs_63915320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
   signalI->name = "flag_inputs";
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

SignalI ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeack__inputs_63915300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
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

SignalI _58409_63915240_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58409_63915240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58409_63915240_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
   signalI->name = ":409";
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

SignalI _58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58410_63915140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
   signalI->name = ":410";
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

SignalI _58411_64064200_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58411_64064200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58411_64064200_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
   signalI->name = ":411";
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

SignalI fill__outputs_64064180_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makefill__outputs_64064180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__outputs_64064180_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
   signalI->name = "fill_outputs";
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

SignalI value__outputs_64319740_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makevalue__outputs_64319740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__outputs_64319740_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
   signalI->name = "value_outputs";
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

SignalI address__outputs_64319660_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeaddress__outputs_64319660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__outputs_64319660_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
   signalI->name = "address_outputs";
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

SignalI flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeflag__outputs_64319640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
   signalI->name = "flag_outputs";
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

SignalI _58432_64385160_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58432_64385160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58432_64385160_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
   signalI->name = ":432";
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

SignalI _58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI make_58433_64385080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_51775500;
   signalI->name = ":433";
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

SystemI layer0_65640680;

SystemI makelayer0_65640680() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_65640680 = systemI;
   systemI->owner = (Object)tanh__neural__network_58_84_51775500;
   systemI->name = "layer0";
   systemI->system = layer0_58_8400_64933120;

   return systemI;
};

SystemI layer1_73091940;

SystemI makelayer1_73091940() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_73091940 = systemI;
   systemI->owner = (Object)tanh__neural__network_58_84_51775500;
   systemI->name = "layer1";
   systemI->system = layer1_58_8400_68954800;

   return systemI;
};

Scope channel__inputs_58393_51796220;

SignalI trig__r_54123680_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI maketrig__r_54123680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_54123680_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__inputs_58393_51796220;
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

SignalI trig__w_54123620_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI maketrig__w_54123620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_54123620_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__inputs_58393_51796220;
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

SignalI dbus__r_54390440_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makedbus__r_54390440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54390440_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__inputs_58393_51796220;
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

SignalI dbus__w_54840920_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makedbus__w_54840920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_54840920_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__inputs_58393_51796220;
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

SignalI abus__r_54840780_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_54840780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54840780_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__inputs_58393_51796220;
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

SignalI abus__w_54840600_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__w_54840600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54840600_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__inputs_58393_51796220;
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

SignalI mem_55170320_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makemem_55170320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55170320_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__inputs_58393_51796220;
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

Scope raddr_58394_51792100;

Scope makeraddr_58394_51792100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58394_51792100 = scope;
   scope->owner = (Object)channel__inputs_58393_51796220;
   scope->name = "raddr:394";
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

Scope waddr_58399_51811980;

Scope makewaddr_58399_51811980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58399_51811980 = scope;
   scope->owner = (Object)channel__inputs_58393_51796220;
   scope->name = "waddr:399";
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

Scope rinc_58404_51828520;

Behavior __76638480;

Behavior make__76638480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76638480 = behavior;
   behavior->owner = (Object)rinc_58404_51828520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54390440_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   dbus__r_54390440_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   dbus__r_54390440_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(dbus__r_54390440_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,dbus__r_54390440_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
dbus__r_54390440_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[dbus__r_54390440_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76514260();

   return behavior;
}

Behavior __76638300;

Behavior make__76638300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76638300 = behavior;
   behavior->owner = (Object)rinc_58404_51828520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58405_65243160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58405_65243160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58405_65243160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58405_65243160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58405_65243160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58405_65243160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58405_65243160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_58406_65243000_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58406_65243000_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58406_65243000_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58406_65243000_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58406_65243000_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58406_65243000_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58406_65243000_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76514180();

   return behavior;
}

Scope makerinc_58404_51828520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58404_51828520 = scope;
   scope->owner = (Object)channel__inputs_58393_51796220;
   scope->name = "rinc:404";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76638480();
   scope->behaviors[1] = make__76638300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58408_54101600;

Scope makewinc_58408_54101600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58408_54101600 = scope;
   scope->owner = (Object)channel__inputs_58393_51796220;
   scope->name = "winc:408";
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

Scope rdec_58412_54100780;

Scope makerdec_58412_54100780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58412_54100780 = scope;
   scope->owner = (Object)channel__inputs_58393_51796220;
   scope->name = "rdec:412";
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

Scope wdec_58417_54124360;

Scope makewdec_58417_54124360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58417_54124360 = scope;
   scope->owner = (Object)channel__inputs_58393_51796220;
   scope->name = "wdec:417";
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

Behavior __54806780;

Behavior make__54806780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54806780 = behavior;
   behavior->owner = (Object)channel__inputs_58393_51796220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg = realloc(clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg,clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->neg[clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__55728680();

   return behavior;
}

Behavior __76516540;

Behavior make__76516540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76516540 = behavior;
   behavior->owner = (Object)channel__inputs_58393_51796220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_54123620_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   trig__w_54123620_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   trig__w_54123620_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(trig__w_54123620_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,trig__w_54123620_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
trig__w_54123620_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[trig__w_54123620_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76516700();

   return behavior;
}

Behavior __76516340;

Behavior make__76516340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76516340 = behavior;
   behavior->owner = (Object)channel__inputs_58393_51796220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58409_63915240_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58409_63915240_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58409_63915240_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58409_63915240_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58409_63915240_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58409_63915240_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58409_63915240_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76516500();

   return behavior;
}

Behavior __76515780;

Behavior make__76515780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76515780 = behavior;
   behavior->owner = (Object)channel__inputs_58393_51796220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_54840600_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   abus__w_54840600_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   abus__w_54840600_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(abus__w_54840600_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,abus__w_54840600_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__w_54840600_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[abus__w_54840600_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76515940();

   return behavior;
}

Behavior __76515580;

Behavior make__76515580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76515580 = behavior;
   behavior->owner = (Object)channel__inputs_58393_51796220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58410_63915140_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76515740();

   return behavior;
}

Behavior __76515120;

Behavior make__76515120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76515120 = behavior;
   behavior->owner = (Object)channel__inputs_58393_51796220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_54840920_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   dbus__w_54840920_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   dbus__w_54840920_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(dbus__w_54840920_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,dbus__w_54840920_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
dbus__w_54840920_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[dbus__w_54840920_channel__inputs_58393_51796220_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76515280();

   return behavior;
}

Behavior __76514900;

Behavior make__76514900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76514900 = behavior;
   behavior->owner = (Object)channel__inputs_58393_51796220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58411_64064200_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58411_64064200_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58411_64064200_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58411_64064200_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58411_64064200_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58411_64064200_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58411_64064200_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76515080();

   return behavior;
}

Scope makechannel__inputs_58393_51796220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__inputs_58393_51796220 = scope;
   scope->owner = (Object)tanh__neural__network_58_84_51775500;
   scope->name = "channel_inputs:393";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_54123680();
   scope->inners[1] = maketrig__w_54123620();
   scope->inners[2] = makedbus__r_54390440();
   scope->inners[3] = makedbus__w_54840920();
   scope->inners[4] = makeabus__r_54840780();
   scope->inners[5] = makeabus__w_54840600();
   scope->inners[6] = makemem_55170320();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58394_51792100();
   scope->scopes[1] = makewaddr_58399_51811980();
   scope->scopes[2] = makerinc_58404_51828520();
   scope->scopes[3] = makewinc_58408_54101600();
   scope->scopes[4] = makerdec_58412_54100780();
   scope->scopes[5] = makewdec_58417_54124360();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54806780();
   scope->behaviors[1] = make__76516540();
   scope->behaviors[2] = make__76516340();
   scope->behaviors[3] = make__76515780();
   scope->behaviors[4] = make__76515580();
   scope->behaviors[5] = make__76515120();
   scope->behaviors[6] = make__76514900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__outputs_58422_54806600;

SignalI reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makereg__0_62134480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__outputs_58422_54806600;
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

Scope anum_58423_54806280;

Behavior __76675680;

Behavior make__76675680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76675680 = behavior;
   behavior->owner = (Object)anum_58423_54806280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76675860();

   return behavior;
}

Behavior __76675460;

Behavior make__76675460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76675460 = behavior;
   behavior->owner = (Object)anum_58423_54806280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58424_73092100_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58424_73092100_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58424_73092100_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58424_73092100_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58424_73092100_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58424_73092100_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58424_73092100_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76675640();

   return behavior;
}

Scope makeanum_58423_54806280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58423_54806280 = scope;
   scope->owner = (Object)channel__outputs_58422_54806600;
   scope->name = "anum:423";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76675680();
   scope->behaviors[1] = make__76675460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58425_62013980;

Scope makeraddr_58425_62013980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58425_62013980 = scope;
   scope->owner = (Object)channel__outputs_58422_54806600;
   scope->name = "raddr:425";
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

Scope waddr_58428_62013520;

Scope makewaddr_58428_62013520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58428_62013520 = scope;
   scope->owner = (Object)channel__outputs_58422_54806600;
   scope->name = "waddr:428";
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

Scope rinc_58431_62037580;

SignalI abus__r_62036900_rinc_58431_62037580_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_62036900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62036900_rinc_58431_62037580_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rinc_58431_62037580;
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

Behavior __76673800;

Behavior make__76673800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76673800 = behavior;
   behavior->owner = (Object)rinc_58431_62037580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_62036900_rinc_58431_62037580_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   abus__r_62036900_rinc_58431_62037580_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   abus__r_62036900_rinc_58431_62037580_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(abus__r_62036900_rinc_58431_62037580_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,abus__r_62036900_rinc_58431_62037580_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__r_62036900_rinc_58431_62037580_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[abus__r_62036900_rinc_58431_62037580_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76673960();

   return behavior;
}

Behavior __76673600;

Behavior make__76673600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76673600 = behavior;
   behavior->owner = (Object)rinc_58431_62037580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58433_64385080_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76673760();

   return behavior;
}

Scope makerinc_58431_62037580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58431_62037580 = scope;
   scope->owner = (Object)channel__outputs_58422_54806600;
   scope->name = "rinc:431";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_62036900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76673800();
   scope->behaviors[1] = make__76673600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58434_62036520;

SignalI abus__w_62036020_winc_58434_62036520_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__w_62036020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_62036020_winc_58434_62036520_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)winc_58434_62036520;
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

Scope makewinc_58434_62036520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58434_62036520 = scope;
   scope->owner = (Object)channel__outputs_58422_54806600;
   scope->name = "winc:434";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_62036020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58437_62035900;

SignalI abus__r_62035520_rdec_58437_62035900_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_62035520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62035520_rdec_58437_62035900_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rdec_58437_62035900;
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

Scope makerdec_58437_62035900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58437_62035900 = scope;
   scope->owner = (Object)channel__outputs_58422_54806600;
   scope->name = "rdec:437";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_62035520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58441_62035400;

SignalI abus__w_62034900_wdec_58441_62035400_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__w_62034900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_62034900_wdec_58441_62035400_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)wdec_58441_62035400;
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

Scope makewdec_58441_62035400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58441_62035400 = scope;
   scope->owner = (Object)channel__outputs_58422_54806600;
   scope->name = "wdec:441";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_62034900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __76637060;

Behavior make__76637060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76637060 = behavior;
   behavior->owner = (Object)channel__outputs_58422_54806600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[reg__0_62134480_channel__outputs_58422_54806600_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76637220();

   return behavior;
}

Behavior __76636860;

Behavior make__76636860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76636860 = behavior;
   behavior->owner = (Object)channel__outputs_58422_54806600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58432_64385160_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58432_64385160_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58432_64385160_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58432_64385160_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58432_64385160_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58432_64385160_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58432_64385160_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76637020();

   return behavior;
}

Scope makechannel__outputs_58422_54806600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__outputs_58422_54806600 = scope;
   scope->owner = (Object)tanh__neural__network_58_84_51775500;
   scope->name = "channel_outputs:422";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_62134480();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58423_54806280();
   scope->scopes[1] = makeraddr_58425_62013980();
   scope->scopes[2] = makewaddr_58428_62013520();
   scope->scopes[3] = makerinc_58431_62037580();
   scope->scopes[4] = makewinc_58434_62036520();
   scope->scopes[5] = makerdec_58437_62035900();
   scope->scopes[6] = makewdec_58441_62035400();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76637060();
   scope->behaviors[1] = make__76636860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_58445_62365300;

SignalI reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makereg__0_63748480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__a0_58445_62365300;
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

SignalI reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makereg__1_63782980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__a0_58445_62365300;
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

Scope anum_58446_62364980;

Behavior __76671060;

Behavior make__76671060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76671060 = behavior;
   behavior->owner = (Object)anum_58446_62364980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76671280();

   return behavior;
}

Behavior __76670780;

Behavior make__76670780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76670780 = behavior;
   behavior->owner = (Object)anum_58446_62364980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58447_65355960_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58447_65355960_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58447_65355960_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58447_65355960_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58447_65355960_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58447_65355960_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58447_65355960_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76671020();

   return behavior;
}

Behavior __76669400;

Behavior make__76669400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76669400 = behavior;
   behavior->owner = (Object)anum_58446_62364980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76669580();

   return behavior;
}

Behavior __76669180;

Behavior make__76669180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76669180 = behavior;
   behavior->owner = (Object)anum_58446_62364980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58448_65641160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58448_65641160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58448_65641160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58448_65641160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58448_65641160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58448_65641160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58448_65641160_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76669360();

   return behavior;
}

Scope makeanum_58446_62364980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58446_62364980 = scope;
   scope->owner = (Object)channel__a0_58445_62365300;
   scope->name = "anum:446";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76671060();
   scope->behaviors[1] = make__76670780();
   scope->behaviors[2] = make__76669400();
   scope->behaviors[3] = make__76669180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58449_62942180;

Scope makeraddr_58449_62942180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58449_62942180 = scope;
   scope->owner = (Object)channel__a0_58445_62365300;
   scope->name = "raddr:449";
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

Scope waddr_58453_62941680;

Scope makewaddr_58453_62941680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58453_62941680 = scope;
   scope->owner = (Object)channel__a0_58445_62365300;
   scope->name = "waddr:453";
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

Scope rinc_58457_62941260;

SignalI abus__r_62940840_rinc_58457_62941260_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_62940840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62940840_rinc_58457_62941260_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rinc_58457_62941260;
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

Behavior __76687720;

Behavior make__76687720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76687720 = behavior;
   behavior->owner = (Object)rinc_58457_62941260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_62940840_rinc_58457_62941260_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   abus__r_62940840_rinc_58457_62941260_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   abus__r_62940840_rinc_58457_62941260_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(abus__r_62940840_rinc_58457_62941260_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,abus__r_62940840_rinc_58457_62941260_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__r_62940840_rinc_58457_62941260_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[abus__r_62940840_rinc_58457_62941260_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76687900();

   return behavior;
}

Behavior __76687500;

Behavior make__76687500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76687500 = behavior;
   behavior->owner = (Object)rinc_58457_62941260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   _58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   _58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(_58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,_58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[_58460_72998380_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76687680();

   return behavior;
}

Behavior __76687300;

Behavior make__76687300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76687300 = behavior;
   behavior->owner = (Object)rinc_58457_62941260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[reg__0_63748480_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[reg__1_63782980_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76692980();

   return behavior;
}

Scope makerinc_58457_62941260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58457_62941260 = scope;
   scope->owner = (Object)channel__a0_58445_62365300;
   scope->name = "rinc:457";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_62940840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76687720();
   scope->behaviors[1] = make__76687500();
   scope->behaviors[2] = make__76687300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58461_63404720;

SignalI abus__w_63404320_winc_58461_63404720_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__w_63404320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_63404320_winc_58461_63404720_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)winc_58461_63404720;
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

Scope makewinc_58461_63404720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58461_63404720 = scope;
   scope->owner = (Object)channel__a0_58445_62365300;
   scope->name = "winc:461";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_63404320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58465_63404200;

SignalI abus__r_63403780_rdec_58465_63404200_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__r_63403780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63403780_rdec_58465_63404200_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rdec_58465_63404200;
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

Scope makerdec_58465_63404200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58465_63404200 = scope;
   scope->owner = (Object)channel__a0_58445_62365300;
   scope->name = "rdec:465";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_63403780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58470_63403560;

SignalI abus__w_63403120_wdec_58470_63403560_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeabus__w_63403120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_63403120_wdec_58470_63403560_channel__a0_58445_62365300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)wdec_58470_63403560;
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

Scope makewdec_58470_63403560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58470_63403560 = scope;
   scope->owner = (Object)channel__a0_58445_62365300;
   scope->name = "wdec:470";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_63403120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_58445_62365300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_58445_62365300 = scope;
   scope->owner = (Object)tanh__neural__network_58_84_51775500;
   scope->name = "channel_a0:445";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_63748480();
   scope->inners[1] = makereg__1_63782980();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58446_62364980();
   scope->scopes[1] = makeraddr_58449_62942180();
   scope->scopes[2] = makewaddr_58453_62941680();
   scope->scopes[3] = makerinc_58457_62941260();
   scope->scopes[4] = makewinc_58461_63404720();
   scope->scopes[5] = makerdec_58465_63404200();
   scope->scopes[6] = makewdec_58470_63403560();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __73112920;

Behavior make__73112920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73112920 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_51775500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos = realloc(clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos,clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos[clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__73089400();

   return behavior;
}

Behavior __73706020;

Behavior make__73706020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73706020 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_51775500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos = realloc(clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos,clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos[clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__73112800();

   return behavior;
}

Behavior __74258500;

Behavior make__74258500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __74258500 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_51775500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos = realloc(clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos,clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->pos[clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__73705900();

   return behavior;
}

Behavior __76518180;

Behavior make__76518180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76518180 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_51775500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_74256160_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   fill_74256160_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   fill_74256160_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(fill_74256160_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,fill_74256160_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
fill_74256160_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[fill_74256160_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[flag__inputs_63915320_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76518540();

   return behavior;
}

Behavior __76517760;

Behavior make__76517760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76517760 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_51775500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_63807280_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack__1_63807280_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack__1_63807280_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack__1_63807280_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack__1_63807280_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__1_63807280_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack__1_63807280_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__network_74456260_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack__network_74456260_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack__network_74456260_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack__network_74456260_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack__network_74456260_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__network_74456260_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack__network_74456260_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[flag__outputs_64319640_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76518120();

   return behavior;
}

Behavior __76517600;

Behavior make__76517600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76517600 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_51775500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[clk_74256220_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[rst_74256200_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_74256180_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   req_74256180_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   req_74256180_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(req_74256180_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,req_74256180_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
req_74256180_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[req_74256180_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__0_63807300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack__0_63807300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack__0_63807300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack__0_63807300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack__0_63807300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__0_63807300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack__0_63807300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack__inputs_63915300_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76501760();

   return behavior;
}

Behavior __76517440;

Behavior make__76517440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76517440 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_51775500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_65243280_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack__layer_65243280_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack__layer_65243280_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack__layer_65243280_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack__layer_65243280_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__layer_65243280_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack__layer_65243280_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_72998480_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   ack__layer_72998480_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   ack__layer_72998480_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(ack__layer_72998480_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,ack__layer_72998480_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__layer_72998480_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[ack__layer_72998480_layer1_58_8400_68954800_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76501700();

   return behavior;
}

Scope maketanh__neural__network_58_84_51775500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   tanh__neural__network_58_84_51775500 = scope;
   scope->owner = (Object)tanh__neural__network_58_840_74258180;
   scope->name = "tanh_neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_65640680();
   scope->systemIs[1] = makelayer1_73091940();
   scope->num_inners = 16;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_63807300();
   scope->inners[1] = makeack__1_63807280();
   scope->inners[2] = makefill__inputs_63807260();
   scope->inners[3] = makevalue__inputs_63915440();
   scope->inners[4] = makeaddress__inputs_63915360();
   scope->inners[5] = makeflag__inputs_63915320();
   scope->inners[6] = makeack__inputs_63915300();
   scope->inners[7] = make_58409_63915240();
   scope->inners[8] = make_58410_63915140();
   scope->inners[9] = make_58411_64064200();
   scope->inners[10] = makefill__outputs_64064180();
   scope->inners[11] = makevalue__outputs_64319740();
   scope->inners[12] = makeaddress__outputs_64319660();
   scope->inners[13] = makeflag__outputs_64319640();
   scope->inners[14] = make_58432_64385160();
   scope->inners[15] = make_58433_64385080();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__inputs_58393_51796220();
   scope->scopes[1] = makechannel__outputs_58422_54806600();
   scope->scopes[2] = makechannel__a0_58445_62365300();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__73112920();
   scope->behaviors[1] = make__73706020();
   scope->behaviors[2] = make__74258500();
   scope->behaviors[3] = make__76518180();
   scope->behaviors[4] = make__76517760();
   scope->behaviors[5] = make__76517600();
   scope->behaviors[6] = make__76517440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh__neural__network_58_840_74258180() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh__neural__network_58_840_74258180 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh_neural_network:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_74256220();
   systemT->inputs[1] = makerst_74256200();
   systemT->inputs[2] = makereq_74256180();
   systemT->inputs[3] = makefill_74256160();
   systemT->inputs[4] = make_5848_74456320();
   systemT->num_outputs = 5;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__fill_74456280();
   systemT->outputs[1] = makeack__network_74456260();
   systemT->outputs[2] = make_5846_74456240();
   systemT->outputs[3] = make_5847_74456100();
   systemT->outputs[4] = make_5867_74517040();
   systemT->num_inouts = 1;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5868_74516920();

   systemT->scope = maketanh__neural__network_58_84_51775500();

   return systemT;
}