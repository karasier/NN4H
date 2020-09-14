#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8410_59473380;

SignalI address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeaddress_59471380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)my__lut_58_8410_59473380;
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

SignalI base_59573500_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makebase_59573500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_59573500_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)my__lut_58_8410_59473380;
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

SignalI next__data_59782220_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makenext__data_59782220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_59782220_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)my__lut_58_8410_59473380;
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

Block __58481640;

Block __59062020;

void code__59062020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
            idx = value2integer(make__61257700());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_59782220_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__59062020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59062020 = block;
   block->owner = (Object)__58481640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59062020;

   return block;
};

Block __58481480;

Block __58752580;

void code__58752580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
            idx = value2integer(address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_59782220_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__58752580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58752580 = block;
   block->owner = (Object)__58481480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58752580;

   return block;
};

Block __58481320;

void code__58481320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__61256500();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_59782220_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__58481320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58481320 = block;
   block->owner = (Object)__58481480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58481320;

   return block;
};

void code__58481480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__61257260();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__61257000();
                     src1 = make__61256980();
                     src2 = make__61256960();
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
    code__58752580();
   }
   else {
  code__58481320();
   }
      }
   }
}

Block make__58481480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58481480 = block;
   block->owner = (Object)__58481640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58481480;

   return block;
};

void code__58481640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61257860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59062020();
   }
   else {
  code__58481480();
   }
      }
   }
}

Block make__58481640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58481640 = block;
   block->owner = (Object)__59473700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58481640;

   return block;
};

Block __61237060;

void code__61237060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
            idx = value2integer(address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_59573500_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__61237060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61237060 = block;
   block->owner = (Object)__61236040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61237060;

   return block;
};

Value make__61258560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258540() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258500() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258360() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258340() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258320() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258300() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258280() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258260() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258240() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258220() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61258200() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61257860() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61257700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61257260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61257000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61256980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61256960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61256500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_841_59427660;

SignalI lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makelut_51704280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)my__lut_58_841_59427660;
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
         src0 = make__61258560();
         src1 = make__61258540();
         src2 = make__61258520();
         src3 = make__61258500();
         src4 = make__61258480();
         src5 = make__61258440();
         src6 = make__61258420();
         src7 = make__61258360();
         src8 = make__61258340();
         src9 = make__61258320();
         src10 = make__61258300();
         src11 = make__61258280();
         src12 = make__61258260();
         src13 = make__61258240();
         src14 = make__61258220();
         src15 = make__61258200();
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

Behavior __59473700;

Behavior make__59473700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59473700 = behavior;
   behavior->owner = (Object)my__lut_58_841_59427660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__58481640();

   return behavior;
}

Behavior __61236040;

Behavior make__61236040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61236040 = behavior;
   behavior->owner = (Object)my__lut_58_841_59427660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[address_59471380_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[lut_51704280_my__lut_58_841_59427660_my__lut_58_8410_59473380_func10_58_84_58986160_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__61237060();

   return behavior;
}

Scope makemy__lut_58_841_59427660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_841_59427660 = scope;
   scope->owner = (Object)my__lut_58_8410_59473380;
   scope->name = "my_lut:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_51704280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59473700();
   scope->behaviors[1] = make__61236040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8410_59473380() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8410_59473380 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_59471380();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_59573500();
   systemT->outputs[1] = makenext__data_59782220();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_841_59427660();

   return systemT;
}