#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_52138560;

SignalI clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeclk_52135060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)layer0_58_840_52138560;
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

SignalI rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makerst_52135040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)layer0_58_840_52138560;
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

SignalI req_52135020_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makereq_52135020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_52135020_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)layer0_58_840_52138560;
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

SignalI fill_52135000_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makefill_52135000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_52135000_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)layer0_58_840_52138560;
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

SignalI ack__0_52134940_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeack__0_52134940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_52134940_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)layer0_58_840_52138560;
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

Block __52001140;

Block __52000180;

Block __51999960;

void code__51999960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58204_48771740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,value__z0_48993960___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49191440(),flag__z0_51318180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__51999960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51999960 = block;
   block->owner = (Object)__52000180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51999960;

   return block;
};

Block __52434180;

void code__52434180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58205_48873180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,value__z1_49126820___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49191080(),flag__z1_51318160___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__52434180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52434180 = block;
   block->owner = (Object)__52000180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52434180;

   return block;
};

void code__52000180() {
 code__51999960();
 code__52434180();
}

Block make__52000180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52000180 = block;
   block->owner = (Object)__52001140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52000180;

   return block;
};

Block __52000980;

void code__52000980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49190940(),flag__z0_51318180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49190760(),flag__z1_51318160___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__52000980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52000980 = block;
   block->owner = (Object)__52001140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52000980;

   return block;
};

void code__52001140() {
   {
      Value cond = ack__add_53088820___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52000180();
   }
   else {
  code__52000980();
   }
      }
   }
}

Block make__52001140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52001140 = block;
   block->owner = (Object)__52874480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52001140;

   return block;
};

Block __52874340;

Block __52873840;

Block __52873560;

void code__52873560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a00_49255520___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_5832_46360980___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49188940(),ack__a00_51318140___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__52873560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52873560 = block;
   block->owner = (Object)__52873840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52873560;

   return block;
};

Block __53275320;

void code__53275320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a01_51318200___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_5833_47690040___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49187700(),ack__a01_51318120___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53275320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53275320 = block;
   block->owner = (Object)__52873840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53275320;

   return block;
};

void code__52873840() {
 code__52873560();
 code__53275320();
}

Block make__52873840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52873840 = block;
   block->owner = (Object)__52874340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52873840;

   return block;
};

void code__52874340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_51318180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
         src1 = flag__z1_51318160___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52873840();
   }
      }
   }
}

Block make__52874340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52874340 = block;
   block->owner = (Object)__48702660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52874340;

   return block;
};

Block __48702220;

Block __48723060;

Block __48718960;

void code__48718960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49187260(),_58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__48718960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48718960 = block;
   block->owner = (Object)__48723060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48718960;

   return block;
};

void code__48723060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49187460();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48718960();
   }
      }
   }
}

Block make__48723060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48723060 = block;
   block->owner = (Object)__48702220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48723060;

   return block;
};

Block __48282920;

Block __48282000;

void code__48282000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49186720(),_58129_51492060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__48282000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48282000 = block;
   block->owner = (Object)__48282920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48282000;

   return block;
};

void code__48282920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49186940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48282000();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49186620(),_58128_51492140___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__48282920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48282920 = block;
   block->owner = (Object)__48702220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48282920;

   return block;
};

Block __48279760;

Block __48278660;

void code__48278660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49186180(),_58100_51318020___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__48278660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48278660 = block;
   block->owner = (Object)__48279760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48278660;

   return block;
};

void code__48279760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49186360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48278660();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49185960(),_5899_51318100___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__48279760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48279760 = block;
   block->owner = (Object)__48702220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48279760;

   return block;
};

Block __48276700;

Block __48275920;

Block __48299680;

void code__48299680() {
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
                  src0 = _58100_51318020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49258340();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_51318020___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49258060(),_5899_51318100___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_51885100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58101_51492160___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__48299680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48299680 = block;
   block->owner = (Object)__48275920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48299680;

   return block;
};

void code__48275920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49185500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48299680();
   }
      }
   }
}

Block make__48275920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48275920 = block;
   block->owner = (Object)__48276700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48275920;

   return block;
};

Block __48939300;

Block __48962480;

void code__48962480() {
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
                  src0 = _58129_51492060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49257760();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_51492060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49257660(),_58128_51492140___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_51885100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58130_51641660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__48962480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48962480 = block;
   block->owner = (Object)__48939300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48962480;

   return block;
};

void code__48939300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49257900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48962480();
   }
      }
   }
}

Block make__48939300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48939300 = block;
   block->owner = (Object)__48276700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48939300;

   return block;
};

Block __51337140;

Block __51336680;

Block __51336160;

void code__51336160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_51885100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58189_51684760___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__51336160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51336160 = block;
   block->owner = (Object)__51336680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51336160;

   return block;
};

Block __51755460;

void code__51755460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(val_51885100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58190_51768220___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__51755460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51755460 = block;
   block->owner = (Object)__51336680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51755460;

   return block;
};

void code__51336680() {
{
      Value value = _58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__49257180())) {
    code__51336160();
         }
         else if (value2integer(value) == value2integer(make__49256940())) {
    code__51755460();
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
                  src0 = _58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49256300();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__51336680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51336680 = block;
   block->owner = (Object)__51337140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51336680;

   return block;
};

void code__51337140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49257400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51336680();
   }
      }
   }
}

Block make__51337140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51337140 = block;
   block->owner = (Object)__48276700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51337140;

   return block;
};

void code__48276700() {
 code__48275920();
 code__48939300();
 code__51337140();
}

Block make__48276700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48276700 = block;
   block->owner = (Object)__48702220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48276700;

   return block;
};

void code__48702220() {
 code__48723060();
 code__48282920();
 code__48279760();
   {
      Value cond = fill_52135000_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48276700();
   }
      }
   }
}

Block make__48702220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48702220 = block;
   block->owner = (Object)__52141200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48702220;

   return block;
};

Block __52141080;

Block __52140780;

void code__52140780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49255680(),req_52135020_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__52140780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52140780 = block;
   block->owner = (Object)__52141080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52140780;

   return block;
};

void code__52141080() {
   {
      Value cond = ack__add_53088820___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52140780();
   }
      }
   }
}

Block make__52141080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52141080 = block;
   block->owner = (Object)__52139200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52141080;

   return block;
};

Block __53273960;

void code__53273960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49255200(),val_51885100___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53273960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53273960 = block;
   block->owner = (Object)__53273560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53273960;

   return block;
};

Block __53277520;

void code__53277520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_48993960___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,z__value_52878560_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_49126820___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a00_51318140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      src1 = ack__a01_51318120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__0_52134940_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53277520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53277520 = block;
   block->owner = (Object)__53273020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53277520;

   return block;
};

Block __53277360;

void code__53277360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_52989820_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,value__a00_49255520___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_47157820_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,value__a01_51318200___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53277360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53277360 = block;
   block->owner = (Object)__41946760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53277360;

   return block;
};

Block __49156360;

Block __46167980;

void code__46167980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48547020___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,make_ref_rangeS(mem_48818200___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200,value2integer(abus__w_48546860___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value),value2integer(abus__w_48546860___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__46167980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46167980 = block;
   block->owner = (Object)__49156360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46167980;

   return block;
};

void code__49156360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48818200___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
            idx = value2integer(abus__r_48546940___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48487880___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48369660___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46167980();
   }
      }
   }
}

Block make__49156360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49156360 = block;
   block->owner = (Object)__48369180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49156360;

   return block;
};

Block __42052100;

void code__42052100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48487880___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_5897_53199120___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__42052100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42052100 = block;
   block->owner = (Object)__42050760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42052100;

   return block;
};

