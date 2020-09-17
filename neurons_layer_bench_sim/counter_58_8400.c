#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_58856540;

SignalI clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeclk_58854700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)counter_58_8400_58856540;
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

SignalI ack_58854680_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeack_58854680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_58854680_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)counter_58_8400_58856540;
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

SignalI rst_58854660_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makerst_58854660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58854660_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)counter_58_8400_58856540;
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

SignalI ack__mac_58854620_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeack__mac_58854620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_58854620_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)counter_58_8400_58856540;
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

Block __58836400;

Block __58836180;

void code__58836180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61401960(),q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61401900(),ack__mac_58854620_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__58836180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58836180 = block;
   block->owner = (Object)__58836400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58836180;

   return block;
};

Block __58835500;

void code__58835500() {
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
                  src0 = q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61401700();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__58835500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58835500 = block;
   block->owner = (Object)__58836400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58835500;

   return block;
};

void code__58836400() {
   {
      Value cond = rst_58854660_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58836180();
   }
   else if (value2integer(ack_58854680_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value)) {
  code__58835500();
   }
      }
   }
}

Block make__58836400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58836400 = block;
   block->owner = (Object)__58859220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58836400;

   return block;
};

Block __58859100;

Block __58858720;

void code__58858720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61401440(),q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__58858720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58858720 = block;
   block->owner = (Object)__58859100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58858720;

   return block;
};

void code__58859100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61401540();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58858720();
   }
      }
   }
}

Block make__58859100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58859100 = block;
   block->owner = (Object)__58858040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58859100;

   return block;
};

Block __58857920;

Block __58857540;

void code__58857540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61401240(),ack__mac_58854620_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__58857540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58857540 = block;
   block->owner = (Object)__58857920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58857540;

   return block;
};

void code__58857920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61401340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58857540();
   }
      }
   }
}

Block make__58857920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58857920 = block;
   block->owner = (Object)__58856860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58857920;

   return block;
};

Value make__61401960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__61401900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61401700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61401540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61401440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__61401340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61401240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_58836900;

SignalI q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeq_58836520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)counter_58_840_58836900;
   signalI->name = "q";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Behavior __58859220;

Behavior make__58859220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58859220 = behavior;
   behavior->owner = (Object)counter_58_840_58836900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos += 1;
   clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos = realloc(clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos,clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos*sizeof(Object));
clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos[clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos-1] = (Object)behavior;
   behavior->block = make__58836400();

   return behavior;
}

Behavior __58858040;

Behavior make__58858040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58858040 = behavior;
   behavior->owner = (Object)counter_58_840_58836900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_neg += 1;
   clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->neg = realloc(clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->neg,clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_neg*sizeof(Object));
clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->neg[clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_neg-1] = (Object)behavior;
   behavior->block = make__58859100();

   return behavior;
}

Behavior __58856860;

Behavior make__58856860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58856860 = behavior;
   behavior->owner = (Object)counter_58_840_58836900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[q_58836520_counter_58_840_58836900_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__58857920();

   return behavior;
}

Scope makecounter_58_840_58836900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_58836900 = scope;
   scope->owner = (Object)counter_58_8400_58856540;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_58836520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58859220();
   scope->behaviors[1] = make__58858040();
   scope->behaviors[2] = make__58856860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_58856540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_58856540 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58854700();
   systemT->inputs[1] = makeack_58854680();
   systemT->inputs[2] = makerst_58854660();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_58854620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_58836900();

   return systemT;
}