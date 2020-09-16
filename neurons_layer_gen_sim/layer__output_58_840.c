#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer__output_58_840_52977000;

SignalI clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeclk_53004680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_840_52977000;
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

SignalI rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makerst_53004660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_840_52977000;
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

SignalI fill_53004520_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makefill_53004520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_53004520_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_840_52977000;
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

SignalI req_53004380_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makereq_53004380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_53004380_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_840_52977000;
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

SignalI ack__1_53004160_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeack__1_53004160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_53004160_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_840_52977000;
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

Block __48772080;

Block __48770140;

Block __48768380;

void code__48768380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_51936620_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,value__z0_52147680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59101640(),flag__z0_52446760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__48768380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48768380 = block;
   block->owner = (Object)__48770140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48768380;

   return block;
};

void code__48770140() {
 code__48768380();
}

Block make__48770140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48770140 = block;
   block->owner = (Object)__48772080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48770140;

   return block;
};

Block __48771500;

void code__48771500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59101580(),flag__z0_52446760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__48771500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48771500 = block;
   block->owner = (Object)__48772080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48771500;

   return block;
};

void code__48772080() {
   {
      Value cond = ack__add_48116740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48770140();
   }
   else {
  code__48771500();
   }
      }
   }
}

Block make__48772080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48772080 = block;
   block->owner = (Object)__49739600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48772080;

   return block;
};

Block __49739340;

Block __49738760;

Block __49738240;

void code__49738240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a10_52446780_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,_5862_48773820______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59101400(),ack__a10_52446740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__49738240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49738240 = block;
   block->owner = (Object)__49738760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49738240;

   return block;
};

void code__49738760() {
 code__49738240();
}

Block make__49738760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49738760 = block;
   block->owner = (Object)__49739340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49738760;

   return block;
};

void code__49739340() {
   {
      Value cond = flag__z0_52446760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49738760();
   }
      }
   }
}

Block make__49739340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49739340 = block;
   block->owner = (Object)__52224400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49739340;

   return block;
};

Block __52224200;

Block __52387540;

Block __52386760;

void code__52386760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59101240(),_58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52386760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52386760 = block;
   block->owner = (Object)__52387540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52386760;

   return block;
};

void code__52387540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59101320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52386760();
   }
      }
   }
}

Block make__52387540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52387540 = block;
   block->owner = (Object)__52224200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52387540;

   return block;
};

Block __52385960;

Block __52385420;

void code__52385420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59101080(),_58252_52446560_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52385420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52385420 = block;
   block->owner = (Object)__52385960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52385420;

   return block;
};

void code__52385960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59101160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52385420();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59101020(),_58251_52446680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52385960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52385960 = block;
   block->owner = (Object)__52224200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52385960;

   return block;
};

Block __52383660;

Block __52383440;

Block __52383020;

void code__52383020() {
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
                  src0 = _58252_52446560_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59100700();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58252_52446560_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59100560(),_58251_52446680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59100500(),_58253_52694180_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52383020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52383020 = block;
   block->owner = (Object)__52383440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52383020;

   return block;
};

void code__52383440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59100860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52383020();
   }
      }
   }
}

Block make__52383440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52383440 = block;
   block->owner = (Object)__52383660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52383440;

   return block;
};

Block __52679980;

Block __52677460;

Block __52676380;

void code__52676380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59100200(),_58303_52943500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52676380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52676380 = block;
   block->owner = (Object)__52677460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52676380;

   return block;
};

void code__52677460() {
{
      Value value = _58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__59100260())) {
    code__52676380();
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
                  src0 = _58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59100020();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52677460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52677460 = block;
   block->owner = (Object)__52679980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52677460;

   return block;
};

void code__52679980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59100420();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52677460();
   }
      }
   }
}

Block make__52679980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52679980 = block;
   block->owner = (Object)__52383660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52679980;

   return block;
};

void code__52383660() {
 code__52383440();
 code__52679980();
}

Block make__52383660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52383660 = block;
   block->owner = (Object)__52224200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52383660;

   return block;
};

void code__52224200() {
 code__52387540();
 code__52385960();
   {
      Value cond = fill_53004520_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52383660();
   }
      }
   }
}

Block make__52224200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52224200 = block;
   block->owner = (Object)__52937860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52224200;

   return block;
};

Block __58885200;

void code__58885200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_53004380_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_48116860_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_48117100_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58885200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58885200 = block;
   block->owner = (Object)__58884900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58885200;

   return block;
};

Block __58885520;

void code__58885520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_48116880_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,ack_53006380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,rst_53006300_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_52147680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,z__value_62059220_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a10_52446740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,ack__1_53004160_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58885520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58885520 = block;
   block->owner = (Object)__58903980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58885520;

   return block;
};

Block __58885440;

void code__58885440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_53006260_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,ack__mac_48116860_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_62103940_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,value__a10_52446780_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58885440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58885440 = block;
   block->owner = (Object)__58903820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58885440;

   return block;
};

Block __51986300;

Block __52631000;

void code__52631000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48086340_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,make_ref_rangeS(mem_48653840_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240,value2integer(abus__w_48084620_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value),value2integer(abus__w_48084620_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__52631000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52631000 = block;
   block->owner = (Object)__51986300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52631000;

   return block;
};

void code__51986300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48653840_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
            idx = value2integer(abus__r_48085220_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47575600_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_42056580_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52631000();
   }
      }
   }
}

Block make__51986300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51986300 = block;
   block->owner = (Object)__53146020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51986300;

   return block;
};

Block __58902900;

void code__58902900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47575600_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,_58249_48769400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58902900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58902900 = block;
   block->owner = (Object)__58902740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58902900;

   return block;
};

Block __58902700;

