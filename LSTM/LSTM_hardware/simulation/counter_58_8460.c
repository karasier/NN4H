#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8460_210036760;

SignalI clk_210239360_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeclk_210239360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_210239360_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8460_210036760;
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

SignalI ack_210239340_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeack_210239340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_210239340_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8460_210036760;
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

SignalI rst_210239300_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makerst_210239300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_210239300_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8460_210036760;
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

SignalI ack__mac_210239220_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeack__mac_210239220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_210239220_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8460_210036760;
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

Block __210040960;

Block __210040720;

void code__210040720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__222760840(),q_210041080_counter_58_846_210041600_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__222760760(),ack__mac_210239220_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__210040720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __210040720 = block;
   block->owner = (Object)__210040960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__210040720;

   return block;
};

Block __210039840;

Block __210039680;

Block __210038540;

void code__210038540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__222760180(),q_210041080_counter_58_846_210041600_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__222760080(),ack__mac_210239220_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__210038540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __210038540 = block;
   block->owner = (Object)__210039680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__210038540;

   return block;
};

void code__210039680() {
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
                  src0 = q_210041080_counter_58_846_210041600_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__222760420();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_210041080_counter_58_846_210041600_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_210041080_counter_58_846_210041600_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__222760280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__210038540();
   }
      }
   }
}

Block make__210039680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __210039680 = block;
   block->owner = (Object)__210039840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__210039680;

   return block;
};

void code__210039840() {
 code__210039680();
}

Block make__210039840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __210039840 = block;
   block->owner = (Object)__210040960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__210039840;

   return block;
};

void code__210040960() {
   {
      Value cond = rst_210239300_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__210040720();
   }
   else if (value2integer(ack_210239340_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value)) {
  code__210039840();
   }
      }
   }
}

Block make__210040960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __210040960 = block;
   block->owner = (Object)__210037120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__210040960;

   return block;
};

Value make__222760840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__222760760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__222760420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__222760280() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__222760180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__222760080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_846_210041600;

SignalI q_210041080_counter_58_846_210041600_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeq_210041080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_210041080_counter_58_846_210041600_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_846_210041600;
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

Behavior __210037120;

Behavior make__210037120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __210037120 = behavior;
   behavior->owner = (Object)counter_58_846_210041600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_210239360_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   clk_210239360_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_neg += 1;
   clk_210239360_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->neg = realloc(clk_210239360_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->neg,clk_210239360_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_neg*sizeof(Object));
clk_210239360_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->neg[clk_210239360_counter_58_8460_210036760_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_neg-1] = (Object)behavior;
   behavior->block = make__210040960();

   return behavior;
}

Scope makecounter_58_846_210041600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_846_210041600 = scope;
   scope->owner = (Object)counter_58_8460_210036760;
   scope->name = "counter:T6";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_210041080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__210037120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8460_210036760() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8460_210036760 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T60";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_210239360();
   systemT->inputs[1] = makeack_210239340();
   systemT->inputs[2] = makerst_210239300();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_210239220();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_846_210041600();

   return systemT;
}