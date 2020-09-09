#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_52991540;

SignalI clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeclk_52988380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_840_52991540;
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

SignalI rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makerst_52988360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_840_52991540;
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

SignalI fill_52988340_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makefill_52988340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_52988340_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_840_52991540;
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

SignalI req_52988320_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makereq_52988320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_52988320_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_840_52991540;
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

SignalI ack__0_52988280_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeack__0_52988280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_52988280_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_840_52991540;
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

Block __54414420;

Block __54413420;

Block __54413220;

void code__54413220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_52506020_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,value__z0_52870840_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60410840(),flag__z0_53139340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__54413220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54413220 = block;
   block->owner = (Object)__54413420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54413220;

   return block;
};

Block __47687080;

void code__47687080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_52721140_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,value__z1_52913940_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60410700(),flag__z1_53139320_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__47687080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47687080 = block;
   block->owner = (Object)__54413420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47687080;

   return block;
};

void code__54413420() {
 code__54413220();
 code__47687080();
}

Block make__54413420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54413420 = block;
   block->owner = (Object)__54414420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54413420;

   return block;
};

Block __54414180;

void code__54414180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60410640(),flag__z0_53139340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60410580(),flag__z1_53139320_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__54414180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54414180 = block;
   block->owner = (Object)__54414420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54414180;

   return block;
};

void code__54414420() {
   {
      Value cond = ack__add_49746220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54413420();
   }
   else {
  code__54414180();
   }
      }
   }
}

Block make__54414420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54414420 = block;
   block->owner = (Object)__48968640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54414420;

   return block;
};

Block __48967460;

Block __48965460;

Block __48965280;

void code__48965280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a00_53038920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_5832_49479720______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60410320(),ack__a00_53139300_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__48965280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48965280 = block;
   block->owner = (Object)__48965460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48965280;

   return block;
};

Block __49792480;

void code__49792480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a01_53139360_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_5833_49595200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60410160(),ack__a01_53139280_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__49792480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49792480 = block;
   block->owner = (Object)__48965460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49792480;

   return block;
};

void code__48965460() {
 code__48965280();
 code__49792480();
}

Block make__48965460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48965460 = block;
   block->owner = (Object)__48967460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48965460;

   return block;
};

void code__48967460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_53139340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
         src1 = flag__z1_53139320_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48965460();
   }
      }
   }
}

Block make__48967460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48967460 = block;
   block->owner = (Object)__52038140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48967460;

   return block;
};

Block __52037960;

Block __52037640;

Block __52037200;

void code__52037200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60409940(),_58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52037200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52037200 = block;
   block->owner = (Object)__52037640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52037200;

   return block;
};

void code__52037640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60410060();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52037200();
   }
      }
   }
}

Block make__52037640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52037640 = block;
   block->owner = (Object)__52037960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52037640;

   return block;
};

Block __52036360;

Block __52035960;

void code__52035960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60409780(),_58129_53231340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52035960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52035960 = block;
   block->owner = (Object)__52036360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52035960;

   return block;
};

void code__52036360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60409860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52035960();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60409720(),_58128_53231440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52036360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52036360 = block;
   block->owner = (Object)__52037960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52036360;

   return block;
};

Block __52083960;

Block __52083440;

void code__52083440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60409560(),_58100_53139180_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52083440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52083440 = block;
   block->owner = (Object)__52083960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52083440;

   return block;
};

void code__52083960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60409640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52083440();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60409500(),_5899_53139260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52083960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52083960 = block;
   block->owner = (Object)__52037960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52083960;

   return block;
};

Block __52082480;

Block __52081680;

Block __52081040;

void code__52081040() {
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
                  src0 = _58100_53139180_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60409240();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_53139180_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60409120(),_5899_53139260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60409040(),_58101_53231460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52081040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52081040 = block;
   block->owner = (Object)__52081680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52081040;

   return block;
};

void code__52081680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60409380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52081040();
   }
      }
   }
}

Block make__52081680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52081680 = block;
   block->owner = (Object)__52082480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52081680;

   return block;
};

Block __52231220;

Block __52230560;

void code__52230560() {
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
                  src0 = _58129_53231340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60408760();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_53231340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60408660(),_58128_53231440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60408600(),_58130_53298880_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52230560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52230560 = block;
   block->owner = (Object)__52231220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52230560;

   return block;
};

void code__52231220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60408960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52230560();
   }
      }
   }
}

Block make__52231220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52231220 = block;
   block->owner = (Object)__52082480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52231220;

   return block;
};

Block __52579660;

Block __52579240;

Block __52578040;

void code__52578040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60408340(),_58191_53462680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52578040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52578040 = block;
   block->owner = (Object)__52579240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52578040;

   return block;
};

Block __52870420;

void code__52870420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60408260(),_58192_53554520_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52870420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52870420 = block;
   block->owner = (Object)__52579240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52870420;

   return block;
};

void code__52579240() {
{
      Value value = _58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60408400())) {
    code__52578040();
         }
         else if (value2integer(value) == value2integer(make__60408320())) {
    code__52870420();
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
                  src0 = _58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60408120();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52579240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52579240 = block;
   block->owner = (Object)__52579660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52579240;

   return block;
};

void code__52579660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60408520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52579240();
   }
      }
   }
}

Block make__52579660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52579660 = block;
   block->owner = (Object)__52082480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52579660;

   return block;
};

void code__52082480() {
 code__52081680();
 code__52231220();
 code__52579660();
}

Block make__52082480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52082480 = block;
   block->owner = (Object)__52037960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52082480;

   return block;
};

void code__52037960() {
 code__52037640();
 code__52036360();
 code__52083960();
   {
      Value cond = fill_52988340_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52082480();
   }
      }
   }
}

Block make__52037960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52037960 = block;
   block->owner = (Object)__52992040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52037960;

   return block;
};

Block __60148900;

void code__60148900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,clk_53571460_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_49746260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,ack_53571440_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,rst_53571380_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_52870840_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,z__value_53531820_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_52913940_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,z__value_52316620_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a00_53139300_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      src1 = ack__a01_53139280_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__0_52988280_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60148900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60148900 = block;
   block->owner = (Object)__60198980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60148900;

   return block;
};

Block __60148840;

void code__60148840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_53571340_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,ack__mac_49746240_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_53694160_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,value__a00_53038920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_52720660_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,value__a01_53139360_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60148840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60148840 = block;
   block->owner = (Object)__60198820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60148840;

   return block;
};

Block __48333380;

Block __49580520;

void code__49580520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50045800_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,make_ref_rangeS(mem_45681740_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700,value2integer(abus__w_50045640_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value),value2integer(abus__w_50045640_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49580520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49580520 = block;
   block->owner = (Object)__48333380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49580520;

   return block;
};

void code__48333380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_45681740_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
            idx = value2integer(abus__r_50045720_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49958880_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49875060_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49580520();
   }
      }
   }
}

Block make__48333380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48333380 = block;
   block->owner = (Object)__49877940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48333380;

   return block;
};

Block __60198060;

void code__60198060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49958880_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_5897_49861460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60198060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60198060 = block;
   block->owner = (Object)__60197840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60198060;

   return block;
};

Block __60197800;

void code__60197800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_49861460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,dbus__r_49958880_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60197800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60197800 = block;
   block->owner = (Object)__60197640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60197800;

   return block;
};

Block __60197340;

void code__60197340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49875080_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_5895_49861440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60197340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60197340 = block;
   block->owner = (Object)__60197160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60197340;

   return block;
};

Block __60197100;

void code__60197100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_49861440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,trig__r_49875080_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60197100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60197100 = block;
   block->owner = (Object)__60196920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60197100;

   return block;
};

Block __60196580;

void code__60196580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50045720_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_5896_49861340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60196580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60196580 = block;
   block->owner = (Object)__60196420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60196580;

   return block;
};

Block __60196380;

void code__60196380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_49861340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,abus__r_50045720_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60196380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60196380 = block;
   block->owner = (Object)__60196220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60196380;

   return block;
};

Block __60195860;

void code__60195860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49875060_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_5899_53139260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60195860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60195860 = block;
   block->owner = (Object)__60195660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60195860;

   return block;
};

Block __60195620;

void code__60195620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_53139260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,trig__w_49875060_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60195620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60195620 = block;
   block->owner = (Object)__60195460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60195620;

   return block;
};