void code__58902700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_48769400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,dbus__r_47575600_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58902700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58902700 = block;
   block->owner = (Object)__58902540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58902700;

   return block;
};

Block __58902240;

void code__58902240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_42019080_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,_58247_48769380_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58902240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58902240 = block;
   block->owner = (Object)__58902080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58902240;

   return block;
};

Block __58902040;

void code__58902040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58247_48769380_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,trig__r_42019080_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58902040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58902040 = block;
   block->owner = (Object)__58901880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58902040;

   return block;
};

Block __58901580;

void code__58901580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48085220_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,_58248_48768500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58901580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58901580 = block;
   block->owner = (Object)__58901340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58901580;

   return block;
};

Block __58901280;

void code__58901280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58248_48768500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,abus__r_48085220_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58901280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58901280 = block;
   block->owner = (Object)__58901020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58901280;

   return block;
};

Block __58900720;

void code__58900720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_42056580_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,_58251_52446680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58900720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58900720 = block;
   block->owner = (Object)__58900560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58900720;

   return block;
};

Block __58900520;

void code__58900520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58251_52446680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,trig__w_42056580_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58900520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58900520 = block;
   block->owner = (Object)__58957660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58900520;

   return block;
};

Block __58957360;

void code__58957360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48084620_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,_58252_52446560_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58957360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58957360 = block;
   block->owner = (Object)__58957200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58957360;

   return block;
};

Block __58957160;

void code__58957160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58252_52446560_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,abus__w_48084620_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58957160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58957160 = block;
   block->owner = (Object)__58957000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58957160;

   return block;
};

Block __58956660;

void code__58956660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48086340_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,_58253_52694180_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58956660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58956660 = block;
   block->owner = (Object)__58956400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58956660;

   return block;
};

Block __58956360;

void code__58956360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58253_52694180_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,dbus__w_48086340_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58956360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58956360 = block;
   block->owner = (Object)__58956140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58956360;

   return block;
};

Block __58954580;

void code__58954580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53526460_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,_58266_49236160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58954580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58954580 = block;
   block->owner = (Object)__58954340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58954580;

   return block;
};

Block __58954300;

void code__58954300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_49236160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,reg__0_53526460_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58954300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58954300 = block;
   block->owner = (Object)__58954100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58954300;

   return block;
};

Block __47476360;

Block __47475600;

Block __47494200;

void code__47494200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59091600(),_58248_48768500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__47494200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47494200 = block;
   block->owner = (Object)__47475600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47494200;

   return block;
};

void code__47475600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59091680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47494200();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59091540(),_58247_48769380_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__47475600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47475600 = block;
   block->owner = (Object)__47476360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47475600;

   return block;
};

Block __47492700;

Block __47492200;

void code__47492200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59091380(),_5845_48547180______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__47492200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47492200 = block;
   block->owner = (Object)__47492700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47492200;

   return block;
};

void code__47492700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59091460();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47492200();
   }
      }
   }
}

Block make__47492700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47492700 = block;
   block->owner = (Object)__47476360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47492700;

   return block;
};

Block __48069980;

Block __48067680;

Block __48065940;

Block __48063920;

void code__48063920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_48161800______58_84_48032420______58_840_53587240->c_value,rv_47477020_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__48063920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48063920 = block;
   block->owner = (Object)__48065940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48063920;

   return block;
};

Block __48960740;

void code__48960740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_48547320______58_84_48032420______58_840_53587240->c_value,rv_47477020_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__48960740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48960740 = block;
   block->owner = (Object)__48065940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48960740;

   return block;
};

void code__48065940() {
{
      Value value = _5845_48547180______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__59090860())) {
    code__48063920();
         }
         else if (value2integer(value) == value2integer(make__59090680())) {
    code__48960740();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59090520(),rvok_47476740_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
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
                  src0 = _5845_48547180______58_84_48032420______58_840_53587240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59090340();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_48547180______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__48065940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48065940 = block;
   block->owner = (Object)__48067680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48065940;

   return block;
};

void code__48067680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59091000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48065940();
   }
      }
   }
}

Block make__48067680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48067680 = block;
   block->owner = (Object)__48069980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48067680;

   return block;
};

Block __49819160;

Block __49818640;

Block __49818140;

void code__49818140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_48769400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,lv0_54366880_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59089960(),lvok0_47476960_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__49818140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49818140 = block;
   block->owner = (Object)__49818640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49818140;

   return block;
};

void code__49818640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58247_48769380_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59090120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49818140();
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
                  src0 = _58248_48768500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59089840();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58248_48768500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59089740(),_58247_48769380_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__49818640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49818640 = block;
   block->owner = (Object)__49819160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49818640;

   return block;
};

void code__49819160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59090220();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49818640();
   }
      }
   }
}

Block make__49819160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49819160 = block;
   block->owner = (Object)__48069980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49819160;

   return block;
};

Block __52194960;

Block __52194220;

Block __52194000;

void code__52194000() {
}

Block make__52194000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52194000 = block;
   block->owner = (Object)__52194220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52194000;

   return block;
};

Block __54114460;

void code__54114460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_54585640_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,_58266_49236160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54114460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54114460 = block;
   block->owner = (Object)__52194220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54114460;

   return block;
};

void code__52194220() {
 code__52194000();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_54585640_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
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
                              src0 = lv0_54366880_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_47477020_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59089180();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_54585640_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
 code__54114460();
}

Block make__52194220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52194220 = block;
   block->owner = (Object)__52194960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52194220;

   return block;
};

void code__52194960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59089580(),ack_48116880_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59089520(),run_47476720_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
 code__52194220();
}

Block make__52194960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52194960 = block;
   block->owner = (Object)__48069980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52194960;

   return block;
};

