#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter1_58_840_52622560;

SignalI clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeclk_52620720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)counter1_58_840_52622560;
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

SignalI ack_52620700_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeack_52620700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_52620700_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)counter1_58_840_52622560;
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

SignalI rst_52620680_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makerst_52620680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_52620680_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)counter1_58_840_52622560;
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

SignalI ack__mac_52620640_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeack__mac_52620640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_52620640_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)counter1_58_840_52622560;
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

Block __53151280;

Block __53151060;

void code__53151060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60398260(),q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60398200(),ack__mac_52620640_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53151060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53151060 = block;
   block->owner = (Object)__53151280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53151060;

   return block;
};

Block __53150380;

void code__53150380() {
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
                  src0 = q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60398000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53150380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53150380 = block;
   block->owner = (Object)__53151280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53150380;

   return block;
};

void code__53151280() {
   {
      Value cond = rst_52620680_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53151060();
   }
   else if (value2integer(ack_52620700_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value)) {
  code__53150380();
   }
      }
   }
}

Block make__53151280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53151280 = block;
   block->owner = (Object)__52625240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53151280;

   return block;
};

Block __52625120;

Block __52624740;

void code__52624740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60397720(),q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__52624740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52624740 = block;
   block->owner = (Object)__52625120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52624740;

   return block;
};

void code__52625120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60397820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52624740();
   }
      }
   }
}

Block make__52625120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52625120 = block;
   block->owner = (Object)__52624060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52625120;

   return block;
};

Block __52623940;

Block __52623560;

void code__52623560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60397460(),ack__mac_52620640_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__52623560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52623560 = block;
   block->owner = (Object)__52623940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52623560;

   return block;
};

void code__52623940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60397600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52623560();
   }
      }
   }
}

Block make__52623940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52623940 = block;
   block->owner = (Object)__52622880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52623940;

   return block;
};

Value make__60398260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60398200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60398000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60397820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60397720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60397600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60397460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter1_58_84_53151780;

SignalI q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeq_53151400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)counter1_58_84_53151780;
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

Behavior __52625240;

Behavior make__52625240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52625240 = behavior;
   behavior->owner = (Object)counter1_58_84_53151780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos += 1;
   clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos = realloc(clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos,clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos*sizeof(Object));
clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos[clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos-1] = (Object)behavior;
   behavior->block = make__53151280();

   return behavior;
}

Behavior __52624060;

Behavior make__52624060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52624060 = behavior;
   behavior->owner = (Object)counter1_58_84_53151780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_neg += 1;
   clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->neg = realloc(clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->neg,clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_neg*sizeof(Object));
clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->neg[clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_neg-1] = (Object)behavior;
   behavior->block = make__52625120();

   return behavior;
}

Behavior __52622880;

Behavior make__52622880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52622880 = behavior;
   behavior->owner = (Object)counter1_58_84_53151780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[q_53151400_counter1_58_84_53151780_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__52623940();

   return behavior;
}

Scope makecounter1_58_84_53151780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter1_58_84_53151780 = scope;
   scope->owner = (Object)counter1_58_840_52622560;
   scope->name = "counter1:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_53151400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52625240();
   scope->behaviors[1] = make__52624060();
   scope->behaviors[2] = make__52622880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter1_58_840_52622560() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter1_58_840_52622560 = systemT;
systemT->owner = NULL;
   systemT->name = "counter1:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_52620720();
   systemT->inputs[1] = makeack_52620700();
   systemT->inputs[2] = makerst_52620680();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_52620640();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter1_58_84_53151780();

   return systemT;
}