#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_59598020;

SignalI address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeaddress_59620520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_8400_59598020;
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

SignalI base_59730600_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makebase_59730600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_59730600_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_8400_59598020;
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

SignalI next__data_59840660_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makenext__data_59840660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_59840660_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_8400_59598020;
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

Block __58538880;

Block __59268940;

void code__59268940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(make__71875260());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_59840660_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59268940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59268940 = block;
   block->owner = (Object)__58538880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59268940;

   return block;
};

Block __58538720;

Block __58947900;

void code__58947900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_59840660_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__58947900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58947900 = block;
   block->owner = (Object)__58538720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58947900;

   return block;
};

Block __58538560;

void code__58538560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__71873580();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_59840660_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__58538560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58538560 = block;
   block->owner = (Object)__58538720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58538560;

   return block;
};

void code__58538720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__71874740();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__71874380();
                     src1 = make__71874360();
                     src2 = make__71874340();
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
    code__58947900();
   }
   else {
  code__58538560();
   }
      }
   }
}

Block make__58538720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58538720 = block;
   block->owner = (Object)__58538880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58538720;

   return block;
};

void code__58538880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71875380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59268940();
   }
   else {
  code__58538720();
   }
      }
   }
}

Block make__58538880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58538880 = block;
   block->owner = (Object)__59598420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58538880;

   return block;
};

Block __71855400;

void code__71855400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_59730600_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__71855400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __71855400 = block;
   block->owner = (Object)__71854120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__71855400;

   return block;
};

Value make__71876200() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71876180() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71876160() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71876140() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71876120() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71876060() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71876040() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71875940() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71875920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71875900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71875880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71875860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71875820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71875800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71875780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71875760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__71875380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71875260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71874740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71874380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71874360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71874340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71873580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_840_61007500;

SignalI lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makelut_53207740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_840_61007500;
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
         src0 = make__71876200();
         src1 = make__71876180();
         src2 = make__71876160();
         src3 = make__71876140();
         src4 = make__71876120();
         src5 = make__71876060();
         src6 = make__71876040();
         src7 = make__71875940();
         src8 = make__71875920();
         src9 = make__71875900();
         src10 = make__71875880();
         src11 = make__71875860();
         src12 = make__71875820();
         src13 = make__71875800();
         src14 = make__71875780();
         src15 = make__71875760();
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

Behavior __59598420;

Behavior make__59598420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59598420 = behavior;
   behavior->owner = (Object)my__lut_58_840_61007500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__58538880();

   return behavior;
}

Behavior __71854120;

Behavior make__71854120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __71854120 = behavior;
   behavior->owner = (Object)my__lut_58_840_61007500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[address_59620520_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[lut_53207740_my__lut_58_840_61007500_my__lut_58_8400_59598020_func1_58_84_60069100_func1_58_841_52273620_layer0_58_84_52407180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__71855400();

   return behavior;
}

Scope makemy__lut_58_840_61007500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_840_61007500 = scope;
   scope->owner = (Object)my__lut_58_8400_59598020;
   scope->name = "my_lut:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_53207740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59598420();
   scope->behaviors[1] = make__71854120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_59598020() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_59598020 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_59620520();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_59730600();
   systemT->outputs[1] = makenext__data_59840660();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_840_61007500();

   return systemT;
}