Block __42050440;

void code__42050440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_53199120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,dbus__r_48487880___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__42050440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42050440 = block;
   block->owner = (Object)__42138360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42050440;

   return block;
};

Block __42777100;

void code__42777100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48369680___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_5895_53199100___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__42777100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42777100 = block;
   block->owner = (Object)__42842980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42777100;

   return block;
};

Block __42842720;

void code__42842720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_53199100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,trig__r_48369680___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__42842720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42842720 = block;
   block->owner = (Object)__42841060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42842720;

   return block;
};

Block __42924320;

void code__42924320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48546940___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_5896_53199020___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__42924320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42924320 = block;
   block->owner = (Object)__43064940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42924320;

   return block;
};

Block __43063800;

void code__43063800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_53199020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,abus__r_48546940___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__43063800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43063800 = block;
   block->owner = (Object)__43094300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43063800;

   return block;
};

Block __43236320;

void code__43236320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48369660___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_5899_51318100___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__43236320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43236320 = block;
   block->owner = (Object)__43231420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43236320;

   return block;
};

Block __43229920;

void code__43229920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_51318100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,trig__w_48369660___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__43229920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43229920 = block;
   block->owner = (Object)__43295760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43229920;

   return block;
};

Block __44202020;

void code__44202020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48546860___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58100_51318020___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__44202020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44202020 = block;
   block->owner = (Object)__44200900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44202020;

   return block;
};

Block __44200740;

void code__44200740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_51318020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,abus__w_48546860___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__44200740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44200740 = block;
   block->owner = (Object)__44198460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44200740;

   return block;
};

Block __44228080;

void code__44228080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48547020___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58101_51492160___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__44228080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44228080 = block;
   block->owner = (Object)__44226180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44228080;

   return block;
};

Block __44225680;

void code__44225680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_51492160___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,dbus__w_48547020___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__44225680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44225680 = block;
   block->owner = (Object)__44224260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44225680;

   return block;
};

Block __49185660;

Block __46793480;

void code__46793480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48768180___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,make_ref_rangeS(mem_48855880___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200,value2integer(abus__w_48768020___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value),value2integer(abus__w_48768020___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__46793480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46793480 = block;
   block->owner = (Object)__49185660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46793480;

   return block;
};

void code__49185660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48855880___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
            idx = value2integer(abus__r_48768100___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48482160___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48388840___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46793480();
   }
      }
   }
}

Block make__49185660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49185660 = block;
   block->owner = (Object)__48486260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49185660;

   return block;
};

Block __43781560;

void code__43781560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48482160___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58126_42675560___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__43781560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43781560 = block;
   block->owner = (Object)__44051420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43781560;

   return block;
};

Block __44051340;

void code__44051340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_42675560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,dbus__r_48482160___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__44051340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44051340 = block;
   block->owner = (Object)__44050220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44051340;

   return block;
};

Block __44781380;

void code__44781380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48388860___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58124_42729320___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__44781380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44781380 = block;
   block->owner = (Object)__44778420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44781380;

   return block;
};

Block __44778220;

void code__44778220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_42729320___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,trig__r_48388860___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__44778220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44778220 = block;
   block->owner = (Object)__45070800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44778220;

   return block;
};

Block __45070040;

void code__45070040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48768100___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58125_42729000___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__45070040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45070040 = block;
   block->owner = (Object)__45067880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45070040;

   return block;
};

Block __45066460;

void code__45066460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_42729000___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,abus__r_48768100___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__45066460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45066460 = block;
   block->owner = (Object)__45140240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45066460;

   return block;
};

Block __45217640;

void code__45217640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48388840___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58128_51492140___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__45217640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45217640 = block;
   block->owner = (Object)__45367720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45217640;

   return block;
};

Block __46415780;

void code__46415780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_51492140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,trig__w_48388840___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__46415780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46415780 = block;
   block->owner = (Object)__46414200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46415780;

   return block;
};

Block __46410500;

void code__46410500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48768020___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58129_51492060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__46410500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46410500 = block;
   block->owner = (Object)__46409540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46410500;

   return block;
};

Block __46409240;

void code__46409240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_51492060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,abus__w_48768020___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__46409240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46409240 = block;
   block->owner = (Object)__46408780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46409240;

   return block;
};

Block __46407760;

void code__46407760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48768180___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58130_51641660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__46407760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46407760 = block;
   block->owner = (Object)__46306000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46407760;

   return block;
};

Block __46305860;

void code__46305860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_51641660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,dbus__w_48768180___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__46305860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46305860 = block;
   block->owner = (Object)__46365400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46305860;

   return block;
};

Block __46358560;

void code__46358560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48789960___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58143_45339560___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__46358560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46358560 = block;
   block->owner = (Object)__46906860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46358560;

   return block;
};

Block __46906700;

void code__46906700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_45339560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,reg__0_48789960___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__46906700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46906700 = block;
   block->owner = (Object)__46904520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46906700;

   return block;
};

Block __46902740;

void code__46902740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48851400___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58144_47068660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__46902740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46902740 = block;
   block->owner = (Object)__46902220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46902740;

   return block;
};

Block __46901900;

void code__46901900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_47068660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,reg__1_48851400___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__46901900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46901900 = block;
   block->owner = (Object)__46901140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46901900;

   return block;
};

Block __49137400;

Block __49137160;

Block __49136740;

void code__49136740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49056060(),_58125_42729000___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49136740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49136740 = block;
   block->owner = (Object)__49137160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49136740;

   return block;
};

void code__49137160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49057580();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49136740();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49054560(),_58124_42729320___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49137160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49137160 = block;
   block->owner = (Object)__49137400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49137160;

   return block;
};

Block __49135980;

Block __49176480;

void code__49176480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49053840(),_5896_53199020___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49176480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49176480 = block;
   block->owner = (Object)__49135980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49176480;

   return block;
};

void code__49135980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49054340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49176480();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49094520(),_5895_53199100___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49135980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49135980 = block;
   block->owner = (Object)__49137400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49135980;

   return block;
};

Block __49175460;

Block __49175140;

void code__49175140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49094020(),_5814_42219880___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49175140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49175140 = block;
   block->owner = (Object)__49175460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49175140;

   return block;
};

void code__49175460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49094220();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49175140();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49093920(),_5813_42221180___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49175460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49175460 = block;
   block->owner = (Object)__49137400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49175460;

   return block;
};

Block __48686340;

Block __48685560;

Block __47977780;

Block __47977280;

void code__47977280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_42221240___48385240______58_840_52937200->c_value,rv_49137640___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49091100(),rvok_49137580___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47977280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47977280 = block;
   block->owner = (Object)__47977780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47977280;

   return block;
};

void code__47977780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_42221180___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49092100();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47977280();
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
                  src0 = _5814_42219880___48385240______58_840_52937200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49090640();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_42219880___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49090260(),_5813_42221180___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47977780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47977780 = block;
   block->owner = (Object)__48685560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47977780;

   return block;
};

void code__48685560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49092600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47977780();
   }
      }
   }
}

Block make__48685560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48685560 = block;
   block->owner = (Object)__48686340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48685560;

   return block;
};

Block __48869940;

Block __48869560;

Block __48869240;

void code__48869240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_53199120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,lv0_46667340___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49089180(),lvok0_49137620___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__48869240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48869240 = block;
   block->owner = (Object)__48869560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48869240;

   return block;
};

void code__48869560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_53199100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49089900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48869240();
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
                  src0 = _5896_53199020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49088820();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_53199020___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49088420(),_5895_53199100___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__48869560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48869560 = block;
   block->owner = (Object)__48869940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48869560;

   return block;
};