void code__48069980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59091100(),run_47476720_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
 code__48067680();
 code__49819160();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_47476960_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
         src1 = rvok_47476740_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52194960();
   }
      }
   }
}

Block make__48069980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48069980 = block;
   block->owner = (Object)__47476360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48069980;

   return block;
};

Block __47528400;

void code__47528400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59089000(),rvok_47476740_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59088920(),lvok0_47476960_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59105200(),av0_54585640_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__47528400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47528400 = block;
   block->owner = (Object)__47476360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47528400;

   return block;
};

void code__47476360() {
 code__47475600();
 code__47492700();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59091320(),ack_48116880_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59091260(),run_47476720_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_48117100_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
         src1 = run_47476720_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48069980();
   }
   else {
  code__47528400();
   }
      }
   }
}

Block make__47476360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47476360 = block;
   block->owner = (Object)__54589660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47476360;

   return block;
};

Block __58952240;

void code__58952240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,_58292_49603400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58952240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58952240 = block;
   block->owner = (Object)__58952040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58952240;

   return block;
};

Block __58952000;

void code__58952000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_49603400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58952000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58952000 = block;
   block->owner = (Object)__58951780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58952000;

   return block;
};

Block __58951480;

void code__58951480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,_58303_52943500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58951480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58951480 = block;
   block->owner = (Object)__58951320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58951480;

   return block;
};

Block __58951280;

void code__58951280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58303_52943500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58951280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58951280 = block;
   block->owner = (Object)__58951120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58951280;

   return block;
};

Block __58973740;

void code__58973740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_54584760_winc_58302_54585260_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,_58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58973740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58973740 = block;
   block->owner = (Object)__58973580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58973740;

   return block;
};

Block __58973540;

void code__58973540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,abus__w_54584760_winc_58302_54585260_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58973540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58973540 = block;
   block->owner = (Object)__58973380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58973540;

   return block;
};

Block __58972140;

void code__58972140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53409280_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,_58315_51936620_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58972140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58972140 = block;
   block->owner = (Object)__58971960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58972140;

   return block;
};

Block __58971900;

void code__58971900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_51936620_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,reg__0_53409280_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58971900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58971900 = block;
   block->owner = (Object)__58971700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58971900;

   return block;
};

Block __49300740;

Block __49269840;

Block __49269120;

void code__49269120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_49236160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,lv0_48552620_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59103660(),lvok0_49301340_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__49269120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49269120 = block;
   block->owner = (Object)__49269840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49269120;

   return block;
};

Block __52480000;

void code__52480000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_49603400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,rv0_49301420_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59103520(),rvok0_49301300_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52480000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52480000 = block;
   block->owner = (Object)__49269840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52480000;

   return block;
};

Block __53439460;

Block __53438340;

void code__53438340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_48552620_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
      src1 = rv0_49301420_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58315_51936620_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53438340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53438340 = block;
   block->owner = (Object)__53439460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53438340;

   return block;
};

void code__53439460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59103360(),run_49301200_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59103300(),ack__add_48116740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
 code__53438340();
}

Block make__53439460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53439460 = block;
   block->owner = (Object)__49269840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53439460;

   return block;
};

void code__49269840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59103800(),run_49301200_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
 code__49269120();
 code__52480000();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49301340_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
         src1 = rvok0_49301300_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53439460();
   }
      }
   }
}

Block make__49269840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49269840 = block;
   block->owner = (Object)__49300740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49269840;

   return block;
};

Block __49299600;

void code__49299600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59103020(),lvok0_49301340_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59102940(),rvok0_49301300_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__49299600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49299600 = block;
   block->owner = (Object)__49300740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49299600;

   return block;
};

void code__49300740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59104020(),ack__add_48116740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59103960(),run_49301200_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_48116860_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
         src1 = run_49301200_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49269840();
   }
   else {
  code__49299600();
   }
      }
   }
}

Block make__49300740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49300740 = block;
   block->owner = (Object)__48117840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49300740;

   return block;
};

Value make__59091680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59091600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59091540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59091460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59091380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59091320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59091260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59091100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59091000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59090860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59090680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59090520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59090340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59090220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59090120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59089960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59089840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59089740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59089580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59089520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59089180() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59089000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59088920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59105200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59104020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59103960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59103800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59103660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59103520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59103360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59103300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59103020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59102940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59101640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59101580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59101400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59101320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59101240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59101160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59101080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59101020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59100860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59100700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59100560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59100500() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59100420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59100260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59100200() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59100020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer__output_58_84_54629400;

SignalI req__mac_48117100_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makereq__mac_48117100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_48117100_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
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

SignalI ack_48116880_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeack_48116880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_48116880_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
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

SignalI ack__mac_48116860_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeack__mac_48116860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_48116860_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
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

SignalI ack__add_48116740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeack__add_48116740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_48116740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
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

SignalI _58249_48769400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI make_58249_48769400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58249_48769400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
   signalI->name = ":249";
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

SignalI _58247_48769380_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI make_58247_48769380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58247_48769380_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
   signalI->name = ":247";
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

SignalI _58248_48768500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI make_58248_48768500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58248_48768500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
   signalI->name = ":248";
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

SignalI _58266_49236160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI make_58266_49236160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_49236160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
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

SignalI _58292_49603400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI make_58292_49603400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58292_49603400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
   signalI->name = ":292";
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

SignalI _58315_51936620_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI make_58315_51936620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_51936620_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
   signalI->name = ":315";
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

SignalI value__z0_52147680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makevalue__z0_52147680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_52147680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
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

SignalI value__a10_52446780_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makevalue__a10_52446780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a10_52446780_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
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

