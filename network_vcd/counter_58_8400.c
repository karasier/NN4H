#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_63843740;

SignalI clk_63841900_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeclk_63841900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_63841900_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)counter_58_8400_63843740;
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

SignalI ack_63841880_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeack_63841880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_63841880_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)counter_58_8400_63843740;
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

SignalI rst_63841860_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makerst_63841860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_63841860_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)counter_58_8400_63843740;
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

SignalI ack__mac_63841820_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeack__mac_63841820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_63841820_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)counter_58_8400_63843740;
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

Block __63846780;

Block __63846560;

void code__63846560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52591780(),q_63846900_counter_58_840_63847280_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52591700(),ack__mac_63841820_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__63846560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63846560 = block;
   block->owner = (Object)__63846780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63846560;

   return block;
};

Block __63845880;

Block __63845720;

Block __63844920;

void code__63844920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__52590480(),q_63846900_counter_58_840_63847280_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__52590340(),ack__mac_63841820_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__63844920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63844920 = block;
   block->owner = (Object)__63845720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63844920;

   return block;
};

void code__63845720() {
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
                  src0 = q_63846900_counter_58_840_63847280_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52591060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_63846900_counter_58_840_63847280_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_63846900_counter_58_840_63847280_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52590680();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63844920();
   }
      }
   }
}

Block make__63845720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63845720 = block;
   block->owner = (Object)__63845880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63845720;

   return block;
};

void code__63845880() {
 code__63845720();
}

Block make__63845880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63845880 = block;
   block->owner = (Object)__63846780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63845880;

   return block;
};

void code__63846780() {
   {
      Value cond = rst_63841860_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63846560();
   }
   else if (value2integer(ack_63841880_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value)) {
  code__63845880();
   }
      }
   }
}

Block make__63846780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63846780 = block;
   block->owner = (Object)__63844060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63846780;

   return block;
};

Value make__52591780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52591700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52591060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52590680() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52590480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52590340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_63847280;

SignalI q_63846900_counter_58_840_63847280_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeq_63846900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_63846900_counter_58_840_63847280_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)counter_58_840_63847280;
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

Behavior __63844060;

Behavior make__63844060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63844060 = behavior;
   behavior->owner = (Object)counter_58_840_63847280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_63841900_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   clk_63841900_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg += 1;
   clk_63841900_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg = realloc(clk_63841900_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg,clk_63841900_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg*sizeof(Object));
clk_63841900_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->neg[clk_63841900_counter_58_8400_63843740_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_neg-1] = (Object)behavior;
   behavior->block = make__63846780();

   return behavior;
}

Scope makecounter_58_840_63847280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_63847280 = scope;
   scope->owner = (Object)counter_58_8400_63843740;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_63846900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63844060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_63843740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_63843740 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_63841900();
   systemT->inputs[1] = makeack_63841880();
   systemT->inputs[2] = makerst_63841860();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_63841820();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_63847280();

   return systemT;
}