#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__table_58_8400_47380400;

SignalI addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020;

SignalI makeaddr_47398380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020 = signalI;
   signalI->owner = (Object)my__table_58_8400_47380400;
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

SignalI base_47398240_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020;

SignalI makebase_47398240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47398240_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020 = signalI;
   signalI->owner = (Object)my__table_58_8400_47380400;
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

SignalI next__data_47398160_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020;

SignalI makenext__data_47398160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47398160_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020 = signalI;
   signalI->owner = (Object)my__table_58_8400_47380400;
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

Block __47313320;

Block __47310360;

void code__47310360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->c_value;
            idx = value2integer(addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47398160_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020);
      set_value_pos(pool_state);
   }
}

Block make__47310360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47310360 = block;
   block->owner = (Object)__47313320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47310360;

   return block;
};

Block __47313020;

void code__47313020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__49031140();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47398160_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020);
      set_value_pos(pool_state);
   }
}

Block make__47313020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47313020 = block;
   block->owner = (Object)__47313320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47313020;

   return block;
};

void code__47313320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49031480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47310360();
   }
   else {
  code__47313020();
   }
      }
   }
}

Block make__47313320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47313320 = block;
   block->owner = (Object)__47358240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47313320;

   return block;
};

Block __49034280;

void code__49034280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->c_value;
            idx = value2integer(addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_47398240_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020);
      set_value_pos(pool_state);
   }
}

Block make__49034280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49034280 = block;
   block->owner = (Object)__49033360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49034280;

   return block;
};

Value make__49032060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49032040() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49032020() {
   static unsigned long long data[] = { 5ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49032000() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49031980() {
   static unsigned long long data[] = { 10ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49031960() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49031940() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49031920() {
   static unsigned long long data[] = { 13ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49031900() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49031880() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49031860() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49031840() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49031820() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49031800() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49031780() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49031760() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49031480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49031140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47060140;

SignalI lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020;

SignalI makelut_47315180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020 = signalI;
   signalI->owner = (Object)__47060140;
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
         src0 = make__49032060();
         src1 = make__49032040();
         src2 = make__49032020();
         src3 = make__49032000();
         src4 = make__49031980();
         src5 = make__49031960();
         src6 = make__49031940();
         src7 = make__49031920();
         src8 = make__49031900();
         src9 = make__49031880();
         src10 = make__49031860();
         src11 = make__49031840();
         src12 = make__49031820();
         src13 = make__49031800();
         src14 = make__49031780();
         src15 = make__49031760();
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

Behavior __47358240;

Behavior make__47358240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47358240 = behavior;
   behavior->owner = (Object)__47060140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020);
   addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any += 1;
   addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->any = realloc(addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->any,addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any*sizeof(Object));
addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->any[addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020);
   lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any += 1;
   lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->any = realloc(lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->any,lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any*sizeof(Object));
lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->any[lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any-1] = (Object)behavior;
   behavior->block = make__47313320();

   return behavior;
}

Behavior __49033360;

Behavior make__49033360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49033360 = behavior;
   behavior->owner = (Object)__47060140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020);
   addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any += 1;
   addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->any = realloc(addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->any,addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any*sizeof(Object));
addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->any[addr_47398380_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020);
   lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any += 1;
   lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->any = realloc(lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->any,lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any*sizeof(Object));
lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->any[lut_47315180___47060140_my__table_58_8400_47380400___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any-1] = (Object)behavior;
   behavior->block = make__49034280();

   return behavior;
}

Scope make__47060140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47060140 = scope;
   scope->owner = (Object)my__table_58_8400_47380400;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_47315180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47358240();
   scope->behaviors[1] = make__49033360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__table_58_8400_47380400() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__table_58_8400_47380400 = systemT;
systemT->owner = NULL;
   systemT->name = "my_table:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_47398380();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_47398240();
   systemT->outputs[1] = makenext__data_47398160();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47060140();

   return systemT;
}