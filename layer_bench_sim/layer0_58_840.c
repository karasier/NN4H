#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_51003420;

SignalI clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeclk_51056900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_840_51003420;
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

SignalI rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makerst_51056780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_840_51003420;
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

SignalI req_51056760_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makereq_51056760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_51056760_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_840_51003420;
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

SignalI fill_51056740_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makefill_51056740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_51056740_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_840_51003420;
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

SignalI _5815_51192580_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_5815_51192580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_51192580_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_840_51003420;
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

SignalI ack__0_51192480_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeack__0_51192480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_51192480_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_840_51003420;
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

SignalI _5813_51192460_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_5813_51192460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_51192460_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_840_51003420;
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

SignalI _5814_51192380_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_5814_51192380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_51192380_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_840_51003420;
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

Block __51664840;

Block __51663640;

Block __51663400;

void code__51663400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_45570960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,value__z0_46356760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52460820(),flag__z0_47933740_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51663400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51663400 = block;
   block->owner = (Object)__51663640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51663400;

   return block;
};

Block __52077480;

void code__52077480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58208_45724860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,value__z1_47627000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52460580(),flag__z1_47933720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52077480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52077480 = block;
   block->owner = (Object)__51663640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52077480;

   return block;
};

void code__51663640() {
 code__51663400();
 code__52077480();
}

Block make__51663640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51663640 = block;
   block->owner = (Object)__51664840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51663640;

   return block;
};

Block __51664560;

void code__51664560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52460520(),flag__z0_47933740_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52460320(),flag__z1_47933720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51664560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51664560 = block;
   block->owner = (Object)__51664840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51664560;

   return block;
};

void code__51664840() {
   {
      Value cond = ack__add_51874680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51663640();
   }
   else {
  code__51664560();
   }
      }
   }
}

Block make__51664840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51664840 = block;
   block->owner = (Object)__52538420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51664840;

   return block;
};

Block __52538120;

Block __52537680;

Block __52537340;

void code__52537340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a00_47791740_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_5832_48033360______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52460000(),ack__a00_47933680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52537340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52537340 = block;
   block->owner = (Object)__52537680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52537340;

   return block;
};

Block __47019680;

void code__47019680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a01_47933780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_5833_48171780______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52459780(),ack__a01_47933640_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__47019680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47019680 = block;
   block->owner = (Object)__52537680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47019680;

   return block;
};

void code__52537680() {
 code__52537340();
 code__47019680();
}

Block make__52537680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52537680 = block;
   block->owner = (Object)__52538120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52537680;

   return block;
};

void code__52538120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_47933740_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
         src1 = flag__z1_47933720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52537680();
   }
      }
   }
}

Block make__52538120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52538120 = block;
   block->owner = (Object)__48034280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52538120;

   return block;
};

Block __48034020;

Block __48033700;

Block __48031780;

void code__48031780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52459440(),_58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__48031780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48031780 = block;
   block->owner = (Object)__48033700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48031780;

   return block;
};

void code__48033700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52459680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48031780();
   }
      }
   }
}

Block make__48033700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48033700 = block;
   block->owner = (Object)__48034020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48033700;

   return block;
};

Block __48030040;

Block __48053520;

void code__48053520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52459120(),_58129_48048660_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__48053520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48053520 = block;
   block->owner = (Object)__48030040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48053520;

   return block;
};

void code__48030040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52459320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48053520();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52458760(),_58128_48048760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__48030040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48030040 = block;
   block->owner = (Object)__48034020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48030040;

   return block;
};

Block __48049200;

Block __48047660;

void code__48047660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52458480(),_58100_47933480_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__48047660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48047660 = block;
   block->owner = (Object)__48049200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48047660;

   return block;
};

void code__48049200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52458640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48047660();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52458360(),_5899_47933580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__48049200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48049200 = block;
   block->owner = (Object)__48034020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48049200;

   return block;
};

Block __48067500;

Block __48065700;

Block __48063980;

void code__48063980() {
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
                  src0 = _58100_47933480_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52458060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_47933480_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52457960(),_5899_47933580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52457900(),_58101_48048820_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__48063980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48063980 = block;
   block->owner = (Object)__48065700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48063980;

   return block;
};

void code__48065700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52458200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48063980();
   }
      }
   }
}

Block make__48065700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48065700 = block;
   block->owner = (Object)__48067500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48065700;

   return block;
};

Block __50198440;

Block __50197840;

void code__50197840() {
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
                  src0 = _58129_48048660_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52457500();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_48048660_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52457180(),_58128_48048760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52457120(),_58130_48289580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__50197840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50197840 = block;
   block->owner = (Object)__50198440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50197840;

   return block;
};

void code__50198440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52457760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50197840();
   }
      }
   }
}

Block make__50198440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50198440 = block;
   block->owner = (Object)__48067500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50198440;

   return block;
};

Block __50601520;

Block __50601040;

Block __50600220;

void code__50600220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52456860(),_58192_50196780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__50600220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50600220 = block;
   block->owner = (Object)__50601040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50600220;

   return block;
};

Block __50778400;

void code__50778400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52456700(),_58193_48813960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__50778400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50778400 = block;
   block->owner = (Object)__50601040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50778400;

   return block;
};

void code__50601040() {
{
      Value value = _58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__52456920())) {
    code__50600220();
         }
         else if (value2integer(value) == value2integer(make__52456840())) {
    code__50778400();
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
                  src0 = _58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52456420();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__50601040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50601040 = block;
   block->owner = (Object)__50601520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50601040;

   return block;
};

void code__50601520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52457040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50601040();
   }
      }
   }
}

Block make__50601520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50601520 = block;
   block->owner = (Object)__48067500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50601520;

   return block;
};

void code__48067500() {
 code__48065700();
 code__50198440();
 code__50601520();
}

Block make__48067500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48067500 = block;
   block->owner = (Object)__48034020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48067500;

   return block;
};

void code__48034020() {
 code__48033700();
 code__48030040();
 code__48049200();
   {
      Value cond = fill_51056740_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48067500();
   }
      }
   }
}

Block make__48034020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48034020 = block;
   block->owner = (Object)__51003920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48034020;

   return block;
};

Block __51908640;

void code__51908640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_46356760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,z__value_51905340_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_47627000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a00_47933680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      src1 = ack__a01_47933640_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__0_51192480_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51908640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51908640 = block;
   block->owner = (Object)__51926340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51908640;

   return block;
};

Block __51908580;

void code__51908580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_52063480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,value__a00_47791740_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_48046620_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,value__a01_47933780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51908580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51908580 = block;
   block->owner = (Object)__51926120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51908580;

   return block;
};

Block __47640440;

Block __47964580;

void code__47964580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_43926560_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,make_ref_rangeS(mem_45626960_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480,value2integer(abus__w_43926140_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value),value2integer(abus__w_43926140_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47964580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47964580 = block;
   block->owner = (Object)__47640440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47964580;

   return block;
};

void code__47640440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_45626960_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
            idx = value2integer(abus__r_43926280_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_41419300_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48354820_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47964580();
   }
      }
   }
}

Block make__47640440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47640440 = block;
   block->owner = (Object)__48368120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47640440;

   return block;
};

Block __51925500;

void code__51925500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_41419300_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_5897_51952200_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51925500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51925500 = block;
   block->owner = (Object)__51925300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51925500;

   return block;
};

Block __51925260;

void code__51925260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_51952200_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,dbus__r_41419300_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51925260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51925260 = block;
   block->owner = (Object)__51924920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51925260;

   return block;
};

Block __51923700;

void code__51923700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48354840_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_5895_51952180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51923700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51923700 = block;
   block->owner = (Object)__51923540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51923700;

   return block;
};

Block __51923500;

void code__51923500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_51952180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,trig__r_48354840_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51923500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51923500 = block;
   block->owner = (Object)__51923300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51923500;

   return block;
};

Block __51922900;

void code__51922900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_43926280_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_5896_51952100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51922900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51922900 = block;
   block->owner = (Object)__51922640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51922900;

   return block;
};

Block __51922580;

void code__51922580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_51952100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,abus__r_43926280_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51922580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51922580 = block;
   block->owner = (Object)__51922300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51922580;

   return block;
};

