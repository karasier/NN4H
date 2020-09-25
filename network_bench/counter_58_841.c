#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_49561200;

SignalI clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeclk_48790900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)counter_58_841_49561200;
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

SignalI ack_48790880_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeack_48790880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_48790880_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)counter_58_841_49561200;
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

SignalI rst_48790840_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makerst_48790840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_48790840_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)counter_58_841_49561200;
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

SignalI ack__mac_48790800_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeack__mac_48790800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_48790800_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)counter_58_841_49561200;
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

Block __49504400;

Block __49528140;

void code__49528140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58861560(),q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58861500(),ack__mac_48790800_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__49528140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49528140 = block;
   block->owner = (Object)__49504400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49528140;

   return block;
};

Block __49526580;

void code__49526580() {
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
                  src0 = q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58861240();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__49526580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49526580 = block;
   block->owner = (Object)__49504400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49526580;

   return block;
};

void code__49504400() {
   {
      Value cond = rst_48790840_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49528140();
   }
   else if (value2integer(ack_48790880_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value)) {
  code__49526580();
   }
      }
   }
}

Block make__49504400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49504400 = block;
   block->owner = (Object)__49525180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49504400;

   return block;
};

Block __49525000;

Block __49523720;

void code__49523720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58860780(),q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__49523720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49523720 = block;
   block->owner = (Object)__49525000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49523720;

   return block;
};

void code__49525000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58860980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49523720();
   }
      }
   }
}

Block make__49525000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49525000 = block;
   block->owner = (Object)__49543020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49525000;

   return block;
};

Block __49540380;

Block __49539100;

void code__49539100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58860480(),ack__mac_48790800_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__49539100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49539100 = block;
   block->owner = (Object)__49540380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49539100;

   return block;
};

void code__49540380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58860680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49539100();
   }
      }
   }
}

Block make__49540380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49540380 = block;
   block->owner = (Object)__49538020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49540380;

   return block;
};

Value make__58861560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58861500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58861240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58860980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58860780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58860680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58860480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_49505420;

SignalI q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeq_49504760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)counter_58_84_49505420;
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

Behavior __49525180;

Behavior make__49525180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49525180 = behavior;
   behavior->owner = (Object)counter_58_84_49505420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos += 1;
   clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos = realloc(clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos,clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos*sizeof(Object));
clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos[clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos-1] = (Object)behavior;
   behavior->block = make__49504400();

   return behavior;
}

Behavior __49543020;

Behavior make__49543020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49543020 = behavior;
   behavior->owner = (Object)counter_58_84_49505420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_neg += 1;
   clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->neg = realloc(clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->neg,clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_neg*sizeof(Object));
clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->neg[clk_48790900_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_neg-1] = (Object)behavior;
   behavior->block = make__49525000();

   return behavior;
}

Behavior __49538020;

Behavior make__49538020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49538020 = behavior;
   behavior->owner = (Object)counter_58_84_49505420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[q_49504760_counter_58_84_49505420_counter_58_841_49561200_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__49540380();

   return behavior;
}

Scope makecounter_58_84_49505420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_49505420 = scope;
   scope->owner = (Object)counter_58_841_49561200;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_49504760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49525180();
   scope->behaviors[1] = make__49543020();
   scope->behaviors[2] = make__49538020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_49561200() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_49561200 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_48790900();
   systemT->inputs[1] = makeack_48790880();
   systemT->inputs[2] = makerst_48790840();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_48790800();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_49505420();

   return systemT;
}