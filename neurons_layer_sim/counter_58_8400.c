#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_57972260;

SignalI clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeclk_57970320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)counter_58_8400_57972260;
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

SignalI ack_57970300_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeack_57970300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_57970300_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)counter_58_8400_57972260;
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

SignalI rst_57970280_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makerst_57970280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_57970280_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)counter_58_8400_57972260;
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

SignalI ack__mac_57970240_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeack__mac_57970240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_57970240_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)counter_58_8400_57972260;
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

Block __57944120;

Block __57943900;

void code__57943900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52262260(),q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52262180(),ack__mac_57970240_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__57943900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57943900 = block;
   block->owner = (Object)__57944120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57943900;

   return block;
};

Block __57943180;

void code__57943180() {
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
                  src0 = q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52261520();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__57943180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57943180 = block;
   block->owner = (Object)__57944120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57943180;

   return block;
};

void code__57944120() {
   {
      Value cond = rst_57970280_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57943900();
   }
   else if (value2integer(ack_57970300_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value)) {
  code__57943180();
   }
      }
   }
}

Block make__57944120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57944120 = block;
   block->owner = (Object)__57942300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57944120;

   return block;
};

Block __57942180;

Block __57974540;

void code__57974540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52260680(),q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__57974540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57974540 = block;
   block->owner = (Object)__57942180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57974540;

   return block;
};

void code__57942180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52261020();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57974540();
   }
      }
   }
}

Block make__57942180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57942180 = block;
   block->owner = (Object)__57973820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57942180;

   return block;
};

Block __57973680;

Block __57973260;

void code__57973260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52260260(),ack__mac_57970240_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__57973260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57973260 = block;
   block->owner = (Object)__57973680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57973260;

   return block;
};

void code__57973680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52260420();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57973260();
   }
      }
   }
}

Block make__57973680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57973680 = block;
   block->owner = (Object)__57972580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57973680;

   return block;
};

Value make__52262260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52262180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52261520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52261020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52260680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52260420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52260260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_57944620;

SignalI q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeq_57944240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)counter_58_840_57944620;
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

Behavior __57942300;

Behavior make__57942300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57942300 = behavior;
   behavior->owner = (Object)counter_58_840_57944620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos += 1;
   clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos = realloc(clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos,clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos*sizeof(Object));
clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos[clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos-1] = (Object)behavior;
   behavior->block = make__57944120();

   return behavior;
}

Behavior __57973820;

Behavior make__57973820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57973820 = behavior;
   behavior->owner = (Object)counter_58_840_57944620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_neg += 1;
   clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->neg = realloc(clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->neg,clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_neg*sizeof(Object));
clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->neg[clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_neg-1] = (Object)behavior;
   behavior->block = make__57942180();

   return behavior;
}

Behavior __57972580;

Behavior make__57972580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57972580 = behavior;
   behavior->owner = (Object)counter_58_840_57944620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[q_57944240_counter_58_840_57944620_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__57973680();

   return behavior;
}

Scope makecounter_58_840_57944620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_57944620 = scope;
   scope->owner = (Object)counter_58_8400_57972260;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_57944240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57942300();
   scope->behaviors[1] = make__57973820();
   scope->behaviors[2] = make__57972580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_57972260() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_57972260 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_57970320();
   systemT->inputs[1] = makeack_57970300();
   systemT->inputs[2] = makerst_57970280();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_57970240();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_57944620();

   return systemT;
}