void code__48869940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49090120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48869560();
   }
      }
   }
}

Block make__48869940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48869940 = block;
   block->owner = (Object)__48686340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48869940;

   return block;
};

Block __41965960;

Block __41990260;

Block __41989100;

void code__41989100() {
}

Block make__41989100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __41989100 = block;
   block->owner = (Object)__41990260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__41989100;

   return block;
};

Block __48867940;

void code__48867940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_48546160___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58143_45339560___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__48867940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48867940 = block;
   block->owner = (Object)__41990260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48867940;

   return block;
};

void code__41990260() {
 code__41989100();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_48546160___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
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
                              src0 = lv0_46667340___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49137640___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49086600();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_48546160___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
 code__48867940();
}

Block make__41990260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __41990260 = block;
   block->owner = (Object)__41965960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__41990260;

   return block;
};

void code__41965960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49087800(),ack__mac_53088840___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49087440(),run_49137560___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
 code__41990260();
}

Block make__41965960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __41965960 = block;
   block->owner = (Object)__48686340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__41965960;

   return block;
};

Block __49110360;

Block __49109680;

Block __49109040;

void code__49109040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_42675560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,lv1_48307920___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49125880(),lvok1_49137600___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49109040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49109040 = block;
   block->owner = (Object)__49109680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49109040;

   return block;
};

void code__49109680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_42729320___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49126400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49109040();
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
                  src0 = _58125_42729000___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49125600();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_42729000___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49125500(),_58124_42729320___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49109680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49109680 = block;
   block->owner = (Object)__49110360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49109680;

   return block;
};

void code__49110360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52135040_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49126920();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49109680();
   }
      }
   }
}

Block make__49110360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49110360 = block;
   block->owner = (Object)__48686340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49110360;

   return block;
};

Block __51320200;

Block __51319720;

Block __51319560;

void code__51319560() {
}

Block make__51319560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51319560 = block;
   block->owner = (Object)__51319720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51319560;

   return block;
};

Block __51979380;

void code__51979380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_48941240___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58144_47068660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__51979380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51979380 = block;
   block->owner = (Object)__51319720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51979380;

   return block;
};

void code__51319720() {
 code__51319560();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_48941240___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
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
                              src0 = lv1_48307920___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49137640___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49123880();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_48941240___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
 code__51979380();
}

Block make__51319720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51319720 = block;
   block->owner = (Object)__51320200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51319720;

   return block;
};

void code__51320200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49125260(),ack__mac_53088840___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49125200(),run_49137560___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
 code__51319720();
}

Block make__51320200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51320200 = block;
   block->owner = (Object)__48686340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51320200;

   return block;
};

void code__48686340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49093280(),run_49137560___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
 code__48685560();
 code__48869940();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49137620___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
         src1 = rvok_49137580___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__41965960();
   }
      }
   }
 code__49110360();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49137600___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
         src1 = rvok_49137580___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51320200();
   }
      }
   }
}

Block make__48686340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48686340 = block;
   block->owner = (Object)__49137400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48686340;

   return block;
};

Block __49173980;

void code__49173980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49123460(),rvok_49137580___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49123360(),lvok0_49137620___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49122920(),av0_48546160___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49122820(),lvok1_49137600___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49122720(),av1_48941240___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49173980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49173980 = block;
   block->owner = (Object)__49137400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49173980;

   return block;
};

void code__49137400() {
 code__49137160();
 code__49135980();
 code__49175460();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49093780(),ack__mac_53088840___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49093680(),run_49137560___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_52135020_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
         src1 = run_49137560___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48686340();
   }
   else {
  code__49173980();
   }
      }
   }
}

Block make__49137400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49137400 = block;
   block->owner = (Object)__52194300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49137400;

   return block;
};

Block __47250380;

void code__47250380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58174_48280620___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47250380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47250380 = block;
   block->owner = (Object)__47249780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47250380;

   return block;
};

Block __47249720;

void code__47249720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58174_48280620___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47249720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47249720 = block;
   block->owner = (Object)__47248820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47249720;

   return block;
};

Block __47248360;

void code__47248360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58175_48449020___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47248360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47248360 = block;
   block->owner = (Object)__47247960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47248360;

   return block;
};

Block __47247820;

void code__47247820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58175_48449020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47247820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47247820 = block;
   block->owner = (Object)__47246560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47247820;

   return block;
};

Block __46733500;

void code__46733500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58189_51684760___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__46733500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46733500 = block;
   block->owner = (Object)__46793160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46733500;

   return block;
};

Block __47037220;

void code__47037220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58189_51684760___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47037220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47037220 = block;
   block->owner = (Object)__47033820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47037220;

   return block;
};

Block __47032800;

void code__47032800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58190_51768220___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47032800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47032800 = block;
   block->owner = (Object)__47032340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47032800;

   return block;
};

Block __47032260;

void code__47032260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58190_51768220___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47032260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47032260 = block;
   block->owner = (Object)__47031320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47032260;

   return block;
};

Block __47816340;

void code__47816340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_52191740___52192120___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47816340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47816340 = block;
   block->owner = (Object)__47814560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47816340;

   return block;
};

Block __47813220;

void code__47813220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,abus__w_52191740___52192120___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47813220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47813220 = block;
   block->owner = (Object)__47438880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47813220;

   return block;
};

Block __47435820;

void code__47435820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_46389080___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58204_48771740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47435820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47435820 = block;
   block->owner = (Object)__47435200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47435820;

   return block;
};

Block __47434980;

void code__47434980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58204_48771740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,reg__0_46389080___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47434980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47434980 = block;
   block->owner = (Object)__47433460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47434980;

   return block;
};

Block __47432780;

void code__47432780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47068680___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,_58205_48873180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47432780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47432780 = block;
   block->owner = (Object)__47432120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47432780;

   return block;
};

Block __47432060;

void code__47432060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58205_48873180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,reg__1_47068680___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47432060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47432060 = block;
   block->owner = (Object)__47471640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47432060;

   return block;
};

Block __49342660;

Block __49341180;

Block __49340820;

void code__49340820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_45339560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,lv0_48958060___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49157440(),lvok0_49342860___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49340820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49340820 = block;
   block->owner = (Object)__49341180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49340820;

   return block;
};

Block __51558760;

void code__51558760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58174_48280620___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,rv0_49169080___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49157100(),rvok0_49342820___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__51558760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51558760 = block;
   block->owner = (Object)__49341180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51558760;

   return block;
};

Block __51737900;

Block __51737420;

void code__51737420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_48958060___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      src1 = rv0_49169080___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58204_48771740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__51737420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51737420 = block;
   block->owner = (Object)__51737900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51737420;

   return block;
};

void code__51737900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49155580(),run_49342780___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49155400(),ack__add_53088820___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
 code__51737420();
}

Block make__51737900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51737900 = block;
   block->owner = (Object)__49341180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51737900;

   return block;
};

Block __52136980;

void code__52136980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_47068660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,lv1_49073080___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49154540(),lvok1_49342840___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__52136980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52136980 = block;
   block->owner = (Object)__49341180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52136980;

   return block;
};

Block __52363380;

void code__52363380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58175_48449020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,rv1_49342880___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49154260(),rvok1_49342800___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__52363380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52363380 = block;
   block->owner = (Object)__49341180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52363380;

   return block;
};

Block __52567060;

Block __52566520;

void code__52566520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_49073080___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      src1 = rv1_49342880___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58205_48873180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__52566520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52566520 = block;
   block->owner = (Object)__52567060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52566520;

   return block;
};

