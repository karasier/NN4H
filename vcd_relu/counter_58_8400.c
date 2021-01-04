#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_60146480;

SignalI clk_60169080_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeclk_60169080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_60169080_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)counter_58_8400_60146480;
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

SignalI ack_60169060_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeack_60169060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_60169060_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)counter_58_8400_60146480;
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

SignalI rst_60169040_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makerst_60169040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_60169040_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)counter_58_8400_60146480;
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

SignalI ack__mac_60169000_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeack__mac_60169000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_60169000_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)counter_58_8400_60146480;
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

Block __60149620;

Block __60149400;

void code__60149400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59759020(),q_60149740_counter_58_840_60150200_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59758940(),ack__mac_60169000_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__60149400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60149400 = block;
   block->owner = (Object)__60149620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60149400;

   return block;
};

Block __60148720;

Block __60148560;

Block __60147660;

void code__60147660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59758500(),q_60149740_counter_58_840_60150200_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59758440(),ack__mac_60169000_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__60147660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60147660 = block;
   block->owner = (Object)__60148560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60147660;

   return block;
};

void code__60148560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = q_60149740_counter_58_840_60150200_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59758700();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_60149740_counter_58_840_60150200_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_60149740_counter_58_840_60150200_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59758580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60147660();
   }
      }
   }
}

Block make__60148560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60148560 = block;
   block->owner = (Object)__60148720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60148560;

   return block;
};

void code__60148720() {
 code__60148560();
}

Block make__60148720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60148720 = block;
   block->owner = (Object)__60149620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60148720;

   return block;
};

void code__60149620() {
   {
      Value cond = rst_60169040_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60149400();
   }
   else if (value2integer(ack_60169060_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value)) {
  code__60148720();
   }
      }
   }
}

Block make__60149620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60149620 = block;
   block->owner = (Object)__60146800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60149620;

   return block;
};

Value make__59759020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59758940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59758700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59758580() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59758500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59758440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_60150200;

SignalI q_60149740_counter_58_840_60150200_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeq_60149740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_60149740_counter_58_840_60150200_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)counter_58_840_60150200;
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

Behavior __60146800;

Behavior make__60146800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60146800 = behavior;
   behavior->owner = (Object)counter_58_840_60150200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_60169080_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   clk_60169080_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg += 1;
   clk_60169080_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg = realloc(clk_60169080_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg,clk_60169080_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg*sizeof(Object));
clk_60169080_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->neg[clk_60169080_counter_58_8400_60146480_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_neg-1] = (Object)behavior;
   behavior->block = make__60149620();

   return behavior;
}

Scope makecounter_58_840_60150200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_60150200 = scope;
   scope->owner = (Object)counter_58_8400_60146480;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_60149740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60146800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_60146480() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_60146480 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_60169080();
   systemT->inputs[1] = makeack_60169060();
   systemT->inputs[2] = makerst_60169040();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_60169000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_60150200();

   return systemT;
}