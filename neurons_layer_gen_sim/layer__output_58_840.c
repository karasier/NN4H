#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer__output_58_840_61018740;

SignalI clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeclk_61016700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_840_61018740;
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

SignalI rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makerst_61016680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_840_61018740;
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

SignalI fill_61016660_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makefill_61016660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_61016660_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_840_61018740;
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

SignalI req_61016640_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makereq_61016640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_61016640_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_840_61018740;
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

SignalI _5843_61100160_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_5843_61100160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_61100160_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_840_61018740;
   signalI->name = ":43";
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

SignalI _5844_44927860_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_5844_44927860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_44927860_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_840_61018740;
   signalI->name = ":44";
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

SignalI ack__1_44927700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeack__1_44927700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_44927700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_840_61018740;
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

SignalI _5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_5845_44926280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_840_61018740;
   signalI->name = ":45";
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

SignalI _5862_47651080_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_5862_47651080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_47651080_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_840_61018740;
   signalI->name = ":62";
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

Block __60063180;

Block __60062580;

Block __60062360;

void code__60062360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58333_59555520_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,value__z0_59683800_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53285720(),flag__z0_59877580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__60062360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60062360 = block;
   block->owner = (Object)__60062580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60062360;

   return block;
};

void code__60062580() {
 code__60062360();
}

Block make__60062580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60062580 = block;
   block->owner = (Object)__60063180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60062580;

   return block;
};

Block __60063020;

void code__60063020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53285580(),flag__z0_59877580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__60063020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60063020 = block;
   block->owner = (Object)__60063180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60063020;

   return block;
};

void code__60063180() {
   {
      Value cond = ack__add_59042560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60062580();
   }
   else {
  code__60063020();
   }
      }
   }
}

Block make__60063180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60063180 = block;
   block->owner = (Object)__60282500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60063180;

   return block;
};

Block __60282360;

Block __60282100;

Block __60281940;

void code__60281940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a10_59877600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,_5862_47651080_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53285260(),ack__a10_59877560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__60281940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60281940 = block;
   block->owner = (Object)__60282100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60281940;

   return block;
};

void code__60282100() {
 code__60281940();
}

Block make__60282100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60282100 = block;
   block->owner = (Object)__60282360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60282100;

   return block;
};

void code__60282360() {
   {
      Value cond = flag__z0_59877580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60282100();
   }
      }
   }
}

Block make__60282360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60282360 = block;
   block->owner = (Object)__60604620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60282360;

   return block;
};

Block __60604500;

Block __60661660;

Block __60661340;

void code__60661340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53284980(),_58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__60661340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60661340 = block;
   block->owner = (Object)__60661660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60661340;

   return block;
};

void code__60661660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53285100();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60661340();
   }
      }
   }
}

Block make__60661660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60661660 = block;
   block->owner = (Object)__60604500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60661660;

   return block;
};

Block __60660740;

Block __60660360;

void code__60660360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53284760(),_58269_59877460_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__60660360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60660360 = block;
   block->owner = (Object)__60660740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60660360;

   return block;
};

void code__60660740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53284880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60660360();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53284500(),_58268_59877540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__60660740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60660740 = block;
   block->owner = (Object)__60604500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60660740;

   return block;
};

Block __60659680;

Block __60659520;

Block __60659200;

void code__60659200() {
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
                  src0 = _58269_59877460_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53283540();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58269_59877460_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53283360(),_58268_59877540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53283060(),_58270_60030260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__60659200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60659200 = block;
   block->owner = (Object)__60659520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60659200;

   return block;
};

void code__60659520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53284080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60659200();
   }
      }
   }
}

Block make__60659520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60659520 = block;
   block->owner = (Object)__60659680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60659520;

   return block;
};

Block __60904320;

Block __60904000;

Block __60903400;

void code__60903400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53282500(),_58321_60076640_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__60903400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60903400 = block;
   block->owner = (Object)__60904000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60903400;

   return block;
};

void code__60904000() {
{
      Value value = _58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__53282600())) {
    code__60903400();
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
                  src0 = _58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53281880();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__60904000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60904000 = block;
   block->owner = (Object)__60904320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60904000;

   return block;
};

void code__60904320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53282900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60904000();
   }
      }
   }
}

Block make__60904320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60904320 = block;
   block->owner = (Object)__60659680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60904320;

   return block;
};

void code__60659680() {
 code__60659520();
 code__60904320();
}

Block make__60659680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60659680 = block;
   block->owner = (Object)__60604500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60659680;

   return block;
};

void code__60604500() {
 code__60661660();
 code__60660740();
   {
      Value cond = fill_61016660_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60659680();
   }
      }
   }
}

Block make__60604500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60604500 = block;
   block->owner = (Object)__61019060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60604500;

   return block;
};

Block __52850720;

void code__52850720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_61016640_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_59042580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_59042620_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52850720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52850720 = block;
   block->owner = (Object)__52850380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52850720;

   return block;
};

Block __52851240;

void code__52851240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_59042600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,ack_60094040_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,rst_60094020_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_59683800_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,z__value_59294100_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a10_59877560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,ack__1_44927700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52851240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52851240 = block;
   block->owner = (Object)__52879520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52851240;

   return block;
};

Block __52851120;

void code__52851120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_60093980_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,ack__mac_59042580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_59410260_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,value__a10_59877600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52851120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52851120 = block;
   block->owner = (Object)__52903460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52851120;

   return block;
};

Block __53094180;

Block __47697080;

void code__47697080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_52028960_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,make_ref_rangeS(mem_52238220_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160,value2integer(abus__w_52028680_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value),value2integer(abus__w_52028680_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47697080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47697080 = block;
   block->owner = (Object)__53094180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47697080;

   return block;
};

void code__53094180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_52238220_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
            idx = value2integer(abus__r_52028760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51768120_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_51608760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47697080();
   }
      }
   }
}