Block __51921700;

void code__51921700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48354820_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_5899_47933580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51921700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51921700 = block;
   block->owner = (Object)__51921480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51921700;

   return block;
};

Block __51921440;

void code__51921440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_47933580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,trig__w_48354820_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51921440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51921440 = block;
   block->owner = (Object)__51921120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51921440;

   return block;
};

Block __51953260;

void code__51953260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_43926140_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58100_47933480_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51953260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51953260 = block;
   block->owner = (Object)__51953040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51953260;

   return block;
};

Block __51953000;

void code__51953000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_47933480_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,abus__w_43926140_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51953000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51953000 = block;
   block->owner = (Object)__51952720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51953000;

   return block;
};

Block __51951860;

void code__51951860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_43926560_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58101_48048820_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51951860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51951860 = block;
   block->owner = (Object)__51951340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51951860;

   return block;
};

Block __51951260;

void code__51951260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_48048820_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,dbus__w_43926560_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51951260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51951260 = block;
   block->owner = (Object)__51950660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51951260;

   return block;
};

Block __47705900;

Block __48031960;

void code__48031960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_44672900_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,make_ref_rangeS(mem_45674580_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480,value2integer(abus__w_44672720_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value),value2integer(abus__w_44672720_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__48031960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48031960 = block;
   block->owner = (Object)__47705900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48031960;

   return block;
};

void code__47705900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_45674580_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
            idx = value2integer(abus__r_44672820_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_43074500_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48388480_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48031960();
   }
      }
   }
}

Block make__47705900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47705900 = block;
   block->owner = (Object)__43501740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47705900;

   return block;
};

Block __51946640;

void code__51946640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_43074500_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58126_52062420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51946640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51946640 = block;
   block->owner = (Object)__51946460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51946640;

   return block;
};

Block __51946400;

void code__51946400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_52062420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,dbus__r_43074500_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51946400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51946400 = block;
   block->owner = (Object)__51946200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51946400;

   return block;
};

Block __51945660;

void code__51945660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48388540_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58124_52062400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51945660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51945660 = block;
   block->owner = (Object)__51986180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51945660;

   return block;
};

Block __51986120;

void code__51986120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_52062400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,trig__r_48388540_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51986120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51986120 = block;
   block->owner = (Object)__51985840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51986120;

   return block;
};

Block __51985420;

void code__51985420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_44672820_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58125_52062320_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51985420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51985420 = block;
   block->owner = (Object)__51985200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51985420;

   return block;
};

Block __51985140;

void code__51985140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_52062320_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,abus__r_44672820_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51985140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51985140 = block;
   block->owner = (Object)__51984820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51985140;

   return block;
};

Block __51984040;

void code__51984040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48388480_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58128_48048760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51984040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51984040 = block;
   block->owner = (Object)__51983820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51984040;

   return block;
};

Block __51983780;

void code__51983780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_48048760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,trig__w_48388480_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51983780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51983780 = block;
   block->owner = (Object)__51983540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51983780;

   return block;
};

Block __51983080;

void code__51983080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_44672720_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58129_48048660_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51983080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51983080 = block;
   block->owner = (Object)__51982900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51983080;

   return block;
};

Block __51982820;

void code__51982820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_48048660_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,abus__w_44672720_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51982820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51982820 = block;
   block->owner = (Object)__51982640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51982820;

   return block;
};

Block __51982080;

void code__51982080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_44672900_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58130_48289580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51982080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51982080 = block;
   block->owner = (Object)__51981620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51982080;

   return block;
};

Block __51981480;

void code__51981480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_48289580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,dbus__w_44672900_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51981480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51981480 = block;
   block->owner = (Object)__51981220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51981480;

   return block;
};

Block __51978980;

void code__51978980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45501280_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58143_52179100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51978980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51978980 = block;
   block->owner = (Object)__51978740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51978980;

   return block;
};

Block __51978700;

void code__51978700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_52179100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,reg__0_45501280_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51978700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51978700 = block;
   block->owner = (Object)__51978420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51978700;

   return block;
};

Block __52034560;

void code__52034560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_45706420_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58144_52281300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52034560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52034560 = block;
   block->owner = (Object)__52034380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52034560;

   return block;
};

Block __52034300;

void code__52034300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_52281300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,reg__1_45706420_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52034300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52034300 = block;
   block->owner = (Object)__52034040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52034300;

   return block;
};

Block __42976420;

Block __42976160;

Block __42975500;

void code__42975500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52369740(),_58125_52062320_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__42975500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42975500 = block;
   block->owner = (Object)__42976160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42975500;

   return block;
};

void code__42976160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52369860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42975500();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52369640(),_58124_52062400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__42976160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42976160 = block;
   block->owner = (Object)__42976420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42976160;

   return block;
};

Block __43914280;

Block __43913640;

void code__43913640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52369300(),_5896_51952100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__43913640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43913640 = block;
   block->owner = (Object)__43914280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43913640;

   return block;
};

void code__43914280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52369480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__43913640();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52369220(),_5895_51952180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__43914280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43914280 = block;
   block->owner = (Object)__42976420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43914280;

   return block;
};

Block __43910860;

Block __43909600;

void code__43909600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52368940(),_5814_51192380_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__43909600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43909600 = block;
   block->owner = (Object)__43910860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43909600;

   return block;
};

void code__43910860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52369080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__43909600();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52368860(),_5813_51192460_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__43910860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43910860 = block;
   block->owner = (Object)__42976420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43910860;

   return block;
};

Block __47660520;

Block __47660160;

Block __47659280;

Block __47658960;

void code__47658960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_51192580_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,rv_42976960_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52367700(),rvok_42976820_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__47658960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47658960 = block;
   block->owner = (Object)__47659280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47658960;

   return block;
};

void code__47659280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_51192460_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52367940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47658960();
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
                  src0 = _5814_51192380_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52367400();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_51192380_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52367240(),_5813_51192460_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__47659280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47659280 = block;
   block->owner = (Object)__47660160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47659280;

   return block;
};

void code__47660160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52368200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47659280();
   }
      }
   }
}

Block make__47660160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47660160 = block;
   block->owner = (Object)__47660520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47660160;

   return block;
};

Block __48222500;

Block __48220800;

Block __48218260;

void code__48218260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_51952200_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,lv0_47919200_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52366660(),lvok0_42976940_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__48218260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48218260 = block;
   block->owner = (Object)__48220800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48218260;

   return block;
};

void code__48220800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_51952180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52366880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48218260();
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
                  src0 = _5896_51952100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52366420();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_51952100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52366320(),_5895_51952180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__48220800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48220800 = block;
   block->owner = (Object)__48222500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48220800;

   return block;
};

void code__48222500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52367040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48220800();
   }
      }
   }
}

Block make__48222500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48222500 = block;
   block->owner = (Object)__47660520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48222500;

   return block;
};

Block __46386360;

Block __46385160;

Block __46384660;

void code__46384660() {
}

Block make__46384660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46384660 = block;
   block->owner = (Object)__46385160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46384660;

   return block;
};

Block __46731480;

void code__46731480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_48155140_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58143_52179100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__46731480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46731480 = block;
   block->owner = (Object)__46385160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46731480;

   return block;
};

void code__46385160() {
 code__46384660();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_48155140_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
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
                              src0 = lv0_47919200_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_42976960_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52365260();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_48155140_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
 code__46731480();
}

Block make__46385160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46385160 = block;
   block->owner = (Object)__46386360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46385160;

   return block;
};

void code__46386360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52366120(),ack__mac_51874700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52366060(),run_42976760_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
 code__46385160();
}

Block make__46386360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46386360 = block;
   block->owner = (Object)__47660520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46386360;

   return block;
};

Block __47641100;

Block __47640680;

Block __47639940;

void code__47639940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_52062420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,lv1_47997740_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52364340(),lvok1_42976840_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__47639940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47639940 = block;
   block->owner = (Object)__47640680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47639940;

   return block;
};

