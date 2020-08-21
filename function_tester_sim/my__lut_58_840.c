#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_840_51990760;

SignalI address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420;

SignalI makeaddress_51988860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420 = signalI;
   signalI->owner = (Object)my__lut_58_840_51990760;
   signalI->name = "address";
   signalI->type = get_type_vector(get_type_bit(),6);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI base_52231780_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420;

SignalI makebase_52231780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52231780_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420 = signalI;
   signalI->owner = (Object)my__lut_58_840_51990760;
   signalI->name = "base";
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

SignalI next__data_42274820_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420;

SignalI makenext__data_42274820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_42274820_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420 = signalI;
   signalI->owner = (Object)my__lut_58_840_51990760;
   signalI->name = "next_data";
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

Block __51029320;

Block __51656060;

void code__51656060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value;
            idx = value2integer(make__51586920());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_42274820_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
}

Block make__51656060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51656060 = block;
   block->owner = (Object)__51029320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51656060;

   return block;
};

Block __51029160;

Block __51378460;

void code__51378460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value;
            idx = value2integer(address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_42274820_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
}

Block make__51378460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51378460 = block;
   block->owner = (Object)__51029160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51378460;

   return block;
};

Block __51029000;

void code__51029000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__51585720();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_42274820_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
}

Block make__51029000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51029000 = block;
   block->owner = (Object)__51029160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51029000;

   return block;
};

void code__51029160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),6),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__51586480();
               src1 = ({
                     Value src0,src1,src2,src3,src4;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__51586220();
                     src1 = make__51586200();
                     src2 = make__51586180();
                     src3 = make__51586160();
                     src4 = make__51586140();
                     concat_value(5,1,dst,src0,src1,src2,src3,src4);
                     set_value_pos(pool_state);
                  dst; });
               concat_value(2,1,dst,src0,src1);
               set_value_pos(pool_state);
            dst; });
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51378460();
   }
   else {
  code__51029000();
   }
      }
   }
}

Block make__51029160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51029160 = block;
   block->owner = (Object)__51029320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51029160;

   return block;
};

void code__51029320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51587040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51656060();
   }
   else {
  code__51029160();
   }
      }
   }
}

Block make__51029320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51029320 = block;
   block->owner = (Object)__51991080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51029320;

   return block;
};

Block __51591740;

void code__51591740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value;
            idx = value2integer(address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_52231780_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
}

Block make__51591740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51591740 = block;
   block->owner = (Object)__51590680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51591740;

   return block;
};

Value make__51588780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588760() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588740() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588720() {
   static unsigned long long data[] = { 10ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588700() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588680() {
   static unsigned long long data[] = { 13ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588660() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588640() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588620() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588600() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588580() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588560() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588540() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588500() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588460() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588360() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588340() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588320() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588300() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588280() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588260() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588240() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588200() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588180() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588160() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588140() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588120() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588100() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588080() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588060() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588040() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588020() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51588000() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587980() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587960() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587940() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587920() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587900() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587880() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587860() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587840() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587820() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587800() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587780() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587760() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587740() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587720() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587700() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587680() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587660() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587620() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587580() {
   static unsigned long long data[] = { 254ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587560() {
   static unsigned long long data[] = { 253ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587520() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587500() {
   static unsigned long long data[] = { 250ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587460() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587440() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51587040() {
   static unsigned long long data[] = { 63ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51586920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51586480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51586220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51586200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51586180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51586160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51586140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51585720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47585880;

SignalI lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420;

SignalI makelut_50595720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420 = signalI;
   signalI->owner = (Object)__47585880;
   signalI->name = "lut";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),64);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15,src16,src17,src18,src19,src20,src21,src22,src23,src24,src25,src26,src27,src28,src29,src30,src31,src32,src33,src34,src35,src36,src37,src38,src39,src40,src41,src42,src43,src44,src45,src46,src47,src48,src49,src50,src51,src52,src53,src54,src55,src56,src57,src58,src59,src60,src61,src62,src63;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__51588780();
         src1 = make__51588760();
         src2 = make__51588740();
         src3 = make__51588720();
         src4 = make__51588700();
         src5 = make__51588680();
         src6 = make__51588660();
         src7 = make__51588640();
         src8 = make__51588620();
         src9 = make__51588600();
         src10 = make__51588580();
         src11 = make__51588560();
         src12 = make__51588540();
         src13 = make__51588520();
         src14 = make__51588500();
         src15 = make__51588480();
         src16 = make__51588460();
         src17 = make__51588440();
         src18 = make__51588420();
         src19 = make__51588400();
         src20 = make__51588380();
         src21 = make__51588360();
         src22 = make__51588340();
         src23 = make__51588320();
         src24 = make__51588300();
         src25 = make__51588280();
         src26 = make__51588260();
         src27 = make__51588240();
         src28 = make__51588220();
         src29 = make__51588200();
         src30 = make__51588180();
         src31 = make__51588160();
         src32 = make__51588140();
         src33 = make__51588120();
         src34 = make__51588100();
         src35 = make__51588080();
         src36 = make__51588060();
         src37 = make__51588040();
         src38 = make__51588020();
         src39 = make__51588000();
         src40 = make__51587980();
         src41 = make__51587960();
         src42 = make__51587940();
         src43 = make__51587920();
         src44 = make__51587900();
         src45 = make__51587880();
         src46 = make__51587860();
         src47 = make__51587840();
         src48 = make__51587820();
         src49 = make__51587800();
         src50 = make__51587780();
         src51 = make__51587760();
         src52 = make__51587740();
         src53 = make__51587720();
         src54 = make__51587700();
         src55 = make__51587680();
         src56 = make__51587660();
         src57 = make__51587620();
         src58 = make__51587580();
         src59 = make__51587560();
         src60 = make__51587520();
         src61 = make__51587500();
         src62 = make__51587460();
         src63 = make__51587440();
         concat_value(64,0,dst,src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15,src16,src17,src18,src19,src20,src21,src22,src23,src24,src25,src26,src27,src28,src29,src30,src31,src32,src33,src34,src35,src36,src37,src38,src39,src40,src41,src42,src43,src44,src45,src46,src47,src48,src49,src50,src51,src52,src53,src54,src55,src56,src57,src58,src59,src60,src61,src62,src63);
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

Behavior __51991080;

Behavior make__51991080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51991080 = behavior;
   behavior->owner = (Object)__47585880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
   address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any,address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any[address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
   lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any,lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any[lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->block = make__51029320();

   return behavior;
}

Behavior __51590680;

Behavior make__51590680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51590680 = behavior;
   behavior->owner = (Object)__47585880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
   address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any,address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any[address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
   lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any,lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any[lut_50595720___47585880_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->block = make__51591740();

   return behavior;
}

Scope make__47585880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47585880 = scope;
   scope->owner = (Object)my__lut_58_840_51990760;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_50595720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51991080();
   scope->behaviors[1] = make__51590680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_840_51990760() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_840_51990760 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_51988860();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_52231780();
   systemT->outputs[1] = makenext__data_42274820();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47585880();

   return systemT;
}