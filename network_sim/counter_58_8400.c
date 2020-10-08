#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_57612760;

SignalI clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeclk_57610520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)counter_58_8400_57612760;
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

SignalI ack_57610500_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack_57610500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_57610500_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)counter_58_8400_57612760;
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

SignalI rst_57610480_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makerst_57610480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_57610480_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)counter_58_8400_57612760;
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

SignalI ack__mac_57610440_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__mac_57610440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_57610440_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)counter_58_8400_57612760;
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

Block __57577260;

Block __57577040;

void code__57577040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51420820(),q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51420700(),ack__mac_57610440_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__57577040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57577040 = block;
   block->owner = (Object)__57577260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57577040;

   return block;
};

Block __57576360;

void code__57576360() {
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
                  src0 = q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51420200();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__57576360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57576360 = block;
   block->owner = (Object)__57577260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57576360;

   return block;
};

void code__57577260() {
   {
      Value cond = rst_57610480_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57577040();
   }
   else if (value2integer(ack_57610500_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value)) {
  code__57576360();
   }
      }
   }
}

Block make__57577260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57577260 = block;
   block->owner = (Object)__57575180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57577260;

   return block;
};

Block __57574800;

Block __57574420;

void code__57574420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51419620(),q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__57574420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57574420 = block;
   block->owner = (Object)__57574800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57574420;

   return block;
};

void code__57574800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51419880();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57574420();
   }
      }
   }
}

Block make__57574800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57574800 = block;
   block->owner = (Object)__57573740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57574800;

   return block;
};

Block __57573620;

Block __57613920;

void code__57613920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51419120(),ack__mac_57610440_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__57613920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57613920 = block;
   block->owner = (Object)__57573620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57613920;

   return block;
};

void code__57573620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51419240();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57613920();
   }
      }
   }
}

Block make__57573620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57573620 = block;
   block->owner = (Object)__57613080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57573620;

   return block;
};

Value make__51420820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__51420700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51420200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51419880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51419620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__51419240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51419120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_57578020;

SignalI q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeq_57577500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)counter_58_840_57578020;
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

Behavior __57575180;

Behavior make__57575180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57575180 = behavior;
   behavior->owner = (Object)counter_58_840_57578020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos += 1;
   clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos = realloc(clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos,clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos*sizeof(Object));
clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos[clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos-1] = (Object)behavior;
   behavior->block = make__57577260();

   return behavior;
}

Behavior __57573740;

Behavior make__57573740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57573740 = behavior;
   behavior->owner = (Object)counter_58_840_57578020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_neg += 1;
   clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->neg = realloc(clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->neg,clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_neg*sizeof(Object));
clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->neg[clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_neg-1] = (Object)behavior;
   behavior->block = make__57574800();

   return behavior;
}

Behavior __57613080;

Behavior make__57613080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57613080 = behavior;
   behavior->owner = (Object)counter_58_840_57578020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[q_57577500_counter_58_840_57578020_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__57573620();

   return behavior;
}

Scope makecounter_58_840_57578020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_57578020 = scope;
   scope->owner = (Object)counter_58_8400_57612760;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_57577500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57575180();
   scope->behaviors[1] = make__57573740();
   scope->behaviors[2] = make__57613080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_57612760() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_57612760 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_57610520();
   systemT->inputs[1] = makeack_57610500();
   systemT->inputs[2] = makerst_57610480();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_57610440();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_57578020();

   return systemT;
}