Block make__53094180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53094180 = block;
   block->owner = (Object)__51503320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53094180;

   return block;
};

Block __52900440;

void code__52900440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51768120_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,_58266_59244560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52900440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52900440 = block;
   block->owner = (Object)__52900220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52900440;

   return block;
};

Block __52900180;

void code__52900180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_59244560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,dbus__r_51768120_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52900180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52900180 = block;
   block->owner = (Object)__52899940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52900180;

   return block;
};

Block __52899380;

void code__52899380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_51608820_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,_58264_59277260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52899380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52899380 = block;
   block->owner = (Object)__52899020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52899380;

   return block;
};

Block __52898900;

void code__52898900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58264_59277260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,trig__r_51608820_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52898900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52898900 = block;
   block->owner = (Object)__52898320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52898900;

   return block;
};

Block __52897580;

void code__52897580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_52028760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,_58265_59277180_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52897580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52897580 = block;
   block->owner = (Object)__52897360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52897580;

   return block;
};

Block __52897300;

void code__52897300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58265_59277180_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,abus__r_52028760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52897300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52897300 = block;
   block->owner = (Object)__52897060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52897300;

   return block;
};

Block __52896300;

void code__52896300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_51608760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,_58268_59877540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52896300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52896300 = block;
   block->owner = (Object)__52944460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52896300;

   return block;
};

Block __52944380;

void code__52944380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_59877540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,trig__w_51608760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52944380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52944380 = block;
   block->owner = (Object)__52944120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52944380;

   return block;
};

Block __52943700;

void code__52943700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_52028680_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,_58269_59877460_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52943700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52943700 = block;
   block->owner = (Object)__52943380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52943700;

   return block;
};

Block __52943260;

void code__52943260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_59877460_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,abus__w_52028680_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52943260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52943260 = block;
   block->owner = (Object)__52943000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52943260;

   return block;
};

Block __52942220;

void code__52942220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_52028960_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,_58270_60030260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52942220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52942220 = block;
   block->owner = (Object)__52941900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52942220;

   return block;
};

Block __52941740;

void code__52941740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_60030260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,dbus__w_52028960_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52941740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52941740 = block;
   block->owner = (Object)__52941440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52941740;

   return block;
};

Block __52937220;

void code__52937220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52071560_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,_58283_59348140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52937220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52937220 = block;
   block->owner = (Object)__52936740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52937220;

   return block;
};

Block __52961180;

void code__52961180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_59348140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,reg__0_52071560_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52961180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52961180 = block;
   block->owner = (Object)__52960560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52961180;

   return block;
};

Block __49180100;

Block __49179120;

Block __49176800;

void code__49176800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53202920(),_58265_59277180_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49176800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49176800 = block;
   block->owner = (Object)__49179120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49176800;

   return block;
};

void code__49179120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53203180();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49176800();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53202840(),_58264_59277260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49179120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49179120 = block;
   block->owner = (Object)__49180100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49179120;

   return block;
};

Block __49118180;

Block __49113800;

void code__49113800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53202500(),_5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49113800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49113800 = block;
   block->owner = (Object)__49118180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49113800;

   return block;
};

void code__49118180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53202600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49113800();
   }
      }
   }
}

Block make__49118180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49118180 = block;
   block->owner = (Object)__49180100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49118180;

   return block;
};

Block __51406080;

Block __51405540;

Block __51405100;

Block __51379540;

void code__51379540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_61100160_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,rv_49180380_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51379540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51379540 = block;
   block->owner = (Object)__51405100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51379540;

   return block;
};

Block __52237960;

void code__52237960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_44927860_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,rv_49180380_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52237960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52237960 = block;
   block->owner = (Object)__51405100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52237960;

   return block;
};

void code__51405100() {
{
      Value value = _5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__53201300())) {
    code__51379540();
         }
         else if (value2integer(value) == value2integer(make__53200820())) {
    code__52237960();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53200400(),rvok_49180280_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
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
                  src0 = _5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53200180();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51405100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51405100 = block;
   block->owner = (Object)__51405540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51405100;

   return block;
};

void code__51405540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53201900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51405100();
   }
      }
   }
}

Block make__51405540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51405540 = block;
   block->owner = (Object)__51406080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51405540;

   return block;
};

Block __53376140;

Block __53375640;

Block __53374780;

void code__53374780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_59244560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,lv0_53416760_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53199660(),lvok0_49180300_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__53374780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53374780 = block;
   block->owner = (Object)__53375640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53374780;

   return block;
};

void code__53375640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58264_59277260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53199820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53374780();
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
                  src0 = _58265_59277180_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53199400();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58265_59277180_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53199280(),_58264_59277260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__53375640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53375640 = block;
   block->owner = (Object)__53376140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53375640;

   return block;
};

void code__53376140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53199980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53375640();
   }
      }
   }
}

Block make__53376140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53376140 = block;
   block->owner = (Object)__51406080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53376140;

   return block;
};

Block __47549300;

Block __47548060;

Block __47547580;

void code__47547580() {
}

Block make__47547580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47547580 = block;
   block->owner = (Object)__47548060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47547580;

   return block;
};

Block __51919600;

void code__51919600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_47685500_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,_58283_59348140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51919600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51919600 = block;
   block->owner = (Object)__47548060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51919600;

   return block;
};

void code__47548060() {
 code__47547580();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_47685500_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
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
                              src0 = lv0_53416760_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49180380_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53255180();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_47685500_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
 code__51919600();
}