void code__52567060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49153660(),run_49342780___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49153380(),ack__add_53088820___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
 code__52566520();
}

Block make__52567060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52567060 = block;
   block->owner = (Object)__49341180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52567060;

   return block;
};

void code__49341180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49157720(),run_49342780___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
 code__49340820();
 code__51558760();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49342860___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
         src1 = rvok0_49342820___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51737900();
   }
      }
   }
 code__52136980();
 code__52363380();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49342840___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
         src1 = rvok1_49342800___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52567060();
   }
      }
   }
}

Block make__49341180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49341180 = block;
   block->owner = (Object)__49342660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49341180;

   return block;
};

Block __49342180;

void code__49342180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49152800(),lvok0_49342860___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49152600(),rvok0_49342820___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49152440(),lvok1_49342840___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49152280(),rvok1_49342800___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__49342180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49342180 = block;
   block->owner = (Object)__49342660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49342180;

   return block;
};

void code__49342660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49158180(),ack__add_53088820___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49158100(),run_49342780___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_53088840___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
         src1 = run_49342780___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49341180();
   }
   else {
  code__49342180();
   }
      }
   }
}

Block make__49342660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49342660 = block;
   block->owner = (Object)__53088980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49342660;

   return block;
};

Value make__49057580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49056060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49054560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49054340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49053840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49094520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49094220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49094020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49093920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49093780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49093680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49093280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49092600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49092100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49091100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49090640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49090260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49090120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49089900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49089180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49088820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49088420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49087800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49087440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49086600() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49126920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49126400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49125880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49125600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49125500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49125260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49125200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49123880() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49123460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49123360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49122920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49122820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49122720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49158180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49158100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49157720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49157440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49157100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49155580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49155400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49154540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49154260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49153660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49153380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49152800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49152600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49152440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49152280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49191440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49191080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49190940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49190760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49188940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49187700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49187460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49187260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49186940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49186720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49186620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49186360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49186180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49185960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49185500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49258340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49258060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49257900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49257760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49257660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49257400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49257180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49256940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49256300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49255680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49255200() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Scope __48350160;

SignalI ack__mac_53088840___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeack__mac_53088840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53088840___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI ack__add_53088820___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeack__add_53088820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_53088820___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _5897_53199120___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_5897_53199120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_53199120___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _5895_53199100___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_5895_53199100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_53199100___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _5896_53199020___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_5896_53199020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_53199020___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _58126_42675560___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58126_42675560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_42675560___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _58124_42729320___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58124_42729320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_42729320___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _58125_42729000___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58125_42729000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_42729000___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _58143_45339560___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58143_45339560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_45339560___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _58144_47068660___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58144_47068660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_47068660___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _58174_48280620___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58174_48280620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58174_48280620___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
   signalI->name = ":174";
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

SignalI _58175_48449020___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58175_48449020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58175_48449020___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
   signalI->name = ":175";
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

SignalI _58204_48771740___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58204_48771740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58204_48771740___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
   signalI->name = ":204";
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

SignalI _58205_48873180___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58205_48873180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58205_48873180___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
   signalI->name = ":205";
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

SignalI value__z0_48993960___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makevalue__z0_48993960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_48993960___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI value__z1_49126820___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makevalue__z1_49126820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_49126820___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI value__a00_49255520___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makevalue__a00_49255520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a00_49255520___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI value__a01_51318200___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makevalue__a01_51318200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a01_51318200___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI flag__z0_51318180___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeflag__z0_51318180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_51318180___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI flag__z1_51318160___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeflag__z1_51318160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_51318160___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI ack__a00_51318140___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeack__a00_51318140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a00_51318140___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI ack__a01_51318120___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeack__a01_51318120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a01_51318120___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _5899_51318100___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_5899_51318100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_51318100___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _58100_51318020___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58100_51318020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_51318020___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _58101_51492160___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58101_51492160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_51492160___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _58128_51492140___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58128_51492140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_51492140___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _58129_51492060___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58129_51492060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_51492060___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _58130_51641660___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58130_51641660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_51641660___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SignalI _58189_51684760___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58189_51684760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58189_51684760___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
   signalI->name = ":189";
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

SignalI _58190_51768220___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58190_51768220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58190_51768220___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
   signalI->name = ":190";
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

SignalI _58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI make_58191_51768140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
   signalI->name = ":191";
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

SignalI val_51885100___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeval_51885100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   val_51885100___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48350160;
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

SystemI func0_52989660;

SystemI makefunc0_52989660() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_52989660 = systemI;
   systemI->owner = (Object)__48350160;
   systemI->name = "func0";
   systemI->system = func0_58_840_52581280;

   return systemI;
};

SystemI func1_47157400;

SystemI makefunc1_47157400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_47157400 = systemI;
   systemI->owner = (Object)__48350160;
   systemI->name = "func1";
   systemI->system = func1_58_840_53121580;

   return systemI;
};

Scope __48349740;

SignalI trig__r_48369680___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI maketrig__r_48369680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48369680___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48349740;
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

SignalI trig__w_48369660___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI maketrig__w_48369660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48369660___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48349740;
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

SignalI dbus__r_48487880___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makedbus__r_48487880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48487880___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48349740;
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

SignalI dbus__w_48547020___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makedbus__w_48547020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48547020___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48349740;
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

SignalI abus__r_48546940___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__r_48546940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48546940___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48349740;
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

SignalI abus__w_48546860___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__w_48546860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48546860___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48349740;
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

SignalI mem_48818200___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makemem_48818200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48818200___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48349740;
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

Scope __48373640;

Scope make__48373640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48373640 = scope;
   scope->owner = (Object)__48349740;
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

Scope __48373020;

Scope make__48373020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48373020 = scope;
   scope->owner = (Object)__48349740;
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

Scope __48372360;

Scope make__48372360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48372360 = scope;
   scope->owner = (Object)__48349740;
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

Scope __48371780;

Scope make__48371780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48371780 = scope;
   scope->owner = (Object)__48349740;
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

Scope __48371080;

Scope make__48371080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48371080 = scope;
   scope->owner = (Object)__48349740;
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

Scope __48370320;

Scope make__48370320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48370320 = scope;
   scope->owner = (Object)__48349740;
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

Behavior __48369180;

Behavior make__48369180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48369180 = behavior;
   behavior->owner = (Object)__48349740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200);
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_neg += 1;
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->neg = realloc(clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->neg,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_neg*sizeof(Object));
clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->neg[clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_neg-1] = (Object)behavior;
   behavior->block = make__49156360();

   return behavior;
}

Behavior __42050760;

Behavior make__42050760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42050760 = behavior;
   behavior->owner = (Object)__48349740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48487880___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   dbus__r_48487880___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   dbus__r_48487880___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(dbus__r_48487880___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,dbus__r_48487880___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
dbus__r_48487880___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[dbus__r_48487880___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__42052100();

   return behavior;
}

Behavior __42138360;

Behavior make__42138360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42138360 = behavior;
   behavior->owner = (Object)__48349740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_53199120___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _5897_53199120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _5897_53199120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_5897_53199120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_5897_53199120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_5897_53199120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_5897_53199120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__42050440();

   return behavior;
}

Behavior __42842980;

Behavior make__42842980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42842980 = behavior;
   behavior->owner = (Object)__48349740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48369680___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   trig__r_48369680___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   trig__r_48369680___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(trig__r_48369680___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,trig__r_48369680___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
trig__r_48369680___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[trig__r_48369680___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__42777100();

   return behavior;
}

Behavior __42841060;

Behavior make__42841060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42841060 = behavior;
   behavior->owner = (Object)__48349740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_53199100___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _5895_53199100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _5895_53199100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_5895_53199100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_5895_53199100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_5895_53199100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_5895_53199100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__42842720();

   return behavior;
}

