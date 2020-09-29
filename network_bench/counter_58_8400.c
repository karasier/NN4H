#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_66598620;

SignalI clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeclk_66593540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)counter_58_8400_66598620;
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

SignalI ack_66593520_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack_66593520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_66593520_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)counter_58_8400_66598620;
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

SignalI rst_66593500_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makerst_66593500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_66593500_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)counter_58_8400_66598620;
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

SignalI ack__mac_66593440_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack__mac_66593440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_66593440_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)counter_58_8400_66598620;
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

Block __66567880;

Block __66567560;

void code__66567560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58046340(),q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58044380(),ack__mac_66593440_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__66567560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66567560 = block;
   block->owner = (Object)__66567880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66567560;

   return block;
};

Block __66565800;

void code__66565800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58042220();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__66565800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66565800 = block;
   block->owner = (Object)__66567880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66565800;

   return block;
};

void code__66567880() {
   {
      Value cond = rst_66593500_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66567560();
   }
   else if (value2integer(ack_66593520_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value)) {
  code__66565800();
   }
      }
   }
}

Block make__66567880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66567880 = block;
   block->owner = (Object)__66564240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66567880;

   return block;
};

Block __66563880;

Block __66562780;

void code__66562780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58062580(),q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__66562780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66562780 = block;
   block->owner = (Object)__66563880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66562780;

   return block;
};

void code__66563880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58064820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66562780();
   }
      }
   }
}

Block make__66563880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66563880 = block;
   block->owner = (Object)__66561460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66563880;

   return block;
};

Block __66561280;

Block __66560520;

void code__66560520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58061280(),ack__mac_66593440_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__66560520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66560520 = block;
   block->owner = (Object)__66561280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66560520;

   return block;
};

void code__66561280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58062420();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66560520();
   }
      }
   }
}

Block make__66561280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66561280 = block;
   block->owner = (Object)__66599340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66561280;

   return block;
};

Value make__58046340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58044380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58042220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58064820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58062580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58062420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58061280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_66544380;

SignalI q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeq_66568000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)counter_58_840_66544380;
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

Behavior __66564240;

Behavior make__66564240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66564240 = behavior;
   behavior->owner = (Object)counter_58_840_66544380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos += 1;
   clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos = realloc(clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos,clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos*sizeof(Object));
clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos[clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos-1] = (Object)behavior;
   behavior->block = make__66567880();

   return behavior;
}

Behavior __66561460;

Behavior make__66561460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66561460 = behavior;
   behavior->owner = (Object)counter_58_840_66544380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_neg += 1;
   clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->neg = realloc(clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->neg,clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_neg*sizeof(Object));
clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->neg[clk_66593540_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_neg-1] = (Object)behavior;
   behavior->block = make__66563880();

   return behavior;
}

Behavior __66599340;

Behavior make__66599340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66599340 = behavior;
   behavior->owner = (Object)counter_58_840_66544380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[q_66568000_counter_58_840_66544380_counter_58_8400_66598620_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__66561280();

   return behavior;
}

Scope makecounter_58_840_66544380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_66544380 = scope;
   scope->owner = (Object)counter_58_8400_66598620;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_66568000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__66564240();
   scope->behaviors[1] = make__66561460();
   scope->behaviors[2] = make__66599340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_66598620() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_66598620 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_66593540();
   systemT->inputs[1] = makeack_66593520();
   systemT->inputs[2] = makerst_66593500();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_66593440();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_66544380();

   return systemT;
}