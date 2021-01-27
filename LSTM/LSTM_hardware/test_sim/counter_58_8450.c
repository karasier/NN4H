#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8450_176715760;

SignalI clk_176713400_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeclk_176713400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_176713400_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_8450_176715760;
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

SignalI ack_176713340_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeack_176713340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_176713340_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_8450_176715760;
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

SignalI rst_176713200_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makerst_176713200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_176713200_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_8450_176715760;
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

SignalI ack__mac_176713080_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeack__mac_176713080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_176713080_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_8450_176715760;
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

Block __176678620;

Block __176678380;

void code__176678380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__193355860(),q_176678800_counter_58_845_176679300_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__193355800(),ack__mac_176713080_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__176678380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176678380 = block;
   block->owner = (Object)__176678620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176678380;

   return block;
};

Block __176677560;

Block __176677360;

Block __176717220;

void code__176717220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__193379920(),q_176678800_counter_58_845_176679300_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__193379740(),ack__mac_176713080_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__176717220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176717220 = block;
   block->owner = (Object)__176677360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176717220;

   return block;
};

void code__176677360() {
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
                  src0 = q_176678800_counter_58_845_176679300_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__193380140();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),q_176678800_counter_58_845_176679300_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_176678800_counter_58_845_176679300_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__193380020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__176717220();
   }
      }
   }
}

Block make__176677360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176677360 = block;
   block->owner = (Object)__176677560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176677360;

   return block;
};

void code__176677560() {
 code__176677360();
}

Block make__176677560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176677560 = block;
   block->owner = (Object)__176678620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176677560;

   return block;
};

void code__176678620() {
   {
      Value cond = rst_176713200_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__176678380();
   }
   else if (value2integer(ack_176713340_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value)) {
  code__176677560();
   }
      }
   }
}

Block make__176678620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176678620 = block;
   block->owner = (Object)__176716160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176678620;

   return block;
};

Value make__193355860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),4),1,data);
}

Value make__193355800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__193380140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__193380020() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__193379920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),4),1,data);
}

Value make__193379740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_845_176679300;

SignalI q_176678800_counter_58_845_176679300_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeq_176678800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_176678800_counter_58_845_176679300_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)counter_58_845_176679300;
   signalI->name = "q";
   signalI->type = get_type_vector(get_type_bit(),4);
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

Behavior __176716160;

Behavior make__176716160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __176716160 = behavior;
   behavior->owner = (Object)counter_58_845_176679300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_176713400_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   clk_176713400_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_neg += 1;
   clk_176713400_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->neg = realloc(clk_176713400_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->neg,clk_176713400_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_neg*sizeof(Object));
clk_176713400_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->neg[clk_176713400_counter_58_8450_176715760_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_neg-1] = (Object)behavior;
   behavior->block = make__176678620();

   return behavior;
}

Scope makecounter_58_845_176679300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_845_176679300 = scope;
   scope->owner = (Object)counter_58_8450_176715760;
   scope->name = "counter:T5";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_176678800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__176716160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8450_176715760() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8450_176715760 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T50";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_176713400();
   systemT->inputs[1] = makeack_176713340();
   systemT->inputs[2] = makerst_176713200();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_176713080();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_845_176679300();

   return systemT;
}