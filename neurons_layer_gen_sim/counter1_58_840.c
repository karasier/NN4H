#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter1_58_840_52970280;

SignalI clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeclk_53006400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)counter1_58_840_52970280;
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

SignalI ack_53006380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeack_53006380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53006380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)counter1_58_840_52970280;
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

SignalI rst_53006300_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makerst_53006300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53006300_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)counter1_58_840_52970280;
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

SignalI ack__mac_53006260_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeack__mac_53006260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53006260_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)counter1_58_840_52970280;
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

Block __52941260;

Block __52940980;

void code__52940980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59121520(),q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59121460(),ack__mac_53006260_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52940980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52940980 = block;
   block->owner = (Object)__52941260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52940980;

   return block;
};

Block __52939880;

void code__52939880() {
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
                  src0 = q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59121220();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52939880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52939880 = block;
   block->owner = (Object)__52941260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52939880;

   return block;
};

void code__52941260() {
   {
      Value cond = rst_53006300_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52940980();
   }
   else if (value2integer(ack_53006380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value)) {
  code__52939880();
   }
      }
   }
}

Block make__52941260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52941260 = block;
   block->owner = (Object)__52938080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52941260;

   return block;
};

Block __52937960;

Block __52937560;

void code__52937560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59120920(),q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52937560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52937560 = block;
   block->owner = (Object)__52937960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52937560;

   return block;
};

void code__52937960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59121000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52937560();
   }
      }
   }
}

Block make__52937960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52937960 = block;
   block->owner = (Object)__52976680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52937960;

   return block;
};

Block __52976480;

Block __52976020;

void code__52976020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59120760(),ack__mac_53006260_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52976020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52976020 = block;
   block->owner = (Object)__52976480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52976020;

   return block;
};

void code__52976480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59120840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52976020();
   }
      }
   }
}

Block make__52976480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52976480 = block;
   block->owner = (Object)__52971300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52976480;

   return block;
};

Value make__59121520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59121460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59121220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59121000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59120920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59120840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59120760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter1_58_84_52942380;

SignalI q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240;

SignalI makeq_52941460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)counter1_58_84_52942380;
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

Behavior __52938080;

Behavior make__52938080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52938080 = behavior;
   behavior->owner = (Object)counter1_58_84_52942380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos += 1;
   clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos = realloc(clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos,clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos*sizeof(Object));
clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->pos[clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_pos-1] = (Object)behavior;
   behavior->block = make__52941260();

   return behavior;
}

Behavior __52976680;

Behavior make__52976680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52976680 = behavior;
   behavior->owner = (Object)counter1_58_84_52942380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_neg += 1;
   clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->neg = realloc(clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->neg,clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_neg*sizeof(Object));
clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->neg[clk_53006400_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_neg-1] = (Object)behavior;
   behavior->block = make__52937960();

   return behavior;
}

Behavior __52971300;

Behavior make__52971300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52971300 = behavior;
   behavior->owner = (Object)counter1_58_84_52942380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[q_52941460_counter1_58_84_52942380_counter1_58_840_52970280_layer__output_58_84_54629400_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__52976480();

   return behavior;
}

Scope makecounter1_58_84_52942380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter1_58_84_52942380 = scope;
   scope->owner = (Object)counter1_58_840_52970280;
   scope->name = "counter1:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_52941460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52938080();
   scope->behaviors[1] = make__52976680();
   scope->behaviors[2] = make__52971300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter1_58_840_52970280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter1_58_840_52970280 = systemT;
systemT->owner = NULL;
   systemT->name = "counter1:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_53006400();
   systemT->inputs[1] = makeack_53006380();
   systemT->inputs[2] = makerst_53006300();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_53006260();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter1_58_84_52942380();

   return systemT;
}