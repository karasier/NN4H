#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8420_74313120;

SignalI clk_74311280_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeclk_74311280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_74311280_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)counter_58_8420_74313120;
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

SignalI ack_74311260_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack_74311260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_74311260_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)counter_58_8420_74313120;
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

SignalI rst_74311240_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makerst_74311240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_74311240_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)counter_58_8420_74313120;
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

SignalI ack__mac_74311200_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__mac_74311200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_74311200_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)counter_58_8420_74313120;
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

Block __74316160;

Block __74315940;

void code__74315940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51363100(),q_74316280_counter_58_842_74316660_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51362960(),ack__mac_74311200_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__74315940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74315940 = block;
   block->owner = (Object)__74316160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74315940;

   return block;
};

Block __74315260;

Block __74315100;

Block __74314300;

void code__74314300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51358480(),q_74316280_counter_58_842_74316660_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51356620(),ack__mac_74311200_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__74314300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74314300 = block;
   block->owner = (Object)__74315100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74314300;

   return block;
};

void code__74315100() {
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
                  src0 = q_74316280_counter_58_842_74316660_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51362080();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_74316280_counter_58_842_74316660_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_74316280_counter_58_842_74316660_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51360260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__74314300();
   }
      }
   }
}

Block make__74315100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74315100 = block;
   block->owner = (Object)__74315260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74315100;

   return block;
};

void code__74315260() {
 code__74315100();
}

Block make__74315260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74315260 = block;
   block->owner = (Object)__74316160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74315260;

   return block;
};

void code__74316160() {
   {
      Value cond = rst_74311240_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__74315940();
   }
   else if (value2integer(ack_74311260_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value)) {
  code__74315260();
   }
      }
   }
}

Block make__74316160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74316160 = block;
   block->owner = (Object)__74313440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74316160;

   return block;
};

Value make__51363100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__51362960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51362080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51360260() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51358480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__51356620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_842_74316660;

SignalI q_74316280_counter_58_842_74316660_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeq_74316280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_74316280_counter_58_842_74316660_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)counter_58_842_74316660;
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

Behavior __74313440;

Behavior make__74313440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __74313440 = behavior;
   behavior->owner = (Object)counter_58_842_74316660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_74311280_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_74311280_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg += 1;
   clk_74311280_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg = realloc(clk_74311280_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg,clk_74311280_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg*sizeof(Object));
clk_74311280_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg[clk_74311280_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg-1] = (Object)behavior;
   behavior->block = make__74316160();

   return behavior;
}

Scope makecounter_58_842_74316660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_842_74316660 = scope;
   scope->owner = (Object)counter_58_8420_74313120;
   scope->name = "counter:T2";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_74316280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__74313440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8420_74313120() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8420_74313120 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T20";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_74311280();
   systemT->inputs[1] = makeack_74311260();
   systemT->inputs[2] = makerst_74311240();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_74311200();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_842_74316660();

   return systemT;
}