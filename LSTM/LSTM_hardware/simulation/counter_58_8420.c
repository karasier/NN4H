#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8420_74243480;

SignalI clk_74241640_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeclk_74241640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_74241640_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_8420_74243480;
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

SignalI ack_74241620_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack_74241620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_74241620_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_8420_74243480;
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

SignalI rst_74241600_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makerst_74241600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_74241600_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_8420_74243480;
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

SignalI ack__mac_74241560_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__mac_74241560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_74241560_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_8420_74243480;
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

Block __74205600;

Block __74205380;

void code__74205380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55228880(),q_74205720_counter_58_842_74206100_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55228280(),ack__mac_74241560_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__74205380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74205380 = block;
   block->owner = (Object)__74205600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74205380;

   return block;
};

Block __74204700;

Block __74204540;

Block __74203740;

void code__74203740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55227320(),q_74205720_counter_58_842_74206100_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55227240(),ack__mac_74241560_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__74203740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74203740 = block;
   block->owner = (Object)__74204540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74203740;

   return block;
};

void code__74204540() {
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
                  src0 = q_74205720_counter_58_842_74206100_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55227780();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_74205720_counter_58_842_74206100_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_74205720_counter_58_842_74206100_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55227540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__74203740();
   }
      }
   }
}

Block make__74204540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74204540 = block;
   block->owner = (Object)__74204700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74204540;

   return block;
};

void code__74204700() {
 code__74204540();
}

Block make__74204700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74204700 = block;
   block->owner = (Object)__74205600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74204700;

   return block;
};

void code__74205600() {
   {
      Value cond = rst_74241600_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__74205380();
   }
   else if (value2integer(ack_74241620_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value)) {
  code__74204700();
   }
      }
   }
}

Block make__74205600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74205600 = block;
   block->owner = (Object)__74243800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74205600;

   return block;
};

Value make__55228880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__55228280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55227780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55227540() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55227320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__55227240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_842_74206100;

SignalI q_74205720_counter_58_842_74206100_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeq_74205720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_74205720_counter_58_842_74206100_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_842_74206100;
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

Behavior __74243800;

Behavior make__74243800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __74243800 = behavior;
   behavior->owner = (Object)counter_58_842_74206100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_74241640_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_74241640_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_74241640_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg = realloc(clk_74241640_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg,clk_74241640_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_74241640_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg[clk_74241640_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__74205600();

   return behavior;
}

Scope makecounter_58_842_74206100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_842_74206100 = scope;
   scope->owner = (Object)counter_58_8420_74243480;
   scope->name = "counter:T2";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_74205720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__74243800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8420_74243480() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8420_74243480 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T20";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_74241640();
   systemT->inputs[1] = makeack_74241620();
   systemT->inputs[2] = makerst_74241600();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_74241560();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_842_74206100();

   return systemT;
}