Block __60195160;

void code__60195160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50045640_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58100_53139180_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60195160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60195160 = block;
   block->owner = (Object)__60194980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60195160;

   return block;
};

Block __60194920;

void code__60194920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_53139180_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,abus__w_50045640_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60194920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60194920 = block;
   block->owner = (Object)__60219280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60194920;

   return block;
};

Block __60218940;

void code__60218940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50045800_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58101_53231460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60218940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60218940 = block;
   block->owner = (Object)__60218780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60218940;

   return block;
};

Block __60218740;

void code__60218740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_53231460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,dbus__w_50045800_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60218740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60218740 = block;
   block->owner = (Object)__60218560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60218740;

   return block;
};

Block __49895780;

Block __47976500;

void code__47976500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50045100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,make_ref_rangeS(mem_47686860_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700,value2integer(abus__w_41825740_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value),value2integer(abus__w_41825740_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47976500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47976500 = block;
   block->owner = (Object)__49895780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47976500;

   return block;
};

void code__49895780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47686860_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
            idx = value2integer(abus__r_21527260_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49955180_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49873080_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47976500();
   }
      }
   }
}

Block make__49895780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49895780 = block;
   block->owner = (Object)__49807780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49895780;

   return block;
};

Block __60216680;

void code__60216680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49955180_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58126_49975680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60216680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60216680 = block;
   block->owner = (Object)__60216500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60216680;

   return block;
};

Block __60216460;

void code__60216460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_49975680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,dbus__r_49955180_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60216460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60216460 = block;
   block->owner = (Object)__60216260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60216460;

   return block;
};

Block __60215920;

void code__60215920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49873100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58124_49975660_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60215920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60215920 = block;
   block->owner = (Object)__60215760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60215920;

   return block;
};

Block __60215720;

void code__60215720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_49975660_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,trig__r_49873100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60215720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60215720 = block;
   block->owner = (Object)__60215560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60215720;

   return block;
};

Block __60215260;

void code__60215260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_21527260_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58125_49975580_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60215260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60215260 = block;
   block->owner = (Object)__60215100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60215260;

   return block;
};

Block __60215060;

void code__60215060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_49975580_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,abus__r_21527260_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60215060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60215060 = block;
   block->owner = (Object)__60214860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60215060;

   return block;
};

Block __60214500;

void code__60214500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49873080_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58128_53231440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60214500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60214500 = block;
   block->owner = (Object)__60214300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60214500;

   return block;
};

Block __60214260;

void code__60214260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_53231440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,trig__w_49873080_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60214260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60214260 = block;
   block->owner = (Object)__60214040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60214260;

   return block;
};

Block __60213740;

void code__60213740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_41825740_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58129_53231340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60213740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60213740 = block;
   block->owner = (Object)__60213580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60213740;

   return block;
};

Block __60213540;

void code__60213540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_53231340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,abus__w_41825740_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60213540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60213540 = block;
   block->owner = (Object)__60213380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60213540;

   return block;
};

Block __60213080;

void code__60213080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50045100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58130_53298880_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60213080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60213080 = block;
   block->owner = (Object)__60212920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60213080;

   return block;
};

Block __60212880;

void code__60212880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_53298880_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,dbus__w_50045100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60212880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60212880 = block;
   block->owner = (Object)__60212680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60212880;

   return block;
};

Block __60235520;

void code__60235520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51835220_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58143_51994060_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60235520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60235520 = block;
   block->owner = (Object)__60235360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60235520;

   return block;
};

Block __60235320;

void code__60235320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_51994060_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,reg__0_51835220_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60235320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60235320 = block;
   block->owner = (Object)__60235160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60235320;

   return block;
};

Block __60234740;

void code__60234740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_45875780_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58144_52077440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60234740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60234740 = block;
   block->owner = (Object)__60234540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60234740;

   return block;
};

Block __60234460;

void code__60234460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_52077440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,reg__1_45875780_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60234460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60234460 = block;
   block->owner = (Object)__60234300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60234460;

   return block;
};

Block __49873200;

Block __49897360;

Block __49896920;

void code__49896920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60396140(),_58125_49975580_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__49896920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49896920 = block;
   block->owner = (Object)__49897360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49896920;

   return block;
};

void code__49897360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60396220();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49896920();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60396080(),_58124_49975660_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__49897360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49897360 = block;
   block->owner = (Object)__49873200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49897360;

   return block;
};

Block __49896120;

Block __49895240;

void code__49895240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60395920(),_5896_49861340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__49895240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49895240 = block;
   block->owner = (Object)__49896120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49895240;

   return block;
};

void code__49896120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60396000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49895240();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60395860(),_5895_49861440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__49896120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49896120 = block;
   block->owner = (Object)__49873200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49896120;

   return block;
};

Block __49894440;

Block __49894000;

void code__49894000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60395700(),_5814_49163800______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__49894000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49894000 = block;
   block->owner = (Object)__49894440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49894000;

   return block;
};

void code__49894440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60395780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49894000();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60395640(),_5813_49163900______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__49894440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49894440 = block;
   block->owner = (Object)__49873200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49894440;

   return block;
};

Block __52023680;

Block __52023360;

Block __52023040;

Block __52022720;

void code__52022720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_49164000______58_84_49481440______58_840_59916700->c_value,rv_49873640_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60394980(),rvok_49873340_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52022720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52022720 = block;
   block->owner = (Object)__52023040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52022720;

   return block;
};

void code__52023040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_49163900______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60395160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52022720();
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
                  src0 = _5814_49163800______58_84_49481440______58_840_59916700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60394800();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_49163800______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60394700(),_5813_49163900______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52023040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52023040 = block;
   block->owner = (Object)__52023360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52023040;

   return block;
};

void code__52023360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60395280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52023040();
   }
      }
   }
}

Block make__52023360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52023360 = block;
   block->owner = (Object)__52023680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52023360;

   return block;
};

Block __52179780;

Block __52179460;

Block __52179140;

void code__52179140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_49861460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,lv0_49437060_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60394260(),lvok0_49873620_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52179140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52179140 = block;
   block->owner = (Object)__52179460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52179140;

   return block;
};

void code__52179460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_49861440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60394480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52179140();
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
                  src0 = _5896_49861340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60394140();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_49861340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60394040(),_5895_49861440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52179460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52179460 = block;
   block->owner = (Object)__52179780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52179460;

   return block;
};

void code__52179780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60394600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52179460();
   }
      }
   }
}

Block make__52179780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52179780 = block;
   block->owner = (Object)__52023680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52179780;

   return block;
};

Block __52508120;

Block __52507640;

Block __52507480;

void code__52507480() {
}

Block make__52507480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52507480 = block;
   block->owner = (Object)__52507640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52507480;

   return block;
};

Block __53224680;

void code__53224680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49667820_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58143_51994060_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53224680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53224680 = block;
   block->owner = (Object)__52507640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53224680;

   return block;
};

void code__52507640() {
 code__52507480();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_49667820_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
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
                              src0 = lv0_49437060_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49873640_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60393480();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49667820_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
 code__53224680();
}

Block make__52507640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52507640 = block;
   block->owner = (Object)__52508120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52507640;

   return block;
};

void code__52508120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60393880(),ack_49746260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60393820(),run_49873320_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
 code__52507640();
}

Block make__52508120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52508120 = block;
   block->owner = (Object)__52023680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52508120;

   return block;
};

Block __53464520;

Block __53464200;

Block __53463880;

void code__53463880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_49975680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,lv1_49565520_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60392980(),lvok1_49873360_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53463880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53463880 = block;
   block->owner = (Object)__53464200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53463880;

   return block;
};

void code__53464200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_49975660_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60393180();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53463880();
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
                  src0 = _58125_49975580_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60392840();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_49975580_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60392700(),_58124_49975660_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53464200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53464200 = block;
   block->owner = (Object)__53464520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53464200;

   return block;
};

void code__53464520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60393280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53464200();
   }
      }
   }
}

Block make__53464520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53464520 = block;
   block->owner = (Object)__52023680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53464520;

   return block;
};

Block __53678160;

Block __53677680;

Block __53677520;

void code__53677520() {
}

Block make__53677520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53677520 = block;
   block->owner = (Object)__53677680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53677520;

   return block;
};

Block __45664440;

