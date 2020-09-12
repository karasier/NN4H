#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter1_58_840_58629600;

SignalI clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeclk_58627760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)counter1_58_840_58629600;
   signalI->name = "clk";
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

SignalI ack_58627740_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeack_58627740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_58627740_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)counter1_58_840_58629600;
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

SignalI rst_58627720_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makerst_58627720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58627720_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)counter1_58_840_58629600;
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

SignalI ack__mac_58627680_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeack__mac_58627680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_58627680_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)counter1_58_840_58629600;
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

Block __58609460;

Block __58609240;

void code__58609240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60506200(),q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60506140(),ack__mac_58627680_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__58609240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58609240 = block;
   block->owner = (Object)__58609460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58609240;

   return block;
};

Block __58608560;

void code__58608560() {
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
                  src0 = q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60530480();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__58608560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58608560 = block;
   block->owner = (Object)__58609460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58608560;

   return block;
};

void code__58609460() {
   {
      Value cond = rst_58627720_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58609240();
   }
   else if (value2integer(ack_58627740_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value)) {
  code__58608560();
   }
      }
   }
}

Block make__58609460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58609460 = block;
   block->owner = (Object)__58607740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58609460;

   return block;
};

Block __58607620;

Block __58607240;

void code__58607240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60530240(),q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__58607240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58607240 = block;
   block->owner = (Object)__58607620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58607240;

   return block;
};

void code__58607620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60530320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58607240();
   }
      }
   }
}

Block make__58607620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58607620 = block;
   block->owner = (Object)__58606560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58607620;

   return block;
};

Block __58606440;

Block __58606060;

void code__58606060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60530080(),ack__mac_58627680_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__58606060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58606060 = block;
   block->owner = (Object)__58606440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58606060;

   return block;
};

void code__58606440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60530160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58606060();
   }
      }
   }
}

Block make__58606440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58606440 = block;
   block->owner = (Object)__58629920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58606440;

   return block;
};

Value make__60506200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60506140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60530480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60530320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60530240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60530160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60530080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter1_58_84_58609960;

SignalI q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeq_58609580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)counter1_58_84_58609960;
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

Behavior __58607740;

Behavior make__58607740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58607740 = behavior;
   behavior->owner = (Object)counter1_58_84_58609960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos += 1;
   clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos = realloc(clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos,clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos*sizeof(Object));
clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos[clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos-1] = (Object)behavior;
   behavior->block = make__58609460();

   return behavior;
}

Behavior __58606560;

Behavior make__58606560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58606560 = behavior;
   behavior->owner = (Object)counter1_58_84_58609960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_neg += 1;
   clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->neg = realloc(clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->neg,clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_neg*sizeof(Object));
clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->neg[clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_neg-1] = (Object)behavior;
   behavior->block = make__58607620();

   return behavior;
}

Behavior __58629920;

Behavior make__58629920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58629920 = behavior;
   behavior->owner = (Object)counter1_58_84_58609960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[q_58609580_counter1_58_84_58609960_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__58606440();

   return behavior;
}

Scope makecounter1_58_84_58609960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter1_58_84_58609960 = scope;
   scope->owner = (Object)counter1_58_840_58629600;
   scope->name = "counter1:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_58609580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58607740();
   scope->behaviors[1] = make__58606560();
   scope->behaviors[2] = make__58629920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter1_58_840_58629600() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter1_58_840_58629600 = systemT;
systemT->owner = NULL;
   systemT->name = "counter1:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58627760();
   systemT->inputs[1] = makeack_58627740();
   systemT->inputs[2] = makerst_58627720();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_58627680();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter1_58_84_58609960();

   return systemT;
}