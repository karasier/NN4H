#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8410_53912240;

SignalI address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeaddress_53998500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8410_53912240;
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

SignalI base_54260540_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makebase_54260540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_54260540_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8410_53912240;
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

SignalI next__data_54659080_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makenext__data_54659080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54659080_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8410_53912240;
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

Block __66647320;

Block __51282400;

void code__51282400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(make__76451800());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_54659080_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__51282400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51282400 = block;
   block->owner = (Object)__66647320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51282400;

   return block;
};

Block __66647160;

Block __49891820;

void code__49891820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_54659080_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__49891820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49891820 = block;
   block->owner = (Object)__66647160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49891820;

   return block;
};

Block __66647000;

void code__66647000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__76450540();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_54659080_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__66647000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66647000 = block;
   block->owner = (Object)__66647160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66647000;

   return block;
};

void code__66647160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__76451360();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__76451080();
                     src1 = make__76451060();
                     src2 = make__76451040();
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
    code__49891820();
   }
   else {
  code__66647000();
   }
      }
   }
}

Block make__66647160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66647160 = block;
   block->owner = (Object)__66647320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66647160;

   return block;
};

void code__66647320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76451940();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51282400();
   }
   else {
  code__66647160();
   }
      }
   }
}

Block make__66647320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66647320 = block;
   block->owner = (Object)__53913000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66647320;

   return block;
};

Block __76455520;

void code__76455520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_54260540_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76455520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76455520 = block;
   block->owner = (Object)__76454440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76455520;

   return block;
};

Value make__76452520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452500() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452480() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452460() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452440() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452420() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452400() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452380() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452360() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452340() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452320() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452300() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452280() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452260() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452240() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76452220() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76451940() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76451800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76451360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76451080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76451060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76451040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76450540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_841_62211680;

SignalI lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelut_66312040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_841_62211680;
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
         src0 = make__76452520();
         src1 = make__76452500();
         src2 = make__76452480();
         src3 = make__76452460();
         src4 = make__76452440();
         src5 = make__76452420();
         src6 = make__76452400();
         src7 = make__76452380();
         src8 = make__76452360();
         src9 = make__76452340();
         src10 = make__76452320();
         src11 = make__76452300();
         src12 = make__76452280();
         src13 = make__76452260();
         src14 = make__76452240();
         src15 = make__76452220();
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

Behavior __53913000;

Behavior make__53913000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53913000 = behavior;
   behavior->owner = (Object)my__lut_58_841_62211680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__66647320();

   return behavior;
}

Behavior __76454440;

Behavior make__76454440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76454440 = behavior;
   behavior->owner = (Object)my__lut_58_841_62211680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[address_53998500_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[lut_66312040_my__lut_58_841_62211680_my__lut_58_8410_53912240_func0_58_840_54957200_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76455520();

   return behavior;
}

Scope makemy__lut_58_841_62211680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_841_62211680 = scope;
   scope->owner = (Object)my__lut_58_8410_53912240;
   scope->name = "my_lut:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_66312040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53913000();
   scope->behaviors[1] = make__76454440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8410_53912240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8410_53912240 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_53998500();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_54260540();
   systemT->outputs[1] = makenext__data_54659080();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_841_62211680();

   return systemT;
}