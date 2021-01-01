#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_55507400;

SignalI clk_55504520_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeclk_55504520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_55504520_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)counter_58_8400_55507400;
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

SignalI ack_55504480_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack_55504480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_55504480_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)counter_58_8400_55507400;
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

SignalI rst_55504460_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makerst_55504460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_55504460_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)counter_58_8400_55507400;
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

SignalI ack__mac_55504420_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__mac_55504420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_55504420_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)counter_58_8400_55507400;
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

Block __55487740;

Block __55487440;

void code__55487440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61398640(),q_55487880_counter_58_840_55488400_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61398580(),ack__mac_55504420_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55487440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55487440 = block;
   block->owner = (Object)__55487740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55487440;

   return block;
};

Block __55486240;

Block __55486000;

Block __55484920;

void code__55484920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61398180(),q_55487880_counter_58_840_55488400_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61398120(),ack__mac_55504420_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55484920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55484920 = block;
   block->owner = (Object)__55486000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55484920;

   return block;
};

void code__55486000() {
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
                  src0 = q_55487880_counter_58_840_55488400_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61398380();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_55487880_counter_58_840_55488400_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_55487880_counter_58_840_55488400_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61398260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55484920();
   }
      }
   }
}

Block make__55486000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55486000 = block;
   block->owner = (Object)__55486240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55486000;

   return block;
};

void code__55486240() {
 code__55486000();
}

Block make__55486240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55486240 = block;
   block->owner = (Object)__55487740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55486240;

   return block;
};

void code__55487740() {
   {
      Value cond = rst_55504460_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55487440();
   }
   else if (value2integer(ack_55504480_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value)) {
  code__55486240();
   }
      }
   }
}

Block make__55487740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55487740 = block;
   block->owner = (Object)__55507980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55487740;

   return block;
};

Value make__61398640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__61398580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61398380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61398260() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61398180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__61398120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_55488400;

SignalI q_55487880_counter_58_840_55488400_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeq_55487880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_55487880_counter_58_840_55488400_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)counter_58_840_55488400;
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

Behavior __55507980;

Behavior make__55507980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55507980 = behavior;
   behavior->owner = (Object)counter_58_840_55488400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55504520_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_55504520_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg += 1;
   clk_55504520_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg = realloc(clk_55504520_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg,clk_55504520_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg*sizeof(Object));
clk_55504520_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg[clk_55504520_counter_58_8400_55507400_layer1_58_84_54602660_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg-1] = (Object)behavior;
   behavior->block = make__55487740();

   return behavior;
}

Scope makecounter_58_840_55488400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_55488400 = scope;
   scope->owner = (Object)counter_58_8400_55507400;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_55487880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55507980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_55507400() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_55507400 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_55504520();
   systemT->inputs[1] = makeack_55504480();
   systemT->inputs[2] = makerst_55504460();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_55504420();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_55488400();

   return systemT;
}