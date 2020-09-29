#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_50952020;

SignalI clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeclk_50949460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)counter_58_841_50952020;
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

SignalI ack_50949440_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeack_50949440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_50949440_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)counter_58_841_50952020;
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

SignalI rst_50949420_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makerst_50949420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_50949420_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)counter_58_841_50952020;
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

SignalI ack__mac_50949360_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeack__mac_50949360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50949360_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)counter_58_841_50952020;
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

Block __50933340;

Block __50933080;

void code__50933080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57631580(),q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57631520(),ack__mac_50949360_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50933080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50933080 = block;
   block->owner = (Object)__50933340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50933080;

   return block;
};

Block __50932360;

void code__50932360() {
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
                  src0 = q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57631100();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50932360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50932360 = block;
   block->owner = (Object)__50933340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50932360;

   return block;
};

void code__50933340() {
   {
      Value cond = rst_50949420_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50933080();
   }
   else if (value2integer(ack_50949440_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value)) {
  code__50932360();
   }
      }
   }
}

Block make__50933340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50933340 = block;
   block->owner = (Object)__50930980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50933340;

   return block;
};

Block __50930860;

Block __50930480;

void code__50930480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57630800(),q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50930480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50930480 = block;
   block->owner = (Object)__50930860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50930480;

   return block;
};

void code__50930860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57630920();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50930480();
   }
      }
   }
}

Block make__50930860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50930860 = block;
   block->owner = (Object)__50929700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50930860;

   return block;
};

Block __50954100;

Block __50953100;

void code__50953100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57671540(),ack__mac_50949360_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50953100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50953100 = block;
   block->owner = (Object)__50954100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50953100;

   return block;
};

void code__50954100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57671640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50953100();
   }
      }
   }
}

Block make__50954100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50954100 = block;
   block->owner = (Object)__50952360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50954100;

   return block;
};

Value make__57631580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57631520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57631100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57630920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57630800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57671640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57671540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_50934180;

SignalI q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeq_50933480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)counter_58_84_50934180;
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

Behavior __50930980;

Behavior make__50930980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50930980 = behavior;
   behavior->owner = (Object)counter_58_84_50934180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos += 1;
   clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos = realloc(clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos,clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos*sizeof(Object));
clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos[clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos-1] = (Object)behavior;
   behavior->block = make__50933340();

   return behavior;
}

Behavior __50929700;

Behavior make__50929700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50929700 = behavior;
   behavior->owner = (Object)counter_58_84_50934180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_neg += 1;
   clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->neg = realloc(clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->neg,clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_neg*sizeof(Object));
clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->neg[clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_neg-1] = (Object)behavior;
   behavior->block = make__50930860();

   return behavior;
}

Behavior __50952360;

Behavior make__50952360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50952360 = behavior;
   behavior->owner = (Object)counter_58_84_50934180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[q_50933480_counter_58_84_50934180_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__50954100();

   return behavior;
}

Scope makecounter_58_84_50934180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_50934180 = scope;
   scope->owner = (Object)counter_58_841_50952020;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_50933480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50930980();
   scope->behaviors[1] = make__50929700();
   scope->behaviors[2] = make__50952360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_50952020() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_50952020 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_50949460();
   systemT->inputs[1] = makeack_50949440();
   systemT->inputs[2] = makerst_50949420();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_50949360();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_50934180();

   return systemT;
}