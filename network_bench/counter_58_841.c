#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_51651340;

SignalI clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeclk_51705040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)counter_58_841_51651340;
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

SignalI ack_51705020_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack_51705020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_51705020_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)counter_58_841_51651340;
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

SignalI rst_51705000_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makerst_51705000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_51705000_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)counter_58_841_51651340;
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

SignalI ack__mac_51704780_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack__mac_51704780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_51704780_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)counter_58_841_51651340;
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

Block __51656580;

Block __51656360;

void code__51656360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59102680(),q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59102580(),ack__mac_51704780_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51656360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51656360 = block;
   block->owner = (Object)__51656580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51656360;

   return block;
};

Block __51655540;

void code__51655540() {
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
                  src0 = q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59102360();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51655540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51655540 = block;
   block->owner = (Object)__51656580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51655540;

   return block;
};

void code__51656580() {
   {
      Value cond = rst_51705000_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51656360();
   }
   else if (value2integer(ack_51705020_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value)) {
  code__51655540();
   }
      }
   }
}

Block make__51656580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51656580 = block;
   block->owner = (Object)__51654460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51656580;

   return block;
};

Block __51654340;

Block __51653960;

void code__51653960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59102000(),q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51653960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51653960 = block;
   block->owner = (Object)__51654340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51653960;

   return block;
};

void code__51654340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59102080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51653960();
   }
      }
   }
}

Block make__51654340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51654340 = block;
   block->owner = (Object)__51653060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51654340;

   return block;
};

Block __51652760;

Block __51652380;

void code__51652380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59101780(),ack__mac_51704780_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__51652380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51652380 = block;
   block->owner = (Object)__51652760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51652380;

   return block;
};

void code__51652760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59101900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51652380();
   }
      }
   }
}

Block make__51652760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51652760 = block;
   block->owner = (Object)__51651700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51652760;

   return block;
};

Value make__59102680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59102580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59102360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59102080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59102000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59101900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59101780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_51657140;

SignalI q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeq_51656700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)counter_58_84_51657140;
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

Behavior __51654460;

Behavior make__51654460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51654460 = behavior;
   behavior->owner = (Object)counter_58_84_51657140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos += 1;
   clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos = realloc(clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos,clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos*sizeof(Object));
clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos[clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos-1] = (Object)behavior;
   behavior->block = make__51656580();

   return behavior;
}

Behavior __51653060;

Behavior make__51653060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51653060 = behavior;
   behavior->owner = (Object)counter_58_84_51657140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg += 1;
   clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg = realloc(clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg,clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg*sizeof(Object));
clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg[clk_51705040_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg-1] = (Object)behavior;
   behavior->block = make__51654340();

   return behavior;
}

Behavior __51651700;

Behavior make__51651700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51651700 = behavior;
   behavior->owner = (Object)counter_58_84_51657140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[q_51656700_counter_58_84_51657140_counter_58_841_51651340_layer0_58_84_51286360_layer0_58_840_57475580_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__51652760();

   return behavior;
}

Scope makecounter_58_84_51657140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_51657140 = scope;
   scope->owner = (Object)counter_58_841_51651340;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_51656700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51654460();
   scope->behaviors[1] = make__51653060();
   scope->behaviors[2] = make__51651700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_51651340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_51651340 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_51705040();
   systemT->inputs[1] = makeack_51705020();
   systemT->inputs[2] = makerst_51705000();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_51704780();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_51657140();

   return systemT;
}