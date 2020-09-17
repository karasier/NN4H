#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter1_58_840_60095900;

SignalI clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeclk_60094060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)counter1_58_840_60095900;
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

SignalI ack_60094040_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeack_60094040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_60094040_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)counter1_58_840_60095900;
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

SignalI rst_60094020_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makerst_60094020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_60094020_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)counter1_58_840_60095900;
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

SignalI ack__mac_60093980_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeack__mac_60093980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_60093980_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)counter1_58_840_60095900;
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

Block __60075760;

Block __60075540;

void code__60075540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53299960(),q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53299860(),ack__mac_60093980_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__60075540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60075540 = block;
   block->owner = (Object)__60075760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60075540;

   return block;
};

Block __60074860;

void code__60074860() {
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
                  src0 = q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53299480();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__60074860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60074860 = block;
   block->owner = (Object)__60075760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60074860;

   return block;
};

void code__60075760() {
   {
      Value cond = rst_60094020_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60075540();
   }
   else if (value2integer(ack_60094040_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value)) {
  code__60074860();
   }
      }
   }
}

Block make__60075760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60075760 = block;
   block->owner = (Object)__60074040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60075760;

   return block;
};

Block __60073920;

Block __60073540;

void code__60073540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53299020(),q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__60073540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60073540 = block;
   block->owner = (Object)__60073920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60073540;

   return block;
};

void code__60073920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53299160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60073540();
   }
      }
   }
}

Block make__60073920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60073920 = block;
   block->owner = (Object)__60072860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60073920;

   return block;
};

Block __60072740;

Block __60072360;

void code__60072360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53298600(),ack__mac_60093980_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__60072360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60072360 = block;
   block->owner = (Object)__60072740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60072360;

   return block;
};

void code__60072740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53298820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60072360();
   }
      }
   }
}

Block make__60072740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60072740 = block;
   block->owner = (Object)__60096220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60072740;

   return block;
};

Value make__53299960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__53299860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53299480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53299160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53299020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__53298820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53298600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter1_58_84_60076260;

SignalI q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160;

SignalI makeq_60075880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)counter1_58_84_60076260;
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

Behavior __60074040;

Behavior make__60074040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60074040 = behavior;
   behavior->owner = (Object)counter1_58_84_60076260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos += 1;
   clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos = realloc(clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos,clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos*sizeof(Object));
clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->pos[clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_pos-1] = (Object)behavior;
   behavior->block = make__60075760();

   return behavior;
}

Behavior __60072860;

Behavior make__60072860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60072860 = behavior;
   behavior->owner = (Object)counter1_58_84_60076260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_neg += 1;
   clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->neg = realloc(clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->neg,clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_neg*sizeof(Object));
clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->neg[clk_60094060_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_neg-1] = (Object)behavior;
   behavior->block = make__60073920();

   return behavior;
}

Behavior __60096220;

Behavior make__60096220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60096220 = behavior;
   behavior->owner = (Object)counter1_58_84_60076260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[q_60075880_counter1_58_84_60076260_counter1_58_840_60095900_layer__output_58_84_51524880_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__60072740();

   return behavior;
}

Scope makecounter1_58_84_60076260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter1_58_84_60076260 = scope;
   scope->owner = (Object)counter1_58_840_60095900;
   scope->name = "counter1:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_60075880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60074040();
   scope->behaviors[1] = make__60072860();
   scope->behaviors[2] = make__60096220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter1_58_840_60095900() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter1_58_840_60095900 = systemT;
systemT->owner = NULL;
   systemT->name = "counter1:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_60094060();
   systemT->inputs[1] = makeack_60094040();
   systemT->inputs[2] = makerst_60094020();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_60093980();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter1_58_84_60076260();

   return systemT;
}