void code__45664440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_49798480_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58144_52077440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__45664440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45664440 = block;
   block->owner = (Object)__53677680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45664440;

   return block;
};

void code__53677680() {
 code__53677520();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_49798480_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
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
                              src0 = lv1_49565520_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49873640_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60392040();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_49798480_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
 code__45664440();
}

Block make__53677680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53677680 = block;
   block->owner = (Object)__53678160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53677680;

   return block;
};

void code__53678160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60392540(),ack_49746260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60392460(),run_49873320_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
 code__53677680();
}

Block make__53678160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53678160 = block;
   block->owner = (Object)__52023680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53678160;

   return block;
};

void code__52023680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60395360(),run_49873320_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
 code__52023360();
 code__52179780();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49873620_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
         src1 = rvok_49873340_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52508120();
   }
      }
   }
 code__53464520();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49873360_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
         src1 = rvok_49873340_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53678160();
   }
      }
   }
}

Block make__52023680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52023680 = block;
   block->owner = (Object)__49873200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52023680;

   return block;
};

Block __49892600;

void code__49892600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60391860(),rvok_49873340_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60391800(),lvok0_49873620_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60391740(),av0_49667820_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60391680(),lvok1_49873360_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60391620(),av1_49798480_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__49892600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49892600 = block;
   block->owner = (Object)__49873200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49892600;

   return block;
};

void code__49873200() {
 code__49897360();
 code__49896120();
 code__49894440();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60395580(),ack_49746260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60395520(),run_49873320_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_52988320_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
         src1 = run_49873320_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52023680();
   }
   else {
  code__49892600();
   }
      }
   }
}

Block make__49873200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49873200 = block;
   block->owner = (Object)__47852540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49873200;

   return block;
};

Block __60232380;

void code__60232380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58176_52159820_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60232380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60232380 = block;
   block->owner = (Object)__60232080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60232380;

   return block;
};

Block __60232040;

void code__60232040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58176_52159820_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60232040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60232040 = block;
   block->owner = (Object)__60231880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60232040;

   return block;
};

Block __60231580;

void code__60231580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58177_52283860_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60231580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60231580 = block;
   block->owner = (Object)__60231420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60231580;

   return block;
};

Block __60231380;

void code__60231380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_52283860_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60231380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60231380 = block;
   block->owner = (Object)__60231220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60231380;

   return block;
};

Block __60230920;

void code__60230920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58191_53462680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60230920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60230920 = block;
   block->owner = (Object)__60230760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60230920;

   return block;
};

Block __60230720;

void code__60230720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58191_53462680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60230720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60230720 = block;
   block->owner = (Object)__60230520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60230720;

   return block;
};

Block __60230060;

void code__60230060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58192_53554520_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60230060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60230060 = block;
   block->owner = (Object)__60229900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60230060;

   return block;
};

Block __60229860;

void code__60229860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58192_53554520_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60229860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60229860 = block;
   block->owner = (Object)__60229700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60229860;

   return block;
};

Block __60227920;

void code__60227920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47870060_winc_58190_47870920_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60227920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60227920 = block;
   block->owner = (Object)__60227760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60227920;

   return block;
};

Block __60227720;

void code__60227720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,abus__w_47870060_winc_58190_47870920_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60227720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60227720 = block;
   block->owner = (Object)__60252100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60227720;

   return block;
};

Block __60250980;

void code__60250980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52191380_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58206_52506020_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60250980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60250980 = block;
   block->owner = (Object)__60250780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60250980;

   return block;
};

Block __60250720;

void code__60250720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_52506020_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,reg__0_52191380_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60250720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60250720 = block;
   block->owner = (Object)__60250480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60250720;

   return block;
};

Block __60250120;

void code__60250120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_52318040_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,_58207_52721140_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60250120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60250120 = block;
   block->owner = (Object)__60249960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60250120;

   return block;
};

Block __60249920;

void code__60249920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_52721140_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,reg__1_52318040_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60249920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60249920 = block;
   block->owner = (Object)__60249760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60249920;

   return block;
};

Block __53321380;

Block __53319680;

Block __53319360;

void code__53319360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_51994060_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,lv0_53056380_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60413720(),lvok0_53321580_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53319360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53319360 = block;
   block->owner = (Object)__53319680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53319360;

   return block;
};

Block __53555580;

void code__53555580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58176_52159820_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,rv0_53227900_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60413580(),rvok0_53321540_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53555580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53555580 = block;
   block->owner = (Object)__53319680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53555580;

   return block;
};

Block __53782440;

Block __53781960;

void code__53781960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_53056380_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      src1 = rv0_53227900_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58206_52506020_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53781960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53781960 = block;
   block->owner = (Object)__53782440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53781960;

   return block;
};

void code__53782440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60413420(),run_53321500_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60413360(),ack__add_49746220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
 code__53781960();
}

Block make__53782440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53782440 = block;
   block->owner = (Object)__53319680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53782440;

   return block;
};

Block __54607960;

void code__54607960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_52077440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,lv1_53134040_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60412940(),lvok1_53321560_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__54607960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54607960 = block;
   block->owner = (Object)__53319680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54607960;

   return block;
};

Block __47690420;

void code__47690420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_52283860_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,rv1_53321600_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60412800(),rvok1_53321520_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__47690420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47690420 = block;
   block->owner = (Object)__53319680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47690420;

   return block;
};

Block __48257020;

Block __48255160;

void code__48255160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_53134040_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      src1 = rv1_53321600_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58207_52721140_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__48255160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48255160 = block;
   block->owner = (Object)__48257020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48255160;

   return block;
};

void code__48257020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60412640(),run_53321500_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60412580(),ack__add_49746220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
 code__48255160();
}

Block make__48257020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48257020 = block;
   block->owner = (Object)__53319680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48257020;

   return block;
};

void code__53319680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60413860(),run_53321500_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
 code__53319360();
 code__53555580();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53321580_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
         src1 = rvok0_53321540_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53782440();
   }
      }
   }
 code__54607960();
 code__47690420();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_53321560_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
         src1 = rvok1_53321520_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48257020();
   }
      }
   }
}

Block make__53319680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53319680 = block;
   block->owner = (Object)__53321380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53319680;

   return block;
};

Block __53320900;

void code__53320900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60412300(),lvok0_53321580_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60412220(),rvok0_53321540_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60412120(),lvok1_53321560_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60412060(),rvok1_53321520_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53320900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53320900 = block;
   block->owner = (Object)__53321380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53320900;

   return block;
};

void code__53321380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60414080(),ack__add_49746220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60414020(),run_53321500_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_49746240_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
         src1 = run_53321500_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53319680();
   }
   else {
  code__53320900();
   }
      }
   }
}

Block make__53321380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53321380 = block;
   block->owner = (Object)__49746460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53321380;

   return block;
};

Value make__60396220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60396140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60396080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60396000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60395920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60395860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60395780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60395700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60395640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60395580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60395520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60395360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60395280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60395160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60394980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60394800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60394700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60394600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60394480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60394260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60394140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60394040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60393880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60393820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60393480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60393280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60393180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60392980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60392840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60392700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60392540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60392460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60392040() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60391860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60391800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60391740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60391680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60391620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60414080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60414020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60413860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60413720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60413580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60413420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60413360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60412940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60412800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60412640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60412580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60412300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60412220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60412120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60412060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60410840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60410700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60410640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60410580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60410320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60410160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60410060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60409940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60409860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60409780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60409720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60409640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60409560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60409500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60409380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60409240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60409120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60409040() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60408960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60408760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60408660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60408600() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60408520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60408400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60408340() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60408320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60408260() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60408120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer0_58_84_49878600;

SignalI ack_49746260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeack_49746260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_49746260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
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

SignalI ack__mac_49746240_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeack__mac_49746240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_49746240_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
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

SignalI ack__add_49746220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeack__add_49746220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_49746220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
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

SignalI _5897_49861460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_5897_49861460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_49861460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":97";
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

SignalI _5895_49861440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_5895_49861440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_49861440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":95";
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

SignalI _5896_49861340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_5896_49861340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_49861340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":96";
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

SignalI _58126_49975680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58126_49975680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_49975680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":126";
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

SignalI _58124_49975660_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58124_49975660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_49975660_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":124";
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

SignalI _58125_49975580_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58125_49975580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_49975580_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":125";
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

SignalI _58143_51994060_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58143_51994060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_51994060_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":143";
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

