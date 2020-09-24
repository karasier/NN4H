#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_53347460;

SignalI clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeclk_53386200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)counter_58_841_53347460;
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

SignalI ack_53386180_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeack_53386180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53386180_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)counter_58_841_53347460;
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

SignalI rst_53386160_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makerst_53386160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53386160_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)counter_58_841_53347460;
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

SignalI ack__mac_53386100_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeack__mac_53386100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53386100_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)counter_58_841_53347460;
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

Block __53353580;

Block __53353260;

void code__53353260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52374380(),q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52374300(),ack__mac_53386100_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53353260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53353260 = block;
   block->owner = (Object)__53353580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53353260;

   return block;
};

Block __53352380;

void code__53352380() {
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
                  src0 = q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52373780();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53352380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53352380 = block;
   block->owner = (Object)__53353580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53352380;

   return block;
};

void code__53353580() {
   {
      Value cond = rst_53386160_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53353260();
   }
   else if (value2integer(ack_53386180_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value)) {
  code__53352380();
   }
      }
   }
}

Block make__53353580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53353580 = block;
   block->owner = (Object)__53351480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53353580;

   return block;
};

Block __53351340;

Block __53350640;

void code__53350640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52372920(),q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53350640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53350640 = block;
   block->owner = (Object)__53351340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53350640;

   return block;
};

void code__53351340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52373200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53350640();
   }
      }
   }
}

Block make__53351340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53351340 = block;
   block->owner = (Object)__53349560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53351340;

   return block;
};

Block __53349440;

Block __53349060;

void code__53349060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52372440(),ack__mac_53386100_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__53349060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53349060 = block;
   block->owner = (Object)__53349440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53349060;

   return block;
};

void code__53349440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52372660();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53349060();
   }
      }
   }
}

Block make__53349440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53349440 = block;
   block->owner = (Object)__53348240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53349440;

   return block;
};

Value make__52374380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52374300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52373780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52373200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52372920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52372660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52372440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_53354120;

SignalI q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeq_53353720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)counter_58_84_53354120;
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

Behavior __53351480;

Behavior make__53351480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53351480 = behavior;
   behavior->owner = (Object)counter_58_84_53354120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos += 1;
   clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos = realloc(clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos,clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos*sizeof(Object));
clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->pos[clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_pos-1] = (Object)behavior;
   behavior->block = make__53353580();

   return behavior;
}

Behavior __53349560;

Behavior make__53349560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53349560 = behavior;
   behavior->owner = (Object)counter_58_84_53354120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_neg += 1;
   clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->neg = realloc(clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->neg,clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_neg*sizeof(Object));
clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->neg[clk_53386200_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_neg-1] = (Object)behavior;
   behavior->block = make__53351340();

   return behavior;
}

Behavior __53348240;

Behavior make__53348240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53348240 = behavior;
   behavior->owner = (Object)counter_58_84_53354120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[q_53353720_counter_58_84_53354120_counter_58_841_53347460_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__53349440();

   return behavior;
}

Scope makecounter_58_84_53354120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_53354120 = scope;
   scope->owner = (Object)counter_58_841_53347460;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_53353720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53351480();
   scope->behaviors[1] = make__53349560();
   scope->behaviors[2] = make__53348240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_53347460() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_53347460 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_53386200();
   systemT->inputs[1] = makeack_53386180();
   systemT->inputs[2] = makerst_53386160();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_53386100();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_53354120();

   return systemT;
}