Block make__47548060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47548060 = block;
   block->owner = (Object)__47549300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47548060;

   return block;
};

void code__47549300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53256080(),ack_59042600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53256020(),run_49180260_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
 code__47548060();
}

Block make__47549300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47549300 = block;
   block->owner = (Object)__51406080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47549300;

   return block;
};

void code__51406080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53202040(),run_49180260_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
 code__51405540();
 code__53376140();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49180300_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
         src1 = rvok_49180280_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47549300();
   }
      }
   }
}

Block make__51406080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51406080 = block;
   block->owner = (Object)__49180100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51406080;

   return block;
};

Block __49081860;

void code__49081860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53254920(),rvok_49180280_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53254780(),lvok0_49180300_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53254560(),av0_47685500_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49081860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49081860 = block;
   block->owner = (Object)__49180100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49081860;

   return block;
};

void code__49180100() {
 code__49179120();
 code__49118180();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53202420(),ack_59042600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53202260(),run_49180260_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_59042620_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
         src1 = run_49180260_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51406080();
   }
   else {
  code__49081860();
   }
      }
   }
}

Block make__49180100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49180100 = block;
   block->owner = (Object)__52388780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49180100;

   return block;
};

Block __52956620;

void code__52956620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,_58310_59410880_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52956620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52956620 = block;
   block->owner = (Object)__52956320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52956620;

   return block;
};

Block __52956240;

void code__52956240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58310_59410880_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52956240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52956240 = block;
   block->owner = (Object)__52955780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52956240;

   return block;
};

Block __52954960;

void code__52954960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,_58321_60076640_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52954960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52954960 = block;
   block->owner = (Object)__52954620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52954960;

   return block;
};

Block __52954580;

void code__52954580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58321_60076640_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52954580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52954580 = block;
   block->owner = (Object)__52954260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52954580;

   return block;
};

Block __52974580;

void code__52974580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_52538220_winc_58320_52538960_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,_58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52974580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52974580 = block;
   block->owner = (Object)__52974320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52974580;

   return block;
};

Block __52974260;

void code__52974260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,abus__w_52538220_winc_58320_52538960_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52974260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52974260 = block;
   block->owner = (Object)__52974040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52974260;

   return block;
};

Block __52970020;

void code__52970020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50388860_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,_58333_59555520_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52970020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52970020 = block;
   block->owner = (Object)__52969720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52970020;

   return block;
};

Block __52969680;

void code__52969680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58333_59555520_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,reg__0_50388860_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52969680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52969680 = block;
   block->owner = (Object)__53002080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52969680;

   return block;
};

Block __58208540;

Block __58207440;

Block __58207120;

void code__58207120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_59348140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,lv0_58137780_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53250040(),lvok0_58208700_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__58207120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58207120 = block;
   block->owner = (Object)__58207440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58207120;

   return block;
};

Block __58512380;

void code__58512380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58310_59410880_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,rv0_58208720_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53249600(),rvok0_58208680_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__58512380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58512380 = block;
   block->owner = (Object)__58207440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58512380;

   return block;
};

Block __58694640;

Block __58694160;

void code__58694160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_58137780_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
      src1 = rv0_58208720_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58333_59555520_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__58694160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58694160 = block;
   block->owner = (Object)__58694640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58694160;

   return block;
};

void code__58694640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53249240(),run_58208660_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53249120(),ack__add_59042560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
 code__58694160();
}

Block make__58694640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58694640 = block;
   block->owner = (Object)__58207440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58694640;

   return block;
};

void code__58207440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53250420(),run_58208660_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
 code__58207120();
 code__58512380();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_58208700_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
         src1 = rvok0_58208680_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58694640();
   }
      }
   }
}

Block make__58207440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58207440 = block;
   block->owner = (Object)__58208540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58207440;

   return block;
};

Block __58208060;

void code__58208060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53248360(),lvok0_58208700_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53288740(),rvok0_58208680_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__58208060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58208060 = block;
   block->owner = (Object)__58208540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58208060;

   return block;
};

void code__58208540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53250740(),ack__add_59042560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53250660(),run_58208660_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_59042580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
         src1 = run_58208660_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58207440();
   }
   else {
  code__58208060();
   }
      }
   }
}

Block make__58208540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58208540 = block;
   block->owner = (Object)__59042760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58208540;

   return block;
};

Value make__53203180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53202920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53202840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53202600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53202500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53202420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53202260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53202040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53201900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53201300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53200820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53200400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53200180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53199980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53199820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53199660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53199400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53199280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53256080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53256020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53255180() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53254920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53254780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53254560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53250740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53250660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53250420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53250040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53249600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53249240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53249120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53248360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53288740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53285720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53285580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53285260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53285100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53284980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__53284880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53284760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53284500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53284080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53283540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53283360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53283060() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53282900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53282600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__53282500() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53281880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer__output_58_84_51524880;

SignalI req__mac_59042620_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makereq__mac_59042620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_59042620_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
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

SignalI ack_59042600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeack_59042600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_59042600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
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

SignalI ack__mac_59042580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeack__mac_59042580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_59042580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
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

SignalI ack__add_59042560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeack__add_59042560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_59042560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
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

SignalI _58266_59244560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_58266_59244560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_59244560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
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

SignalI _58264_59277260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_58264_59277260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58264_59277260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
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

SignalI _58265_59277180_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_58265_59277180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58265_59277180_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
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

SignalI _58283_59348140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_58283_59348140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_59348140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
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

SignalI _58310_59410880_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_58310_59410880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58310_59410880_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
   signalI->name = ":310";
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

SignalI _58333_59555520_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_58333_59555520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58333_59555520_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
   signalI->name = ":333";
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