Behavior __43064940;

Behavior make__43064940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43064940 = behavior;
   behavior->owner = (Object)__48349740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48546940___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   abus__r_48546940___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   abus__r_48546940___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(abus__r_48546940___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,abus__r_48546940___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
abus__r_48546940___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[abus__r_48546940___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__42924320();

   return behavior;
}

Behavior __43094300;

Behavior make__43094300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43094300 = behavior;
   behavior->owner = (Object)__48349740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_53199020___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _5896_53199020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _5896_53199020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_5896_53199020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_5896_53199020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_5896_53199020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_5896_53199020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__43063800();

   return behavior;
}

Behavior __43231420;

Behavior make__43231420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43231420 = behavior;
   behavior->owner = (Object)__48349740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48369660___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   trig__w_48369660___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   trig__w_48369660___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(trig__w_48369660___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,trig__w_48369660___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
trig__w_48369660___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[trig__w_48369660___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__43236320();

   return behavior;
}

Behavior __43295760;

Behavior make__43295760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43295760 = behavior;
   behavior->owner = (Object)__48349740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_51318100___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _5899_51318100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _5899_51318100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_5899_51318100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_5899_51318100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_5899_51318100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_5899_51318100___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__43229920();

   return behavior;
}

Behavior __44200900;

Behavior make__44200900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44200900 = behavior;
   behavior->owner = (Object)__48349740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48546860___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   abus__w_48546860___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   abus__w_48546860___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(abus__w_48546860___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,abus__w_48546860___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
abus__w_48546860___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[abus__w_48546860___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__44202020();

   return behavior;
}

Behavior __44198460;

Behavior make__44198460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44198460 = behavior;
   behavior->owner = (Object)__48349740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_51318020___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58100_51318020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58100_51318020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58100_51318020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58100_51318020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58100_51318020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58100_51318020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__44200740();

   return behavior;
}

Behavior __44226180;

Behavior make__44226180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44226180 = behavior;
   behavior->owner = (Object)__48349740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48547020___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   dbus__w_48547020___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   dbus__w_48547020___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(dbus__w_48547020___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,dbus__w_48547020___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
dbus__w_48547020___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[dbus__w_48547020___48349740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__44228080();

   return behavior;
}

Behavior __44224260;

Behavior make__44224260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44224260 = behavior;
   behavior->owner = (Object)__48349740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_51492160___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58101_51492160___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58101_51492160___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58101_51492160___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58101_51492160___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58101_51492160___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58101_51492160___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__44225680();

   return behavior;
}

Scope make__48349740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48349740 = scope;
   scope->owner = (Object)__48350160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48369680();
   scope->inners[1] = maketrig__w_48369660();
   scope->inners[2] = makedbus__r_48487880();
   scope->inners[3] = makedbus__w_48547020();
   scope->inners[4] = makeabus__r_48546940();
   scope->inners[5] = makeabus__w_48546860();
   scope->inners[6] = makemem_48818200();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__48373640();
   scope->scopes[1] = make__48373020();
   scope->scopes[2] = make__48372360();
   scope->scopes[3] = make__48371780();
   scope->scopes[4] = make__48371080();
   scope->scopes[5] = make__48370320();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48369180();
   scope->behaviors[1] = make__42050760();
   scope->behaviors[2] = make__42138360();
   scope->behaviors[3] = make__42842980();
   scope->behaviors[4] = make__42841060();
   scope->behaviors[5] = make__43064940();
   scope->behaviors[6] = make__43094300();
   scope->behaviors[7] = make__43231420();
   scope->behaviors[8] = make__43295760();
   scope->behaviors[9] = make__44200900();
   scope->behaviors[10] = make__44198460();
   scope->behaviors[11] = make__44226180();
   scope->behaviors[12] = make__44224260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48369060;

SignalI trig__r_48388860___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI maketrig__r_48388860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48388860___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48369060;
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

SignalI trig__w_48388840___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI maketrig__w_48388840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48388840___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48369060;
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

SignalI dbus__r_48482160___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makedbus__r_48482160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48482160___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48369060;
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

SignalI dbus__w_48768180___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makedbus__w_48768180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48768180___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48369060;
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

SignalI abus__r_48768100___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__r_48768100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48768100___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48369060;
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

SignalI abus__w_48768020___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__w_48768020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48768020___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48369060;
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

SignalI mem_48855880___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makemem_48855880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48855880___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48369060;
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

Scope __48368640;

Scope make__48368640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48368640 = scope;
   scope->owner = (Object)__48369060;
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

Scope __48367960;

Scope make__48367960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48367960 = scope;
   scope->owner = (Object)__48369060;
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

Scope __48367220;

Scope make__48367220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48367220 = scope;
   scope->owner = (Object)__48369060;
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

Scope __48366480;

Scope make__48366480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48366480 = scope;
   scope->owner = (Object)__48369060;
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

Scope __48365760;

Scope make__48365760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48365760 = scope;
   scope->owner = (Object)__48369060;
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

Scope __48389680;

Scope make__48389680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48389680 = scope;
   scope->owner = (Object)__48369060;
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

Behavior __48486260;

Behavior make__48486260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48486260 = behavior;
   behavior->owner = (Object)__48369060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200);
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_neg += 1;
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->neg = realloc(clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->neg,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_neg*sizeof(Object));
clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->neg[clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_neg-1] = (Object)behavior;
   behavior->block = make__49185660();

   return behavior;
}

Behavior __44051420;

Behavior make__44051420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44051420 = behavior;
   behavior->owner = (Object)__48369060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48482160___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   dbus__r_48482160___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   dbus__r_48482160___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(dbus__r_48482160___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,dbus__r_48482160___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
dbus__r_48482160___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[dbus__r_48482160___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__43781560();

   return behavior;
}

Behavior __44050220;

Behavior make__44050220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44050220 = behavior;
   behavior->owner = (Object)__48369060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_42675560___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58126_42675560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58126_42675560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58126_42675560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58126_42675560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58126_42675560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58126_42675560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__44051340();

   return behavior;
}

Behavior __44778420;

Behavior make__44778420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44778420 = behavior;
   behavior->owner = (Object)__48369060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48388860___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   trig__r_48388860___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   trig__r_48388860___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(trig__r_48388860___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,trig__r_48388860___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
trig__r_48388860___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[trig__r_48388860___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__44781380();

   return behavior;
}

Behavior __45070800;

Behavior make__45070800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45070800 = behavior;
   behavior->owner = (Object)__48369060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_42729320___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58124_42729320___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58124_42729320___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58124_42729320___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58124_42729320___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58124_42729320___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58124_42729320___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__44778220();

   return behavior;
}

Behavior __45067880;

Behavior make__45067880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45067880 = behavior;
   behavior->owner = (Object)__48369060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48768100___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   abus__r_48768100___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   abus__r_48768100___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(abus__r_48768100___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,abus__r_48768100___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
abus__r_48768100___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[abus__r_48768100___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__45070040();

   return behavior;
}

Behavior __45140240;

Behavior make__45140240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45140240 = behavior;
   behavior->owner = (Object)__48369060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_42729000___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58125_42729000___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58125_42729000___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58125_42729000___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58125_42729000___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58125_42729000___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58125_42729000___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__45066460();

   return behavior;
}

Behavior __45367720;