void code__47640680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_52062400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52364680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47639940();
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
                  src0 = _58125_52062320_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52364000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_52062320_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52363900(),_58124_52062400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__47640680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47640680 = block;
   block->owner = (Object)__47641100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47640680;

   return block;
};

void code__47641100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52364960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47640680();
   }
      }
   }
}

Block make__47641100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47641100 = block;
   block->owner = (Object)__47660520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47641100;

   return block;
};

Block __47935860;

Block __47934620;

Block __47934420;

void code__47934420() {
}

Block make__47934420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47934420 = block;
   block->owner = (Object)__47934620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47934420;

   return block;
};

Block __50776340;

void code__50776340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_48322620_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58144_52281300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__50776340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50776340 = block;
   block->owner = (Object)__47934620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50776340;

   return block;
};

void code__47934620() {
 code__47934420();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_48322620_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
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
                              src0 = lv1_47997740_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_42976960_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52428200();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_48322620_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
 code__50776340();
}

Block make__47934620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47934620 = block;
   block->owner = (Object)__47935860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47934620;

   return block;
};

void code__47935860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52363740(),ack__mac_51874700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52363660(),run_42976760_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
 code__47934620();
}

Block make__47935860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47935860 = block;
   block->owner = (Object)__47660520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47935860;

   return block;
};

void code__47660520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52368420(),run_42976760_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
 code__47660160();
 code__48222500();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_42976940_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
         src1 = rvok_42976820_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46386360();
   }
      }
   }
 code__47641100();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_42976840_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
         src1 = rvok_42976820_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47935860();
   }
      }
   }
}

Block make__47660520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47660520 = block;
   block->owner = (Object)__42976420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47660520;

   return block;
};

Block __43955060;

void code__43955060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52427660(),rvok_42976820_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52427600(),lvok0_42976940_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52427520(),av0_48155140_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52427440(),lvok1_42976840_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52427380(),av1_48322620_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__43955060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43955060 = block;
   block->owner = (Object)__42976420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43955060;

   return block;
};

void code__42976420() {
 code__42976160();
 code__43914280();
 code__43910860();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52368800(),ack__mac_51874700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52368700(),run_42976760_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_51056760_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
         src1 = run_42976760_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47660520();
   }
   else {
  code__43955060();
   }
      }
   }
}

Block make__42976420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42976420 = block;
   block->owner = (Object)__51056820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42976420;

   return block;
};

Block __52031380;

void code__52031380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58177_52424400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52031380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52031380 = block;
   block->owner = (Object)__52031100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52031380;

   return block;
};

Block __52031020;

void code__52031020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_52424400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52031020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52031020 = block;
   block->owner = (Object)__52030500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52031020;

   return block;
};

Block __52030100;

void code__52030100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58178_41304600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52030100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52030100 = block;
   block->owner = (Object)__52029920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52030100;

   return block;
};

Block __52029880;

void code__52029880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58178_41304600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52029880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52029880 = block;
   block->owner = (Object)__52029660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52029880;

   return block;
};

Block __52029360;

void code__52029360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58192_50196780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52029360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52029360 = block;
   block->owner = (Object)__52029120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52029360;

   return block;
};

Block __52029080;

void code__52029080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58192_50196780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52029080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52029080 = block;
   block->owner = (Object)__52028640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52029080;

   return block;
};

Block __52027440;

void code__52027440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58193_48813960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52027440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52027440 = block;
   block->owner = (Object)__52068140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52027440;

   return block;
};

Block __52068100;

void code__52068100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58193_48813960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52068100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52068100 = block;
   block->owner = (Object)__52067940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52068100;

   return block;
};

Block __52065180;

void code__52065180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_51054260_winc_58191_51054640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52065180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52065180 = block;
   block->owner = (Object)__52064800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52065180;

   return block;
};

Block __52064760;

void code__52064760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,abus__w_51054260_winc_58191_51054640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52064760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52064760 = block;
   block->owner = (Object)__52064440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52064760;

   return block;
};

Block __52062000;

void code__52062000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52238600_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58207_45570960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52062000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52062000 = block;
   block->owner = (Object)__52061620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52062000;

   return block;
};

Block __52061560;

void code__52061560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_45570960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,reg__0_52238600_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52061560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52061560 = block;
   block->owner = (Object)__52061280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52061560;

   return block;
};

Block __52060740;

void code__52060740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_52284980_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,_58208_45724860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52060740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52060740 = block;
   block->owner = (Object)__52060480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52060740;

   return block;
};

Block __52060440;

void code__52060440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58208_45724860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,reg__1_52284980_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__52060440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52060440 = block;
   block->owner = (Object)__52060260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52060440;

   return block;
};

Block __47904820;

Block __47901860;

Block __47901480;

void code__47901480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_52179100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,lv0_46117340_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52423620(),lvok0_47906220_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__47901480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47901480 = block;
   block->owner = (Object)__47901860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47901480;

   return block;
};

Block __48185600;

void code__48185600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_52424400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,rv0_47702100_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52423380(),rvok0_47906160_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__48185600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48185600 = block;
   block->owner = (Object)__47901860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48185600;

   return block;
};

Block __47738220;

Block __47737640;

void code__47737640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_46117340_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      src1 = rv0_47702100_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58207_45570960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__47737640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47737640 = block;
   block->owner = (Object)__47738220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47737640;

   return block;
};

void code__47738220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52423020(),run_47905660_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52422960(),ack__add_51874680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
 code__47737640();
}

Block make__47738220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47738220 = block;
   block->owner = (Object)__47901860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47738220;

   return block;
};

Block __50890000;

void code__50890000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_52281300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,lv1_47373840_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52422540(),lvok1_47906200_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__50890000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50890000 = block;
   block->owner = (Object)__47901860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50890000;

   return block;
};

Block __51165600;

void code__51165600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58178_41304600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,rv1_47906240_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52422360(),rvok1_47905800_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51165600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51165600 = block;
   block->owner = (Object)__47901860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51165600;

   return block;
};

Block __51377320;

Block __51376840;

void code__51376840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_47373840_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      src1 = rv1_47906240_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58208_45724860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51376840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51376840 = block;
   block->owner = (Object)__51377320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51376840;

   return block;
};

void code__51377320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52422000(),run_47905660_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52421920(),ack__add_51874680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
 code__51376840();
}

Block make__51377320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51377320 = block;
   block->owner = (Object)__47901860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51377320;

   return block;
};

void code__47901860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52423940(),run_47905660_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
 code__47901480();
 code__48185600();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_47906220_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
         src1 = rvok0_47906160_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47738220();
   }
      }
   }
 code__50890000();
 code__51165600();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_47906200_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
         src1 = rvok1_47905800_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51377320();
   }
      }
   }
}

Block make__47901860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47901860 = block;
   block->owner = (Object)__47904820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47901860;

   return block;
};

Block __47903240;

void code__47903240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52421380(),lvok0_47906220_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52421320(),rvok0_47906160_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52421240(),lvok1_47906200_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52421140(),rvok1_47905800_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__47903240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47903240 = block;
   block->owner = (Object)__47904820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47903240;

   return block;
};

void code__47904820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52424260(),ack__add_51874680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52424160(),run_47905660_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_51874700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
         src1 = run_47905660_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47901860();
   }
   else {
  code__47903240();
   }
      }
   }
}

Block make__47904820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47904820 = block;
   block->owner = (Object)__51874840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47904820;

   return block;
};

Value make__52369860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52369740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52369640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52369480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52369300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52369220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52369080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52368940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52368860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52368800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52368700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52368420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52368200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52367940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52367700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52367400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52367240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52367040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52366880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52366660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52366420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52366320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52366120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52366060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52365260() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52364960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52364680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52364340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52364000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52363900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52363740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52363660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52428200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52427660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52427600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52427520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52427440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52427380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52424260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52424160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52423940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52423620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52423380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52423020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52422960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52422540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52422360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52422000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52421920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52421380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52421320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52421240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52421140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52460820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52460580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52460520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52460320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52460000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52459780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52459680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52459440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52459320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52459120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52458760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52458640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52458480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52458360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52458200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52458060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52457960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52457900() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52457760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52457500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52457180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52457120() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52457040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52456920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52456860() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52456840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52456700() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52456420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer0_58_84_48320680;