SignalI value__z0_59683800_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makevalue__z0_59683800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_59683800_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
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

SignalI value__a10_59877600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makevalue__a10_59877600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a10_59877600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
   signalI->name = "value_a10";
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

SignalI flag__z0_59877580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeflag__z0_59877580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_59877580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
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

SignalI ack__a10_59877560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeack__a10_59877560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a10_59877560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
   signalI->name = "ack_a10";
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

SignalI _58268_59877540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_58268_59877540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_59877540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
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

SignalI _58269_59877460_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_58269_59877460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_59877460_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
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

SignalI _58270_60030260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_58270_60030260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_60030260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
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

SignalI _58321_60076640_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_58321_60076640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58321_60076640_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
   signalI->name = ":321";
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

SignalI _58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI make_58322_60076560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__output_58_84_51524880;
   signalI->name = ":322";
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

SystemI counter1_60093840;

SystemI makecounter1_60093840() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter1_60093840 = systemI;
   systemI->owner = (Object)layer__output_58_84_51524880;
   systemI->name = "counter1";
   systemI->system = counter1_58_840_60095900;

   return systemI;
};

SystemI func10_59410120;

SystemI makefunc10_59410120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func10_59410120 = systemI;
   systemI->owner = (Object)layer__output_58_84_51524880;
   systemI->name = "func10";
   systemI->system = func10_58_840_59228360;

   return systemI;
};

Scope channel__w0_58252_51524540;

SignalI trig__r_51608820_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI maketrig__r_51608820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_51608820_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w0_58252_51524540;
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

SignalI trig__w_51608760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI maketrig__w_51608760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_51608760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w0_58252_51524540;
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

SignalI dbus__r_51768120_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makedbus__r_51768120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51768120_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w0_58252_51524540;
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

SignalI dbus__w_52028960_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makedbus__w_52028960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_52028960_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w0_58252_51524540;
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

SignalI abus__r_52028760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeabus__r_52028760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52028760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w0_58252_51524540;
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

SignalI abus__w_52028680_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeabus__w_52028680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52028680_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w0_58252_51524540;
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

SignalI mem_52238220_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makemem_52238220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_52238220_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w0_58252_51524540;
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

Scope raddr_58253_51524100;

Scope makeraddr_58253_51524100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58253_51524100 = scope;
   scope->owner = (Object)channel__w0_58252_51524540;
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

Scope waddr_58258_51522800;

Scope makewaddr_58258_51522800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58258_51522800 = scope;
   scope->owner = (Object)channel__w0_58252_51524540;
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

Scope rinc_58263_51522160;

Scope makerinc_58263_51522160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58263_51522160 = scope;
   scope->owner = (Object)channel__w0_58252_51524540;
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

Scope winc_58267_51521320;

Scope makewinc_58267_51521320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58267_51521320 = scope;
   scope->owner = (Object)channel__w0_58252_51524540;
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

Scope rdec_58271_51520760;

Scope makerdec_58271_51520760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58271_51520760 = scope;
   scope->owner = (Object)channel__w0_58252_51524540;
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

Scope wdec_58276_51520160;

Scope makewdec_58276_51520160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58276_51520160 = scope;
   scope->owner = (Object)channel__w0_58252_51524540;
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

Behavior __51503320;

Behavior make__51503320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51503320 = behavior;
   behavior->owner = (Object)channel__w0_58252_51524540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_neg += 1;
   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->neg = realloc(clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->neg,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_neg*sizeof(Object));
clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->neg[clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_neg-1] = (Object)behavior;
   behavior->block = make__53094180();

   return behavior;
}

Behavior __52900220;

