#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_52367160;

SignalI clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeclk_52365120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)counter_58_841_52367160;
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

SignalI ack_52365100_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeack_52365100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_52365100_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)counter_58_841_52367160;
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

SignalI rst_52365080_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makerst_52365080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_52365080_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)counter_58_841_52367160;
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

SignalI ack__mac_52365040_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeack__mac_52365040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_52365040_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)counter_58_841_52367160;
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

Block __52347540;

Block __52347300;

void code__52347300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60120740(),q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60120680(),ack__mac_52365040_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52347300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52347300 = block;
   block->owner = (Object)__52347540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52347300;

   return block;
};

Block __52371060;

void code__52371060() {
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
                  src0 = q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60120280();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52371060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52371060 = block;
   block->owner = (Object)__52347540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52371060;

   return block;
};

void code__52347540() {
   {
      Value cond = rst_52365080_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52347300();
   }
   else if (value2integer(ack_52365100_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value)) {
  code__52371060();
   }
      }
   }
}

Block make__52347540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52347540 = block;
   block->owner = (Object)__52370140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52347540;

   return block;
};

Block __52370020;

Block __52369600;

void code__52369600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60120040(),q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52369600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52369600 = block;
   block->owner = (Object)__52370020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52369600;

   return block;
};

void code__52370020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60120120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52369600();
   }
      }
   }
}

Block make__52370020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52370020 = block;
   block->owner = (Object)__52368860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52370020;

   return block;
};

Block __52368740;

Block __52368360;

void code__52368360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60119880(),ack__mac_52365040_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52368360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52368360 = block;
   block->owner = (Object)__52368740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52368360;

   return block;
};

void code__52368740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60119960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52368360();
   }
      }
   }
}

Block make__52368740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52368740 = block;
   block->owner = (Object)__52367540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52368740;

   return block;
};

Value make__60120740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60120680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60120280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60120120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60120040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60119960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60119880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_52348120;

SignalI q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeq_52347660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)counter_58_84_52348120;
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

Behavior __52370140;

Behavior make__52370140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52370140 = behavior;
   behavior->owner = (Object)counter_58_84_52348120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos += 1;
   clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos = realloc(clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos,clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos*sizeof(Object));
clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos[clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos-1] = (Object)behavior;
   behavior->block = make__52347540();

   return behavior;
}

Behavior __52368860;

Behavior make__52368860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52368860 = behavior;
   behavior->owner = (Object)counter_58_84_52348120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_neg += 1;
   clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->neg = realloc(clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->neg,clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_neg*sizeof(Object));
clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->neg[clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_neg-1] = (Object)behavior;
   behavior->block = make__52370020();

   return behavior;
}

Behavior __52367540;

Behavior make__52367540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52367540 = behavior;
   behavior->owner = (Object)counter_58_84_52348120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[q_52347660_counter_58_84_52348120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__52368740();

   return behavior;
}

Scope makecounter_58_84_52348120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_52348120 = scope;
   scope->owner = (Object)counter_58_841_52367160;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_52347660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52370140();
   scope->behaviors[1] = make__52368860();
   scope->behaviors[2] = make__52367540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_52367160() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_52367160 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_52365120();
   systemT->inputs[1] = makeack_52365100();
   systemT->inputs[2] = makerst_52365080();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_52365040();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_52348120();

   return systemT;
}