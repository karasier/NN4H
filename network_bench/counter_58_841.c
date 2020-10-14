#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_47179460;

SignalI clk_47197760_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeclk_47197760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_47197760_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)counter_58_841_47179460;
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

SignalI ack_47197620_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack_47197620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_47197620_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)counter_58_841_47179460;
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

SignalI rst_47197600_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makerst_47197600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_47197600_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)counter_58_841_47179460;
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

SignalI ack__mac_47197420_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack__mac_47197420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_47197420_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)counter_58_841_47179460;
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

Block __47166000;

Block __47165480;

void code__47165480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60027460(),q_47166260_counter_58_84_47167100_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60027360(),ack__mac_47197420_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__47165480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47165480 = block;
   block->owner = (Object)__47166000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47165480;

   return block;
};

Block __47163440;

Block __47163180;

Block __47161820;

void code__47161820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60026720(),ack__mac_47197420_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__47161820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47161820 = block;
   block->owner = (Object)__47163180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47161820;

   return block;
};

void code__47163180() {
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
                  src0 = q_47166260_counter_58_84_47167100_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60027060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_47166260_counter_58_84_47167100_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_47166260_counter_58_84_47167100_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60026840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47161820();
   }
      }
   }
}

Block make__47163180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47163180 = block;
   block->owner = (Object)__47163440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47163180;

   return block;
};

void code__47163440() {
 code__47163180();
}

Block make__47163440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47163440 = block;
   block->owner = (Object)__47166000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47163440;

   return block;
};

void code__47166000() {
   {
      Value cond = rst_47197600_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47165480();
   }
   else if (value2integer(ack_47197620_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value)) {
  code__47163440();
   }
      }
   }
}

Block make__47166000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47166000 = block;
   block->owner = (Object)__47180820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47166000;

   return block;
};

Value make__60027460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60027360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60027060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60026840() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60026720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_47167100;

SignalI q_47166260_counter_58_84_47167100_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeq_47166260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_47166260_counter_58_84_47167100_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)counter_58_84_47167100;
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

Behavior __47180820;

Behavior make__47180820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47180820 = behavior;
   behavior->owner = (Object)counter_58_84_47167100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47197760_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_47197760_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg += 1;
   clk_47197760_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg = realloc(clk_47197760_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg,clk_47197760_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg*sizeof(Object));
clk_47197760_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg[clk_47197760_counter_58_841_47179460_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg-1] = (Object)behavior;
   behavior->block = make__47166000();

   return behavior;
}

Scope makecounter_58_84_47167100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_47167100 = scope;
   scope->owner = (Object)counter_58_841_47179460;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_47166260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47180820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_47179460() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_47179460 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_47197760();
   systemT->inputs[1] = makeack_47197620();
   systemT->inputs[2] = makerst_47197600();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_47197420();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_47167100();

   return systemT;
}