SignalI _58144_52077440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58144_52077440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_52077440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":144";
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

SignalI _58176_52159820_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58176_52159820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58176_52159820_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":176";
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

SignalI _58177_52283860_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58177_52283860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58177_52283860_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":177";
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

SignalI _58206_52506020_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58206_52506020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58206_52506020_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":206";
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

SignalI _58207_52721140_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58207_52721140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58207_52721140_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":207";
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

SignalI value__z0_52870840_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makevalue__z0_52870840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_52870840_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
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

SignalI value__z1_52913940_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makevalue__z1_52913940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_52913940_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = "value_z1";
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

SignalI value__a00_53038920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makevalue__a00_53038920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a00_53038920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = "value_a00";
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

SignalI value__a01_53139360_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makevalue__a01_53139360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a01_53139360_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = "value_a01";
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

SignalI flag__z0_53139340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeflag__z0_53139340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_53139340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
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

SignalI flag__z1_53139320_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeflag__z1_53139320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_53139320_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = "flag_z1";
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

SignalI ack__a00_53139300_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeack__a00_53139300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a00_53139300_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = "ack_a00";
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

SignalI ack__a01_53139280_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeack__a01_53139280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a01_53139280_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = "ack_a01";
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

SignalI _5899_53139260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_5899_53139260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_53139260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":99";
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

SignalI _58100_53139180_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58100_53139180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_53139180_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":100";
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

SignalI _58101_53231460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58101_53231460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_53231460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":101";
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

SignalI _58128_53231440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58128_53231440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_53231440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":128";
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

SignalI _58129_53231340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58129_53231340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_53231340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":129";
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

SignalI _58130_53298880_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58130_53298880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_53298880_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":130";
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

SignalI _58191_53462680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58191_53462680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58191_53462680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":191";
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

SignalI _58192_53554520_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58192_53554520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58192_53554520_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":192";
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

SignalI _58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI make_58193_53554440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)layer0_58_84_49878600;
   signalI->name = ":193";
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

SystemI counter0_53571160;

SystemI makecounter0_53571160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter0_53571160 = systemI;
   systemI->owner = (Object)layer0_58_84_49878600;
   systemI->name = "counter0";
   systemI->system = counter0_58_840_53573440;

   return systemI;
};

SystemI func0_53693960;

SystemI makefunc0_53693960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_53693960 = systemI;
   systemI->owner = (Object)layer0_58_84_49878600;
   systemI->name = "func0";
   systemI->system = func0_58_841_53382340;

   return systemI;
};

SystemI func1_52720400;

SystemI makefunc1_52720400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_52720400 = systemI;
   systemI->owner = (Object)layer0_58_84_49878600;
   systemI->name = "func1";
   systemI->system = func1_58_840_52163920;

   return systemI;
};

Scope channel__w0_5883_49878220;

SignalI trig__r_49875080_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI maketrig__r_49875080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49875080_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w0_5883_49878220;
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

SignalI trig__w_49875060_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI maketrig__w_49875060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49875060_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w0_5883_49878220;
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

SignalI dbus__r_49958880_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makedbus__r_49958880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49958880_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w0_5883_49878220;
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

SignalI dbus__w_50045800_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makedbus__w_50045800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50045800_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w0_5883_49878220;
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

SignalI abus__r_50045720_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__r_50045720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50045720_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w0_5883_49878220;
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

SignalI abus__w_50045640_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__w_50045640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50045640_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w0_5883_49878220;
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

SignalI mem_45681740_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makemem_45681740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_45681740_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w0_5883_49878220;
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

Scope raddr_5884_49877880;

Scope makeraddr_5884_49877880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_49877880 = scope;
   scope->owner = (Object)channel__w0_5883_49878220;
   scope->name = "raddr:84";
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

Scope waddr_5889_49877400;

Scope makewaddr_5889_49877400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_49877400 = scope;
   scope->owner = (Object)channel__w0_5883_49878220;
   scope->name = "waddr:89";
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

Scope rinc_5894_49876980;

Scope makerinc_5894_49876980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_49876980 = scope;
   scope->owner = (Object)channel__w0_5883_49878220;
   scope->name = "rinc:94";
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

Scope winc_5898_49876560;

Scope makewinc_5898_49876560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_49876560 = scope;
   scope->owner = (Object)channel__w0_5883_49878220;
   scope->name = "winc:98";
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

Scope rdec_58102_49876040;

Scope makerdec_58102_49876040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_49876040 = scope;
   scope->owner = (Object)channel__w0_5883_49878220;
   scope->name = "rdec:102";
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

Scope wdec_58107_49875520;

Scope makewdec_58107_49875520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_49875520 = scope;
   scope->owner = (Object)channel__w0_5883_49878220;
   scope->name = "wdec:107";
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

Behavior __49877940;

Behavior make__49877940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49877940 = behavior;
   behavior->owner = (Object)channel__w0_5883_49878220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_neg += 1;
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->neg = realloc(clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->neg,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_neg*sizeof(Object));
clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->neg[clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_neg-1] = (Object)behavior;
   behavior->block = make__48333380();

   return behavior;
}

Behavior __60197840;

Behavior make__60197840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60197840 = behavior;
   behavior->owner = (Object)channel__w0_5883_49878220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49958880_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   dbus__r_49958880_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   dbus__r_49958880_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(dbus__r_49958880_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,dbus__r_49958880_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
dbus__r_49958880_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[dbus__r_49958880_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60198060();

   return behavior;
}

Behavior __60197640;

Behavior make__60197640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60197640 = behavior;
   behavior->owner = (Object)channel__w0_5883_49878220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_49861460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _5897_49861460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _5897_49861460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_5897_49861460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_5897_49861460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5897_49861460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_5897_49861460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60197800();

   return behavior;
}

Behavior __60197160;

Behavior make__60197160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60197160 = behavior;
   behavior->owner = (Object)channel__w0_5883_49878220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49875080_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   trig__r_49875080_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   trig__r_49875080_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(trig__r_49875080_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,trig__r_49875080_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
trig__r_49875080_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[trig__r_49875080_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60197340();

   return behavior;
}

Behavior __60196920;

Behavior make__60196920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60196920 = behavior;
   behavior->owner = (Object)channel__w0_5883_49878220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_49861440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _5895_49861440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _5895_49861440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_5895_49861440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_5895_49861440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5895_49861440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_5895_49861440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60197100();

   return behavior;
}

Behavior __60196420;

Behavior make__60196420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60196420 = behavior;
   behavior->owner = (Object)channel__w0_5883_49878220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50045720_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   abus__r_50045720_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   abus__r_50045720_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(abus__r_50045720_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,abus__r_50045720_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
abus__r_50045720_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[abus__r_50045720_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60196580();

   return behavior;
}

Behavior __60196220;

Behavior make__60196220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60196220 = behavior;
   behavior->owner = (Object)channel__w0_5883_49878220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_49861340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _5896_49861340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _5896_49861340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_5896_49861340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_5896_49861340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5896_49861340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_5896_49861340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60196380();

   return behavior;
}

Behavior __60195660;

Behavior make__60195660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60195660 = behavior;
   behavior->owner = (Object)channel__w0_5883_49878220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49875060_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   trig__w_49875060_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   trig__w_49875060_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(trig__w_49875060_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,trig__w_49875060_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
trig__w_49875060_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[trig__w_49875060_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60195860();

   return behavior;
}

Behavior __60195460;

Behavior make__60195460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60195460 = behavior;
   behavior->owner = (Object)channel__w0_5883_49878220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_53139260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _5899_53139260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _5899_53139260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_5899_53139260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_5899_53139260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5899_53139260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_5899_53139260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60195620();

   return behavior;
}

Behavior __60194980;

Behavior make__60194980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60194980 = behavior;
   behavior->owner = (Object)channel__w0_5883_49878220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50045640_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   abus__w_50045640_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   abus__w_50045640_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(abus__w_50045640_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,abus__w_50045640_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
abus__w_50045640_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[abus__w_50045640_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60195160();

   return behavior;
}

Behavior __60219280;

Behavior make__60219280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60219280 = behavior;
   behavior->owner = (Object)channel__w0_5883_49878220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_53139180_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58100_53139180_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58100_53139180_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58100_53139180_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58100_53139180_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58100_53139180_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58100_53139180_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60194920();

   return behavior;
}

