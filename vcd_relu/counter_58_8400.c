#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_51631140;

SignalI clk_51649740_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeclk_51649740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_51649740_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)counter_58_8400_51631140;
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

SignalI ack_51649640_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeack_51649640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_51649640_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)counter_58_8400_51631140;
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

SignalI rst_51649580_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makerst_51649580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_51649580_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)counter_58_8400_51631140;
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

SignalI ack__mac_51649320_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeack__mac_51649320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_51649320_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)counter_58_8400_51631140;
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

Block __51616240;

Block __51614940;

void code__51614940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56001040(),q_51616980_counter_58_840_51594560_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56000940(),ack__mac_51649320_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51614940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51614940 = block;
   block->owner = (Object)__51616240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51614940;

   return block;
};

Block __51610960;

Block __51610320;

Block __51633280;

void code__51633280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57589700(),q_51616980_counter_58_840_51594560_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57589640(),ack__mac_51649320_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
}

Block make__51633280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51633280 = block;
   block->owner = (Object)__51610320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51633280;

   return block;
};

void code__51610320() {
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
                  src0 = q_51616980_counter_58_840_51594560_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56000680();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_51616980_counter_58_840_51594560_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_51616980_counter_58_840_51594560_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56000560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51633280();
   }
      }
   }
}

Block make__51610320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51610320 = block;
   block->owner = (Object)__51610960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51610320;

   return block;
};

void code__51610960() {
 code__51610320();
}

Block make__51610960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51610960 = block;
   block->owner = (Object)__51616240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51610960;

   return block;
};

void code__51616240() {
   {
      Value cond = rst_51649580_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51614940();
   }
   else if (value2integer(ack_51649640_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->c_value)) {
  code__51610960();
   }
      }
   }
}

Block make__51616240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51616240 = block;
   block->owner = (Object)__51631620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51616240;

   return block;
};

Value make__56001040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56000940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56000680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56000560() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57589700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57589640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_51594560;

SignalI q_51616980_counter_58_840_51594560_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660;

SignalI makeq_51616980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_51616980_counter_58_840_51594560_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660 = signalI;
   signalI->owner = (Object)counter_58_840_51594560;
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

Behavior __51631620;

Behavior make__51631620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51631620 = behavior;
   behavior->owner = (Object)counter_58_840_51594560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51649740_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660);
   clk_51649740_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_neg += 1;
   clk_51649740_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->neg = realloc(clk_51649740_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->neg,clk_51649740_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_neg*sizeof(Object));
clk_51649740_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->neg[clk_51649740_counter_58_8400_51631140_layer1_58_84_60436820_layer1_58_840_59246680_neural__network_58_84_51660080_neural__network_58_840_61238980_nn__simulator_58_84_46158680_nn__simulator_58_840_45764760______58_84_46161020______58_840_48292660->num_neg-1] = (Object)behavior;
   behavior->block = make__51616240();

   return behavior;
}

Scope makecounter_58_840_51594560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_51594560 = scope;
   scope->owner = (Object)counter_58_8400_51631140;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_51616980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51631620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_51631140() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_51631140 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_51649740();
   systemT->inputs[1] = makeack_51649640();
   systemT->inputs[2] = makerst_51649580();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_51649320();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_51594560();

   return systemT;
}