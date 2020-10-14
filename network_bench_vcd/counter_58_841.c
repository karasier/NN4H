#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_50476740;

SignalI clk_50474460_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeclk_50474460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_50474460_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)counter_58_841_50476740;
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

SignalI ack_50474420_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeack_50474420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_50474420_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)counter_58_841_50476740;
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

SignalI rst_50474400_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makerst_50474400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_50474400_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)counter_58_841_50476740;
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

SignalI ack__mac_50474320_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeack__mac_50474320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50474320_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)counter_58_841_50476740;
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

Block __50423740;

Block __50423520;

void code__50423520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52397300(),q_50423860_counter_58_84_50424300_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52397200(),ack__mac_50474320_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50423520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50423520 = block;
   block->owner = (Object)__50423740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50423520;

   return block;
};

Block __50422220;

Block __50421920;

Block __50478420;

void code__50478420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__52396040(),q_50423860_counter_58_84_50424300_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__52428540(),ack__mac_50474320_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50478420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50478420 = block;
   block->owner = (Object)__50421920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50478420;

   return block;
};

void code__50421920() {
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
                  src0 = q_50423860_counter_58_84_50424300_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52396820();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_50423860_counter_58_84_50424300_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_50423860_counter_58_84_50424300_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52396580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50478420();
   }
      }
   }
}

Block make__50421920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50421920 = block;
   block->owner = (Object)__50422220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50421920;

   return block;
};

void code__50422220() {
 code__50421920();
}

Block make__50422220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50422220 = block;
   block->owner = (Object)__50423740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50422220;

   return block;
};

void code__50423740() {
   {
      Value cond = rst_50474400_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50423520();
   }
   else if (value2integer(ack_50474420_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value)) {
  code__50422220();
   }
      }
   }
}

Block make__50423740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50423740 = block;
   block->owner = (Object)__50477200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50423740;

   return block;
};

Value make__52397300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52397200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52396820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52396580() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52396040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52428540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_50424300;

SignalI q_50423860_counter_58_84_50424300_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeq_50423860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_50423860_counter_58_84_50424300_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)counter_58_84_50424300;
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

Behavior __50477200;

Behavior make__50477200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50477200 = behavior;
   behavior->owner = (Object)counter_58_84_50424300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50474460_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   clk_50474460_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_neg += 1;
   clk_50474460_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->neg = realloc(clk_50474460_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->neg,clk_50474460_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_neg*sizeof(Object));
clk_50474460_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->neg[clk_50474460_counter_58_841_50476740_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_neg-1] = (Object)behavior;
   behavior->block = make__50423740();

   return behavior;
}

Scope makecounter_58_84_50424300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_50424300 = scope;
   scope->owner = (Object)counter_58_841_50476740;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_50423860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50477200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_50476740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_50476740 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_50474460();
   systemT->inputs[1] = makeack_50474420();
   systemT->inputs[2] = makerst_50474400();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_50474320();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_50424300();

   return systemT;
}