Behavior __60218780;

Behavior make__60218780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60218780 = behavior;
   behavior->owner = (Object)channel__w0_5883_49878220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50045800_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   dbus__w_50045800_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   dbus__w_50045800_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(dbus__w_50045800_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,dbus__w_50045800_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
dbus__w_50045800_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[dbus__w_50045800_channel__w0_5883_49878220_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60218940();

   return behavior;
}

Behavior __60218560;

Behavior make__60218560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60218560 = behavior;
   behavior->owner = (Object)channel__w0_5883_49878220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_53231460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58101_53231460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58101_53231460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58101_53231460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58101_53231460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58101_53231460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58101_53231460_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60218740();

   return behavior;
}

Scope makechannel__w0_5883_49878220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_49878220 = scope;
   scope->owner = (Object)layer0_58_84_49878600;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49875080();
   scope->inners[1] = maketrig__w_49875060();
   scope->inners[2] = makedbus__r_49958880();
   scope->inners[3] = makedbus__w_50045800();
   scope->inners[4] = makeabus__r_50045720();
   scope->inners[5] = makeabus__w_50045640();
   scope->inners[6] = makemem_45681740();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_49877880();
   scope->scopes[1] = makewaddr_5889_49877400();
   scope->scopes[2] = makerinc_5894_49876980();
   scope->scopes[3] = makewinc_5898_49876560();
   scope->scopes[4] = makerdec_58102_49876040();
   scope->scopes[5] = makewdec_58107_49875520();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49877940();
   scope->behaviors[1] = make__60197840();
   scope->behaviors[2] = make__60197640();
   scope->behaviors[3] = make__60197160();
   scope->behaviors[4] = make__60196920();
   scope->behaviors[5] = make__60196420();
   scope->behaviors[6] = make__60196220();
   scope->behaviors[7] = make__60195660();
   scope->behaviors[8] = make__60195460();
   scope->behaviors[9] = make__60194980();
   scope->behaviors[10] = make__60219280();
   scope->behaviors[11] = make__60218780();
   scope->behaviors[12] = make__60218560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_49877540;

SignalI trig__r_49873100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI maketrig__r_49873100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49873100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w1_58112_49877540;
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

SignalI trig__w_49873080_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI maketrig__w_49873080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49873080_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w1_58112_49877540;
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

SignalI dbus__r_49955180_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makedbus__r_49955180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49955180_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w1_58112_49877540;
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

SignalI dbus__w_50045100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makedbus__w_50045100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50045100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w1_58112_49877540;
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

SignalI abus__r_21527260_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__r_21527260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_21527260_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w1_58112_49877540;
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

SignalI abus__w_41825740_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__w_41825740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_41825740_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w1_58112_49877540;
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

SignalI mem_47686860_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makemem_47686860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47686860_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__w1_58112_49877540;
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

Scope raddr_58113_49877060;

Scope makeraddr_58113_49877060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_49877060 = scope;
   scope->owner = (Object)channel__w1_58112_49877540;
   scope->name = "raddr:113";
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

Scope waddr_58118_49876240;

Scope makewaddr_58118_49876240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_49876240 = scope;
   scope->owner = (Object)channel__w1_58112_49877540;
   scope->name = "waddr:118";
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

Scope rinc_58123_49875240;

Scope makerinc_58123_49875240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_49875240 = scope;
   scope->owner = (Object)channel__w1_58112_49877540;
   scope->name = "rinc:123";
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

Scope winc_58127_49874580;

Scope makewinc_58127_49874580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_49874580 = scope;
   scope->owner = (Object)channel__w1_58112_49877540;
   scope->name = "winc:127";
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

Scope rdec_58131_49874120;

Scope makerdec_58131_49874120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_49874120 = scope;
   scope->owner = (Object)channel__w1_58112_49877540;
   scope->name = "rdec:131";
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

Scope wdec_58136_49873600;

Scope makewdec_58136_49873600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_49873600 = scope;
   scope->owner = (Object)channel__w1_58112_49877540;
   scope->name = "wdec:136";
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

Behavior __49807780;

Behavior make__49807780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49807780 = behavior;
   behavior->owner = (Object)channel__w1_58112_49877540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_neg += 1;
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->neg = realloc(clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->neg,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_neg*sizeof(Object));
clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->neg[clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_neg-1] = (Object)behavior;
   behavior->block = make__49895780();

   return behavior;
}

Behavior __60216500;

Behavior make__60216500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60216500 = behavior;
   behavior->owner = (Object)channel__w1_58112_49877540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49955180_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   dbus__r_49955180_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   dbus__r_49955180_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(dbus__r_49955180_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,dbus__r_49955180_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
dbus__r_49955180_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[dbus__r_49955180_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60216680();

   return behavior;
}

Behavior __60216260;

Behavior make__60216260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60216260 = behavior;
   behavior->owner = (Object)channel__w1_58112_49877540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_49975680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58126_49975680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58126_49975680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58126_49975680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58126_49975680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58126_49975680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58126_49975680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60216460();

   return behavior;
}

Behavior __60215760;

Behavior make__60215760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60215760 = behavior;
   behavior->owner = (Object)channel__w1_58112_49877540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49873100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   trig__r_49873100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   trig__r_49873100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(trig__r_49873100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,trig__r_49873100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
trig__r_49873100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[trig__r_49873100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60215920();

   return behavior;
}

Behavior __60215560;

Behavior make__60215560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60215560 = behavior;
   behavior->owner = (Object)channel__w1_58112_49877540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_49975660_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58124_49975660_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58124_49975660_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58124_49975660_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58124_49975660_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58124_49975660_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58124_49975660_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60215720();

   return behavior;
}

Behavior __60215100;

Behavior make__60215100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60215100 = behavior;
   behavior->owner = (Object)channel__w1_58112_49877540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_21527260_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   abus__r_21527260_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   abus__r_21527260_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(abus__r_21527260_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,abus__r_21527260_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
abus__r_21527260_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[abus__r_21527260_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60215260();

   return behavior;
}

Behavior __60214860;

Behavior make__60214860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60214860 = behavior;
   behavior->owner = (Object)channel__w1_58112_49877540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_49975580_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58125_49975580_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58125_49975580_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58125_49975580_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58125_49975580_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58125_49975580_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58125_49975580_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60215060();

   return behavior;
}

Behavior __60214300;

Behavior make__60214300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60214300 = behavior;
   behavior->owner = (Object)channel__w1_58112_49877540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49873080_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   trig__w_49873080_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   trig__w_49873080_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(trig__w_49873080_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,trig__w_49873080_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
trig__w_49873080_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[trig__w_49873080_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60214500();

   return behavior;
}

Behavior __60214040;

Behavior make__60214040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60214040 = behavior;
   behavior->owner = (Object)channel__w1_58112_49877540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_53231440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58128_53231440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58128_53231440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58128_53231440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58128_53231440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58128_53231440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58128_53231440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60214260();

   return behavior;
}

Behavior __60213580;

Behavior make__60213580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60213580 = behavior;
   behavior->owner = (Object)channel__w1_58112_49877540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_41825740_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   abus__w_41825740_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   abus__w_41825740_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(abus__w_41825740_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,abus__w_41825740_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
abus__w_41825740_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[abus__w_41825740_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60213740();

   return behavior;
}

Behavior __60213380;

Behavior make__60213380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60213380 = behavior;
   behavior->owner = (Object)channel__w1_58112_49877540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_53231340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58129_53231340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58129_53231340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58129_53231340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58129_53231340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58129_53231340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58129_53231340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60213540();

   return behavior;
}

Behavior __60212920;

Behavior make__60212920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60212920 = behavior;
   behavior->owner = (Object)channel__w1_58112_49877540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50045100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   dbus__w_50045100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   dbus__w_50045100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(dbus__w_50045100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,dbus__w_50045100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
dbus__w_50045100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[dbus__w_50045100_channel__w1_58112_49877540_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60213080();

   return behavior;
}

Behavior __60212680;

Behavior make__60212680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60212680 = behavior;
   behavior->owner = (Object)channel__w1_58112_49877540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_53298880_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58130_53298880_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58130_53298880_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58130_53298880_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58130_53298880_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58130_53298880_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58130_53298880_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60212880();

   return behavior;
}