SignalI flag__z0_52446760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeflag__z0_52446760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_52446760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
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

SignalI ack__a10_52446740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeack__a10_52446740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a10_52446740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
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

SignalI _58251_52446680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI make_58251_52446680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58251_52446680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
   signalI->name = ":251";
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

SignalI _58252_52446560_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI make_58252_52446560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58252_52446560_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
   signalI->name = ":252";
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

SignalI _58253_52694180_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI make_58253_52694180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58253_52694180_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
   signalI->name = ":253";
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

SignalI _58303_52943500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI make_58303_52943500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58303_52943500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
   signalI->name = ":303";
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

SignalI _58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI make_58304_52943040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__output_58_84_54629400;
   signalI->name = ":304";
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

SystemI counter1_53006080;

SystemI makecounter1_53006080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter1_53006080 = systemI;
   systemI->owner = (Object)layer__output_58_84_54629400;
   systemI->name = "counter1";
   systemI->system = counter1_58_840_52970280;

   return systemI;
};

SystemI func10_62103800;

SystemI makefunc10_62103800() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func10_62103800 = systemI;
   systemI->owner = (Object)layer__output_58_84_54629400;
   systemI->name = "func10";
   systemI->system = func10_58_840_61877160;

   return systemI;
};

Scope channel__w0_58235_54629060;

SignalI trig__r_42019080_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI maketrig__r_42019080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_42019080_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w0_58235_54629060;
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

SignalI trig__w_42056580_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI maketrig__w_42056580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_42056580_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w0_58235_54629060;
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

SignalI dbus__r_47575600_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makedbus__r_47575600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47575600_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w0_58235_54629060;
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

SignalI dbus__w_48086340_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makedbus__w_48086340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48086340_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w0_58235_54629060;
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

SignalI abus__r_48085220_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeabus__r_48085220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48085220_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w0_58235_54629060;
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

SignalI abus__w_48084620_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeabus__w_48084620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48084620_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w0_58235_54629060;
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

SignalI mem_48653840_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makemem_48653840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48653840_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w0_58235_54629060;
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

Scope raddr_58236_54628760;

Scope makeraddr_58236_54628760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58236_54628760 = scope;
   scope->owner = (Object)channel__w0_58235_54629060;
   scope->name = "raddr:236";
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

Scope waddr_58241_54627980;

Scope makewaddr_58241_54627980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58241_54627980 = scope;
   scope->owner = (Object)channel__w0_58235_54629060;
   scope->name = "waddr:241";
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

Scope rinc_58246_54626780;

Scope makerinc_58246_54626780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58246_54626780 = scope;
   scope->owner = (Object)channel__w0_58235_54629060;
   scope->name = "rinc:246";
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

Scope winc_58250_54626280;

Scope makewinc_58250_54626280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58250_54626280 = scope;
   scope->owner = (Object)channel__w0_58235_54629060;
   scope->name = "winc:250";
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

Scope rdec_58254_54625800;

Scope makerdec_58254_54625800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58254_54625800 = scope;
   scope->owner = (Object)channel__w0_58235_54629060;
   scope->name = "rdec:254";
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

Scope wdec_58259_54625300;

Scope makewdec_58259_54625300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58259_54625300 = scope;
   scope->owner = (Object)channel__w0_58235_54629060;
   scope->name = "wdec:259";
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

Behavior __53146020;

Behavior make__53146020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53146020 = behavior;
   behavior->owner = (Object)channel__w0_58235_54629060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_neg += 1;
   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->neg = realloc(clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->neg,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_neg*sizeof(Object));
clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->neg[clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_neg-1] = (Object)behavior;
   behavior->block = make__51986300();

   return behavior;
}

Behavior __58902740;

