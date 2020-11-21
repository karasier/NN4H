#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_64305440;

SignalI clk_64303600_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeclk_64303600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_64303600_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_8400_64305440;
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

SignalI ack_64303580_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack_64303580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_64303580_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_8400_64305440;
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

SignalI rst_64303560_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makerst_64303560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_64303560_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_8400_64305440;
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

SignalI ack__mac_64303520_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack__mac_64303520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_64303520_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_8400_64305440;
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

Block __64267560;

Block __64267340;

void code__64267340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78840560(),q_64267680_counter_58_840_64268060_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78840500(),ack__mac_64303520_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__64267340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64267340 = block;
   block->owner = (Object)__64267560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64267340;

   return block;
};

Block __64266660;

Block __64266500;

Block __64306620;

void code__64306620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78840060(),q_64267680_counter_58_840_64268060_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78840000(),ack__mac_64303520_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__64306620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64306620 = block;
   block->owner = (Object)__64266500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64306620;

   return block;
};

void code__64266500() {
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
                  src0 = q_64267680_counter_58_840_64268060_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78840300();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_64267680_counter_58_840_64268060_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_64267680_counter_58_840_64268060_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78840160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64306620();
   }
      }
   }
}

Block make__64266500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64266500 = block;
   block->owner = (Object)__64266660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64266500;

   return block;
};

void code__64266660() {
 code__64266500();
}

Block make__64266660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64266660 = block;
   block->owner = (Object)__64267560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64266660;

   return block;
};

void code__64267560() {
   {
      Value cond = rst_64303560_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64267340();
   }
   else if (value2integer(ack_64303580_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value)) {
  code__64266660();
   }
      }
   }
}

Block make__64267560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64267560 = block;
   block->owner = (Object)__64305760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64267560;

   return block;
};

Value make__78840560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__78840500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78840300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78840160() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78840060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__78840000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_64268060;

SignalI q_64267680_counter_58_840_64268060_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeq_64267680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_64267680_counter_58_840_64268060_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_840_64268060;
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

Behavior __64305760;

Behavior make__64305760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64305760 = behavior;
   behavior->owner = (Object)counter_58_840_64268060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_64303600_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_64303600_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_64303600_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg = realloc(clk_64303600_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg,clk_64303600_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_64303600_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg[clk_64303600_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__64267560();

   return behavior;
}

Scope makecounter_58_840_64268060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_64268060 = scope;
   scope->owner = (Object)counter_58_8400_64305440;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_64267680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__64305760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_64305440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_64305440 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_64303600();
   systemT->inputs[1] = makeack_64303580();
   systemT->inputs[2] = makerst_64303560();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_64303520();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_64268060();

   return systemT;
}