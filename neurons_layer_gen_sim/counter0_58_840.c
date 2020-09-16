#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter0_58_840_53341020;

SignalI clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makeclk_53339000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)counter0_58_840_53341020;
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

SignalI ack_53338960_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makeack_53338960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53338960_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)counter0_58_840_53341020;
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

SignalI rst_53338940_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makerst_53338940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53338940_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)counter0_58_840_53341020;
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

SignalI ack__mac_53338860_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makeack__mac_53338860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53338860_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)counter0_58_840_53341020;
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

Block __53345880;

Block __53345660;

void code__53345660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60357080(),q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60357020(),ack__mac_53338860_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__53345660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53345660 = block;
   block->owner = (Object)__53345880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53345660;

   return block;
};

Block __53344880;

void code__53344880() {
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
                  src0 = q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60356820();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__53344880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53344880 = block;
   block->owner = (Object)__53345880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53344880;

   return block;
};

void code__53345880() {
   {
      Value cond = rst_53338940_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53345660();
   }
   else if (value2integer(ack_53338960_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value)) {
  code__53344880();
   }
      }
   }
}

Block make__53345880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53345880 = block;
   block->owner = (Object)__53343960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53345880;

   return block;
};

Block __53343840;

Block __53343460;

void code__53343460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60356580(),q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__53343460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53343460 = block;
   block->owner = (Object)__53343840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53343460;

   return block;
};

void code__53343840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60356660();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53343460();
   }
      }
   }
}

Block make__53343840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53343840 = block;
   block->owner = (Object)__53342680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53343840;

   return block;
};

Block __53342560;

Block __53342140;

void code__53342140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60356420(),ack__mac_53338860_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__53342140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53342140 = block;
   block->owner = (Object)__53342560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53342140;

   return block;
};

void code__53342560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60356500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53342140();
   }
      }
   }
}

Block make__53342560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53342560 = block;
   block->owner = (Object)__53341400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53342560;

   return block;
};

Value make__60357080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60357020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60356820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60356660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60356580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60356500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60356420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter0_58_84_53256360;

SignalI q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220;

SignalI makeq_53346000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)counter0_58_84_53256360;
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

Behavior __53343960;

Behavior make__53343960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53343960 = behavior;
   behavior->owner = (Object)counter0_58_84_53256360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_pos += 1;
   clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->pos = realloc(clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->pos,clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_pos*sizeof(Object));
clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->pos[clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_pos-1] = (Object)behavior;
   behavior->block = make__53345880();

   return behavior;
}

Behavior __53342680;

Behavior make__53342680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53342680 = behavior;
   behavior->owner = (Object)counter0_58_84_53256360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_neg += 1;
   clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->neg = realloc(clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->neg,clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_neg*sizeof(Object));
clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->neg[clk_53339000_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_neg-1] = (Object)behavior;
   behavior->block = make__53343840();

   return behavior;
}

Behavior __53341400;

Behavior make__53341400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53341400 = behavior;
   behavior->owner = (Object)counter0_58_84_53256360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[q_53346000_counter0_58_84_53256360_counter0_58_840_53341020_layer__hidden_58_84_49591160_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__53342560();

   return behavior;
}

Scope makecounter0_58_84_53256360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter0_58_84_53256360 = scope;
   scope->owner = (Object)counter0_58_840_53341020;
   scope->name = "counter0:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_53346000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53343960();
   scope->behaviors[1] = make__53342680();
   scope->behaviors[2] = make__53341400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter0_58_840_53341020() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter0_58_840_53341020 = systemT;
systemT->owner = NULL;
   systemT->name = "counter0:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_53339000();
   systemT->inputs[1] = makeack_53338960();
   systemT->inputs[2] = makerst_53338940();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_53338860();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter0_58_84_53256360();

   return systemT;
}