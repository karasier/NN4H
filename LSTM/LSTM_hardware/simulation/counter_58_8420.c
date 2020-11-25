#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8420_66855040;

SignalI clk_55580980_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeclk_55580980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_55580980_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)counter_58_8420_66855040;
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

SignalI ack_55580960_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeack_55580960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_55580960_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)counter_58_8420_66855040;
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

SignalI rst_55580940_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makerst_55580940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_55580940_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)counter_58_8420_66855040;
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

SignalI ack__mac_55580900_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeack__mac_55580900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_55580900_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)counter_58_8420_66855040;
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

Block __66858080;

Block __66857860;

void code__66857860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79068120(),q_66858200_counter_58_842_66858580_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79068060(),ack__mac_55580900_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__66857860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66857860 = block;
   block->owner = (Object)__66858080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66857860;

   return block;
};

Block __66857180;

Block __66857020;

Block __66856220;

void code__66856220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79067640(),q_66858200_counter_58_842_66858580_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79067580(),ack__mac_55580900_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__66856220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66856220 = block;
   block->owner = (Object)__66857020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66856220;

   return block;
};

void code__66857020() {
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
                  src0 = q_66858200_counter_58_842_66858580_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79067860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_66858200_counter_58_842_66858580_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_66858200_counter_58_842_66858580_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79067720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66856220();
   }
      }
   }
}

Block make__66857020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66857020 = block;
   block->owner = (Object)__66857180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66857020;

   return block;
};

void code__66857180() {
 code__66857020();
}

Block make__66857180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66857180 = block;
   block->owner = (Object)__66858080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66857180;

   return block;
};

void code__66858080() {
   {
      Value cond = rst_55580940_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66857860();
   }
   else if (value2integer(ack_55580960_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->c_value)) {
  code__66857180();
   }
      }
   }
}

Block make__66858080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66858080 = block;
   block->owner = (Object)__66855360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66858080;

   return block;
};

Value make__79068120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__79068060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79067860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79067720() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79067640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__79067580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_842_66858580;

SignalI q_66858200_counter_58_842_66858580_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420;

SignalI makeq_66858200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_66858200_counter_58_842_66858580_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)counter_58_842_66858580;
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

Behavior __66855360;

Behavior make__66855360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66855360 = behavior;
   behavior->owner = (Object)counter_58_842_66858580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55580980_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420);
   clk_55580980_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg += 1;
   clk_55580980_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg = realloc(clk_55580980_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg,clk_55580980_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg*sizeof(Object));
clk_55580980_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->neg[clk_55580980_counter_58_8420_66855040_layer1_58_840_51780920_layer1_58_8400_73978880_tanh__neural__network_58_84_57553460_tanh__neural__network_58_840_75800820______58_84_52267520______58_840_76060420->num_neg-1] = (Object)behavior;
   behavior->block = make__66858080();

   return behavior;
}

Scope makecounter_58_842_66858580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_842_66858580 = scope;
   scope->owner = (Object)counter_58_8420_66855040;
   scope->name = "counter:T2";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_66858200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__66855360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8420_66855040() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8420_66855040 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T20";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_55580980();
   systemT->inputs[1] = makeack_55580960();
   systemT->inputs[2] = makerst_55580940();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_55580900();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_842_66858580();

   return systemT;
}