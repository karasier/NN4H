#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8440_79389880;

SignalI address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeaddress_79428900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8440_79389880;
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

SignalI base_79475240_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makebase_79475240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_79475240_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8440_79389880;
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

SignalI next__data_79644480_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makenext__data_79644480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_79644480_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_8440_79389880;
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

Block __78354180;

Block __79128860;

void code__79128860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(make__79113100());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_79644480_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__79128860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79128860 = block;
   block->owner = (Object)__78354180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79128860;

   return block;
};

Block __78354020;

Block __78769320;

void code__78769320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_79644480_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78769320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78769320 = block;
   block->owner = (Object)__78354020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78769320;

   return block;
};

Block __78353860;

void code__78353860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79111920();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_79644480_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__78353860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78353860 = block;
   block->owner = (Object)__78354020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78353860;

   return block;
};

void code__78354020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__79112660();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__79112400();
                     src1 = make__79112380();
                     src2 = make__79112360();
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
    code__78769320();
   }
   else {
  code__78353860();
   }
      }
   }
}

Block make__78354020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78354020 = block;
   block->owner = (Object)__78354180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78354020;

   return block;
};

void code__78354180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79113220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79128860();
   }
   else {
  code__78354020();
   }
      }
   }
}

Block make__78354180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78354180 = block;
   block->owner = (Object)__79390200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78354180;

   return block;
};

Block __79116820;

void code__79116820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_79475240_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__79116820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79116820 = block;
   block->owner = (Object)__79115820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79116820;

   return block;
};

Value make__79113900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113880() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113860() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113840() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113820() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113800() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113780() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113760() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113740() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113720() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113700() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113680() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113660() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113640() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113620() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113600() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79113220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79113100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79112660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79112400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79112380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79112360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79111920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_844_64514180;

SignalI lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makelut_77805940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)my__lut_58_844_64514180;
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
         src0 = make__79113900();
         src1 = make__79113880();
         src2 = make__79113860();
         src3 = make__79113840();
         src4 = make__79113820();
         src5 = make__79113800();
         src6 = make__79113780();
         src7 = make__79113760();
         src8 = make__79113740();
         src9 = make__79113720();
         src10 = make__79113700();
         src11 = make__79113680();
         src12 = make__79113660();
         src13 = make__79113640();
         src14 = make__79113620();
         src15 = make__79113600();
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

Behavior __79390200;

Behavior make__79390200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79390200 = behavior;
   behavior->owner = (Object)my__lut_58_844_64514180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__78354180();

   return behavior;
}

Behavior __79115820;

Behavior make__79115820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79115820 = behavior;
   behavior->owner = (Object)my__lut_58_844_64514180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[address_79428900_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any += 1;
   lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any = realloc(lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any,lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->any[lut_77805940_my__lut_58_844_64514180_my__lut_58_8440_79389880_func0_58_842_55580420_func0_58_8420_66440540_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__79116820();

   return behavior;
}

Scope makemy__lut_58_844_64514180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_844_64514180 = scope;
   scope->owner = (Object)my__lut_58_8440_79389880;
   scope->name = "my_lut:T4";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_77805940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79390200();
   scope->behaviors[1] = make__79115820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8440_79389880() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8440_79389880 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T40";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_79428900();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_79475240();
   systemT->outputs[1] = makenext__data_79644480();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_844_64514180();

   return systemT;
}