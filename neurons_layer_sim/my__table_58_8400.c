#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__table_58_8400_48510000;

SignalI addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700;

SignalI makeaddr_48508060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)my__table_58_8400_48510000;
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

SignalI base_48507960_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700;

SignalI makebase_48507960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48507960_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)my__table_58_8400_48510000;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI next__data_48507880_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700;

SignalI makenext__data_48507880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48507880_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)my__table_58_8400_48510000;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_bit(),8);
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

Block __48178860;

Block __48511220;

void code__48511220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value;
            idx = value2integer(addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_48507880_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
}

Block make__48511220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48511220 = block;
   block->owner = (Object)__48178860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48511220;

   return block;
};

Block __48512700;

void code__48512700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__45140240();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_48507880_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
}

Block make__48512700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48512700 = block;
   block->owner = (Object)__48178860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48512700;

   return block;
};

void code__48178860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__45140780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48511220();
   }
   else {
  code__48512700();
   }
      }
   }
}

Block make__48178860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48178860 = block;
   block->owner = (Object)__48510320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48178860;

   return block;
};

Block __45076880;

void code__45076880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value;
            idx = value2integer(addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_48507960_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
}

Block make__45076880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45076880 = block;
   block->owner = (Object)__45074920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45076880;

   return block;
};

Value make__45141700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141680() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141660() {
   static unsigned long long data[] = { 5ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141600() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141580() {
   static unsigned long long data[] = { 10ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141560() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141480() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141460() {
   static unsigned long long data[] = { 13ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141420() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141380() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141360() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141320() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141280() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141260() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141240() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45141220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__45140780() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45140240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __48184520;

SignalI lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700;

SignalI makelut_48179800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)__48184520;
   signalI->name = "lut";
   signalI->type = get_type_vector(get_type_vector(get_type_bit(),8),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__45141700();
         src1 = make__45141680();
         src2 = make__45141660();
         src3 = make__45141600();
         src4 = make__45141580();
         src5 = make__45141560();
         src6 = make__45141480();
         src7 = make__45141460();
         src8 = make__45141420();
         src9 = make__45141380();
         src10 = make__45141360();
         src11 = make__45141320();
         src12 = make__45141280();
         src13 = make__45141260();
         src14 = make__45141240();
         src15 = make__45141220();
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

Behavior __48510320;

Behavior make__48510320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48510320 = behavior;
   behavior->owner = (Object)__48184520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700);
   addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any,addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any[addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700);
   lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any,lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any[lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->block = make__48178860();

   return behavior;
}

Behavior __45074920;

Behavior make__45074920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45074920 = behavior;
   behavior->owner = (Object)__48184520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700);
   addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any,addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any[addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700);
   lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any,lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any[lut_48179800___48184520_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->block = make__45076880();

   return behavior;
}

Scope make__48184520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48184520 = scope;
   scope->owner = (Object)my__table_58_8400_48510000;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_48179800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48510320();
   scope->behaviors[1] = make__45074920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__table_58_8400_48510000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__table_58_8400_48510000 = systemT;
systemT->owner = NULL;
   systemT->name = "my_table:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_48508060();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_48507960();
   systemT->outputs[1] = makenext__data_48507880();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__48184520();

   return systemT;
}