Scope makechannel__w1_58112_49877540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_49877540 = scope;
   scope->owner = (Object)layer0_58_84_49878600;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49873100();
   scope->inners[1] = maketrig__w_49873080();
   scope->inners[2] = makedbus__r_49955180();
   scope->inners[3] = makedbus__w_50045100();
   scope->inners[4] = makeabus__r_21527260();
   scope->inners[5] = makeabus__w_41825740();
   scope->inners[6] = makemem_47686860();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_49877060();
   scope->scopes[1] = makewaddr_58118_49876240();
   scope->scopes[2] = makerinc_58123_49875240();
   scope->scopes[3] = makewinc_58127_49874580();
   scope->scopes[4] = makerdec_58131_49874120();
   scope->scopes[5] = makewdec_58136_49873600();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49807780();
   scope->behaviors[1] = make__60216500();
   scope->behaviors[2] = make__60216260();
   scope->behaviors[3] = make__60215760();
   scope->behaviors[4] = make__60215560();
   scope->behaviors[5] = make__60215100();
   scope->behaviors[6] = make__60214860();
   scope->behaviors[7] = make__60214300();
   scope->behaviors[8] = make__60214040();
   scope->behaviors[9] = make__60213580();
   scope->behaviors[10] = make__60213380();
   scope->behaviors[11] = make__60212920();
   scope->behaviors[12] = make__60212680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_49807640;

SignalI reg__0_51835220_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makereg__0_51835220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51835220_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__accum_58141_49807640;
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

SignalI reg__1_45875780_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makereg__1_45875780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_45875780_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__accum_58141_49807640;
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

Scope anum_58142_49913700;

Scope makeanum_58142_49913700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_49913700 = scope;
   scope->owner = (Object)channel__accum_58141_49807640;
   scope->name = "anum:142";
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

Scope raddr_58145_49913280;

Scope makeraddr_58145_49913280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_49913280 = scope;
   scope->owner = (Object)channel__accum_58141_49807640;
   scope->name = "raddr:145";
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

Scope waddr_58149_49912860;

Scope makewaddr_58149_49912860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_49912860 = scope;
   scope->owner = (Object)channel__accum_58141_49807640;
   scope->name = "waddr:149";
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

Scope rinc_58153_49912380;

SignalI abus__r_49911180_rinc_58153_49912380_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__r_49911180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49911180_rinc_58153_49912380_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rinc_58153_49912380;
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

Scope makerinc_58153_49912380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_49912380 = scope;
   scope->owner = (Object)channel__accum_58141_49807640;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49911180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_49910560;

SignalI abus__w_49910180_winc_58158_49910560_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__w_49910180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49910180_winc_58158_49910560_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)winc_58158_49910560;
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

Scope makewinc_58158_49910560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_49910560 = scope;
   scope->owner = (Object)channel__accum_58141_49807640;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49910180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_49910060;

SignalI abus__r_49909680_rdec_58163_49910060_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__r_49909680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49909680_rdec_58163_49910060_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rdec_58163_49910060;
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

Scope makerdec_58163_49910060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_49910060 = scope;
   scope->owner = (Object)channel__accum_58141_49807640;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49909680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_49909560;

SignalI abus__w_49909140_wdec_58168_49909560_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__w_49909140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49909140_wdec_58168_49909560_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)wdec_58168_49909560;
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

Scope makewdec_58168_49909560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_49909560 = scope;
   scope->owner = (Object)channel__accum_58141_49807640;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49909140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60235360;

Behavior make__60235360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60235360 = behavior;
   behavior->owner = (Object)channel__accum_58141_49807640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51835220_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   reg__0_51835220_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   reg__0_51835220_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(reg__0_51835220_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,reg__0_51835220_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__0_51835220_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[reg__0_51835220_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60235520();

   return behavior;
}

Behavior __60235160;

Behavior make__60235160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60235160 = behavior;
   behavior->owner = (Object)channel__accum_58141_49807640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_51994060_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58143_51994060_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58143_51994060_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58143_51994060_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58143_51994060_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58143_51994060_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58143_51994060_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60235320();

   return behavior;
}

Behavior __60234540;

Behavior make__60234540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60234540 = behavior;
   behavior->owner = (Object)channel__accum_58141_49807640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_45875780_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   reg__1_45875780_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   reg__1_45875780_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(reg__1_45875780_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,reg__1_45875780_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__1_45875780_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[reg__1_45875780_channel__accum_58141_49807640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60234740();

   return behavior;
}

Behavior __60234300;

Behavior make__60234300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60234300 = behavior;
   behavior->owner = (Object)channel__accum_58141_49807640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_52077440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58144_52077440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58144_52077440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58144_52077440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58144_52077440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58144_52077440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58144_52077440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60234460();

   return behavior;
}

Scope makechannel__accum_58141_49807640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_49807640 = scope;
   scope->owner = (Object)layer0_58_84_49878600;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51835220();
   scope->inners[1] = makereg__1_45875780();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_49913700();
   scope->scopes[1] = makeraddr_58145_49913280();
   scope->scopes[2] = makewaddr_58149_49912860();
   scope->scopes[3] = makerinc_58153_49912380();
   scope->scopes[4] = makewinc_58158_49910560();
   scope->scopes[5] = makerdec_58163_49910060();
   scope->scopes[6] = makewdec_58168_49909560();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60235360();
   scope->behaviors[1] = make__60235160();
   scope->behaviors[2] = make__60234540();
   scope->behaviors[3] = make__60234300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_49350640;

SignalI lv0_49437060_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makelv0_49437060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49437060_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58173_49350640;
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

SignalI lv1_49565520_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makelv1_49565520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_49565520_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58173_49350640;
   signalI->name = "lv1";
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

SignalI av0_49667820_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeav0_49667820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49667820_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58173_49350640;
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

SignalI av1_49798480_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeav1_49798480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_49798480_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58173_49350640;
   signalI->name = "av1";
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

SignalI rv_49873640_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makerv_49873640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49873640_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58173_49350640;
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

SignalI lvok0_49873620_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makelvok0_49873620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49873620_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58173_49350640;
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

SignalI lvok1_49873360_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makelvok1_49873360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49873360_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58173_49350640;
   signalI->name = "lvok1";
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

SignalI rvok_49873340_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makervok_49873340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49873340_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58173_49350640;
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

SignalI run_49873320_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makerun_49873320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49873320_mac__n1_58173_49350640_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)mac__n1_58173_49350640;
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

Behavior __47852540;

Behavior make__47852540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47852540 = behavior;
   behavior->owner = (Object)mac__n1_58173_49350640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos += 1;
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos = realloc(clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos*sizeof(Object));
clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos[clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos-1] = (Object)behavior;
   behavior->block = make__49873200();

   return behavior;
}

Scope makemac__n1_58173_49350640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_49350640 = scope;
   scope->owner = (Object)layer0_58_84_49878600;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49437060();
   scope->inners[1] = makelv1_49565520();
   scope->inners[2] = makeav0_49667820();
   scope->inners[3] = makeav1_49798480();
   scope->inners[4] = makerv_49873640();
   scope->inners[5] = makelvok0_49873620();
   scope->inners[6] = makelvok1_49873360();
   scope->inners[7] = makervok_49873340();
   scope->inners[8] = makerun_49873320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47852540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58174_47852380;

SignalI reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makereg__0_48253640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__bias_58174_47852380;
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

SignalI reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makereg__1_49398780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__bias_58174_47852380;
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

Scope anum_58175_47851960;

Scope makeanum_58175_47851960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58175_47851960 = scope;
   scope->owner = (Object)channel__bias_58174_47852380;
   scope->name = "anum:175";
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

Scope raddr_58178_47851040;

Scope makeraddr_58178_47851040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58178_47851040 = scope;
   scope->owner = (Object)channel__bias_58174_47852380;
   scope->name = "raddr:178";
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

Scope waddr_58182_47849720;

Scope makewaddr_58182_47849720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58182_47849720 = scope;
   scope->owner = (Object)channel__bias_58174_47852380;
   scope->name = "waddr:182";
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

Scope rinc_58186_47872040;

SignalI abus__r_47871220_rinc_58186_47872040_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__r_47871220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47871220_rinc_58186_47872040_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rinc_58186_47872040;
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

Scope makerinc_58186_47872040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58186_47872040 = scope;
   scope->owner = (Object)channel__bias_58174_47852380;
   scope->name = "rinc:186";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47871220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58190_47870920;