Behavior make__45367720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45367720 = behavior;
   behavior->owner = (Object)__48369060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48388840___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   trig__w_48388840___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   trig__w_48388840___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(trig__w_48388840___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,trig__w_48388840___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
trig__w_48388840___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[trig__w_48388840___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__45217640();

   return behavior;
}

Behavior __46414200;

Behavior make__46414200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46414200 = behavior;
   behavior->owner = (Object)__48369060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_51492140___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58128_51492140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58128_51492140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58128_51492140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58128_51492140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58128_51492140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58128_51492140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__46415780();

   return behavior;
}

Behavior __46409540;

Behavior make__46409540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46409540 = behavior;
   behavior->owner = (Object)__48369060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48768020___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   abus__w_48768020___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   abus__w_48768020___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(abus__w_48768020___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,abus__w_48768020___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
abus__w_48768020___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[abus__w_48768020___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__46410500();

   return behavior;
}

Behavior __46408780;

Behavior make__46408780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46408780 = behavior;
   behavior->owner = (Object)__48369060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_51492060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58129_51492060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58129_51492060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58129_51492060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58129_51492060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58129_51492060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58129_51492060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__46409240();

   return behavior;
}

Behavior __46306000;

Behavior make__46306000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46306000 = behavior;
   behavior->owner = (Object)__48369060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48768180___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   dbus__w_48768180___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   dbus__w_48768180___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(dbus__w_48768180___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,dbus__w_48768180___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
dbus__w_48768180___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[dbus__w_48768180___48369060___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__46407760();

   return behavior;
}

Behavior __46365400;

Behavior make__46365400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46365400 = behavior;
   behavior->owner = (Object)__48369060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_51641660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58130_51641660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58130_51641660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58130_51641660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58130_51641660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58130_51641660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58130_51641660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__46305860();

   return behavior;
}

Scope make__48369060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48369060 = scope;
   scope->owner = (Object)__48350160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48388860();
   scope->inners[1] = maketrig__w_48388840();
   scope->inners[2] = makedbus__r_48482160();
   scope->inners[3] = makedbus__w_48768180();
   scope->inners[4] = makeabus__r_48768100();
   scope->inners[5] = makeabus__w_48768020();
   scope->inners[6] = makemem_48855880();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__48368640();
   scope->scopes[1] = make__48367960();
   scope->scopes[2] = make__48367220();
   scope->scopes[3] = make__48366480();
   scope->scopes[4] = make__48365760();
   scope->scopes[5] = make__48389680();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48486260();
   scope->behaviors[1] = make__44051420();
   scope->behaviors[2] = make__44050220();
   scope->behaviors[3] = make__44778420();
   scope->behaviors[4] = make__45070800();
   scope->behaviors[5] = make__45067880();
   scope->behaviors[6] = make__45140240();
   scope->behaviors[7] = make__45367720();
   scope->behaviors[8] = make__46414200();
   scope->behaviors[9] = make__46409540();
   scope->behaviors[10] = make__46408780();
   scope->behaviors[11] = make__46306000();
   scope->behaviors[12] = make__46365400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48486140;

SignalI reg__0_48789960___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makereg__0_48789960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48789960___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48486140;
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

SignalI reg__1_48851400___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makereg__1_48851400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_48851400___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48486140;
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

Scope __48485800;

Scope make__48485800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48485800 = scope;
   scope->owner = (Object)__48486140;
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

Scope __48485180;

Scope make__48485180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48485180 = scope;
   scope->owner = (Object)__48486140;
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

Scope __48484580;

Scope make__48484580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48484580 = scope;
   scope->owner = (Object)__48486140;
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

Scope __48484160;

SignalI abus__r_48483780___48484160___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__r_48483780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48483780___48484160___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48484160;
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

Scope make__48484160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48484160 = scope;
   scope->owner = (Object)__48486140;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48483780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48483640;

SignalI abus__w_48483100___48483640___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__w_48483100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48483100___48483640___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48483640;
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

Scope make__48483640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48483640 = scope;
   scope->owner = (Object)__48486140;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48483100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48482720;

SignalI abus__r_48482240___48482720___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__r_48482240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48482240___48482720___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48482720;
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

Scope make__48482720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48482720 = scope;
   scope->owner = (Object)__48486140;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48482240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48481920;

SignalI abus__w_48481540___48481920___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__w_48481540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48481540___48481920___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48481920;
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

Scope make__48481920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48481920 = scope;
   scope->owner = (Object)__48486140;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48481540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __46906860;

Behavior make__46906860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46906860 = behavior;
   behavior->owner = (Object)__48486140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48789960___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   reg__0_48789960___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   reg__0_48789960___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(reg__0_48789960___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,reg__0_48789960___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
reg__0_48789960___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[reg__0_48789960___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__46358560();

   return behavior;
}

Behavior __46904520;

Behavior make__46904520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46904520 = behavior;
   behavior->owner = (Object)__48486140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_45339560___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58143_45339560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58143_45339560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58143_45339560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58143_45339560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58143_45339560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58143_45339560___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__46906700();

   return behavior;
}

Behavior __46902220;

Behavior make__46902220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46902220 = behavior;
   behavior->owner = (Object)__48486140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48851400___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   reg__1_48851400___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   reg__1_48851400___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(reg__1_48851400___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,reg__1_48851400___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
reg__1_48851400___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[reg__1_48851400___48486140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__46902740();

   return behavior;
}

Behavior __46901140;

Behavior make__46901140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46901140 = behavior;
   behavior->owner = (Object)__48486140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_47068660___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58144_47068660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58144_47068660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58144_47068660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58144_47068660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58144_47068660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58144_47068660___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__46901900();

   return behavior;
}

Scope make__48486140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48486140 = scope;
   scope->owner = (Object)__48350160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48789960();
   scope->inners[1] = makereg__1_48851400();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__48485800();
   scope->scopes[1] = make__48485180();
   scope->scopes[2] = make__48484580();
   scope->scopes[3] = make__48484160();
   scope->scopes[4] = make__48483640();
   scope->scopes[5] = make__48482720();
   scope->scopes[6] = make__48481920();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46906860();
   scope->behaviors[1] = make__46904520();
   scope->behaviors[2] = make__46902220();
   scope->behaviors[3] = make__46901140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __21602920;

SignalI lv0_46667340___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makelv0_46667340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_46667340___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__21602920;
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

SignalI lv1_48307920___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makelv1_48307920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_48307920___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__21602920;
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

SignalI av0_48546160___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeav0_48546160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_48546160___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__21602920;
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

SignalI av1_48941240___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeav1_48941240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_48941240___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__21602920;
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

SignalI rv_49137640___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makerv_49137640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49137640___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__21602920;
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

SignalI lvok0_49137620___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makelvok0_49137620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49137620___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__21602920;
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

SignalI lvok1_49137600___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makelvok1_49137600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49137600___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__21602920;
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

SignalI rvok_49137580___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makervok_49137580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49137580___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__21602920;
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

SignalI run_49137560___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makerun_49137560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49137560___21602920___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__21602920;
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

Behavior __52194300;

Behavior make__52194300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52194300 = behavior;
   behavior->owner = (Object)__21602920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200);
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos += 1;
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos = realloc(clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos*sizeof(Object));
clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos[clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos-1] = (Object)behavior;
   behavior->block = make__49137400();

   return behavior;
}

Scope make__21602920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __21602920 = scope;
   scope->owner = (Object)__48350160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_46667340();
   scope->inners[1] = makelv1_48307920();
   scope->inners[2] = makeav0_48546160();
   scope->inners[3] = makeav1_48941240();
   scope->inners[4] = makerv_49137640();
   scope->inners[5] = makelvok0_49137620();
   scope->inners[6] = makelvok1_49137600();
   scope->inners[7] = makervok_49137580();
   scope->inners[8] = makerun_49137560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52194300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __52194180;

