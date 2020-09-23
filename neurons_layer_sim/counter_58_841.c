#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_53263220;

SignalI clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeclk_53261080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)counter_58_841_53263220;
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

SignalI ack_53261060_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeack_53261060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53261060_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)counter_58_841_53263220;
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

SignalI rst_53261040_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makerst_53261040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53261040_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)counter_58_841_53263220;
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

SignalI ack__mac_53261000_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeack__mac_53261000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53261000_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)counter_58_841_53263220;
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

Block __53243940;

Block __53243660;

void code__53243660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49684640(),q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49708020(),ack__mac_53261000_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__53243660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53243660 = block;
   block->owner = (Object)__53243940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53243660;

   return block;
};

Block __53242920;

void code__53242920() {
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
                  src0 = q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49706720();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__53242920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53242920 = block;
   block->owner = (Object)__53243940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53242920;

   return block;
};

void code__53243940() {
   {
      Value cond = rst_53261040_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53243660();
   }
   else if (value2integer(ack_53261060_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value)) {
  code__53242920();
   }
      }
   }
}

Block make__53243940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53243940 = block;
   block->owner = (Object)__53241660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53243940;

   return block;
};

Block __53241540;

Block __53241160;

void code__53241160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49706220(),q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__53241160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53241160 = block;
   block->owner = (Object)__53241540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53241160;

   return block;
};

void code__53241540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49706480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53241160();
   }
      }
   }
}

Block make__53241540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53241540 = block;
   block->owner = (Object)__53240420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53241540;

   return block;
};

Block __53240260;

Block __53264340;

void code__53264340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49705780(),ack__mac_53261000_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__53264340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53264340 = block;
   block->owner = (Object)__53240260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53264340;

   return block;
};

void code__53240260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49706060();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53264340();
   }
      }
   }
}

Block make__53240260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53240260 = block;
   block->owner = (Object)__53263540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53240260;

   return block;
};

Value make__49684640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__49708020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49706720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49706480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49706220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__49706060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49705780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_53244540;

SignalI q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeq_53244080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)counter_58_84_53244540;
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

Behavior __53241660;

Behavior make__53241660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53241660 = behavior;
   behavior->owner = (Object)counter_58_84_53244540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos += 1;
   clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos = realloc(clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos,clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos*sizeof(Object));
clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos[clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos-1] = (Object)behavior;
   behavior->block = make__53243940();

   return behavior;
}

Behavior __53240420;

Behavior make__53240420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53240420 = behavior;
   behavior->owner = (Object)counter_58_84_53244540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_neg += 1;
   clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->neg = realloc(clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->neg,clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_neg*sizeof(Object));
clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->neg[clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_neg-1] = (Object)behavior;
   behavior->block = make__53241540();

   return behavior;
}

Behavior __53263540;

Behavior make__53263540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53263540 = behavior;
   behavior->owner = (Object)counter_58_84_53244540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[q_53244080_counter_58_84_53244540_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__53240260();

   return behavior;
}

Scope makecounter_58_84_53244540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_53244540 = scope;
   scope->owner = (Object)counter_58_841_53263220;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_53244080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53241660();
   scope->behaviors[1] = make__53240420();
   scope->behaviors[2] = make__53263540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_53263220() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_53263220 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_53261080();
   systemT->inputs[1] = makeack_53261060();
   systemT->inputs[2] = makerst_53261040();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_53261000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_53244540();

   return systemT;
}