SignalI ack__mac_51874700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeack__mac_51874700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_51874700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI ack__add_51874680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeack__add_51874680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_51874680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _5897_51952200_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_5897_51952200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_51952200_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _5895_51952180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_5895_51952180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_51952180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _5896_51952100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_5896_51952100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_51952100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58126_52062420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58126_52062420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_52062420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58124_52062400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58124_52062400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_52062400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58125_52062320_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58125_52062320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_52062320_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58143_52179100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58143_52179100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_52179100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58144_52281300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58144_52281300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_52281300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58177_52424400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58177_52424400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58177_52424400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58178_41304600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58178_41304600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58178_41304600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
   signalI->name = ":178";
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

SignalI _58207_45570960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58207_45570960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58207_45570960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58208_45724860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58208_45724860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58208_45724860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
   signalI->name = ":208";
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

SignalI value__z0_46356760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makevalue__z0_46356760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_46356760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI value__z1_47627000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makevalue__z1_47627000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_47627000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI value__a00_47791740_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makevalue__a00_47791740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a00_47791740_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI value__a01_47933780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makevalue__a01_47933780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a01_47933780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI flag__z0_47933740_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeflag__z0_47933740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_47933740_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI flag__z1_47933720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeflag__z1_47933720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_47933720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI ack__a00_47933680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeack__a00_47933680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a00_47933680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI ack__a01_47933640_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeack__a01_47933640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a01_47933640_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _5899_47933580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_5899_47933580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_47933580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58100_47933480_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58100_47933480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_47933480_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58101_48048820_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58101_48048820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_48048820_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58128_48048760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58128_48048760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_48048760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58129_48048660_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58129_48048660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_48048660_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58130_48289580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58130_48289580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_48289580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58192_50196780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58192_50196780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58192_50196780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
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

SignalI _58193_48813960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58193_48813960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58193_48813960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
   signalI->name = ":193";
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

SignalI _58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI make_58194_48813860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)layer0_58_84_48320680;
   signalI->name = ":194";
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

SystemI func0_52063320;

SystemI makefunc0_52063320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_52063320 = systemI;
   systemI->owner = (Object)layer0_58_84_48320680;
   systemI->name = "func0";
   systemI->system = func0_58_840_51829420;

   return systemI;
};

SystemI func1_48046380;

SystemI makefunc1_48046380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_48046380 = systemI;
   systemI->owner = (Object)layer0_58_84_48320680;
   systemI->name = "func1";
   systemI->system = func1_58_840_46896420;

   return systemI;
};

Scope channel__w0_5883_48320300;

SignalI trig__r_48354840_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI maketrig__r_48354840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48354840_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__w0_5883_48320300;
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

SignalI trig__w_48354820_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI maketrig__w_48354820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48354820_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__w0_5883_48320300;
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

SignalI dbus__r_41419300_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makedbus__r_41419300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_41419300_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__w0_5883_48320300;
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

SignalI dbus__w_43926560_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makedbus__w_43926560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_43926560_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__w0_5883_48320300;
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

SignalI abus__r_43926280_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__r_43926280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_43926280_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__w0_5883_48320300;
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

SignalI abus__w_43926140_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__w_43926140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_43926140_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__w0_5883_48320300;
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

SignalI mem_45626960_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makemem_45626960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_45626960_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__w0_5883_48320300;
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

Scope raddr_5884_48319760;

Scope makeraddr_5884_48319760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_48319760 = scope;
   scope->owner = (Object)channel__w0_5883_48320300;
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

Scope waddr_5889_48318940;

Scope makewaddr_5889_48318940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_48318940 = scope;
   scope->owner = (Object)channel__w0_5883_48320300;
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

Scope rinc_5894_48340060;

Scope makerinc_5894_48340060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_48340060 = scope;
   scope->owner = (Object)channel__w0_5883_48320300;
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

Scope winc_5898_48337800;

Scope makewinc_5898_48337800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_48337800 = scope;
   scope->owner = (Object)channel__w0_5883_48320300;
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

Scope rdec_58102_48333740;

Scope makerdec_58102_48333740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_48333740 = scope;
   scope->owner = (Object)channel__w0_5883_48320300;
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

Scope wdec_58107_48355640;

Scope makewdec_58107_48355640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_48355640 = scope;
   scope->owner = (Object)channel__w0_5883_48320300;
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

Behavior __48368120;

Behavior make__48368120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48368120 = behavior;
   behavior->owner = (Object)channel__w0_5883_48320300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_neg += 1;
   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->neg = realloc(clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->neg,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_neg*sizeof(Object));
clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->neg[clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_neg-1] = (Object)behavior;
   behavior->block = make__47640440();

   return behavior;
}

Behavior __51925300;

Behavior make__51925300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51925300 = behavior;
   behavior->owner = (Object)channel__w0_5883_48320300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_41419300_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   dbus__r_41419300_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   dbus__r_41419300_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(dbus__r_41419300_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,dbus__r_41419300_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
dbus__r_41419300_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[dbus__r_41419300_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51925500();

   return behavior;
}

Behavior __51924920;

Behavior make__51924920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51924920 = behavior;
   behavior->owner = (Object)channel__w0_5883_48320300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_51952200_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _5897_51952200_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _5897_51952200_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_5897_51952200_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_5897_51952200_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_5897_51952200_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_5897_51952200_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51925260();

   return behavior;
}

Behavior __51923540;

Behavior make__51923540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51923540 = behavior;
   behavior->owner = (Object)channel__w0_5883_48320300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48354840_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   trig__r_48354840_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   trig__r_48354840_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(trig__r_48354840_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,trig__r_48354840_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
trig__r_48354840_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[trig__r_48354840_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51923700();

   return behavior;
}

Behavior __51923300;

Behavior make__51923300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51923300 = behavior;
   behavior->owner = (Object)channel__w0_5883_48320300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_51952180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _5895_51952180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _5895_51952180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_5895_51952180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_5895_51952180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_5895_51952180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_5895_51952180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51923500();

   return behavior;
}

Behavior __51922640;

Behavior make__51922640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51922640 = behavior;
   behavior->owner = (Object)channel__w0_5883_48320300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_43926280_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   abus__r_43926280_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   abus__r_43926280_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(abus__r_43926280_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,abus__r_43926280_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
abus__r_43926280_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[abus__r_43926280_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51922900();

   return behavior;
}

Behavior __51922300;

Behavior make__51922300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51922300 = behavior;
   behavior->owner = (Object)channel__w0_5883_48320300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_51952100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _5896_51952100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _5896_51952100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_5896_51952100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_5896_51952100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_5896_51952100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_5896_51952100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51922580();

   return behavior;
}

Behavior __51921480;

Behavior make__51921480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51921480 = behavior;
   behavior->owner = (Object)channel__w0_5883_48320300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48354820_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   trig__w_48354820_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   trig__w_48354820_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(trig__w_48354820_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,trig__w_48354820_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
trig__w_48354820_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[trig__w_48354820_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51921700();

   return behavior;
}

Behavior __51921120;

Behavior make__51921120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51921120 = behavior;
   behavior->owner = (Object)channel__w0_5883_48320300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_47933580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _5899_47933580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _5899_47933580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_5899_47933580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_5899_47933580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_5899_47933580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_5899_47933580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51921440();

   return behavior;
}

Behavior __51953040;

Behavior make__51953040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51953040 = behavior;
   behavior->owner = (Object)channel__w0_5883_48320300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_43926140_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   abus__w_43926140_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   abus__w_43926140_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(abus__w_43926140_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,abus__w_43926140_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
abus__w_43926140_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[abus__w_43926140_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51953260();

   return behavior;
}

Behavior __51952720;

Behavior make__51952720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51952720 = behavior;
   behavior->owner = (Object)channel__w0_5883_48320300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_47933480_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58100_47933480_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58100_47933480_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58100_47933480_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58100_47933480_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58100_47933480_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58100_47933480_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51953000();

   return behavior;
}

Behavior __51951340;