SignalI abus__w_47870060_winc_58190_47870920_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__w_47870060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47870060_winc_58190_47870920_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)winc_58190_47870920;
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

Behavior __60227760;

Behavior make__60227760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60227760 = behavior;
   behavior->owner = (Object)winc_58190_47870920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47870060_winc_58190_47870920_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   abus__w_47870060_winc_58190_47870920_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   abus__w_47870060_winc_58190_47870920_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(abus__w_47870060_winc_58190_47870920_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,abus__w_47870060_winc_58190_47870920_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
abus__w_47870060_winc_58190_47870920_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[abus__w_47870060_winc_58190_47870920_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60227920();

   return behavior;
}

Behavior __60252100;

Behavior make__60252100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60252100 = behavior;
   behavior->owner = (Object)winc_58190_47870920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58193_53554440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60227720();

   return behavior;
}

Scope makewinc_58190_47870920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58190_47870920 = scope;
   scope->owner = (Object)channel__bias_58174_47852380;
   scope->name = "winc:190";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47870060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60227760();
   scope->behaviors[1] = make__60252100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58194_47868980;

SignalI abus__r_47868180_rdec_58194_47868980_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__r_47868180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47868180_rdec_58194_47868980_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rdec_58194_47868980;
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

Scope makerdec_58194_47868980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58194_47868980 = scope;
   scope->owner = (Object)channel__bias_58174_47852380;
   scope->name = "rdec:194";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47868180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58199_47867960;

SignalI abus__w_47866760_wdec_58199_47867960_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__w_47866760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47866760_wdec_58199_47867960_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)wdec_58199_47867960;
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

Scope makewdec_58199_47867960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58199_47867960 = scope;
   scope->owner = (Object)channel__bias_58174_47852380;
   scope->name = "wdec:199";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47866760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60232080;

Behavior make__60232080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60232080 = behavior;
   behavior->owner = (Object)channel__bias_58174_47852380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60232380();

   return behavior;
}

Behavior __60231880;

Behavior make__60231880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60231880 = behavior;
   behavior->owner = (Object)channel__bias_58174_47852380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58176_52159820_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58176_52159820_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58176_52159820_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58176_52159820_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58176_52159820_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58176_52159820_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58176_52159820_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60232040();

   return behavior;
}

Behavior __60231420;

Behavior make__60231420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60231420 = behavior;
   behavior->owner = (Object)channel__bias_58174_47852380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60231580();

   return behavior;
}

Behavior __60231220;

Behavior make__60231220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60231220 = behavior;
   behavior->owner = (Object)channel__bias_58174_47852380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58177_52283860_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58177_52283860_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58177_52283860_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58177_52283860_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58177_52283860_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58177_52283860_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58177_52283860_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60231380();

   return behavior;
}

Behavior __60230760;

Behavior make__60230760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60230760 = behavior;
   behavior->owner = (Object)channel__bias_58174_47852380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[reg__0_48253640_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60230920();

   return behavior;
}

Behavior __60230520;

Behavior make__60230520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60230520 = behavior;
   behavior->owner = (Object)channel__bias_58174_47852380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58191_53462680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58191_53462680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58191_53462680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58191_53462680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58191_53462680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58191_53462680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58191_53462680_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60230720();

   return behavior;
}

Behavior __60229900;

Behavior make__60229900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60229900 = behavior;
   behavior->owner = (Object)channel__bias_58174_47852380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[reg__1_49398780_channel__bias_58174_47852380_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60230060();

   return behavior;
}

Behavior __60229700;

Behavior make__60229700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60229700 = behavior;
   behavior->owner = (Object)channel__bias_58174_47852380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58192_53554520_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58192_53554520_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58192_53554520_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58192_53554520_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58192_53554520_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58192_53554520_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58192_53554520_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60229860();

   return behavior;
}

Scope makechannel__bias_58174_47852380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58174_47852380 = scope;
   scope->owner = (Object)layer0_58_84_49878600;
   scope->name = "channel_bias:174";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48253640();
   scope->inners[1] = makereg__1_49398780();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58175_47851960();
   scope->scopes[1] = makeraddr_58178_47851040();
   scope->scopes[2] = makewaddr_58182_47849720();
   scope->scopes[3] = makerinc_58186_47872040();
   scope->scopes[4] = makewinc_58190_47870920();
   scope->scopes[5] = makerdec_58194_47868980();
   scope->scopes[6] = makewdec_58199_47867960();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60232080();
   scope->behaviors[1] = make__60231880();
   scope->behaviors[2] = make__60231420();
   scope->behaviors[3] = make__60231220();
   scope->behaviors[4] = make__60230760();
   scope->behaviors[5] = make__60230520();
   scope->behaviors[6] = make__60229900();
   scope->behaviors[7] = make__60229700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58204_52134960;

SignalI reg__0_52191380_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makereg__0_52191380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52191380_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__z_58204_52134960;
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

SignalI reg__1_52318040_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makereg__1_52318040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_52318040_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__z_58204_52134960;
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

Scope anum_58205_52134660;

Scope makeanum_58205_52134660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58205_52134660 = scope;
   scope->owner = (Object)channel__z_58204_52134960;
   scope->name = "anum:205";
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

Scope raddr_58208_52134200;

Scope makeraddr_58208_52134200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58208_52134200 = scope;
   scope->owner = (Object)channel__z_58204_52134960;
   scope->name = "raddr:208";
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

Scope waddr_58212_52158260;

Scope makewaddr_58212_52158260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58212_52158260 = scope;
   scope->owner = (Object)channel__z_58204_52134960;
   scope->name = "waddr:212";
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

Scope rinc_58216_52157840;

SignalI abus__r_52157460_rinc_58216_52157840_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__r_52157460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52157460_rinc_58216_52157840_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rinc_58216_52157840;
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

Scope makerinc_58216_52157840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58216_52157840 = scope;
   scope->owner = (Object)channel__z_58204_52134960;
   scope->name = "rinc:216";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52157460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58220_52157340;

SignalI abus__w_52156960_winc_58220_52157340_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__w_52156960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52156960_winc_58220_52157340_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)winc_58220_52157340;
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

Scope makewinc_58220_52157340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58220_52157340 = scope;
   scope->owner = (Object)channel__z_58204_52134960;
   scope->name = "winc:220";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52156960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58224_52156820;

SignalI abus__r_52156360_rdec_58224_52156820_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__r_52156360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52156360_rdec_58224_52156820_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rdec_58224_52156820;
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

Scope makerdec_58224_52156820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58224_52156820 = scope;
   scope->owner = (Object)channel__z_58204_52134960;
   scope->name = "rdec:224";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52156360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58229_52156240;

SignalI abus__w_52155860_wdec_58229_52156240_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeabus__w_52155860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52155860_wdec_58229_52156240_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)wdec_58229_52156240;
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

Scope makewdec_58229_52156240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58229_52156240 = scope;
   scope->owner = (Object)channel__z_58204_52134960;
   scope->name = "wdec:229";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52155860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60250780;

Behavior make__60250780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60250780 = behavior;
   behavior->owner = (Object)channel__z_58204_52134960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52191380_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   reg__0_52191380_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   reg__0_52191380_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(reg__0_52191380_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,reg__0_52191380_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__0_52191380_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[reg__0_52191380_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60250980();

   return behavior;
}

Behavior __60250480;

Behavior make__60250480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60250480 = behavior;
   behavior->owner = (Object)channel__z_58204_52134960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58206_52506020_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58206_52506020_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58206_52506020_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58206_52506020_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58206_52506020_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58206_52506020_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58206_52506020_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60250720();

   return behavior;
}

Behavior __60249960;

