#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_845_55261940;

SignalI address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeaddress_55259500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_845_55261940;
   signalI->name = "address";
   signalI->type = get_type_vector(get_type_bit(),4);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI base_55417680_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makebase_55417680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_55417680_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_845_55261940;
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

SignalI next__data_55513560_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makenext__data_55513560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_55513560_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_845_55261940;
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

Block __53706560;

Block __54775380;

void code__54775380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(make__75818380());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_55513560_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54775380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54775380 = block;
   block->owner = (Object)__53706560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54775380;

   return block;
};

Block __53706360;

Block __54116580;

void code__54116580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_55513560_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54116580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54116580 = block;
   block->owner = (Object)__53706360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54116580;

   return block;
};

Block __53706180;

void code__53706180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__75817160();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_55513560_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53706180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53706180 = block;
   block->owner = (Object)__53706360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53706180;

   return block;
};

void code__53706360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__75817920();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__75817660();
                     src1 = make__75817640();
                     src2 = make__75817620();
                     concat_value(3,1,dst,src0,src1,src2);
                     set_value_pos(pool_state);
                  dst; });
               concat_value(2,1,dst,src0,src1);
               set_value_pos(pool_state);
            dst; });
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54116580();
   }
   else {
  code__53706180();
   }
      }
   }
}

Block make__53706360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53706360 = block;
   block->owner = (Object)__53706560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53706360;

   return block;
};

void code__53706560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__75818500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54775380();
   }
   else {
  code__53706360();
   }
      }
   }
}

Block make__53706560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53706560 = block;
   block->owner = (Object)__55262340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53706560;

   return block;
};

Block __75822080;

void code__75822080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_55417680_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__75822080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75822080 = block;
   block->owner = (Object)__75821000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75822080;

   return block;
};

Value make__75819080() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75819060() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75819040() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75819020() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75819000() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75818980() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75818960() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75818940() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75818920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75818900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75818880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75818860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75818840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75818820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75818800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75818780() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__75818500() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75818380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__75817920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75817660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75817640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75817620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__75817160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_53669980;

SignalI lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelut_51331480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_84_53669980;
   signalI->name = "lut";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__75819080();
         src1 = make__75819060();
         src2 = make__75819040();
         src3 = make__75819020();
         src4 = make__75819000();
         src5 = make__75818980();
         src6 = make__75818960();
         src7 = make__75818940();
         src8 = make__75818920();
         src9 = make__75818900();
         src10 = make__75818880();
         src11 = make__75818860();
         src12 = make__75818840();
         src13 = make__75818820();
         src14 = make__75818800();
         src15 = make__75818780();
         concat_value(16,0,dst,src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15);
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

Behavior __55262340;

Behavior make__55262340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55262340 = behavior;
   behavior->owner = (Object)my__lut_58_84_53669980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__53706560();

   return behavior;
}

Behavior __75821000;

Behavior make__75821000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75821000 = behavior;
   behavior->owner = (Object)my__lut_58_84_53669980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[address_55259500_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[lut_51331480_my__lut_58_84_53669980_my__lut_58_845_55261940_func0_58_84_51239420_func0_58_843_55150800_layer0_58_84_55080220_layer0_58_841_51273600_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__75822080();

   return behavior;
}

Scope makemy__lut_58_84_53669980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_53669980 = scope;
   scope->owner = (Object)my__lut_58_845_55261940;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_51331480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55262340();
   scope->behaviors[1] = make__75821000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_845_55261940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_845_55261940 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T5";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_55259500();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_55417680();
   systemT->outputs[1] = makenext__data_55513560();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_53669980();

   return systemT;
}