SignalI reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makereg__0_52367780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__52194180;
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

SignalI reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makereg__1_52446880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__52194180;
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

Scope __52193880;

Scope make__52193880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52193880 = scope;
   scope->owner = (Object)__52194180;
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

Scope __52193460;

Scope make__52193460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52193460 = scope;
   scope->owner = (Object)__52194180;
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

Scope __52193040;

Scope make__52193040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52193040 = scope;
   scope->owner = (Object)__52194180;
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

Scope __52192620;

SignalI abus__r_52192240___52192620___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__r_52192240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52192240___52192620___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__52192620;
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

Scope make__52192620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52192620 = scope;
   scope->owner = (Object)__52194180;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52192240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __52192120;

SignalI abus__w_52191740___52192120___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__w_52191740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52191740___52192120___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__52192120;
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

Behavior __47814560;

Behavior make__47814560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47814560 = behavior;
   behavior->owner = (Object)__52192120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_52191740___52192120___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   abus__w_52191740___52192120___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   abus__w_52191740___52192120___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(abus__w_52191740___52192120___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,abus__w_52191740___52192120___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
abus__w_52191740___52192120___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[abus__w_52191740___52192120___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__47816340();

   return behavior;
}

Behavior __47438880;

Behavior make__47438880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47438880 = behavior;
   behavior->owner = (Object)__52192120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58191_51768140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__47813220();

   return behavior;
}

Scope make__52192120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52192120 = scope;
   scope->owner = (Object)__52194180;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52191740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47814560();
   scope->behaviors[1] = make__47438880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __52191360;

SignalI abus__r_52223720___52191360___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__r_52223720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52223720___52191360___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__52191360;
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

Scope make__52191360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52191360 = scope;
   scope->owner = (Object)__52194180;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52223720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __52223600;

SignalI abus__w_52223220___52223600___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__w_52223220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52223220___52223600___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__52223600;
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

Scope make__52223600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52223600 = scope;
   scope->owner = (Object)__52194180;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52223220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47249780;

Behavior make__47249780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47249780 = behavior;
   behavior->owner = (Object)__52194180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__47250380();

   return behavior;
}

Behavior __47248820;

Behavior make__47248820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47248820 = behavior;
   behavior->owner = (Object)__52194180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58174_48280620___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58174_48280620___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58174_48280620___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58174_48280620___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58174_48280620___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58174_48280620___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58174_48280620___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__47249720();

   return behavior;
}

Behavior __47247960;

Behavior make__47247960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47247960 = behavior;
   behavior->owner = (Object)__52194180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__47248360();

   return behavior;
}

Behavior __47246560;

Behavior make__47246560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47246560 = behavior;
   behavior->owner = (Object)__52194180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58175_48449020___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58175_48449020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58175_48449020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58175_48449020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58175_48449020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58175_48449020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58175_48449020___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__47247820();

   return behavior;
}

Behavior __46793160;

Behavior make__46793160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46793160 = behavior;
   behavior->owner = (Object)__52194180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[reg__0_52367780___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__46733500();

   return behavior;
}

Behavior __47033820;

Behavior make__47033820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47033820 = behavior;
   behavior->owner = (Object)__52194180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58189_51684760___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58189_51684760___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58189_51684760___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58189_51684760___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58189_51684760___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58189_51684760___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58189_51684760___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__47037220();

   return behavior;
}

Behavior __47032340;

Behavior make__47032340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47032340 = behavior;
   behavior->owner = (Object)__52194180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[reg__1_52446880___52194180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__47032800();

   return behavior;
}

Behavior __47031320;

Behavior make__47031320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47031320 = behavior;
   behavior->owner = (Object)__52194180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58190_51768220___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58190_51768220___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58190_51768220___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58190_51768220___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58190_51768220___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58190_51768220___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58190_51768220___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__47032260();

   return behavior;
}

Scope make__52194180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52194180 = scope;
   scope->owner = (Object)__48350160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52367780();
   scope->inners[1] = makereg__1_52446880();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__52193880();
   scope->scopes[1] = make__52193460();
   scope->scopes[2] = make__52193040();
   scope->scopes[3] = make__52192620();
   scope->scopes[4] = make__52192120();
   scope->scopes[5] = make__52191360();
   scope->scopes[6] = make__52223600();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47249780();
   scope->behaviors[1] = make__47248820();
   scope->behaviors[2] = make__47247960();
   scope->behaviors[3] = make__47246560();
   scope->behaviors[4] = make__46793160();
   scope->behaviors[5] = make__47033820();
   scope->behaviors[6] = make__47032340();
   scope->behaviors[7] = make__47031320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __42775940;

SignalI reg__0_46389080___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makereg__0_46389080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_46389080___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__42775940;
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

SignalI reg__1_47068680___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makereg__1_47068680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47068680___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__42775940;
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

Scope __42774220;

Scope make__42774220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42774220 = scope;
   scope->owner = (Object)__42775940;
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

Scope __42823960;

Scope make__42823960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42823960 = scope;
   scope->owner = (Object)__42775940;
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

Scope __42842640;

Scope make__42842640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42842640 = scope;
   scope->owner = (Object)__42775940;
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

Scope __42840820;

SignalI abus__r_42837700___42840820___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__r_42837700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_42837700___42840820___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__42840820;
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

Scope make__42840820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42840820 = scope;
   scope->owner = (Object)__42775940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_42837700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __42876220;

SignalI abus__w_42925100___42876220___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__w_42925100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_42925100___42876220___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__42876220;
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

Scope make__42876220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42876220 = scope;
   scope->owner = (Object)__42775940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_42925100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __42921560;

SignalI abus__r_42891180___42921560___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__r_42891180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_42891180___42921560___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__42921560;
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

Scope make__42921560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42921560 = scope;
   scope->owner = (Object)__42775940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_42891180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __42885840;

SignalI abus__w_43045360___42885840___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeabus__w_43045360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_43045360___42885840___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__42885840;
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

Scope make__42885840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42885840 = scope;
   scope->owner = (Object)__42775940;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_43045360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47435200;

Behavior make__47435200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47435200 = behavior;
   behavior->owner = (Object)__42775940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_46389080___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   reg__0_46389080___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   reg__0_46389080___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(reg__0_46389080___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,reg__0_46389080___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
reg__0_46389080___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[reg__0_46389080___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__47435820();

   return behavior;
}

Behavior __47433460;

Behavior make__47433460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47433460 = behavior;
   behavior->owner = (Object)__42775940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58204_48771740___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58204_48771740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58204_48771740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58204_48771740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58204_48771740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58204_48771740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58204_48771740___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__47434980();

   return behavior;
}

Behavior __47432120;

