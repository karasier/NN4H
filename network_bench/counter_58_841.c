#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_48022360;

SignalI clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeclk_48042140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)counter_58_841_48022360;
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

SignalI ack_48042060_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack_48042060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_48042060_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)counter_58_841_48022360;
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

SignalI rst_48041900_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerst_48041900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_48041900_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)counter_58_841_48022360;
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

SignalI ack__mac_48041620_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__mac_48041620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_48041620_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)counter_58_841_48022360;
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

Block __48007360;

Block __48006440;

void code__48006440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52814840(),q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52814700(),ack__mac_48041620_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__48006440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48006440 = block;
   block->owner = (Object)__48007360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48006440;

   return block;
};

Block __48005380;

void code__48005380() {
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
                  src0 = q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52813860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__48005380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48005380 = block;
   block->owner = (Object)__48007360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48005380;

   return block;
};

void code__48007360() {
   {
      Value cond = rst_48041900_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48006440();
   }
   else if (value2integer(ack_48042060_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value)) {
  code__48005380();
   }
      }
   }
}

Block make__48007360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48007360 = block;
   block->owner = (Object)__48028380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48007360;

   return block;
};

Block __48028120;

Block __48027440;

void code__48027440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52837460(),q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__48027440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48027440 = block;
   block->owner = (Object)__48028120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48027440;

   return block;
};

void code__48028120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52837740();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48027440();
   }
      }
   }
}

Block make__48028120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48028120 = block;
   block->owner = (Object)__48026220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48028120;

   return block;
};

Block __48026020;

Block __48025340;

void code__48025340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52837200(),ack__mac_48041620_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__48025340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48025340 = block;
   block->owner = (Object)__48026020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48025340;

   return block;
};

void code__48026020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52837340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48025340();
   }
      }
   }
}

Block make__48026020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48026020 = block;
   block->owner = (Object)__48023180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48026020;

   return block;
};

Value make__52814840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52814700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52813860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52837740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52837460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52837340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52837200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_48008240;

SignalI q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeq_48007680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)counter_58_84_48008240;
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

Behavior __48028380;

Behavior make__48028380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48028380 = behavior;
   behavior->owner = (Object)counter_58_84_48008240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__48007360();

   return behavior;
}

Behavior __48026220;

Behavior make__48026220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48026220 = behavior;
   behavior->owner = (Object)counter_58_84_48008240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg += 1;
   clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg = realloc(clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg,clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg*sizeof(Object));
clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg[clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg-1] = (Object)behavior;
   behavior->block = make__48028120();

   return behavior;
}

Behavior __48023180;

Behavior make__48023180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48023180 = behavior;
   behavior->owner = (Object)counter_58_84_48008240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[q_48007680_counter_58_84_48008240_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__48026020();

   return behavior;
}

Scope makecounter_58_84_48008240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_48008240 = scope;
   scope->owner = (Object)counter_58_841_48022360;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_48007680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48028380();
   scope->behaviors[1] = make__48026220();
   scope->behaviors[2] = make__48023180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_48022360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_48022360 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_48042140();
   systemT->inputs[1] = makeack_48042060();
   systemT->inputs[2] = makerst_48041900();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_48041620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_48008240();

   return systemT;
}