Behavior make__51951340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51951340 = behavior;
   behavior->owner = (Object)channel__w0_5883_48320300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_43926560_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   dbus__w_43926560_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   dbus__w_43926560_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(dbus__w_43926560_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,dbus__w_43926560_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
dbus__w_43926560_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[dbus__w_43926560_channel__w0_5883_48320300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51951860();

   return behavior;
}

Behavior __51950660;

Behavior make__51950660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51950660 = behavior;
   behavior->owner = (Object)channel__w0_5883_48320300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_48048820_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58101_48048820_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58101_48048820_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58101_48048820_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58101_48048820_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58101_48048820_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58101_48048820_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51951260();

   return behavior;
}

Scope makechannel__w0_5883_48320300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_48320300 = scope;
   scope->owner = (Object)layer0_58_84_48320680;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48354840();
   scope->inners[1] = maketrig__w_48354820();
   scope->inners[2] = makedbus__r_41419300();
   scope->inners[3] = makedbus__w_43926560();
   scope->inners[4] = makeabus__r_43926280();
   scope->inners[5] = makeabus__w_43926140();
   scope->inners[6] = makemem_45626960();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_48319760();
   scope->scopes[1] = makewaddr_5889_48318940();
   scope->scopes[2] = makerinc_5894_48340060();
   scope->scopes[3] = makewinc_5898_48337800();
   scope->scopes[4] = makerdec_58102_48333740();
   scope->scopes[5] = makewdec_58107_48355640();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48368120();
   scope->behaviors[1] = make__51925300();
   scope->behaviors[2] = make__51924920();
   scope->behaviors[3] = make__51923540();
   scope->behaviors[4] = make__51923300();
   scope->behaviors[5] = make__51922640();
   scope->behaviors[6] = make__51922300();
   scope->behaviors[7] = make__51921480();
   scope->behaviors[8] = make__51921120();
   scope->behaviors[9] = make__51953040();
   scope->behaviors[10] = make__51952720();
   scope->behaviors[11] = make__51951340();
   scope->behaviors[12] = make__51950660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_48368000;

SignalI trig__r_48388540_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI maketrig__r_48388540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48388540_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__w1_58112_48368000;
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

SignalI trig__w_48388480_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI maketrig__w_48388480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48388480_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__w1_58112_48368000;
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

SignalI dbus__r_43074500_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makedbus__r_43074500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_43074500_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__w1_58112_48368000;
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

SignalI dbus__w_44672900_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makedbus__w_44672900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_44672900_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__w1_58112_48368000;
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

SignalI abus__r_44672820_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__r_44672820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_44672820_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__w1_58112_48368000;
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

SignalI abus__w_44672720_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__w_44672720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_44672720_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__w1_58112_48368000;
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

SignalI mem_45674580_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makemem_45674580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_45674580_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__w1_58112_48368000;
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

Scope raddr_58113_48367580;

Scope makeraddr_58113_48367580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_48367580 = scope;
   scope->owner = (Object)channel__w1_58112_48368000;
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

Scope waddr_58118_48366780;

Scope makewaddr_58118_48366780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_48366780 = scope;
   scope->owner = (Object)channel__w1_58112_48368000;
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

Scope rinc_58123_48366120;

Scope makerinc_58123_48366120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_48366120 = scope;
   scope->owner = (Object)channel__w1_58112_48368000;
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

Scope winc_58127_48365640;

Scope makewinc_58127_48365640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_48365640 = scope;
   scope->owner = (Object)channel__w1_58112_48368000;
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

Scope rdec_58131_48389460;

Scope makerdec_58131_48389460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_48389460 = scope;
   scope->owner = (Object)channel__w1_58112_48368000;
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

Scope wdec_58136_48389040;

Scope makewdec_58136_48389040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_48389040 = scope;
   scope->owner = (Object)channel__w1_58112_48368000;
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

Behavior __43501740;

Behavior make__43501740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43501740 = behavior;
   behavior->owner = (Object)channel__w1_58112_48368000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_neg += 1;
   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->neg = realloc(clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->neg,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_neg*sizeof(Object));
clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->neg[clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_neg-1] = (Object)behavior;
   behavior->block = make__47705900();

   return behavior;
}

Behavior __51946460;

Behavior make__51946460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51946460 = behavior;
   behavior->owner = (Object)channel__w1_58112_48368000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_43074500_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   dbus__r_43074500_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   dbus__r_43074500_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(dbus__r_43074500_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,dbus__r_43074500_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
dbus__r_43074500_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[dbus__r_43074500_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51946640();

   return behavior;
}

Behavior __51946200;

Behavior make__51946200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51946200 = behavior;
   behavior->owner = (Object)channel__w1_58112_48368000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_52062420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58126_52062420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58126_52062420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58126_52062420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58126_52062420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58126_52062420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58126_52062420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51946400();

   return behavior;
}

Behavior __51986180;

Behavior make__51986180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51986180 = behavior;
   behavior->owner = (Object)channel__w1_58112_48368000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48388540_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   trig__r_48388540_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   trig__r_48388540_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(trig__r_48388540_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,trig__r_48388540_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
trig__r_48388540_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[trig__r_48388540_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51945660();

   return behavior;
}

Behavior __51985840;

Behavior make__51985840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51985840 = behavior;
   behavior->owner = (Object)channel__w1_58112_48368000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_52062400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58124_52062400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58124_52062400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58124_52062400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58124_52062400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58124_52062400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58124_52062400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51986120();

   return behavior;
}

Behavior __51985200;

Behavior make__51985200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51985200 = behavior;
   behavior->owner = (Object)channel__w1_58112_48368000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_44672820_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   abus__r_44672820_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   abus__r_44672820_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(abus__r_44672820_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,abus__r_44672820_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
abus__r_44672820_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[abus__r_44672820_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51985420();

   return behavior;
}

Behavior __51984820;

Behavior make__51984820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51984820 = behavior;
   behavior->owner = (Object)channel__w1_58112_48368000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_52062320_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58125_52062320_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58125_52062320_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58125_52062320_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58125_52062320_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58125_52062320_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58125_52062320_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51985140();

   return behavior;
}

Behavior __51983820;

Behavior make__51983820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51983820 = behavior;
   behavior->owner = (Object)channel__w1_58112_48368000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48388480_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   trig__w_48388480_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   trig__w_48388480_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(trig__w_48388480_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,trig__w_48388480_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
trig__w_48388480_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[trig__w_48388480_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51984040();

   return behavior;
}

Behavior __51983540;

Behavior make__51983540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51983540 = behavior;
   behavior->owner = (Object)channel__w1_58112_48368000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_48048760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58128_48048760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58128_48048760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58128_48048760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58128_48048760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58128_48048760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58128_48048760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51983780();

   return behavior;
}

Behavior __51982900;

Behavior make__51982900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51982900 = behavior;
   behavior->owner = (Object)channel__w1_58112_48368000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_44672720_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   abus__w_44672720_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   abus__w_44672720_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(abus__w_44672720_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,abus__w_44672720_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
abus__w_44672720_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[abus__w_44672720_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51983080();

   return behavior;
}

Behavior __51982640;

Behavior make__51982640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51982640 = behavior;
   behavior->owner = (Object)channel__w1_58112_48368000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_48048660_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58129_48048660_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58129_48048660_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58129_48048660_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58129_48048660_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58129_48048660_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58129_48048660_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51982820();

   return behavior;
}

Behavior __51981620;

Behavior make__51981620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51981620 = behavior;
   behavior->owner = (Object)channel__w1_58112_48368000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_44672900_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   dbus__w_44672900_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   dbus__w_44672900_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(dbus__w_44672900_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,dbus__w_44672900_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
dbus__w_44672900_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[dbus__w_44672900_channel__w1_58112_48368000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51982080();

   return behavior;
}

Behavior __51981220;

Behavior make__51981220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51981220 = behavior;
   behavior->owner = (Object)channel__w1_58112_48368000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_48289580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58130_48289580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58130_48289580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58130_48289580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58130_48289580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58130_48289580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58130_48289580_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51981480();

   return behavior;
}

