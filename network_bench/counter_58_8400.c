#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_60303700;

SignalI clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeclk_60301760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)counter_58_8400_60303700;
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

SignalI ack_60301740_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack_60301740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_60301740_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)counter_58_8400_60303700;
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

SignalI rst_60301720_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makerst_60301720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_60301720_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)counter_58_8400_60303700;
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

SignalI ack__mac_60301680_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack__mac_60301680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_60301680_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)counter_58_8400_60303700;
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

Block __60308360;

Block __60308080;

void code__60308080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59676320(),q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59676260(),ack__mac_60301680_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__60308080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60308080 = block;
   block->owner = (Object)__60308360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60308080;

   return block;
};

Block __60307400;

void code__60307400() {
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
                  src0 = q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59676000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__60307400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60307400 = block;
   block->owner = (Object)__60308360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60307400;

   return block;
};

void code__60308360() {
   {
      Value cond = rst_60301720_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60308080();
   }
   else if (value2integer(ack_60301740_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value)) {
  code__60307400();
   }
      }
   }
}

Block make__60308360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60308360 = block;
   block->owner = (Object)__60306580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60308360;

   return block;
};

Block __60306460;

Block __60305980;

void code__60305980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59675740(),q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__60305980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60305980 = block;
   block->owner = (Object)__60306460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60305980;

   return block;
};

void code__60306460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59675840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60305980();
   }
      }
   }
}

Block make__60306460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60306460 = block;
   block->owner = (Object)__60305300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60306460;

   return block;
};

Block __60305180;

Block __60304800;

void code__60304800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59675540(),ack__mac_60301680_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__60304800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60304800 = block;
   block->owner = (Object)__60305180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60304800;

   return block;
};

void code__60305180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59675640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60304800();
   }
      }
   }
}

Block make__60305180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60305180 = block;
   block->owner = (Object)__60304080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60305180;

   return block;
};

Value make__59676320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59676260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59676000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59675840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59675740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59675640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59675540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_60308900;

SignalI q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeq_60308520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)counter_58_840_60308900;
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

Behavior __60306580;

Behavior make__60306580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60306580 = behavior;
   behavior->owner = (Object)counter_58_840_60308900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos += 1;
   clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos = realloc(clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos,clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos*sizeof(Object));
clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos[clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos-1] = (Object)behavior;
   behavior->block = make__60308360();

   return behavior;
}

Behavior __60305300;

Behavior make__60305300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60305300 = behavior;
   behavior->owner = (Object)counter_58_840_60308900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg += 1;
   clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg = realloc(clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg,clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg*sizeof(Object));
clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg[clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg-1] = (Object)behavior;
   behavior->block = make__60306460();

   return behavior;
}

Behavior __60304080;

Behavior make__60304080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60304080 = behavior;
   behavior->owner = (Object)counter_58_840_60308900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[q_60308520_counter_58_840_60308900_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__60305180();

   return behavior;
}

Scope makecounter_58_840_60308900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_60308900 = scope;
   scope->owner = (Object)counter_58_8400_60303700;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_60308520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60306580();
   scope->behaviors[1] = make__60305300();
   scope->behaviors[2] = make__60304080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_60303700() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_60303700 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_60301760();
   systemT->inputs[1] = makeack_60301740();
   systemT->inputs[2] = makerst_60301720();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_60301680();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_60308900();

   return systemT;
}