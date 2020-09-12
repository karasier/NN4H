#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter0_58_840_52303620;

SignalI clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeclk_52301580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)counter0_58_840_52303620;
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

SignalI ack_52301560_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeack_52301560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_52301560_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)counter0_58_840_52303620;
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

SignalI rst_52301540_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makerst_52301540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_52301540_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)counter0_58_840_52303620;
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

SignalI ack__mac_52301500_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeack__mac_52301500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_52301500_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)counter0_58_840_52303620;
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

Block __52251480;

Block __52251260;

void code__52251260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60064500(),q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60064440(),ack__mac_52301500_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52251260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52251260 = block;
   block->owner = (Object)__52251480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52251260;

   return block;
};

Block __52250480;

void code__52250480() {
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
                  src0 = q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60064240();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52250480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52250480 = block;
   block->owner = (Object)__52251480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52250480;

   return block;
};

void code__52251480() {
   {
      Value cond = rst_52301540_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52251260();
   }
   else if (value2integer(ack_52301560_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value)) {
  code__52250480();
   }
      }
   }
}

Block make__52251480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52251480 = block;
   block->owner = (Object)__52249560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52251480;

   return block;
};

Block __52249440;

Block __52249060;

void code__52249060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60064000(),q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52249060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52249060 = block;
   block->owner = (Object)__52249440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52249060;

   return block;
};

void code__52249440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60064080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52249060();
   }
      }
   }
}

Block make__52249440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52249440 = block;
   block->owner = (Object)__52305600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52249440;

   return block;
};

Block __52305480;

Block __52304940;

void code__52304940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60063840(),ack__mac_52301500_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52304940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52304940 = block;
   block->owner = (Object)__52305480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52304940;

   return block;
};

void code__52305480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60063920();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52304940();
   }
      }
   }
}

Block make__52305480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52305480 = block;
   block->owner = (Object)__52303940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52305480;

   return block;
};

Value make__60064500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60064440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60064080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60064000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60063920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60063840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter0_58_84_52252040;

SignalI q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeq_52251600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)counter0_58_84_52252040;
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

Behavior __52249560;

Behavior make__52249560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52249560 = behavior;
   behavior->owner = (Object)counter0_58_84_52252040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos += 1;
   clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos = realloc(clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos,clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos*sizeof(Object));
clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos[clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos-1] = (Object)behavior;
   behavior->block = make__52251480();

   return behavior;
}

Behavior __52305600;

Behavior make__52305600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52305600 = behavior;
   behavior->owner = (Object)counter0_58_84_52252040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_neg += 1;
   clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->neg = realloc(clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->neg,clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_neg*sizeof(Object));
clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->neg[clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_neg-1] = (Object)behavior;
   behavior->block = make__52249440();

   return behavior;
}

Behavior __52303940;

Behavior make__52303940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52303940 = behavior;
   behavior->owner = (Object)counter0_58_84_52252040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[q_52251600_counter0_58_84_52252040_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__52305480();

   return behavior;
}

Scope makecounter0_58_84_52252040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter0_58_84_52252040 = scope;
   scope->owner = (Object)counter0_58_840_52303620;
   scope->name = "counter0:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_52251600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52249560();
   scope->behaviors[1] = make__52305600();
   scope->behaviors[2] = make__52303940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter0_58_840_52303620() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter0_58_840_52303620 = systemT;
systemT->owner = NULL;
   systemT->name = "counter0:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_52301580();
   systemT->inputs[1] = makeack_52301560();
   systemT->inputs[2] = makerst_52301540();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_52301500();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter0_58_84_52252040();

   return systemT;
}