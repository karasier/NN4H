#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_56509220;

SignalI clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeclk_56564140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)counter_58_8400_56509220;
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

SignalI ack_56564120_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeack_56564120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_56564120_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)counter_58_8400_56509220;
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

SignalI rst_56564100_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makerst_56564100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_56564100_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)counter_58_8400_56509220;
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

SignalI ack__mac_56564060_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeack__mac_56564060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_56564060_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)counter_58_8400_56509220;
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

Block __56515660;

Block __56515400;

void code__56515400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57000920(),q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57000860(),ack__mac_56564060_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56515400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56515400 = block;
   block->owner = (Object)__56515660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56515400;

   return block;
};

Block __56514720;

void code__56514720() {
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
                  src0 = q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57000500();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56514720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56514720 = block;
   block->owner = (Object)__56515660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56514720;

   return block;
};

void code__56515660() {
   {
      Value cond = rst_56564100_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56515400();
   }
   else if (value2integer(ack_56564120_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value)) {
  code__56514720();
   }
      }
   }
}

Block make__56515660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56515660 = block;
   block->owner = (Object)__56513400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56515660;

   return block;
};

Block __56513280;

Block __56512900;

void code__56512900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57024400(),q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56512900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56512900 = block;
   block->owner = (Object)__56513280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56512900;

   return block;
};

void code__56513280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57000040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56512900();
   }
      }
   }
}

Block make__56513280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56513280 = block;
   block->owner = (Object)__56512120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56513280;

   return block;
};

Block __56511940;

Block __56511240;

void code__56511240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57024240(),ack__mac_56564060_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56511240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56511240 = block;
   block->owner = (Object)__56511940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56511240;

   return block;
};

void code__56511940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57024320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56511240();
   }
      }
   }
}

Block make__56511940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56511940 = block;
   block->owner = (Object)__56509580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56511940;

   return block;
};

Value make__57000920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57000860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57000500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57000040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57024400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57024320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57024240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_56516420;

SignalI q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeq_56515800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)counter_58_840_56516420;
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

Behavior __56513400;

Behavior make__56513400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56513400 = behavior;
   behavior->owner = (Object)counter_58_840_56516420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos += 1;
   clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos = realloc(clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos,clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos*sizeof(Object));
clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos[clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos-1] = (Object)behavior;
   behavior->block = make__56515660();

   return behavior;
}

Behavior __56512120;

Behavior make__56512120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56512120 = behavior;
   behavior->owner = (Object)counter_58_840_56516420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_neg += 1;
   clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->neg = realloc(clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->neg,clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_neg*sizeof(Object));
clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->neg[clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_neg-1] = (Object)behavior;
   behavior->block = make__56513280();

   return behavior;
}

Behavior __56509580;

Behavior make__56509580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56509580 = behavior;
   behavior->owner = (Object)counter_58_840_56516420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[q_56515800_counter_58_840_56516420_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56511940();

   return behavior;
}

Scope makecounter_58_840_56516420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_56516420 = scope;
   scope->owner = (Object)counter_58_8400_56509220;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_56515800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56513400();
   scope->behaviors[1] = make__56512120();
   scope->behaviors[2] = make__56509580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_56509220() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_56509220 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_56564140();
   systemT->inputs[1] = makeack_56564120();
   systemT->inputs[2] = makerst_56564100();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_56564060();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_56516420();

   return systemT;
}