Scope makechannel__w1_58112_48368000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_48368000 = scope;
   scope->owner = (Object)layer0_58_84_48320680;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48388540();
   scope->inners[1] = maketrig__w_48388480();
   scope->inners[2] = makedbus__r_43074500();
   scope->inners[3] = makedbus__w_44672900();
   scope->inners[4] = makeabus__r_44672820();
   scope->inners[5] = makeabus__w_44672720();
   scope->inners[6] = makemem_45674580();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_48367580();
   scope->scopes[1] = makewaddr_58118_48366780();
   scope->scopes[2] = makerinc_58123_48366120();
   scope->scopes[3] = makewinc_58127_48365640();
   scope->scopes[4] = makerdec_58131_48389460();
   scope->scopes[5] = makewdec_58136_48389040();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__43501740();
   scope->behaviors[1] = make__51946460();
   scope->behaviors[2] = make__51946200();
   scope->behaviors[3] = make__51986180();
   scope->behaviors[4] = make__51985840();
   scope->behaviors[5] = make__51985200();
   scope->behaviors[6] = make__51984820();
   scope->behaviors[7] = make__51983820();
   scope->behaviors[8] = make__51983540();
   scope->behaviors[9] = make__51982900();
   scope->behaviors[10] = make__51982640();
   scope->behaviors[11] = make__51981620();
   scope->behaviors[12] = make__51981220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_43562600;

SignalI reg__0_45501280_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makereg__0_45501280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_45501280_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__accum_58141_43562600;
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

SignalI reg__1_45706420_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makereg__1_45706420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_45706420_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__accum_58141_43562600;
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

Scope anum_58142_43558800;

Scope makeanum_58142_43558800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_43558800 = scope;
   scope->owner = (Object)channel__accum_58141_43562600;
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

Scope raddr_58145_44144140;

Scope makeraddr_58145_44144140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_44144140 = scope;
   scope->owner = (Object)channel__accum_58141_43562600;
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

Scope waddr_58149_44140760;

Scope makewaddr_58149_44140760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_44140760 = scope;
   scope->owner = (Object)channel__accum_58141_43562600;
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

Scope rinc_58153_44199960;

SignalI abus__r_44448700_rinc_58153_44199960_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__r_44448700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_44448700_rinc_58153_44199960_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)rinc_58153_44199960;
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

Scope makerinc_58153_44199960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_44199960 = scope;
   scope->owner = (Object)channel__accum_58141_43562600;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_44448700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_43057000;

SignalI abus__w_43278200_winc_58158_43057000_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__w_43278200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_43278200_winc_58158_43057000_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)winc_58158_43057000;
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

Scope makewinc_58158_43057000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_43057000 = scope;
   scope->owner = (Object)channel__accum_58141_43562600;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_43278200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_43277740;

SignalI abus__r_43274360_rdec_58163_43277740_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__r_43274360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_43274360_rdec_58163_43277740_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)rdec_58163_43277740;
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

Scope makerdec_58163_43277740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_43277740 = scope;
   scope->owner = (Object)channel__accum_58141_43562600;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_43274360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_43273560;

SignalI abus__w_43271460_wdec_58168_43273560_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__w_43271460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_43271460_wdec_58168_43273560_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)wdec_58168_43273560;
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

Scope makewdec_58168_43273560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_43273560 = scope;
   scope->owner = (Object)channel__accum_58141_43562600;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_43271460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51978740;

Behavior make__51978740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51978740 = behavior;
   behavior->owner = (Object)channel__accum_58141_43562600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45501280_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   reg__0_45501280_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   reg__0_45501280_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(reg__0_45501280_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,reg__0_45501280_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
reg__0_45501280_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[reg__0_45501280_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51978980();

   return behavior;
}

Behavior __51978420;

Behavior make__51978420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51978420 = behavior;
   behavior->owner = (Object)channel__accum_58141_43562600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_52179100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58143_52179100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58143_52179100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58143_52179100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58143_52179100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58143_52179100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58143_52179100_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51978700();

   return behavior;
}

Behavior __52034380;

Behavior make__52034380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52034380 = behavior;
   behavior->owner = (Object)channel__accum_58141_43562600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_45706420_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   reg__1_45706420_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   reg__1_45706420_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(reg__1_45706420_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,reg__1_45706420_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
reg__1_45706420_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[reg__1_45706420_channel__accum_58141_43562600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52034560();

   return behavior;
}

Behavior __52034040;

Behavior make__52034040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52034040 = behavior;
   behavior->owner = (Object)channel__accum_58141_43562600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_52281300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58144_52281300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58144_52281300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58144_52281300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58144_52281300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58144_52281300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58144_52281300_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52034300();

   return behavior;
}

Scope makechannel__accum_58141_43562600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_43562600 = scope;
   scope->owner = (Object)layer0_58_84_48320680;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_45501280();
   scope->inners[1] = makereg__1_45706420();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_43558800();
   scope->scopes[1] = makeraddr_58145_44144140();
   scope->scopes[2] = makewaddr_58149_44140760();
   scope->scopes[3] = makerinc_58153_44199960();
   scope->scopes[4] = makewinc_58158_43057000();
   scope->scopes[5] = makerdec_58163_43277740();
   scope->scopes[6] = makewdec_58168_43273560();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51978740();
   scope->behaviors[1] = make__51978420();
   scope->behaviors[2] = make__52034380();
   scope->behaviors[3] = make__52034040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_47787180;

SignalI lv0_47919200_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makelv0_47919200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47919200_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)mac__n1_58173_47787180;
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

SignalI lv1_47997740_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makelv1_47997740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47997740_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)mac__n1_58173_47787180;
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

SignalI av0_48155140_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeav0_48155140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_48155140_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)mac__n1_58173_47787180;
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

SignalI av1_48322620_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeav1_48322620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_48322620_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)mac__n1_58173_47787180;
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

SignalI rv_42976960_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makerv_42976960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_42976960_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)mac__n1_58173_47787180;
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

SignalI lvok0_42976940_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makelvok0_42976940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_42976940_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)mac__n1_58173_47787180;
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

SignalI lvok1_42976840_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makelvok1_42976840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_42976840_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)mac__n1_58173_47787180;
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

SignalI rvok_42976820_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makervok_42976820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_42976820_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)mac__n1_58173_47787180;
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

SignalI run_42976760_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makerun_42976760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_42976760_mac__n1_58173_47787180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)mac__n1_58173_47787180;
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

Behavior __51056820;

Behavior make__51056820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51056820 = behavior;
   behavior->owner = (Object)mac__n1_58173_47787180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos += 1;
   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos = realloc(clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos*sizeof(Object));
clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos[clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos-1] = (Object)behavior;
   behavior->block = make__42976420();

   return behavior;
}

Scope makemac__n1_58173_47787180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_47787180 = scope;
   scope->owner = (Object)layer0_58_84_48320680;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47919200();
   scope->inners[1] = makelv1_47997740();
   scope->inners[2] = makeav0_48155140();
   scope->inners[3] = makeav1_48322620();
   scope->inners[4] = makerv_42976960();
   scope->inners[5] = makelvok0_42976940();
   scope->inners[6] = makelvok1_42976840();
   scope->inners[7] = makervok_42976820();
   scope->inners[8] = makerun_42976760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51056820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58175_51056700;

SignalI reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makereg__0_51164700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__bias_58175_51056700;
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

SignalI reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makereg__1_51235640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__bias_58175_51056700;
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

Scope anum_58176_51056400;

Scope makeanum_58176_51056400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58176_51056400 = scope;
   scope->owner = (Object)channel__bias_58175_51056700;
   scope->name = "anum:176";
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

Scope raddr_58179_51055980;

Scope makeraddr_58179_51055980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58179_51055980 = scope;
   scope->owner = (Object)channel__bias_58175_51056700;
   scope->name = "raddr:179";
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

Scope waddr_58183_51055560;

Scope makewaddr_58183_51055560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58183_51055560 = scope;
   scope->owner = (Object)channel__bias_58175_51056700;
   scope->name = "waddr:183";
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

Scope rinc_58187_51055140;

SignalI abus__r_51054760_rinc_58187_51055140_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__r_51054760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51054760_rinc_58187_51055140_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)rinc_58187_51055140;
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

