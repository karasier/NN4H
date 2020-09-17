#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_840_48899140;

SignalI clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeclk_48920860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)counter_58_840_48899140;
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

SignalI ack_48920840_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeack_48920840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_48920840_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)counter_58_840_48899140;
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

SignalI rst_48920820_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makerst_48920820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_48920820_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)counter_58_840_48899140;
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

SignalI ack__mac_48920780_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeack__mac_48920780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_48920780_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)counter_58_840_48899140;
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

Block __48906080;

Block __48905460;

void code__48905460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52321440(),q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52321180(),ack__mac_48920780_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__48905460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48905460 = block;
   block->owner = (Object)__48906080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48905460;

   return block;
};

Block __48904340;

void code__48904340() {
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
                  src0 = q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52320480();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__48904340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48904340 = block;
   block->owner = (Object)__48906080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48904340;

   return block;
};

void code__48906080() {
   {
      Value cond = rst_48920820_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48905460();
   }
   else if (value2integer(ack_48920840_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value)) {
  code__48904340();
   }
      }
   }
}

Block make__48906080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48906080 = block;
   block->owner = (Object)__48902880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48906080;

   return block;
};

Block __48902560;

Block __48902040;

void code__48902040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52320080(),q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__48902040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48902040 = block;
   block->owner = (Object)__48902560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48902040;

   return block;
};

void code__48902560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52320180();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48902040();
   }
      }
   }
}

Block make__48902560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48902560 = block;
   block->owner = (Object)__48901020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48902560;

   return block;
};

Block __48900840;

Block __48900460;

void code__48900460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52319840(),ack__mac_48920780_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__48900460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48900460 = block;
   block->owner = (Object)__48900840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48900460;

   return block;
};

void code__48900840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52319980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48900460();
   }
      }
   }
}

Block make__48900840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48900840 = block;
   block->owner = (Object)__48899580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48900840;

   return block;
};

Value make__52321440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52321180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52320480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52320180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52320080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52319980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52319840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_48702120;

SignalI q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeq_48701660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)counter_58_84_48702120;
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

Behavior __48902880;

Behavior make__48902880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48902880 = behavior;
   behavior->owner = (Object)counter_58_84_48702120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos += 1;
   clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos = realloc(clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos,clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos*sizeof(Object));
clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos[clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos-1] = (Object)behavior;
   behavior->block = make__48906080();

   return behavior;
}

Behavior __48901020;

Behavior make__48901020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48901020 = behavior;
   behavior->owner = (Object)counter_58_84_48702120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_neg += 1;
   clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->neg = realloc(clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->neg,clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_neg*sizeof(Object));
clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->neg[clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_neg-1] = (Object)behavior;
   behavior->block = make__48902560();

   return behavior;
}

Behavior __48899580;

Behavior make__48899580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48899580 = behavior;
   behavior->owner = (Object)counter_58_84_48702120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[q_48701660_counter_58_84_48702120_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__48900840();

   return behavior;
}

Scope makecounter_58_84_48702120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_48702120 = scope;
   scope->owner = (Object)counter_58_840_48899140;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_48701660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48902880();
   scope->behaviors[1] = make__48901020();
   scope->behaviors[2] = make__48899580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_840_48899140() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_840_48899140 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_48920860();
   systemT->inputs[1] = makeack_48920840();
   systemT->inputs[2] = makerst_48920820();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_48920780();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_48702120();

   return systemT;
}