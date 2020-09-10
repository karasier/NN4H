#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter1_58_840_54758160;

SignalI ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeack_54779240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)counter1_58_840_54758160;
   signalI->name = "ack";
   signalI->type = get_type_bit();
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

SignalI rst_54779220_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makerst_54779220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_54779220_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)counter1_58_840_54758160;
   signalI->name = "rst";
   signalI->type = get_type_bit();
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

SignalI ack__mac_54779140_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeack__mac_54779140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_54779140_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)counter1_58_840_54758160;
   signalI->name = "ack_mac";
   signalI->type = get_type_bit();
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

Block __54713320;

void code__54713320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60344700(),q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60344640(),ack__mac_54779140_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54713320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54713320 = block;
   block->owner = (Object)__54711100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54713320;

   return block;
};

Block __54710600;

void code__54710600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60344520();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54710600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54710600 = block;
   block->owner = (Object)__54707040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54710600;

   return block;
};

Block __54706760;

Block __54763240;

void code__54763240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60344320(),q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54763240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54763240 = block;
   block->owner = (Object)__54706760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54763240;

   return block;
};

void code__54706760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60344400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54763240();
   }
      }
   }
}

Block make__54706760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54706760 = block;
   block->owner = (Object)__54761700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54706760;

   return block;
};

Block __54761560;

Block __54760300;

void code__54760300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60344160(),ack__mac_54779140_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54760300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54760300 = block;
   block->owner = (Object)__54761560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54760300;

   return block;
};

Block __54761320;

void code__54761320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60344100(),ack__mac_54779140_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54761320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54761320 = block;
   block->owner = (Object)__54761560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54761320;

   return block;
};

void code__54761560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60344240();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54760300();
   }
   else {
  code__54761320();
   }
      }
   }
}

Block make__54761560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54761560 = block;
   block->owner = (Object)__54758700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54761560;

   return block;
};

Value make__60344700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60344640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60344520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60344400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60344320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60344240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60344160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60344100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter1_58_84_54690080;

SignalI q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeq_54713780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)counter1_58_84_54690080;
   signalI->name = "q";
   signalI->type = get_type_vector(get_type_bit(),1);
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

Behavior __54711100;

Behavior make__54711100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54711100 = behavior;
   behavior->owner = (Object)counter1_58_84_54690080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,rst_54779220_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   rst_54779220_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos += 1;
   rst_54779220_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos = realloc(rst_54779220_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos,rst_54779220_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
rst_54779220_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos[rst_54779220_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__54713320();

   return behavior;
}

Behavior __54707040;

Behavior make__54707040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54707040 = behavior;
   behavior->owner = (Object)counter1_58_84_54690080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos += 1;
   ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos = realloc(ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos,ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos[ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__54710600();

   return behavior;
}

Behavior __54761700;

Behavior make__54761700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54761700 = behavior;
   behavior->owner = (Object)counter1_58_84_54690080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_neg += 1;
   ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->neg = realloc(ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->neg,ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_neg*sizeof(Object));
ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->neg[ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_neg-1] = (Object)behavior;
   behavior->block = make__54706760();

   return behavior;
}

Behavior __54758700;

Behavior make__54758700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54758700 = behavior;
   behavior->owner = (Object)counter1_58_84_54690080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[q_54713780_counter1_58_84_54690080_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__54761560();

   return behavior;
}

Scope makecounter1_58_84_54690080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter1_58_84_54690080 = scope;
   scope->owner = (Object)counter1_58_840_54758160;
   scope->name = "counter1:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_54713780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54711100();
   scope->behaviors[1] = make__54707040();
   scope->behaviors[2] = make__54761700();
   scope->behaviors[3] = make__54758700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter1_58_840_54758160() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter1_58_840_54758160 = systemT;
systemT->owner = NULL;
   systemT->name = "counter1:T0";
   systemT->num_inputs = 2;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeack_54779240();
   systemT->inputs[1] = makerst_54779220();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_54779140();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter1_58_84_54690080();

   return systemT;
}