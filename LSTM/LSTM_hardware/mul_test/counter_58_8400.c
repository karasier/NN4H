#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_64615440;

SignalI clk_64613600_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeclk_64613600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_64613600_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)counter_58_8400_64615440;
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

SignalI ack_64613580_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeack_64613580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_64613580_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)counter_58_8400_64615440;
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

SignalI rst_64613560_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makerst_64613560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_64613560_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)counter_58_8400_64615440;
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

SignalI ack__mac_64613520_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeack__mac_64613520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_64613520_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)counter_58_8400_64615440;
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

Block __64512040;

Block __64618260;

void code__64618260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78823200(),q_64512160_counter_58_840_64512540_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78823140(),ack__mac_64613520_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__64618260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64618260 = block;
   block->owner = (Object)__64512040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64618260;

   return block;
};

Block __64617580;

Block __64617420;

Block __64616620;

void code__64616620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78822740(),q_64512160_counter_58_840_64512540_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78822680(),ack__mac_64613520_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__64616620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64616620 = block;
   block->owner = (Object)__64617420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64616620;

   return block;
};

void code__64617420() {
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
                  src0 = q_64512160_counter_58_840_64512540_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78822940();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_64512160_counter_58_840_64512540_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_64512160_counter_58_840_64512540_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78822820();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64616620();
   }
      }
   }
}

Block make__64617420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64617420 = block;
   block->owner = (Object)__64617580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64617420;

   return block;
};

void code__64617580() {
 code__64617420();
}

Block make__64617580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64617580 = block;
   block->owner = (Object)__64512040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64617580;

   return block;
};

void code__64512040() {
   {
      Value cond = rst_64613560_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64618260();
   }
   else if (value2integer(ack_64613580_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value)) {
  code__64617580();
   }
      }
   }
}

Block make__64512040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64512040 = block;
   block->owner = (Object)__64615760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64512040;

   return block;
};

Value make__78823200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__78823140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78822940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78822820() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78822740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__78822680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_64512540;

SignalI q_64512160_counter_58_840_64512540_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeq_64512160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_64512160_counter_58_840_64512540_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)counter_58_840_64512540;
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

Behavior __64615760;

Behavior make__64615760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64615760 = behavior;
   behavior->owner = (Object)counter_58_840_64512540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_64613600_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   clk_64613600_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_neg += 1;
   clk_64613600_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->neg = realloc(clk_64613600_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->neg,clk_64613600_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_neg*sizeof(Object));
clk_64613600_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->neg[clk_64613600_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_neg-1] = (Object)behavior;
   behavior->block = make__64512040();

   return behavior;
}

Scope makecounter_58_840_64512540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_64512540 = scope;
   scope->owner = (Object)counter_58_8400_64615440;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_64512160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__64615760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_64615440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_64615440 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_64613600();
   systemT->inputs[1] = makeack_64613580();
   systemT->inputs[2] = makerst_64613560();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_64613520();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_64512540();

   return systemT;
}