Behavior make__47432120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47432120 = behavior;
   behavior->owner = (Object)__42775940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47068680___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   reg__1_47068680___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   reg__1_47068680___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(reg__1_47068680___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,reg__1_47068680___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
reg__1_47068680___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[reg__1_47068680___42775940___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__47432780();

   return behavior;
}

Behavior __47471640;

Behavior make__47471640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47471640 = behavior;
   behavior->owner = (Object)__42775940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58205_48873180___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   _58205_48873180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   _58205_48873180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(_58205_48873180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,_58205_48873180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
_58205_48873180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[_58205_48873180___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__47432060();

   return behavior;
}

Scope make__42775940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42775940 = scope;
   scope->owner = (Object)__48350160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_46389080();
   scope->inners[1] = makereg__1_47068680();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__42774220();
   scope->scopes[1] = make__42823960();
   scope->scopes[2] = make__42842640();
   scope->scopes[3] = make__42840820();
   scope->scopes[4] = make__42876220();
   scope->scopes[5] = make__42921560();
   scope->scopes[6] = make__42885840();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47435200();
   scope->behaviors[1] = make__47433460();
   scope->behaviors[2] = make__47432120();
   scope->behaviors[3] = make__47471640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __48833660;

SignalI lv0_48958060___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makelv0_48958060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_48958060___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48833660;
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

SignalI lv1_49073080___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makelv1_49073080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_49073080___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48833660;
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

SignalI rv0_49169080___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makerv0_49169080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_49169080___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48833660;
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

SignalI rv1_49342880___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makerv1_49342880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_49342880___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48833660;
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

SignalI lvok0_49342860___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makelvok0_49342860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49342860___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48833660;
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

SignalI lvok1_49342840___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makelvok1_49342840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49342840___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48833660;
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

SignalI rvok0_49342820___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makervok0_49342820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49342820___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48833660;
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

SignalI rvok1_49342800___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makervok1_49342800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_49342800___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48833660;
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

SignalI run_49342780___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makerun_49342780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49342780___48833660___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__48833660;
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

Behavior __53088980;

Behavior make__53088980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53088980 = behavior;
   behavior->owner = (Object)__48833660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200);
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos += 1;
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos = realloc(clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos*sizeof(Object));
clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos[clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos-1] = (Object)behavior;
   behavior->block = make__49342660();

   return behavior;
}

Scope make__48833660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48833660 = scope;
   scope->owner = (Object)__48350160;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_48958060();
   scope->inners[1] = makelv1_49073080();
   scope->inners[2] = makerv0_49169080();
   scope->inners[3] = makerv1_49342880();
   scope->inners[4] = makelvok0_49342860();
   scope->inners[5] = makelvok1_49342840();
   scope->inners[6] = makervok0_49342820();
   scope->inners[7] = makervok1_49342800();
   scope->inners[8] = makerun_49342780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53088980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52874480;

Behavior make__52874480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52874480 = behavior;
   behavior->owner = (Object)__48350160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200);
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos += 1;
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos = realloc(clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos*sizeof(Object));
clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos[clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos-1] = (Object)behavior;
   behavior->block = make__52001140();

   return behavior;
}

Behavior __48702660;

Behavior make__48702660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48702660 = behavior;
   behavior->owner = (Object)__48350160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200);
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos += 1;
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos = realloc(clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos*sizeof(Object));
clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos[clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos-1] = (Object)behavior;
   behavior->block = make__52874340();

   return behavior;
}

Behavior __52141200;

Behavior make__52141200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52141200 = behavior;
   behavior->owner = (Object)__48350160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200);
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos += 1;
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos = realloc(clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos*sizeof(Object));
clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos[clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos-1] = (Object)behavior;
   behavior->block = make__48702220();

   return behavior;
}

Behavior __52139200;

Behavior make__52139200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52139200 = behavior;
   behavior->owner = (Object)__48350160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200);
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos += 1;
   clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos = realloc(clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos,clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos*sizeof(Object));
clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->pos[clk_52135060_layer0_58_840_52138560___48385240______58_840_52937200->num_pos-1] = (Object)behavior;
   behavior->block = make__52141080();

   return behavior;
}

Behavior __53273560;

Behavior make__53273560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53273560 = behavior;
   behavior->owner = (Object)__48350160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__53273960();

   return behavior;
}

Behavior __53273020;

Behavior make__53273020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53273020 = behavior;
   behavior->owner = (Object)__48350160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,value__z0_48993960___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   value__z0_48993960___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   value__z0_48993960___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(value__z0_48993960___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,value__z0_48993960___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
value__z0_48993960___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[value__z0_48993960___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,value__z1_49126820___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   value__z1_49126820___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   value__z1_49126820___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(value__z1_49126820___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,value__z1_49126820___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
value__z1_49126820___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[value__z1_49126820___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__a00_51318140___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   ack__a00_51318140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   ack__a00_51318140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(ack__a00_51318140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,ack__a00_51318140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
ack__a00_51318140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[ack__a00_51318140___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__a01_51318120___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   ack__a01_51318120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   ack__a01_51318120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(ack__a01_51318120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,ack__a01_51318120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
ack__a01_51318120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[ack__a01_51318120___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53277520();

   return behavior;
}

Behavior __41946760;

Behavior make__41946760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __41946760 = behavior;
   behavior->owner = (Object)__48350160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_52989820_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   a_52989820_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   a_52989820_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(a_52989820_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,a_52989820_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
a_52989820_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[a_52989820_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_47157820_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   a_47157820_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   a_47157820_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(a_47157820_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,a_47157820_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
a_47157820_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[a_47157820_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__53277360();

   return behavior;
}

Scope make__48350160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48350160 = scope;
   scope->owner = (Object)layer0_58_840_52138560;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makefunc0_52989660();
   scope->systemIs[1] = makefunc1_47157400();
   scope->num_inners = 32;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__mac_53088840();
   scope->inners[1] = makeack__add_53088820();
   scope->inners[2] = make_5897_53199120();
   scope->inners[3] = make_5895_53199100();
   scope->inners[4] = make_5896_53199020();
   scope->inners[5] = make_58126_42675560();
   scope->inners[6] = make_58124_42729320();
   scope->inners[7] = make_58125_42729000();
   scope->inners[8] = make_58143_45339560();
   scope->inners[9] = make_58144_47068660();
   scope->inners[10] = make_58174_48280620();
   scope->inners[11] = make_58175_48449020();
   scope->inners[12] = make_58204_48771740();
   scope->inners[13] = make_58205_48873180();
   scope->inners[14] = makevalue__z0_48993960();
   scope->inners[15] = makevalue__z1_49126820();
   scope->inners[16] = makevalue__a00_49255520();
   scope->inners[17] = makevalue__a01_51318200();
   scope->inners[18] = makeflag__z0_51318180();
   scope->inners[19] = makeflag__z1_51318160();
   scope->inners[20] = makeack__a00_51318140();
   scope->inners[21] = makeack__a01_51318120();
   scope->inners[22] = make_5899_51318100();
   scope->inners[23] = make_58100_51318020();
   scope->inners[24] = make_58101_51492160();
   scope->inners[25] = make_58128_51492140();
   scope->inners[26] = make_58129_51492060();
   scope->inners[27] = make_58130_51641660();
   scope->inners[28] = make_58189_51684760();
   scope->inners[29] = make_58190_51768220();
   scope->inners[30] = make_58191_51768140();
   scope->inners[31] = makeval_51885100();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__48349740();
   scope->scopes[1] = make__48369060();
   scope->scopes[2] = make__48486140();
   scope->scopes[3] = make__21602920();
   scope->scopes[4] = make__52194180();
   scope->scopes[5] = make__42775940();
   scope->scopes[6] = make__48833660();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52874480();
   scope->behaviors[1] = make__48702660();
   scope->behaviors[2] = make__52141200();
   scope->behaviors[3] = make__52139200();
   scope->behaviors[4] = make__53273560();
   scope->behaviors[5] = make__53273020();
   scope->behaviors[6] = make__41946760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_52138560() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_52138560 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_52135060();
   systemT->inputs[1] = makerst_52135040();
   systemT->inputs[2] = makereq_52135020();
   systemT->inputs[3] = makefill_52135000();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__0_52134940();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__48350160();

   return systemT;
}