Behavior make__52900220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52900220 = behavior;
   behavior->owner = (Object)channel__w0_58252_51524540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51768120_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   dbus__r_51768120_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   dbus__r_51768120_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(dbus__r_51768120_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,dbus__r_51768120_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
dbus__r_51768120_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[dbus__r_51768120_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52900440();

   return behavior;
}

Behavior __52899940;

Behavior make__52899940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52899940 = behavior;
   behavior->owner = (Object)channel__w0_58252_51524540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_59244560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   _58266_59244560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   _58266_59244560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(_58266_59244560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,_58266_59244560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58266_59244560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[_58266_59244560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52900180();

   return behavior;
}

Behavior __52899020;

Behavior make__52899020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52899020 = behavior;
   behavior->owner = (Object)channel__w0_58252_51524540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_51608820_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   trig__r_51608820_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   trig__r_51608820_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(trig__r_51608820_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,trig__r_51608820_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
trig__r_51608820_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[trig__r_51608820_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52899380();

   return behavior;
}

Behavior __52898320;

Behavior make__52898320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52898320 = behavior;
   behavior->owner = (Object)channel__w0_58252_51524540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58264_59277260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   _58264_59277260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   _58264_59277260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(_58264_59277260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,_58264_59277260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58264_59277260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[_58264_59277260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52898900();

   return behavior;
}

Behavior __52897360;

Behavior make__52897360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52897360 = behavior;
   behavior->owner = (Object)channel__w0_58252_51524540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_52028760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   abus__r_52028760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   abus__r_52028760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(abus__r_52028760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,abus__r_52028760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
abus__r_52028760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[abus__r_52028760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52897580();

   return behavior;
}

Behavior __52897060;

Behavior make__52897060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52897060 = behavior;
   behavior->owner = (Object)channel__w0_58252_51524540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58265_59277180_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   _58265_59277180_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   _58265_59277180_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(_58265_59277180_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,_58265_59277180_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58265_59277180_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[_58265_59277180_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52897300();

   return behavior;
}

Behavior __52944460;

Behavior make__52944460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52944460 = behavior;
   behavior->owner = (Object)channel__w0_58252_51524540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_51608760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   trig__w_51608760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   trig__w_51608760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(trig__w_51608760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,trig__w_51608760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
trig__w_51608760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[trig__w_51608760_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52896300();

   return behavior;
}

Behavior __52944120;

Behavior make__52944120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52944120 = behavior;
   behavior->owner = (Object)channel__w0_58252_51524540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_59877540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   _58268_59877540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   _58268_59877540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(_58268_59877540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,_58268_59877540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58268_59877540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[_58268_59877540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52944380();

   return behavior;
}

Behavior __52943380;

Behavior make__52943380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52943380 = behavior;
   behavior->owner = (Object)channel__w0_58252_51524540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_52028680_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   abus__w_52028680_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   abus__w_52028680_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(abus__w_52028680_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,abus__w_52028680_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
abus__w_52028680_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[abus__w_52028680_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52943700();

   return behavior;
}

Behavior __52943000;

Behavior make__52943000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52943000 = behavior;
   behavior->owner = (Object)channel__w0_58252_51524540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_59877460_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   _58269_59877460_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   _58269_59877460_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(_58269_59877460_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,_58269_59877460_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58269_59877460_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[_58269_59877460_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52943260();

   return behavior;
}

Behavior __52941900;

Behavior make__52941900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52941900 = behavior;
   behavior->owner = (Object)channel__w0_58252_51524540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_52028960_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   dbus__w_52028960_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   dbus__w_52028960_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(dbus__w_52028960_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,dbus__w_52028960_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
dbus__w_52028960_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[dbus__w_52028960_channel__w0_58252_51524540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52942220();

   return behavior;
}

Behavior __52941440;

Behavior make__52941440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52941440 = behavior;
   behavior->owner = (Object)channel__w0_58252_51524540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_60030260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   _58270_60030260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   _58270_60030260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(_58270_60030260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,_58270_60030260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58270_60030260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[_58270_60030260_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52941740();

   return behavior;
}

Scope makechannel__w0_58252_51524540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58252_51524540 = scope;
   scope->owner = (Object)layer__output_58_84_51524880;
   scope->name = "channel_w0:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_51608820();
   scope->inners[1] = maketrig__w_51608760();
   scope->inners[2] = makedbus__r_51768120();
   scope->inners[3] = makedbus__w_52028960();
   scope->inners[4] = makeabus__r_52028760();
   scope->inners[5] = makeabus__w_52028680();
   scope->inners[6] = makemem_52238220();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58253_51524100();
   scope->scopes[1] = makewaddr_58258_51522800();
   scope->scopes[2] = makerinc_58263_51522160();
   scope->scopes[3] = makewinc_58267_51521320();
   scope->scopes[4] = makerdec_58271_51520760();
   scope->scopes[5] = makewdec_58276_51520160();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51503320();
   scope->behaviors[1] = make__52900220();
   scope->behaviors[2] = make__52899940();
   scope->behaviors[3] = make__52899020();
   scope->behaviors[4] = make__52898320();
   scope->behaviors[5] = make__52897360();
   scope->behaviors[6] = make__52897060();
   scope->behaviors[7] = make__52944460();
   scope->behaviors[8] = make__52944120();
   scope->behaviors[9] = make__52943380();
   scope->behaviors[10] = make__52943000();
   scope->behaviors[11] = make__52941900();
   scope->behaviors[12] = make__52941440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58281_51503140;

SignalI reg__0_52071560_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makereg__0_52071560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52071560_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__accum_58281_51503140;
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

Scope anum_58282_51608440;

Scope makeanum_58282_51608440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_51608440 = scope;
   scope->owner = (Object)channel__accum_58281_51503140;
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

Scope raddr_58284_51607940;

Scope makeraddr_58284_51607940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58284_51607940 = scope;
   scope->owner = (Object)channel__accum_58281_51503140;
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

Scope waddr_58287_51607280;

Scope makewaddr_58287_51607280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58287_51607280 = scope;
   scope->owner = (Object)channel__accum_58281_51503140;
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

Scope rinc_58290_51606540;

SignalI abus__r_51605580_rinc_58290_51606540_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeabus__r_51605580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51605580_rinc_58290_51606540_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rinc_58290_51606540;
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

Scope makerinc_58290_51606540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58290_51606540 = scope;
   scope->owner = (Object)channel__accum_58281_51503140;
   scope->name = "rinc:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51605580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58294_51605220;

SignalI abus__w_51604520_winc_58294_51605220_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeabus__w_51604520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51604520_winc_58294_51605220_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)winc_58294_51605220;
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

Scope makewinc_58294_51605220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58294_51605220 = scope;
   scope->owner = (Object)channel__accum_58281_51503140;
   scope->name = "winc:294";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51604520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58298_51604400;

SignalI abus__r_51603860_rdec_58298_51604400_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeabus__r_51603860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51603860_rdec_58298_51604400_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rdec_58298_51604400;
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

Scope makerdec_58298_51604400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58298_51604400 = scope;
   scope->owner = (Object)channel__accum_58281_51503140;
   scope->name = "rdec:298";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51603860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58302_51603680;

SignalI abus__w_51602740_wdec_58302_51603680_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeabus__w_51602740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51602740_wdec_58302_51603680_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)wdec_58302_51603680;
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

Scope makewdec_58302_51603680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58302_51603680 = scope;
   scope->owner = (Object)channel__accum_58281_51503140;
   scope->name = "wdec:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51602740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52936740;

Behavior make__52936740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52936740 = behavior;
   behavior->owner = (Object)channel__accum_58281_51503140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52071560_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   reg__0_52071560_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   reg__0_52071560_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(reg__0_52071560_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,reg__0_52071560_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__0_52071560_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[reg__0_52071560_channel__accum_58281_51503140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52937220();

   return behavior;
}

Behavior __52960560;

Behavior make__52960560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52960560 = behavior;
   behavior->owner = (Object)channel__accum_58281_51503140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_59348140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   _58283_59348140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   _58283_59348140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(_58283_59348140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,_58283_59348140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58283_59348140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[_58283_59348140_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52961180();

   return behavior;
}

Scope makechannel__accum_58281_51503140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58281_51503140 = scope;
   scope->owner = (Object)layer__output_58_84_51524880;
   scope->name = "channel_accum:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52071560();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_51608440();
   scope->scopes[1] = makeraddr_58284_51607940();
   scope->scopes[2] = makewaddr_58287_51607280();
   scope->scopes[3] = makerinc_58290_51606540();
   scope->scopes[4] = makewinc_58294_51605220();
   scope->scopes[5] = makerdec_58298_51604400();
   scope->scopes[6] = makewdec_58302_51603680();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52936740();
   scope->behaviors[1] = make__52960560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58306_52996040;

SignalI lv0_53416760_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makelv0_53416760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_53416760_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58306_52996040;
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

SignalI av0_47685500_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeav0_47685500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_47685500_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58306_52996040;
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

SignalI rv_49180380_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makerv_49180380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49180380_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58306_52996040;
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

SignalI lvok0_49180300_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makelvok0_49180300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49180300_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58306_52996040;
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

SignalI rvok_49180280_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makervok_49180280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49180280_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58306_52996040;
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

SignalI run_49180260_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makerun_49180260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49180260_mac__n1_58306_52996040_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58306_52996040;
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

Behavior __52388780;

Behavior make__52388780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52388780 = behavior;
   behavior->owner = (Object)mac__n1_58306_52996040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos += 1;
   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos = realloc(clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos*sizeof(Object));
clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos[clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos-1] = (Object)behavior;
   behavior->block = make__49180100();

   return behavior;
}

Scope makemac__n1_58306_52996040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58306_52996040 = scope;
   scope->owner = (Object)layer__output_58_84_51524880;
   scope->name = "mac_n1:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_53416760();
   scope->inners[1] = makeav0_47685500();
   scope->inners[2] = makerv_49180380();
   scope->inners[3] = makelvok0_49180300();
   scope->inners[4] = makervok_49180280();
   scope->inners[5] = makerun_49180260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52388780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58308_52388340;

SignalI reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makereg__0_52786060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__bias_58308_52388340;
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

Scope anum_58309_52542640;

Scope makeanum_58309_52542640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58309_52542640 = scope;
   scope->owner = (Object)channel__bias_58308_52388340;
   scope->name = "anum:309";
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

Scope raddr_58311_52541740;

Scope makeraddr_58311_52541740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58311_52541740 = scope;
   scope->owner = (Object)channel__bias_58308_52388340;
   scope->name = "raddr:311";
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

Scope waddr_58314_52540980;

Scope makewaddr_58314_52540980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58314_52540980 = scope;
   scope->owner = (Object)channel__bias_58308_52388340;
   scope->name = "waddr:314";
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

Scope rinc_58317_52540340;

SignalI abus__r_52539120_rinc_58317_52540340_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeabus__r_52539120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52539120_rinc_58317_52540340_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rinc_58317_52540340;
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

Scope makerinc_58317_52540340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58317_52540340 = scope;
   scope->owner = (Object)channel__bias_58308_52388340;
   scope->name = "rinc:317";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52539120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58320_52538960;

SignalI abus__w_52538220_winc_58320_52538960_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeabus__w_52538220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52538220_winc_58320_52538960_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)winc_58320_52538960;
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

Behavior __52974320;

Behavior make__52974320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52974320 = behavior;
   behavior->owner = (Object)winc_58320_52538960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_52538220_winc_58320_52538960_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   abus__w_52538220_winc_58320_52538960_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   abus__w_52538220_winc_58320_52538960_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(abus__w_52538220_winc_58320_52538960_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,abus__w_52538220_winc_58320_52538960_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
abus__w_52538220_winc_58320_52538960_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[abus__w_52538220_winc_58320_52538960_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52974580();

   return behavior;
}

Behavior __52974040;

Behavior make__52974040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52974040 = behavior;
   behavior->owner = (Object)winc_58320_52538960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   _58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   _58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(_58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,_58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[_58322_60076560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52974260();

   return behavior;
}

Scope makewinc_58320_52538960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58320_52538960 = scope;
   scope->owner = (Object)channel__bias_58308_52388340;
   scope->name = "winc:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52538220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52974320();
   scope->behaviors[1] = make__52974040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58323_52536740;

SignalI abus__r_52536020_rdec_58323_52536740_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeabus__r_52536020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52536020_rdec_58323_52536740_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rdec_58323_52536740;
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

Scope makerdec_58323_52536740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58323_52536740 = scope;
   scope->owner = (Object)channel__bias_58308_52388340;
   scope->name = "rdec:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52536020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58327_52535860;

SignalI abus__w_52535340_wdec_58327_52535860_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeabus__w_52535340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52535340_wdec_58327_52535860_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)wdec_58327_52535860;
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

Scope makewdec_58327_52535860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58327_52535860 = scope;
   scope->owner = (Object)channel__bias_58308_52388340;
   scope->name = "wdec:327";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52535340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52956320;

Behavior make__52956320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52956320 = behavior;
   behavior->owner = (Object)channel__bias_58308_52388340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52956620();

   return behavior;
}

Behavior __52955780;

Behavior make__52955780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52955780 = behavior;
   behavior->owner = (Object)channel__bias_58308_52388340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58310_59410880_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   _58310_59410880_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   _58310_59410880_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(_58310_59410880_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,_58310_59410880_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58310_59410880_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[_58310_59410880_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52956240();

   return behavior;
}

Behavior __52954620;

Behavior make__52954620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52954620 = behavior;
   behavior->owner = (Object)channel__bias_58308_52388340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[reg__0_52786060_channel__bias_58308_52388340_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52954960();

   return behavior;
}

Behavior __52954260;

Behavior make__52954260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52954260 = behavior;
   behavior->owner = (Object)channel__bias_58308_52388340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58321_60076640_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   _58321_60076640_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   _58321_60076640_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(_58321_60076640_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,_58321_60076640_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58321_60076640_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[_58321_60076640_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52954580();

   return behavior;
}

Scope makechannel__bias_58308_52388340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58308_52388340 = scope;
   scope->owner = (Object)layer__output_58_84_51524880;
   scope->name = "channel_bias:308";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52786060();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58309_52542640();
   scope->scopes[1] = makeraddr_58311_52541740();
   scope->scopes[2] = makewaddr_58314_52540980();
   scope->scopes[3] = makerinc_58317_52540340();
   scope->scopes[4] = makewinc_58320_52538960();
   scope->scopes[5] = makerdec_58323_52536740();
   scope->scopes[6] = makewdec_58327_52535860();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52956320();
   scope->behaviors[1] = make__52955780();
   scope->behaviors[2] = make__52954620();
   scope->behaviors[3] = make__52954260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58331_51943540;

SignalI reg__0_50388860_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makereg__0_50388860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50388860_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__z_58331_51943540;
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

Scope anum_58332_51943240;

Scope makeanum_58332_51943240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58332_51943240 = scope;
   scope->owner = (Object)channel__z_58331_51943540;
   scope->name = "anum:332";
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

Scope raddr_58334_51942820;

Scope makeraddr_58334_51942820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58334_51942820 = scope;
   scope->owner = (Object)channel__z_58331_51943540;
   scope->name = "raddr:334";
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

Scope waddr_58337_51942400;

Scope makewaddr_58337_51942400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58337_51942400 = scope;
   scope->owner = (Object)channel__z_58331_51943540;
   scope->name = "waddr:337";
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

Scope rinc_58340_51941980;

SignalI abus__r_51941600_rinc_58340_51941980_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeabus__r_51941600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51941600_rinc_58340_51941980_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rinc_58340_51941980;
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

Scope makerinc_58340_51941980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58340_51941980 = scope;
   scope->owner = (Object)channel__z_58331_51943540;
   scope->name = "rinc:340";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51941600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58343_51941480;

SignalI abus__w_51941100_winc_58343_51941480_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeabus__w_51941100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51941100_winc_58343_51941480_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)winc_58343_51941480;
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

Scope makewinc_58343_51941480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58343_51941480 = scope;
   scope->owner = (Object)channel__z_58331_51943540;
   scope->name = "winc:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51941100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58346_51940980;

SignalI abus__r_51940600_rdec_58346_51940980_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeabus__r_51940600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51940600_rdec_58346_51940980_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rdec_58346_51940980;
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

Scope makerdec_58346_51940980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58346_51940980 = scope;
   scope->owner = (Object)channel__z_58331_51943540;
   scope->name = "rdec:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51940600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58350_51940480;

SignalI abus__w_51940100_wdec_58350_51940480_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeabus__w_51940100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51940100_wdec_58350_51940480_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)wdec_58350_51940480;
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

Scope makewdec_58350_51940480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58350_51940480 = scope;
   scope->owner = (Object)channel__z_58331_51943540;
   scope->name = "wdec:350";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51940100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52969720;

Behavior make__52969720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52969720 = behavior;
   behavior->owner = (Object)channel__z_58331_51943540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50388860_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   reg__0_50388860_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   reg__0_50388860_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(reg__0_50388860_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,reg__0_50388860_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__0_50388860_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[reg__0_50388860_channel__z_58331_51943540_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52970020();

   return behavior;
}

Behavior __53002080;

Behavior make__53002080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53002080 = behavior;
   behavior->owner = (Object)channel__z_58331_51943540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58333_59555520_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   _58333_59555520_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   _58333_59555520_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(_58333_59555520_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,_58333_59555520_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58333_59555520_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[_58333_59555520_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52969680();

   return behavior;
}

Scope makechannel__z_58331_51943540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58331_51943540 = scope;
   scope->owner = (Object)layer__output_58_84_51524880;
   scope->name = "channel_z:331";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50388860();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58332_51943240();
   scope->scopes[1] = makeraddr_58334_51942820();
   scope->scopes[2] = makewaddr_58337_51942400();
   scope->scopes[3] = makerinc_58340_51941980();
   scope->scopes[4] = makewinc_58343_51941480();
   scope->scopes[5] = makerdec_58346_51940980();
   scope->scopes[6] = makewdec_58350_51940480();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52969720();
   scope->behaviors[1] = make__53002080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58354_58034400;

SignalI lv0_58137780_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makelv0_58137780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_58137780_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)add__n_58354_58034400;
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

SignalI rv0_58208720_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makerv0_58208720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_58208720_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)add__n_58354_58034400;
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

SignalI lvok0_58208700_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makelvok0_58208700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_58208700_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)add__n_58354_58034400;
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

SignalI rvok0_58208680_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makervok0_58208680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_58208680_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)add__n_58354_58034400;
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

SignalI run_58208660_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makerun_58208660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_58208660_add__n_58354_58034400_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)add__n_58354_58034400;
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

Behavior __59042760;

Behavior make__59042760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59042760 = behavior;
   behavior->owner = (Object)add__n_58354_58034400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos += 1;
   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos = realloc(clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos*sizeof(Object));
clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos[clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos-1] = (Object)behavior;
   behavior->block = make__58208540();

   return behavior;
}

Scope makeadd__n_58354_58034400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58354_58034400 = scope;
   scope->owner = (Object)layer__output_58_84_51524880;
   scope->name = "add_n:354";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_58137780();
   scope->inners[1] = makerv0_58208720();
   scope->inners[2] = makelvok0_58208700();
   scope->inners[3] = makervok0_58208680();
   scope->inners[4] = makerun_58208660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59042760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60282500;

Behavior make__60282500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60282500 = behavior;
   behavior->owner = (Object)layer__output_58_84_51524880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos += 1;
   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos = realloc(clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos*sizeof(Object));
clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos[clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos-1] = (Object)behavior;
   behavior->block = make__60063180();

   return behavior;
}

Behavior __60604620;

Behavior make__60604620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60604620 = behavior;
   behavior->owner = (Object)layer__output_58_84_51524880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos += 1;
   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos = realloc(clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos*sizeof(Object));
clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos[clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos-1] = (Object)behavior;
   behavior->block = make__60282360();

   return behavior;
}

Behavior __61019060;

Behavior make__61019060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61019060 = behavior;
   behavior->owner = (Object)layer__output_58_84_51524880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos += 1;
   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos = realloc(clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos*sizeof(Object));
clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos[clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos-1] = (Object)behavior;
   behavior->block = make__60604500();

   return behavior;
}

Behavior __52850380;

Behavior make__52850380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52850380 = behavior;
   behavior->owner = (Object)layer__output_58_84_51524880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_61016640_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   req_61016640_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   req_61016640_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(req_61016640_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,req_61016640_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
req_61016640_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[req_61016640_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_59042580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   ack__mac_59042580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   ack__mac_59042580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(ack__mac_59042580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,ack__mac_59042580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
ack__mac_59042580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[ack__mac_59042580_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52850720();

   return behavior;
}

Behavior __52879520;

Behavior make__52879520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52879520 = behavior;
   behavior->owner = (Object)layer__output_58_84_51524880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_59042600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   ack_59042600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   ack_59042600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(ack_59042600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,ack_59042600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
ack_59042600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[ack_59042600_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_59683800_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   value__z0_59683800_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   value__z0_59683800_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(value__z0_59683800_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,value__z0_59683800_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
value__z0_59683800_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[value__z0_59683800_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a10_59877560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   ack__a10_59877560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   ack__a10_59877560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(ack__a10_59877560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,ack__a10_59877560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
ack__a10_59877560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[ack__a10_59877560_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52851240();

   return behavior;
}

Behavior __52903460;

Behavior make__52903460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52903460 = behavior;
   behavior->owner = (Object)layer__output_58_84_51524880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_60093980_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   ack__mac_60093980_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   ack__mac_60093980_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(ack__mac_60093980_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,ack__mac_60093980_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
ack__mac_60093980_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[ack__mac_60093980_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_59410260_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   a_59410260_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   a_59410260_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(a_59410260_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,a_59410260_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
a_59410260_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[a_59410260_func10_58_840_59228360_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52851120();

   return behavior;
}

Scope makelayer__output_58_84_51524880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer__output_58_84_51524880 = scope;
   scope->owner = (Object)layer__output_58_840_61018740;
   scope->name = "layer_output:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter1_60093840();
   scope->systemIs[1] = makefunc10_59410120();
   scope->num_inners = 19;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_59042620();
   scope->inners[1] = makeack_59042600();
   scope->inners[2] = makeack__mac_59042580();
   scope->inners[3] = makeack__add_59042560();
   scope->inners[4] = make_58266_59244560();
   scope->inners[5] = make_58264_59277260();
   scope->inners[6] = make_58265_59277180();
   scope->inners[7] = make_58283_59348140();
   scope->inners[8] = make_58310_59410880();
   scope->inners[9] = make_58333_59555520();
   scope->inners[10] = makevalue__z0_59683800();
   scope->inners[11] = makevalue__a10_59877600();
   scope->inners[12] = makeflag__z0_59877580();
   scope->inners[13] = makeack__a10_59877560();
   scope->inners[14] = make_58268_59877540();
   scope->inners[15] = make_58269_59877460();
   scope->inners[16] = make_58270_60030260();
   scope->inners[17] = make_58321_60076640();
   scope->inners[18] = make_58322_60076560();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58252_51524540();
   scope->scopes[1] = makechannel__accum_58281_51503140();
   scope->scopes[2] = makemac__n1_58306_52996040();
   scope->scopes[3] = makechannel__bias_58308_52388340();
   scope->scopes[4] = makechannel__z_58331_51943540();
   scope->scopes[5] = makeadd__n_58354_58034400();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60282500();
   scope->behaviors[1] = make__60604620();
   scope->behaviors[2] = make__61019060();
   scope->behaviors[3] = make__52850380();
   scope->behaviors[4] = make__52879520();
   scope->behaviors[5] = make__52903460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer__output_58_840_61018740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer__output_58_840_61018740 = systemT;
systemT->owner = NULL;
   systemT->name = "layer_output:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_61016700();
   systemT->inputs[1] = makerst_61016680();
   systemT->inputs[2] = makefill_61016660();
   systemT->inputs[3] = makereq_61016640();
   systemT->inputs[4] = make_5843_61100160();
   systemT->inputs[5] = make_5844_44927860();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__1_44927700();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5845_44926280();
   systemT->inouts[1] = make_5862_47651080();

   systemT->scope = makelayer__output_58_84_51524880();

   return systemT;
}