Scope makerinc_58187_51055140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58187_51055140 = scope;
   scope->owner = (Object)channel__bias_58175_51056700;
   scope->name = "rinc:187";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51054760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58191_51054640;

SignalI abus__w_51054260_winc_58191_51054640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__w_51054260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51054260_winc_58191_51054640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)winc_58191_51054640;
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

Behavior __52064800;

Behavior make__52064800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52064800 = behavior;
   behavior->owner = (Object)winc_58191_51054640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_51054260_winc_58191_51054640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   abus__w_51054260_winc_58191_51054640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   abus__w_51054260_winc_58191_51054640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(abus__w_51054260_winc_58191_51054640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,abus__w_51054260_winc_58191_51054640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
abus__w_51054260_winc_58191_51054640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[abus__w_51054260_winc_58191_51054640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52065180();

   return behavior;
}

Behavior __52064440;

Behavior make__52064440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52064440 = behavior;
   behavior->owner = (Object)winc_58191_51054640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58194_48813860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52064760();

   return behavior;
}

Scope makewinc_58191_51054640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58191_51054640 = scope;
   scope->owner = (Object)channel__bias_58175_51056700;
   scope->name = "winc:191";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51054260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52064800();
   scope->behaviors[1] = make__52064440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58195_51053880;

SignalI abus__r_51053500_rdec_58195_51053880_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__r_51053500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51053500_rdec_58195_51053880_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)rdec_58195_51053880;
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

Scope makerdec_58195_51053880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58195_51053880 = scope;
   scope->owner = (Object)channel__bias_58175_51056700;
   scope->name = "rdec:195";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51053500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58200_51053380;

SignalI abus__w_51053000_wdec_58200_51053380_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__w_51053000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51053000_wdec_58200_51053380_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)wdec_58200_51053380;
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

Scope makewdec_58200_51053380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58200_51053380 = scope;
   scope->owner = (Object)channel__bias_58175_51056700;
   scope->name = "wdec:200";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51053000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52031100;

Behavior make__52031100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52031100 = behavior;
   behavior->owner = (Object)channel__bias_58175_51056700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52031380();

   return behavior;
}

Behavior __52030500;

Behavior make__52030500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52030500 = behavior;
   behavior->owner = (Object)channel__bias_58175_51056700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58177_52424400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58177_52424400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58177_52424400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58177_52424400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58177_52424400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58177_52424400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58177_52424400_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52031020();

   return behavior;
}

Behavior __52029920;

Behavior make__52029920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52029920 = behavior;
   behavior->owner = (Object)channel__bias_58175_51056700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52030100();

   return behavior;
}

Behavior __52029660;

Behavior make__52029660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52029660 = behavior;
   behavior->owner = (Object)channel__bias_58175_51056700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58178_41304600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58178_41304600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58178_41304600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58178_41304600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58178_41304600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58178_41304600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58178_41304600_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52029880();

   return behavior;
}

Behavior __52029120;

Behavior make__52029120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52029120 = behavior;
   behavior->owner = (Object)channel__bias_58175_51056700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[reg__0_51164700_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52029360();

   return behavior;
}

Behavior __52028640;

Behavior make__52028640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52028640 = behavior;
   behavior->owner = (Object)channel__bias_58175_51056700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58192_50196780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58192_50196780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58192_50196780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58192_50196780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58192_50196780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58192_50196780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58192_50196780_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52029080();

   return behavior;
}

Behavior __52068140;

Behavior make__52068140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52068140 = behavior;
   behavior->owner = (Object)channel__bias_58175_51056700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[reg__1_51235640_channel__bias_58175_51056700_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52027440();

   return behavior;
}

Behavior __52067940;

Behavior make__52067940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52067940 = behavior;
   behavior->owner = (Object)channel__bias_58175_51056700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58193_48813960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58193_48813960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58193_48813960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58193_48813960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58193_48813960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58193_48813960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58193_48813960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52068100();

   return behavior;
}

Scope makechannel__bias_58175_51056700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58175_51056700 = scope;
   scope->owner = (Object)layer0_58_84_48320680;
   scope->name = "channel_bias:175";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51164700();
   scope->inners[1] = makereg__1_51235640();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58176_51056400();
   scope->scopes[1] = makeraddr_58179_51055980();
   scope->scopes[2] = makewaddr_58183_51055560();
   scope->scopes[3] = makerinc_58187_51055140();
   scope->scopes[4] = makewinc_58191_51054640();
   scope->scopes[5] = makerdec_58195_51053880();
   scope->scopes[6] = makewdec_58200_51053380();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52031100();
   scope->behaviors[1] = make__52030500();
   scope->behaviors[2] = make__52029920();
   scope->behaviors[3] = make__52029660();
   scope->behaviors[4] = make__52029120();
   scope->behaviors[5] = make__52028640();
   scope->behaviors[6] = make__52068140();
   scope->behaviors[7] = make__52067940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58205_52105720;

SignalI reg__0_52238600_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makereg__0_52238600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52238600_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__z_58205_52105720;
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

SignalI reg__1_52284980_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makereg__1_52284980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_52284980_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__z_58205_52105720;
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

Scope anum_58206_52105420;

Scope makeanum_58206_52105420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58206_52105420 = scope;
   scope->owner = (Object)channel__z_58205_52105720;
   scope->name = "anum:206";
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

Scope raddr_58209_52105000;

Scope makeraddr_58209_52105000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58209_52105000 = scope;
   scope->owner = (Object)channel__z_58205_52105720;
   scope->name = "raddr:209";
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

Scope waddr_58213_52104580;

Scope makewaddr_58213_52104580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58213_52104580 = scope;
   scope->owner = (Object)channel__z_58205_52105720;
   scope->name = "waddr:213";
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

Scope rinc_58217_52104160;

SignalI abus__r_52103780_rinc_58217_52104160_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__r_52103780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52103780_rinc_58217_52104160_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)rinc_58217_52104160;
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

Scope makerinc_58217_52104160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58217_52104160 = scope;
   scope->owner = (Object)channel__z_58205_52105720;
   scope->name = "rinc:217";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52103780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58221_52103660;

SignalI abus__w_52103280_winc_58221_52103660_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__w_52103280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52103280_winc_58221_52103660_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)winc_58221_52103660;
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

Scope makewinc_58221_52103660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58221_52103660 = scope;
   scope->owner = (Object)channel__z_58205_52105720;
   scope->name = "winc:221";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52103280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58225_52103160;

SignalI abus__r_52102780_rdec_58225_52103160_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__r_52102780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52102780_rdec_58225_52103160_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)rdec_58225_52103160;
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

Scope makerdec_58225_52103160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58225_52103160 = scope;
   scope->owner = (Object)channel__z_58205_52105720;
   scope->name = "rdec:225";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52102780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58230_52102660;

SignalI abus__w_52102280_wdec_58230_52102660_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeabus__w_52102280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52102280_wdec_58230_52102660_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)wdec_58230_52102660;
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

Scope makewdec_58230_52102660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58230_52102660 = scope;
   scope->owner = (Object)channel__z_58205_52105720;
   scope->name = "wdec:230";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52102280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52061620;

Behavior make__52061620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52061620 = behavior;
   behavior->owner = (Object)channel__z_58205_52105720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52238600_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   reg__0_52238600_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   reg__0_52238600_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(reg__0_52238600_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,reg__0_52238600_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
reg__0_52238600_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[reg__0_52238600_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52062000();

   return behavior;
}

Behavior __52061280;

Behavior make__52061280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52061280 = behavior;
   behavior->owner = (Object)channel__z_58205_52105720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58207_45570960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58207_45570960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58207_45570960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58207_45570960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58207_45570960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58207_45570960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58207_45570960_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52061560();

   return behavior;
}

Behavior __52060480;

Behavior make__52060480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52060480 = behavior;
   behavior->owner = (Object)channel__z_58205_52105720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_52284980_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   reg__1_52284980_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   reg__1_52284980_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(reg__1_52284980_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,reg__1_52284980_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
reg__1_52284980_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[reg__1_52284980_channel__z_58205_52105720_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52060740();

   return behavior;
}

Behavior __52060260;

Behavior make__52060260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52060260 = behavior;
   behavior->owner = (Object)channel__z_58205_52105720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58208_45724860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _58208_45724860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _58208_45724860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_58208_45724860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_58208_45724860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_58208_45724860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_58208_45724860_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__52060440();

   return behavior;
}

