#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8410_68564740;

SignalI clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeclk_68562700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)counter_58_8410_68564740;
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

SignalI ack_68562680_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeack_68562680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_68562680_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)counter_58_8410_68564740;
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

SignalI rst_68562660_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makerst_68562660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_68562660_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)counter_58_8410_68564740;
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

SignalI ack__mac_68562620_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeack__mac_68562620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_68562620_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)counter_58_8410_68564740;
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

Block __68545440;

Block __68545220;

void code__68545220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58774260(),q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58774040(),ack__mac_68562620_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__68545220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __68545220 = block;
   block->owner = (Object)__68545440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__68545220;

   return block;
};

Block __68544540;

void code__68544540() {
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
                  src0 = q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58773400();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__68544540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __68544540 = block;
   block->owner = (Object)__68545440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__68544540;

   return block;
};

void code__68545440() {
   {
      Value cond = rst_68562660_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__68545220();
   }
   else if (value2integer(ack_68562680_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value)) {
  code__68544540();
   }
      }
   }
}

Block make__68545440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __68545440 = block;
   block->owner = (Object)__68543580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__68545440;

   return block;
};

Block __68543340;

Block __68542960;

void code__68542960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58772720(),q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__68542960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __68542960 = block;
   block->owner = (Object)__68543340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__68542960;

   return block;
};

void code__68543340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58772900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__68542960();
   }
      }
   }
}

Block make__68543340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __68543340 = block;
   block->owner = (Object)__68566820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__68543340;

   return block;
};

Block __68566660;

Block __68565740;

void code__68565740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58772380(),ack__mac_68562620_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__68565740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __68565740 = block;
   block->owner = (Object)__68566660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__68565740;

   return block;
};

void code__68566660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58772600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__68565740();
   }
      }
   }
}

Block make__68566660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __68566660 = block;
   block->owner = (Object)__68565060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__68566660;

   return block;
};

Value make__58774260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58774040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58773400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58772900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58772720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58772600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58772380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_841_68546040;

SignalI q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeq_68545620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)counter_58_841_68546040;
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

Behavior __68543580;

Behavior make__68543580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __68543580 = behavior;
   behavior->owner = (Object)counter_58_841_68546040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos += 1;
   clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos = realloc(clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos,clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos*sizeof(Object));
clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos[clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos-1] = (Object)behavior;
   behavior->block = make__68545440();

   return behavior;
}

Behavior __68566820;

Behavior make__68566820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __68566820 = behavior;
   behavior->owner = (Object)counter_58_841_68546040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_neg += 1;
   clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->neg = realloc(clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->neg,clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_neg*sizeof(Object));
clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->neg[clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_neg-1] = (Object)behavior;
   behavior->block = make__68543340();

   return behavior;
}

Behavior __68565060;

Behavior make__68565060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __68565060 = behavior;
   behavior->owner = (Object)counter_58_841_68546040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[q_68545620_counter_58_841_68546040_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__68566660();

   return behavior;
}

Scope makecounter_58_841_68546040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_841_68546040 = scope;
   scope->owner = (Object)counter_58_8410_68564740;
   scope->name = "counter:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_68545620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__68543580();
   scope->behaviors[1] = make__68566820();
   scope->behaviors[2] = make__68565060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8410_68564740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8410_68564740 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T10";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_68562700();
   systemT->inputs[1] = makeack_68562680();
   systemT->inputs[2] = makerst_68562660();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_68562620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_841_68546040();

   return systemT;
}