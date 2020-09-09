#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter0_58_840_53573440;

SignalI clk_53571460_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeclk_53571460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_53571460_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)counter0_58_840_53573440;
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

SignalI ack_53571440_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeack_53571440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53571440_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)counter0_58_840_53573440;
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

SignalI rst_53571380_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makerst_53571380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53571380_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)counter0_58_840_53573440;
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

SignalI ack__mac_53571340_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeack__mac_53571340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53571340_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)counter0_58_840_53573440;
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

Block __53553640;

Block __53551820;

void code__53551820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60470080(),q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60470020(),ack__mac_53571340_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53551820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53551820 = block;
   block->owner = (Object)__53553640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53551820;

   return block;
};

Block __53553480;

Block __53552340;

void code__53552340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60469860(),q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53552340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53552340 = block;
   block->owner = (Object)__53553480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53552340;

   return block;
};

Block __53553280;

void code__53553280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      src1 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack_53571440_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
            dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53553280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53553280 = block;
   block->owner = (Object)__53553480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53553280;

   return block;
};

void code__53553480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60469940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53552340();
   }
   else {
  code__53553280();
   }
      }
   }
}

Block make__53553480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53553480 = block;
   block->owner = (Object)__53553640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53553480;

   return block;
};

void code__53553640() {
   {
      Value cond = rst_53571380_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53551820();
   }
   else {
  code__53553480();
   }
      }
   }
}

Block make__53553640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53553640 = block;
   block->owner = (Object)__53575380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53553640;

   return block;
};

Block __53575200;

Block __53574500;

void code__53574500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60469540(),ack__mac_53571340_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53574500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53574500 = block;
   block->owner = (Object)__53575200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53574500;

   return block;
};

Block __53575040;

void code__53575040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60469480(),ack__mac_53571340_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__53575040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53575040 = block;
   block->owner = (Object)__53575200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53575040;

   return block;
};

void code__53575200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60469620();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53574500();
   }
   else {
  code__53575040();
   }
      }
   }
}

Block make__53575200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53575200 = block;
   block->owner = (Object)__53573820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53575200;

   return block;
};

Value make__60470080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60470020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60469940() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60469860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60469620() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60469540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60469480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter0_58_84_53554140;

SignalI q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeq_53553760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)counter0_58_84_53554140;
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

Behavior __53575380;

Behavior make__53575380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53575380 = behavior;
   behavior->owner = (Object)counter0_58_84_53554140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53571460_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   clk_53571460_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos += 1;
   clk_53571460_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos = realloc(clk_53571460_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos,clk_53571460_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos*sizeof(Object));
clk_53571460_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->pos[clk_53571460_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_pos-1] = (Object)behavior;
   behavior->block = make__53553640();

   return behavior;
}

Behavior __53573820;

Behavior make__53573820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53573820 = behavior;
   behavior->owner = (Object)counter0_58_84_53554140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[q_53553760_counter0_58_84_53554140_counter0_58_840_53573440_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__53575200();

   return behavior;
}

Scope makecounter0_58_84_53554140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter0_58_84_53554140 = scope;
   scope->owner = (Object)counter0_58_840_53573440;
   scope->name = "counter0:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_53553760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53575380();
   scope->behaviors[1] = make__53573820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter0_58_840_53573440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter0_58_840_53573440 = systemT;
systemT->owner = NULL;
   systemT->name = "counter0:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_53571460();
   systemT->inputs[1] = makeack_53571440();
   systemT->inputs[2] = makerst_53571380();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_53571340();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter0_58_84_53554140();

   return systemT;
}