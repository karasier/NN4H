#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_51306440;

SignalI addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040;

SignalI makeaddr_51302560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)my__lut_58_8400_51306440;
   signalI->name = "addr";
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

SignalI base_51577420_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040;

SignalI makebase_51577420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51577420_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)my__lut_58_8400_51306440;
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

SignalI next__data_51813080_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040;

SignalI makenext__data_51813080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51813080_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)my__lut_58_8400_51306440;
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

Block __48318680;

Block __50452180;

void code__50452180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value;
            idx = value2integer(make__54989640());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51813080_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__50452180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50452180 = block;
   block->owner = (Object)__48318680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50452180;

   return block;
};

Block __48336820;

void code__48336820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__54989440();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51813080_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__48336820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48336820 = block;
   block->owner = (Object)__48318680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48336820;

   return block;
};

void code__48318680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54989820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50452180();
   }
   else {
  code__48336820();
   }
      }
   }
}

Block make__48318680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48318680 = block;
   block->owner = (Object)__51118700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48318680;

   return block;
};

Block __54968340;

void code__54968340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value;
            idx = value2integer(addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_51577420_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__54968340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54968340 = block;
   block->owner = (Object)__54991900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54968340;

   return block;
};

Value make__54990440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990420() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990360() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990340() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990320() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990300() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990280() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990260() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990240() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990220() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990200() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990180() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990160() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54990140() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54989820() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54989640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54989440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __50449340;

SignalI lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040;

SignalI makelut_47484300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__50449340;
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
         src0 = make__54990440();
         src1 = make__54990420();
         src2 = make__54990400();
         src3 = make__54990380();
         src4 = make__54990360();
         src5 = make__54990340();
         src6 = make__54990320();
         src7 = make__54990300();
         src8 = make__54990280();
         src9 = make__54990260();
         src10 = make__54990240();
         src11 = make__54990220();
         src12 = make__54990200();
         src13 = make__54990180();
         src14 = make__54990160();
         src15 = make__54990140();
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

Behavior __51118700;

Behavior make__51118700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51118700 = behavior;
   behavior->owner = (Object)__50449340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040);
   addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any,addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any[addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040);
   lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any,lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any[lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__48318680();

   return behavior;
}

Behavior __54991900;

Behavior make__54991900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54991900 = behavior;
   behavior->owner = (Object)__50449340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040);
   addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any,addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any[addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040);
   lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any,lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any[lut_47484300___50449340_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__54968340();

   return behavior;
}

Scope make__50449340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50449340 = scope;
   scope->owner = (Object)my__lut_58_8400_51306440;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_47484300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51118700();
   scope->behaviors[1] = make__54991900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_51306440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_51306440 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_51302560();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_51577420();
   systemT->outputs[1] = makenext__data_51813080();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__50449340();

   return systemT;
}