Scope makechannel__z_58205_52105720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58205_52105720 = scope;
   scope->owner = (Object)layer0_58_84_48320680;
   scope->name = "channel_z:205";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52238600();
   scope->inners[1] = makereg__1_52284980();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58206_52105420();
   scope->scopes[1] = makeraddr_58209_52105000();
   scope->scopes[2] = makewaddr_58213_52104580();
   scope->scopes[3] = makerinc_58217_52104160();
   scope->scopes[4] = makewinc_58221_52103660();
   scope->scopes[5] = makerdec_58225_52103160();
   scope->scopes[6] = makewdec_58230_52102660();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52061620();
   scope->behaviors[1] = make__52061280();
   scope->behaviors[2] = make__52060480();
   scope->behaviors[3] = make__52060260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58235_45705180;

SignalI lv0_46117340_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makelv0_46117340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_46117340_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)add__n_58235_45705180;
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

SignalI lv1_47373840_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makelv1_47373840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47373840_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)add__n_58235_45705180;
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

SignalI rv0_47702100_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makerv0_47702100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_47702100_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)add__n_58235_45705180;
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

SignalI rv1_47906240_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makerv1_47906240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_47906240_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)add__n_58235_45705180;
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

SignalI lvok0_47906220_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makelvok0_47906220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_47906220_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)add__n_58235_45705180;
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

SignalI lvok1_47906200_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makelvok1_47906200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_47906200_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)add__n_58235_45705180;
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

SignalI rvok0_47906160_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makervok0_47906160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_47906160_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)add__n_58235_45705180;
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

SignalI rvok1_47905800_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makervok1_47905800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_47905800_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)add__n_58235_45705180;
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

SignalI run_47905660_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makerun_47905660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_47905660_add__n_58235_45705180_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)add__n_58235_45705180;
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

Behavior __51874840;

Behavior make__51874840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51874840 = behavior;
   behavior->owner = (Object)add__n_58235_45705180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos += 1;
   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos = realloc(clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos*sizeof(Object));
clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos[clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos-1] = (Object)behavior;
   behavior->block = make__47904820();

   return behavior;
}

Scope makeadd__n_58235_45705180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58235_45705180 = scope;
   scope->owner = (Object)layer0_58_84_48320680;
   scope->name = "add_n:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_46117340();
   scope->inners[1] = makelv1_47373840();
   scope->inners[2] = makerv0_47702100();
   scope->inners[3] = makerv1_47906240();
   scope->inners[4] = makelvok0_47906220();
   scope->inners[5] = makelvok1_47906200();
   scope->inners[6] = makervok0_47906160();
   scope->inners[7] = makervok1_47905800();
   scope->inners[8] = makerun_47905660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51874840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52538420;

Behavior make__52538420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52538420 = behavior;
   behavior->owner = (Object)layer0_58_84_48320680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos += 1;
   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos = realloc(clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos*sizeof(Object));
clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos[clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos-1] = (Object)behavior;
   behavior->block = make__51664840();

   return behavior;
}

Behavior __48034280;

Behavior make__48034280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48034280 = behavior;
   behavior->owner = (Object)layer0_58_84_48320680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos += 1;
   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos = realloc(clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos*sizeof(Object));
clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos[clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos-1] = (Object)behavior;
   behavior->block = make__52538120();

   return behavior;
}

Behavior __51003920;

Behavior make__51003920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51003920 = behavior;
   behavior->owner = (Object)layer0_58_84_48320680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos += 1;
   clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos = realloc(clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos*sizeof(Object));
clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->pos[clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_pos-1] = (Object)behavior;
   behavior->block = make__48034020();

   return behavior;
}

Behavior __51926340;

Behavior make__51926340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51926340 = behavior;
   behavior->owner = (Object)layer0_58_84_48320680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,value__z0_46356760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   value__z0_46356760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   value__z0_46356760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(value__z0_46356760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,value__z0_46356760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
value__z0_46356760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[value__z0_46356760_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,value__z1_47627000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   value__z1_47627000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   value__z1_47627000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(value__z1_47627000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,value__z1_47627000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
value__z1_47627000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[value__z1_47627000_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__a00_47933680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   ack__a00_47933680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   ack__a00_47933680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(ack__a00_47933680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,ack__a00_47933680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
ack__a00_47933680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[ack__a00_47933680_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__a01_47933640_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   ack__a01_47933640_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   ack__a01_47933640_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(ack__a01_47933640_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,ack__a01_47933640_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
ack__a01_47933640_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[ack__a01_47933640_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51908640();

   return behavior;
}

Behavior __51926120;

Behavior make__51926120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51926120 = behavior;
   behavior->owner = (Object)layer0_58_84_48320680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_52063480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   a_52063480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   a_52063480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(a_52063480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,a_52063480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
a_52063480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[a_52063480_func0_58_840_51829420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_48046620_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   a_48046620_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   a_48046620_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(a_48046620_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,a_48046620_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
a_48046620_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[a_48046620_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51908580();

   return behavior;
}

Scope makelayer0_58_84_48320680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_48320680 = scope;
   scope->owner = (Object)layer0_58_840_51003420;
   scope->name = "layer0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makefunc0_52063320();
   scope->systemIs[1] = makefunc1_48046380();
   scope->num_inners = 31;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__mac_51874700();
   scope->inners[1] = makeack__add_51874680();
   scope->inners[2] = make_5897_51952200();
   scope->inners[3] = make_5895_51952180();
   scope->inners[4] = make_5896_51952100();
   scope->inners[5] = make_58126_52062420();
   scope->inners[6] = make_58124_52062400();
   scope->inners[7] = make_58125_52062320();
   scope->inners[8] = make_58143_52179100();
   scope->inners[9] = make_58144_52281300();
   scope->inners[10] = make_58177_52424400();
   scope->inners[11] = make_58178_41304600();
   scope->inners[12] = make_58207_45570960();
   scope->inners[13] = make_58208_45724860();
   scope->inners[14] = makevalue__z0_46356760();
   scope->inners[15] = makevalue__z1_47627000();
   scope->inners[16] = makevalue__a00_47791740();
   scope->inners[17] = makevalue__a01_47933780();
   scope->inners[18] = makeflag__z0_47933740();
   scope->inners[19] = makeflag__z1_47933720();
   scope->inners[20] = makeack__a00_47933680();
   scope->inners[21] = makeack__a01_47933640();
   scope->inners[22] = make_5899_47933580();
   scope->inners[23] = make_58100_47933480();
   scope->inners[24] = make_58101_48048820();
   scope->inners[25] = make_58128_48048760();
   scope->inners[26] = make_58129_48048660();
   scope->inners[27] = make_58130_48289580();
   scope->inners[28] = make_58192_50196780();
   scope->inners[29] = make_58193_48813960();
   scope->inners[30] = make_58194_48813860();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_48320300();
   scope->scopes[1] = makechannel__w1_58112_48368000();
   scope->scopes[2] = makechannel__accum_58141_43562600();
   scope->scopes[3] = makemac__n1_58173_47787180();
   scope->scopes[4] = makechannel__bias_58175_51056700();
   scope->scopes[5] = makechannel__z_58205_52105720();
   scope->scopes[6] = makeadd__n_58235_45705180();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52538420();
   scope->behaviors[1] = make__48034280();
   scope->behaviors[2] = make__51003920();
   scope->behaviors[3] = make__51926340();
   scope->behaviors[4] = make__51926120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_51003420() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_51003420 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_51056900();
   systemT->inputs[1] = makerst_51056780();
   systemT->inputs[2] = makereq_51056760();
   systemT->inputs[3] = makefill_51056740();
   systemT->inputs[4] = make_5815_51192580();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__0_51192480();
   systemT->outputs[1] = make_5813_51192460();
   systemT->outputs[2] = make_5814_51192380();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer0_58_84_48320680();

   return systemT;
}