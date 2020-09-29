#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8410_56629100;

SignalI address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeaddress_56626180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)my__lut_58_8410_56629100;
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

SignalI base_56824340_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makebase_56824340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56824340_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)my__lut_58_8410_56629100;
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

SignalI next__data_57002580_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makenext__data_57002580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_57002580_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)my__lut_58_8410_56629100;
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

Block __50364960;

Block __56207060;

void code__56207060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            idx = value2integer(make__58366940());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_57002580_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56207060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56207060 = block;
   block->owner = (Object)__50364960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56207060;

   return block;
};

Block __50364700;

Block __50946060;

void code__50946060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            idx = value2integer(address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_57002580_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50946060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50946060 = block;
   block->owner = (Object)__50364700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50946060;

   return block;
};

Block __50388780;

void code__50388780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__58365320();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_57002580_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50388780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50388780 = block;
   block->owner = (Object)__50364700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50388780;

   return block;
};

void code__50364700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__58366260();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__58365780();
                     src1 = make__58365760();
                     src2 = make__58365740();
                     concat_value(3,1,dst,src0,src1,src2);
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
    code__50946060();
   }
   else {
  code__50388780();
   }
      }
   }
}

Block make__50364700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50364700 = block;
   block->owner = (Object)__50364960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50364700;

   return block;
};

void code__50364960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58367180();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56207060();
   }
   else {
  code__50364700();
   }
      }
   }
}

Block make__50364960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50364960 = block;
   block->owner = (Object)__56630220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50364960;

   return block;
};

Block __58347760;

void code__58347760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            idx = value2integer(address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_56824340_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__58347760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58347760 = block;
   block->owner = (Object)__58346380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58347760;

   return block;
};

Value make__58343460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367940() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367920() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367900() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367860() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367840() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367820() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367800() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367780() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367760() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367740() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367700() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367680() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367620() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367600() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367580() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58367180() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58366940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58366260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58365780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58365760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58365740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58365320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_841_48672460;

SignalI lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makelut_49415840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)my__lut_58_841_48672460;
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
         src0 = make__58343460();
         src1 = make__58367940();
         src2 = make__58367920();
         src3 = make__58367900();
         src4 = make__58367860();
         src5 = make__58367840();
         src6 = make__58367820();
         src7 = make__58367800();
         src8 = make__58367780();
         src9 = make__58367760();
         src10 = make__58367740();
         src11 = make__58367700();
         src12 = make__58367680();
         src13 = make__58367620();
         src14 = make__58367600();
         src15 = make__58367580();
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

Behavior __56630220;

Behavior make__56630220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56630220 = behavior;
   behavior->owner = (Object)my__lut_58_841_48672460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__50364960();

   return behavior;
}

Behavior __58346380;

Behavior make__58346380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58346380 = behavior;
   behavior->owner = (Object)my__lut_58_841_48672460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[address_56626180_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[lut_49415840_my__lut_58_841_48672460_my__lut_58_8410_56629100_func0_58_840_58973060_func0_58_8400_56986640_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__58347760();

   return behavior;
}

Scope makemy__lut_58_841_48672460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_841_48672460 = scope;
   scope->owner = (Object)my__lut_58_8410_56629100;
   scope->name = "my_lut:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_49415840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56630220();
   scope->behaviors[1] = make__58346380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8410_56629100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8410_56629100 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_56626180();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_56824340();
   systemT->outputs[1] = makenext__data_57002580();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_841_48672460();

   return systemT;
}