Behavior make__58902740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58902740 = behavior;
   behavior->owner = (Object)channel__w0_58235_54629060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47575600_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   dbus__r_47575600_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   dbus__r_47575600_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(dbus__r_47575600_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,dbus__r_47575600_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
dbus__r_47575600_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[dbus__r_47575600_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58902900();

   return behavior;
}

Behavior __58902540;

Behavior make__58902540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58902540 = behavior;
   behavior->owner = (Object)channel__w0_58235_54629060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58249_48769400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   _58249_48769400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   _58249_48769400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(_58249_48769400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,_58249_48769400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58249_48769400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[_58249_48769400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58902700();

   return behavior;
}

Behavior __58902080;

Behavior make__58902080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58902080 = behavior;
   behavior->owner = (Object)channel__w0_58235_54629060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_42019080_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   trig__r_42019080_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   trig__r_42019080_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(trig__r_42019080_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,trig__r_42019080_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
trig__r_42019080_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[trig__r_42019080_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58902240();

   return behavior;
}

Behavior __58901880;

Behavior make__58901880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58901880 = behavior;
   behavior->owner = (Object)channel__w0_58235_54629060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58247_48769380_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   _58247_48769380_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   _58247_48769380_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(_58247_48769380_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,_58247_48769380_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58247_48769380_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[_58247_48769380_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58902040();

   return behavior;
}

Behavior __58901340;

Behavior make__58901340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58901340 = behavior;
   behavior->owner = (Object)channel__w0_58235_54629060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48085220_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   abus__r_48085220_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   abus__r_48085220_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(abus__r_48085220_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,abus__r_48085220_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
abus__r_48085220_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[abus__r_48085220_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58901580();

   return behavior;
}

Behavior __58901020;

Behavior make__58901020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58901020 = behavior;
   behavior->owner = (Object)channel__w0_58235_54629060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58248_48768500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   _58248_48768500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   _58248_48768500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(_58248_48768500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,_58248_48768500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58248_48768500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[_58248_48768500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58901280();

   return behavior;
}

Behavior __58900560;

Behavior make__58900560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58900560 = behavior;
   behavior->owner = (Object)channel__w0_58235_54629060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_42056580_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   trig__w_42056580_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   trig__w_42056580_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(trig__w_42056580_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,trig__w_42056580_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
trig__w_42056580_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[trig__w_42056580_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58900720();

   return behavior;
}

Behavior __58957660;

Behavior make__58957660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58957660 = behavior;
   behavior->owner = (Object)channel__w0_58235_54629060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58251_52446680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   _58251_52446680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   _58251_52446680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(_58251_52446680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,_58251_52446680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58251_52446680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[_58251_52446680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58900520();

   return behavior;
}

Behavior __58957200;

Behavior make__58957200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58957200 = behavior;
   behavior->owner = (Object)channel__w0_58235_54629060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48084620_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   abus__w_48084620_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   abus__w_48084620_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(abus__w_48084620_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,abus__w_48084620_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
abus__w_48084620_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[abus__w_48084620_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58957360();

   return behavior;
}

Behavior __58957000;

Behavior make__58957000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58957000 = behavior;
   behavior->owner = (Object)channel__w0_58235_54629060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58252_52446560_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   _58252_52446560_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   _58252_52446560_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(_58252_52446560_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,_58252_52446560_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58252_52446560_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[_58252_52446560_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58957160();

   return behavior;
}

Behavior __58956400;

Behavior make__58956400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58956400 = behavior;
   behavior->owner = (Object)channel__w0_58235_54629060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48086340_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   dbus__w_48086340_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   dbus__w_48086340_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(dbus__w_48086340_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,dbus__w_48086340_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
dbus__w_48086340_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[dbus__w_48086340_channel__w0_58235_54629060_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58956660();

   return behavior;
}

Behavior __58956140;

Behavior make__58956140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58956140 = behavior;
   behavior->owner = (Object)channel__w0_58235_54629060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58253_52694180_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   _58253_52694180_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   _58253_52694180_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(_58253_52694180_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,_58253_52694180_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58253_52694180_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[_58253_52694180_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58956360();

   return behavior;
}

Scope makechannel__w0_58235_54629060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58235_54629060 = scope;
   scope->owner = (Object)layer__output_58_84_54629400;
   scope->name = "channel_w0:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_42019080();
   scope->inners[1] = maketrig__w_42056580();
   scope->inners[2] = makedbus__r_47575600();
   scope->inners[3] = makedbus__w_48086340();
   scope->inners[4] = makeabus__r_48085220();
   scope->inners[5] = makeabus__w_48084620();
   scope->inners[6] = makemem_48653840();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58236_54628760();
   scope->scopes[1] = makewaddr_58241_54627980();
   scope->scopes[2] = makerinc_58246_54626780();
   scope->scopes[3] = makewinc_58250_54626280();
   scope->scopes[4] = makerdec_58254_54625800();
   scope->scopes[5] = makewdec_58259_54625300();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53146020();
   scope->behaviors[1] = make__58902740();
   scope->behaviors[2] = make__58902540();
   scope->behaviors[3] = make__58902080();
   scope->behaviors[4] = make__58901880();
   scope->behaviors[5] = make__58901340();
   scope->behaviors[6] = make__58901020();
   scope->behaviors[7] = make__58900560();
   scope->behaviors[8] = make__58957660();
   scope->behaviors[9] = make__58957200();
   scope->behaviors[10] = make__58957000();
   scope->behaviors[11] = make__58956400();
   scope->behaviors[12] = make__58956140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58264_53145600;

SignalI reg__0_53526460_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makereg__0_53526460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53526460_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__accum_58264_53145600;
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

Scope anum_58265_53145240;

Scope makeanum_58265_53145240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58265_53145240 = scope;
   scope->owner = (Object)channel__accum_58264_53145600;
   scope->name = "anum:265";
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

Scope raddr_58267_53144720;

Scope makeraddr_58267_53144720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58267_53144720 = scope;
   scope->owner = (Object)channel__accum_58264_53145600;
   scope->name = "raddr:267";
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

Scope waddr_58270_53143900;

Scope makewaddr_58270_53143900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58270_53143900 = scope;
   scope->owner = (Object)channel__accum_58264_53145600;
   scope->name = "waddr:270";
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

Scope rinc_58273_53143080;

SignalI abus__r_53142600_rinc_58273_53143080_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeabus__r_53142600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53142600_rinc_58273_53143080_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rinc_58273_53143080;
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

Scope makerinc_58273_53143080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_53143080 = scope;
   scope->owner = (Object)channel__accum_58264_53145600;
   scope->name = "rinc:273";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53142600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58277_53142360;

SignalI abus__w_53141840_winc_58277_53142360_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeabus__w_53141840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53141840_winc_58277_53142360_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)winc_58277_53142360;
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

Scope makewinc_58277_53142360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58277_53142360 = scope;
   scope->owner = (Object)channel__accum_58264_53145600;
   scope->name = "winc:277";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53141840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58281_53141580;

SignalI abus__r_53231040_rdec_58281_53141580_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeabus__r_53231040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53231040_rdec_58281_53141580_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rdec_58281_53141580;
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

Scope makerdec_58281_53141580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58281_53141580 = scope;
   scope->owner = (Object)channel__accum_58264_53145600;
   scope->name = "rdec:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53231040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58285_53230800;

SignalI abus__w_53230020_wdec_58285_53230800_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeabus__w_53230020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53230020_wdec_58285_53230800_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)wdec_58285_53230800;
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

Scope makewdec_58285_53230800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58285_53230800 = scope;
   scope->owner = (Object)channel__accum_58264_53145600;
   scope->name = "wdec:285";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53230020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58954340;

Behavior make__58954340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58954340 = behavior;
   behavior->owner = (Object)channel__accum_58264_53145600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53526460_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   reg__0_53526460_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   reg__0_53526460_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(reg__0_53526460_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,reg__0_53526460_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__0_53526460_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[reg__0_53526460_channel__accum_58264_53145600_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58954580();

   return behavior;
}

Behavior __58954100;

Behavior make__58954100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58954100 = behavior;
   behavior->owner = (Object)channel__accum_58264_53145600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_49236160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   _58266_49236160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   _58266_49236160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(_58266_49236160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,_58266_49236160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58266_49236160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[_58266_49236160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58954300();

   return behavior;
}

Scope makechannel__accum_58264_53145600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58264_53145600 = scope;
   scope->owner = (Object)layer__output_58_84_54629400;
   scope->name = "channel_accum:264";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53526460();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58265_53145240();
   scope->scopes[1] = makeraddr_58267_53144720();
   scope->scopes[2] = makewaddr_58270_53143900();
   scope->scopes[3] = makerinc_58273_53143080();
   scope->scopes[4] = makewinc_58277_53142360();
   scope->scopes[5] = makerdec_58281_53141580();
   scope->scopes[6] = makewdec_58285_53230800();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58954340();
   scope->behaviors[1] = make__58954100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58289_54124760;

SignalI lv0_54366880_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makelv0_54366880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_54366880_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58289_54124760;
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

SignalI av0_54585640_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeav0_54585640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_54585640_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58289_54124760;
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

SignalI rv_47477020_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makerv_47477020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_47477020_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58289_54124760;
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

SignalI lvok0_47476960_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makelvok0_47476960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_47476960_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58289_54124760;
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

SignalI rvok_47476740_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makervok_47476740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_47476740_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58289_54124760;
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

SignalI run_47476720_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makerun_47476720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_47476720_mac__n1_58289_54124760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58289_54124760;
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

Behavior __54589660;

Behavior make__54589660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54589660 = behavior;
   behavior->owner = (Object)mac__n1_58289_54124760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos += 1;
   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos = realloc(clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos*sizeof(Object));
clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos[clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos-1] = (Object)behavior;
   behavior->block = make__47476360();

   return behavior;
}

Scope makemac__n1_58289_54124760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58289_54124760 = scope;
   scope->owner = (Object)layer__output_58_84_54629400;
   scope->name = "mac_n1:289";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_54366880();
   scope->inners[1] = makeav0_54585640();
   scope->inners[2] = makerv_47477020();
   scope->inners[3] = makelvok0_47476960();
   scope->inners[4] = makervok_47476740();
   scope->inners[5] = makerun_47476720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54589660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58290_54589340;

SignalI reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makereg__0_48001140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__bias_58290_54589340;
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

Scope anum_58291_54588900;

Scope makeanum_58291_54588900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58291_54588900 = scope;
   scope->owner = (Object)channel__bias_58290_54589340;
   scope->name = "anum:291";
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

Scope raddr_58293_54588320;

Scope makeraddr_58293_54588320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58293_54588320 = scope;
   scope->owner = (Object)channel__bias_58290_54589340;
   scope->name = "raddr:293";
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

Scope waddr_58296_54587640;

Scope makewaddr_58296_54587640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58296_54587640 = scope;
   scope->owner = (Object)channel__bias_58290_54589340;
   scope->name = "waddr:296";
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

Scope rinc_58299_54586600;

SignalI abus__r_54585900_rinc_58299_54586600_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeabus__r_54585900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54585900_rinc_58299_54586600_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rinc_58299_54586600;
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

Scope makerinc_58299_54586600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58299_54586600 = scope;
   scope->owner = (Object)channel__bias_58290_54589340;
   scope->name = "rinc:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54585900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58302_54585260;

SignalI abus__w_54584760_winc_58302_54585260_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeabus__w_54584760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54584760_winc_58302_54585260_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)winc_58302_54585260;
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

Behavior __58973580;

Behavior make__58973580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58973580 = behavior;
   behavior->owner = (Object)winc_58302_54585260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_54584760_winc_58302_54585260_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   abus__w_54584760_winc_58302_54585260_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   abus__w_54584760_winc_58302_54585260_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(abus__w_54584760_winc_58302_54585260_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,abus__w_54584760_winc_58302_54585260_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
abus__w_54584760_winc_58302_54585260_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[abus__w_54584760_winc_58302_54585260_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58973740();

   return behavior;
}

Behavior __58973380;

Behavior make__58973380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58973380 = behavior;
   behavior->owner = (Object)winc_58302_54585260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   _58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   _58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(_58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,_58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[_58304_52943040_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58973540();

   return behavior;
}

Scope makewinc_58302_54585260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58302_54585260 = scope;
   scope->owner = (Object)channel__bias_58290_54589340;
   scope->name = "winc:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54584760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58973580();
   scope->behaviors[1] = make__58973380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58305_54584180;

SignalI abus__r_54583440_rdec_58305_54584180_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeabus__r_54583440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54583440_rdec_58305_54584180_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rdec_58305_54584180;
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

Scope makerdec_58305_54584180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58305_54584180 = scope;
   scope->owner = (Object)channel__bias_58290_54589340;
   scope->name = "rdec:305";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54583440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58309_54607760;

SignalI abus__w_54607040_wdec_58309_54607760_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeabus__w_54607040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54607040_wdec_58309_54607760_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)wdec_58309_54607760;
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

Scope makewdec_58309_54607760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58309_54607760 = scope;
   scope->owner = (Object)channel__bias_58290_54589340;
   scope->name = "wdec:309";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54607040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58952040;

Behavior make__58952040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58952040 = behavior;
   behavior->owner = (Object)channel__bias_58290_54589340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58952240();

   return behavior;
}

Behavior __58951780;

Behavior make__58951780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58951780 = behavior;
   behavior->owner = (Object)channel__bias_58290_54589340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58292_49603400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   _58292_49603400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   _58292_49603400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(_58292_49603400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,_58292_49603400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58292_49603400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[_58292_49603400_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58952000();

   return behavior;
}

Behavior __58951320;

Behavior make__58951320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58951320 = behavior;
   behavior->owner = (Object)channel__bias_58290_54589340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[reg__0_48001140_channel__bias_58290_54589340_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58951480();

   return behavior;
}

Behavior __58951120;

Behavior make__58951120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58951120 = behavior;
   behavior->owner = (Object)channel__bias_58290_54589340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58303_52943500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   _58303_52943500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   _58303_52943500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(_58303_52943500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,_58303_52943500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58303_52943500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[_58303_52943500_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58951280();

   return behavior;
}

Scope makechannel__bias_58290_54589340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58290_54589340 = scope;
   scope->owner = (Object)layer__output_58_84_54629400;
   scope->name = "channel_bias:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48001140();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58291_54588900();
   scope->scopes[1] = makeraddr_58293_54588320();
   scope->scopes[2] = makewaddr_58296_54587640();
   scope->scopes[3] = makerinc_58299_54586600();
   scope->scopes[4] = makewinc_58302_54585260();
   scope->scopes[5] = makerdec_58305_54584180();
   scope->scopes[6] = makewdec_58309_54607760();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58952040();
   scope->behaviors[1] = make__58951780();
   scope->behaviors[2] = make__58951320();
   scope->behaviors[3] = make__58951120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58313_52844240;

SignalI reg__0_53409280_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makereg__0_53409280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53409280_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__z_58313_52844240;
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

Scope anum_58314_52843780;

Scope makeanum_58314_52843780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58314_52843780 = scope;
   scope->owner = (Object)channel__z_58313_52844240;
   scope->name = "anum:314";
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

Scope raddr_58316_52842900;

Scope makeraddr_58316_52842900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58316_52842900 = scope;
   scope->owner = (Object)channel__z_58313_52844240;
   scope->name = "raddr:316";
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

Scope waddr_58319_52842160;

Scope makewaddr_58319_52842160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58319_52842160 = scope;
   scope->owner = (Object)channel__z_58313_52844240;
   scope->name = "waddr:319";
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

Scope rinc_58322_52841240;

SignalI abus__r_52840600_rinc_58322_52841240_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeabus__r_52840600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52840600_rinc_58322_52841240_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rinc_58322_52841240;
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

Scope makerinc_58322_52841240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58322_52841240 = scope;
   scope->owner = (Object)channel__z_58313_52844240;
   scope->name = "rinc:322";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52840600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58325_52840380;

SignalI abus__w_52839640_winc_58325_52840380_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeabus__w_52839640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52839640_winc_58325_52840380_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)winc_58325_52840380;
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

Scope makewinc_58325_52840380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58325_52840380 = scope;
   scope->owner = (Object)channel__z_58313_52844240;
   scope->name = "winc:325";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52839640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58328_52839320;

SignalI abus__r_52838580_rdec_58328_52839320_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeabus__r_52838580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52838580_rdec_58328_52839320_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rdec_58328_52839320;
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

Scope makerdec_58328_52839320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58328_52839320 = scope;
   scope->owner = (Object)channel__z_58313_52844240;
   scope->name = "rdec:328";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52838580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58332_52838460;

SignalI abus__w_52927960_wdec_58332_52838460_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeabus__w_52927960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52927960_wdec_58332_52838460_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)wdec_58332_52838460;
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

Scope makewdec_58332_52838460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58332_52838460 = scope;
   scope->owner = (Object)channel__z_58313_52844240;
   scope->name = "wdec:332";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52927960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58971960;

Behavior make__58971960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58971960 = behavior;
   behavior->owner = (Object)channel__z_58313_52844240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53409280_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   reg__0_53409280_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   reg__0_53409280_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(reg__0_53409280_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,reg__0_53409280_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__0_53409280_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[reg__0_53409280_channel__z_58313_52844240_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58972140();

   return behavior;
}

Behavior __58971700;

Behavior make__58971700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58971700 = behavior;
   behavior->owner = (Object)channel__z_58313_52844240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_51936620_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   _58315_51936620_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   _58315_51936620_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(_58315_51936620_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,_58315_51936620_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58315_51936620_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[_58315_51936620_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58971900();

   return behavior;
}

Scope makechannel__z_58313_52844240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58313_52844240 = scope;
   scope->owner = (Object)layer__output_58_84_54629400;
   scope->name = "channel_z:313";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53409280();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58314_52843780();
   scope->scopes[1] = makeraddr_58316_52842900();
   scope->scopes[2] = makewaddr_58319_52842160();
   scope->scopes[3] = makerinc_58322_52841240();
   scope->scopes[4] = makewinc_58325_52840380();
   scope->scopes[5] = makerdec_58328_52839320();
   scope->scopes[6] = makewdec_58332_52838460();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58971960();
   scope->behaviors[1] = make__58971700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58336_46818760;

SignalI lv0_48552620_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makelv0_48552620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_48552620_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)add__n_58336_46818760;
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

SignalI rv0_49301420_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makerv0_49301420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_49301420_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)add__n_58336_46818760;
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

SignalI lvok0_49301340_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makelvok0_49301340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49301340_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)add__n_58336_46818760;
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

SignalI rvok0_49301300_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makervok0_49301300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49301300_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)add__n_58336_46818760;
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

SignalI run_49301200_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makerun_49301200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49301200_add__n_58336_46818760_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)add__n_58336_46818760;
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

Behavior __48117840;

Behavior make__48117840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48117840 = behavior;
   behavior->owner = (Object)add__n_58336_46818760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos += 1;
   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos = realloc(clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos*sizeof(Object));
clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos[clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos-1] = (Object)behavior;
   behavior->block = make__49300740();

   return behavior;
}

Scope makeadd__n_58336_46818760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58336_46818760 = scope;
   scope->owner = (Object)layer__output_58_84_54629400;
   scope->name = "add_n:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_48552620();
   scope->inners[1] = makerv0_49301420();
   scope->inners[2] = makelvok0_49301340();
   scope->inners[3] = makervok0_49301300();
   scope->inners[4] = makerun_49301200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48117840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __49739600;

Behavior make__49739600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49739600 = behavior;
   behavior->owner = (Object)layer__output_58_84_54629400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos += 1;
   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos = realloc(clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos*sizeof(Object));
clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos[clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos-1] = (Object)behavior;
   behavior->block = make__48772080();

   return behavior;
}

Behavior __52224400;

Behavior make__52224400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52224400 = behavior;
   behavior->owner = (Object)layer__output_58_84_54629400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos += 1;
   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos = realloc(clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos*sizeof(Object));
clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos[clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos-1] = (Object)behavior;
   behavior->block = make__49739340();

   return behavior;
}

Behavior __52937860;

Behavior make__52937860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52937860 = behavior;
   behavior->owner = (Object)layer__output_58_84_54629400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos += 1;
   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos = realloc(clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos*sizeof(Object));
clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos[clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos-1] = (Object)behavior;
   behavior->block = make__52224200();

   return behavior;
}

Behavior __58884900;

Behavior make__58884900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58884900 = behavior;
   behavior->owner = (Object)layer__output_58_84_54629400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_53004380_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   req_53004380_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   req_53004380_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(req_53004380_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,req_53004380_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
req_53004380_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[req_53004380_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_48116860_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   ack__mac_48116860_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   ack__mac_48116860_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(ack__mac_48116860_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,ack__mac_48116860_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
ack__mac_48116860_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[ack__mac_48116860_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58885200();

   return behavior;
}

Behavior __58903980;

Behavior make__58903980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58903980 = behavior;
   behavior->owner = (Object)layer__output_58_84_54629400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_48116880_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   ack_48116880_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   ack_48116880_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(ack_48116880_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,ack_48116880_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
ack_48116880_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[ack_48116880_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_52147680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   value__z0_52147680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   value__z0_52147680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(value__z0_52147680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,value__z0_52147680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
value__z0_52147680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[value__z0_52147680_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a10_52446740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   ack__a10_52446740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   ack__a10_52446740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(ack__a10_52446740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,ack__a10_52446740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
ack__a10_52446740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[ack__a10_52446740_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58885520();

   return behavior;
}

Behavior __58903820;

Behavior make__58903820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58903820 = behavior;
   behavior->owner = (Object)layer__output_58_84_54629400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_53006260_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   ack__mac_53006260_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   ack__mac_53006260_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(ack__mac_53006260_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,ack__mac_53006260_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
ack__mac_53006260_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[ack__mac_53006260_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_62103940_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   a_62103940_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   a_62103940_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(a_62103940_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,a_62103940_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
a_62103940_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[a_62103940_func10_58_840_61877160_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58885440();

   return behavior;
}

Scope makelayer__output_58_84_54629400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer__output_58_84_54629400 = scope;
   scope->owner = (Object)layer__output_58_840_52977000;
   scope->name = "layer_output:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter1_53006080();
   scope->systemIs[1] = makefunc10_62103800();
   scope->num_inners = 19;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_48117100();
   scope->inners[1] = makeack_48116880();
   scope->inners[2] = makeack__mac_48116860();
   scope->inners[3] = makeack__add_48116740();
   scope->inners[4] = make_58249_48769400();
   scope->inners[5] = make_58247_48769380();
   scope->inners[6] = make_58248_48768500();
   scope->inners[7] = make_58266_49236160();
   scope->inners[8] = make_58292_49603400();
   scope->inners[9] = make_58315_51936620();
   scope->inners[10] = makevalue__z0_52147680();
   scope->inners[11] = makevalue__a10_52446780();
   scope->inners[12] = makeflag__z0_52446760();
   scope->inners[13] = makeack__a10_52446740();
   scope->inners[14] = make_58251_52446680();
   scope->inners[15] = make_58252_52446560();
   scope->inners[16] = make_58253_52694180();
   scope->inners[17] = make_58303_52943500();
   scope->inners[18] = make_58304_52943040();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58235_54629060();
   scope->scopes[1] = makechannel__accum_58264_53145600();
   scope->scopes[2] = makemac__n1_58289_54124760();
   scope->scopes[3] = makechannel__bias_58290_54589340();
   scope->scopes[4] = makechannel__z_58313_52844240();
   scope->scopes[5] = makeadd__n_58336_46818760();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49739600();
   scope->behaviors[1] = make__52224400();
   scope->behaviors[2] = make__52937860();
   scope->behaviors[3] = make__58884900();
   scope->behaviors[4] = make__58903980();
   scope->behaviors[5] = make__58903820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer__output_58_840_52977000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer__output_58_840_52977000 = systemT;
systemT->owner = NULL;
   systemT->name = "layer_output:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_53004680();
   systemT->inputs[1] = makerst_53004660();
   systemT->inputs[2] = makefill_53004520();
   systemT->inputs[3] = makereq_53004380();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__1_53004160();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer__output_58_84_54629400();

   return systemT;
}