Behavior make__60249960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60249960 = behavior;
   behavior->owner = (Object)channel__z_58204_52134960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_52318040_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   reg__1_52318040_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   reg__1_52318040_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(reg__1_52318040_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,reg__1_52318040_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__1_52318040_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[reg__1_52318040_channel__z_58204_52134960_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60250120();

   return behavior;
}

Behavior __60249760;

Behavior make__60249760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60249760 = behavior;
   behavior->owner = (Object)channel__z_58204_52134960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58207_52721140_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   _58207_52721140_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   _58207_52721140_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(_58207_52721140_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,_58207_52721140_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_58207_52721140_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[_58207_52721140_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60249920();

   return behavior;
}

Scope makechannel__z_58204_52134960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58204_52134960 = scope;
   scope->owner = (Object)layer0_58_84_49878600;
   scope->name = "channel_z:204";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52191380();
   scope->inners[1] = makereg__1_52318040();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58205_52134660();
   scope->scopes[1] = makeraddr_58208_52134200();
   scope->scopes[2] = makewaddr_58212_52158260();
   scope->scopes[3] = makerinc_58216_52157840();
   scope->scopes[4] = makewinc_58220_52157340();
   scope->scopes[5] = makerdec_58224_52156820();
   scope->scopes[6] = makewdec_58229_52156240();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60250780();
   scope->behaviors[1] = make__60250480();
   scope->behaviors[2] = make__60249960();
   scope->behaviors[3] = make__60249760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58234_52946340;

SignalI lv0_53056380_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makelv0_53056380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_53056380_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)add__n_58234_52946340;
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

SignalI lv1_53134040_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makelv1_53134040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_53134040_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)add__n_58234_52946340;
   signalI->name = "lv1";
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

SignalI rv0_53227900_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makerv0_53227900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_53227900_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)add__n_58234_52946340;
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

SignalI rv1_53321600_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makerv1_53321600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_53321600_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)add__n_58234_52946340;
   signalI->name = "rv1";
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

SignalI lvok0_53321580_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makelvok0_53321580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53321580_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)add__n_58234_52946340;
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

SignalI lvok1_53321560_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makelvok1_53321560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_53321560_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)add__n_58234_52946340;
   signalI->name = "lvok1";
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

SignalI rvok0_53321540_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makervok0_53321540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_53321540_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)add__n_58234_52946340;
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

SignalI rvok1_53321520_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makervok1_53321520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_53321520_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)add__n_58234_52946340;
   signalI->name = "rvok1";
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

SignalI run_53321500_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makerun_53321500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53321500_add__n_58234_52946340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)add__n_58234_52946340;
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

Behavior __49746460;

Behavior make__49746460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49746460 = behavior;
   behavior->owner = (Object)add__n_58234_52946340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos += 1;
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos = realloc(clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos*sizeof(Object));
clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos[clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos-1] = (Object)behavior;
   behavior->block = make__53321380();

   return behavior;
}

Scope makeadd__n_58234_52946340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58234_52946340 = scope;
   scope->owner = (Object)layer0_58_84_49878600;
   scope->name = "add_n:234";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_53056380();
   scope->inners[1] = makelv1_53134040();
   scope->inners[2] = makerv0_53227900();
   scope->inners[3] = makerv1_53321600();
   scope->inners[4] = makelvok0_53321580();
   scope->inners[5] = makelvok1_53321560();
   scope->inners[6] = makervok0_53321540();
   scope->inners[7] = makervok1_53321520();
   scope->inners[8] = makerun_53321500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49746460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48968640;

Behavior make__48968640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48968640 = behavior;
   behavior->owner = (Object)layer0_58_84_49878600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos += 1;
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos = realloc(clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos*sizeof(Object));
clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos[clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos-1] = (Object)behavior;
   behavior->block = make__54414420();

   return behavior;
}

Behavior __52038140;

Behavior make__52038140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52038140 = behavior;
   behavior->owner = (Object)layer0_58_84_49878600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos += 1;
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos = realloc(clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos*sizeof(Object));
clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos[clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos-1] = (Object)behavior;
   behavior->block = make__48967460();

   return behavior;
}

Behavior __52992040;

Behavior make__52992040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52992040 = behavior;
   behavior->owner = (Object)layer0_58_84_49878600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos += 1;
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos = realloc(clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos*sizeof(Object));
clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos[clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos-1] = (Object)behavior;
   behavior->block = make__52037960();

   return behavior;
}

Behavior __60198980;

Behavior make__60198980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60198980 = behavior;
   behavior->owner = (Object)layer0_58_84_49878600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_49746260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   ack_49746260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   ack_49746260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(ack_49746260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,ack_49746260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
ack_49746260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[ack_49746260_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_52870840_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   value__z0_52870840_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   value__z0_52870840_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(value__z0_52870840_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,value__z0_52870840_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
value__z0_52870840_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[value__z0_52870840_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_52913940_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   value__z1_52913940_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   value__z1_52913940_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(value__z1_52913940_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,value__z1_52913940_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
value__z1_52913940_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[value__z1_52913940_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a00_53139300_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   ack__a00_53139300_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   ack__a00_53139300_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(ack__a00_53139300_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,ack__a00_53139300_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
ack__a00_53139300_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[ack__a00_53139300_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a01_53139280_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   ack__a01_53139280_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   ack__a01_53139280_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(ack__a01_53139280_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,ack__a01_53139280_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
ack__a01_53139280_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[ack__a01_53139280_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60148900();

   return behavior;
}

Behavior __60198820;

Behavior make__60198820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60198820 = behavior;
   behavior->owner = (Object)layer0_58_84_49878600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_53571340_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   ack__mac_53571340_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   ack__mac_53571340_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(ack__mac_53571340_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,ack__mac_53571340_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
ack__mac_53571340_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[ack__mac_53571340_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_53694160_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   a_53694160_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   a_53694160_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(a_53694160_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,a_53694160_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
a_53694160_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[a_53694160_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_52720660_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   a_52720660_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   a_52720660_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(a_52720660_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,a_52720660_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
a_52720660_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[a_52720660_func1_58_840_52163920_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60148840();

   return behavior;
}

Scope makelayer0_58_84_49878600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_49878600 = scope;
   scope->owner = (Object)layer0_58_840_52991540;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter0_53571160();
   scope->systemIs[1] = makefunc0_53693960();
   scope->systemIs[2] = makefunc1_52720400();
   scope->num_inners = 32;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack_49746260();
   scope->inners[1] = makeack__mac_49746240();
   scope->inners[2] = makeack__add_49746220();
   scope->inners[3] = make_5897_49861460();
   scope->inners[4] = make_5895_49861440();
   scope->inners[5] = make_5896_49861340();
   scope->inners[6] = make_58126_49975680();
   scope->inners[7] = make_58124_49975660();
   scope->inners[8] = make_58125_49975580();
   scope->inners[9] = make_58143_51994060();
   scope->inners[10] = make_58144_52077440();
   scope->inners[11] = make_58176_52159820();
   scope->inners[12] = make_58177_52283860();
   scope->inners[13] = make_58206_52506020();
   scope->inners[14] = make_58207_52721140();
   scope->inners[15] = makevalue__z0_52870840();
   scope->inners[16] = makevalue__z1_52913940();
   scope->inners[17] = makevalue__a00_53038920();
   scope->inners[18] = makevalue__a01_53139360();
   scope->inners[19] = makeflag__z0_53139340();
   scope->inners[20] = makeflag__z1_53139320();
   scope->inners[21] = makeack__a00_53139300();
   scope->inners[22] = makeack__a01_53139280();
   scope->inners[23] = make_5899_53139260();
   scope->inners[24] = make_58100_53139180();
   scope->inners[25] = make_58101_53231460();
   scope->inners[26] = make_58128_53231440();
   scope->inners[27] = make_58129_53231340();
   scope->inners[28] = make_58130_53298880();
   scope->inners[29] = make_58191_53462680();
   scope->inners[30] = make_58192_53554520();
   scope->inners[31] = make_58193_53554440();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_49878220();
   scope->scopes[1] = makechannel__w1_58112_49877540();
   scope->scopes[2] = makechannel__accum_58141_49807640();
   scope->scopes[3] = makemac__n1_58173_49350640();
   scope->scopes[4] = makechannel__bias_58174_47852380();
   scope->scopes[5] = makechannel__z_58204_52134960();
   scope->scopes[6] = makeadd__n_58234_52946340();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48968640();
   scope->behaviors[1] = make__52038140();
   scope->behaviors[2] = make__52992040();
   scope->behaviors[3] = make__60198980();
   scope->behaviors[4] = make__60198820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_52991540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_52991540 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_52988380();
   systemT->inputs[1] = makerst_52988360();
   systemT->inputs[2] = makefill_52988340();
   systemT->inputs[3] = makereq_52988320();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__0_52988280();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer0_58_84_49878600();

   return systemT;
}