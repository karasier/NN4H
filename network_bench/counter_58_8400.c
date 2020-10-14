#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_50756060;

SignalI clk_50751560_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeclk_50751560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_50751560_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)counter_58_8400_50756060;
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

SignalI ack_50751480_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack_50751480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_50751480_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)counter_58_8400_50756060;
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

SignalI rst_50751460_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makerst_50751460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_50751460_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)counter_58_8400_50756060;
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

SignalI ack__mac_50751400_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeack__mac_50751400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50751400_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)counter_58_8400_50756060;
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

Block __50722380;

Block __50722000;

void code__50722000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49220620(),q_50722620_counter_58_840_50723320_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49220500(),ack__mac_50751400_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__50722000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50722000 = block;
   block->owner = (Object)__50722380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50722000;

   return block;
};

Block __50720100;

Block __50719760;

Block __50717080;

void code__50717080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__49219400(),ack__mac_50751400_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__50717080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50717080 = block;
   block->owner = (Object)__50719760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50717080;

   return block;
};

void code__50719760() {
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
                  src0 = q_50722620_counter_58_840_50723320_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49219760();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_50722620_counter_58_840_50723320_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_50722620_counter_58_840_50723320_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49219540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50717080();
   }
      }
   }
}

Block make__50719760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50719760 = block;
   block->owner = (Object)__50720100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50719760;

   return block;
};

void code__50720100() {
 code__50719760();
}

Block make__50720100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50720100 = block;
   block->owner = (Object)__50722380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50720100;

   return block;
};

void code__50722380() {
   {
      Value cond = rst_50751460_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50722000();
   }
   else if (value2integer(ack_50751480_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value)) {
  code__50720100();
   }
      }
   }
}

Block make__50722380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50722380 = block;
   block->owner = (Object)__50757000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50722380;

   return block;
};

Value make__49220620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__49220500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49219760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49219540() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49219400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_50723320;

SignalI q_50722620_counter_58_840_50723320_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeq_50722620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_50722620_counter_58_840_50723320_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)counter_58_840_50723320;
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

Behavior __50757000;

Behavior make__50757000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50757000 = behavior;
   behavior->owner = (Object)counter_58_840_50723320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50751560_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   clk_50751560_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg += 1;
   clk_50751560_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg = realloc(clk_50751560_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg,clk_50751560_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg*sizeof(Object));
clk_50751560_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->neg[clk_50751560_counter_58_8400_50756060_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_neg-1] = (Object)behavior;
   behavior->block = make__50722380();

   return behavior;
}

Scope makecounter_58_840_50723320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_50723320 = scope;
   scope->owner = (Object)counter_58_8400_50756060;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_50722620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50757000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_50756060() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_50756060 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_50751560();
   systemT->inputs[1] = makeack_50751480();
   systemT->inputs[2] = makerst_50751460();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_50751400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_50723320();

   return systemT;
}