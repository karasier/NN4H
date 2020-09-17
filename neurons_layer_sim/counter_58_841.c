#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_53679500;

SignalI clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeclk_53677460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)counter_58_841_53679500;
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

SignalI ack_53677440_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeack_53677440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53677440_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)counter_58_841_53679500;
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

SignalI rst_53677420_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makerst_53677420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53677420_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)counter_58_841_53679500;
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

SignalI ack__mac_53677380_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeack__mac_53677380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53677380_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)counter_58_841_53679500;
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

Block __53594400;

Block __53594080;

void code__53594080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61671840(),q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61671760(),ack__mac_53677380_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53594080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53594080 = block;
   block->owner = (Object)__53594400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53594080;

   return block;
};

Block __53593340;

void code__53593340() {
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
                  src0 = q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61671340();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53593340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53593340 = block;
   block->owner = (Object)__53594400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53593340;

   return block;
};

void code__53594400() {
   {
      Value cond = rst_53677420_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53594080();
   }
   else if (value2integer(ack_53677440_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value)) {
  code__53593340();
   }
      }
   }
}

Block make__53594400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53594400 = block;
   block->owner = (Object)__53592520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53594400;

   return block;
};

Block __53592380;

Block __53681880;

void code__53681880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61671040(),q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53681880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53681880 = block;
   block->owner = (Object)__53592380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53681880;

   return block;
};

void code__53592380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61671120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53681880();
   }
      }
   }
}

Block make__53592380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53592380 = block;
   block->owner = (Object)__53681200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53592380;

   return block;
};

Block __53681080;

Block __53680700;

void code__53680700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61670880(),ack__mac_53677380_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53680700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53680700 = block;
   block->owner = (Object)__53681080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53680700;

   return block;
};

void code__53681080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61670960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53680700();
   }
      }
   }
}

Block make__53681080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53681080 = block;
   block->owner = (Object)__53679820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53681080;

   return block;
};

Value make__61671840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__61671760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61671340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61671120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61671040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__61670960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61670880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_53594940;

SignalI q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080;

SignalI makeq_53594540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)counter_58_84_53594940;
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

Behavior __53592520;

Behavior make__53592520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53592520 = behavior;
   behavior->owner = (Object)counter_58_84_53594940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos += 1;
   clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos = realloc(clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos,clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos*sizeof(Object));
clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->pos[clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_pos-1] = (Object)behavior;
   behavior->block = make__53594400();

   return behavior;
}

Behavior __53681200;

Behavior make__53681200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53681200 = behavior;
   behavior->owner = (Object)counter_58_84_53594940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_neg += 1;
   clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->neg = realloc(clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->neg,clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_neg*sizeof(Object));
clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->neg[clk_53677460_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_neg-1] = (Object)behavior;
   behavior->block = make__53592380();

   return behavior;
}

Behavior __53679820;

Behavior make__53679820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53679820 = behavior;
   behavior->owner = (Object)counter_58_84_53594940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[q_53594540_counter_58_84_53594940_counter_58_841_53679500_layer0_58_84_45288580_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__53681080();

   return behavior;
}

Scope makecounter_58_84_53594940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_53594940 = scope;
   scope->owner = (Object)counter_58_841_53679500;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_53594540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53592520();
   scope->behaviors[1] = make__53681200();
   scope->behaviors[2] = make__53679820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_53679500() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_53679500 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_53677460();
   systemT->inputs[1] = makeack_53677440();
   systemT->inputs[2] = makerst_53677420();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_53677380();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_53594940();

   return systemT;
}