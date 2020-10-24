#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_55524600;

SignalI clk_55522140_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeclk_55522140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_55522140_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)counter_58_8400_55524600;
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

SignalI ack_55522120_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack_55522120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_55522120_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)counter_58_8400_55524600;
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

SignalI rst_55522100_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makerst_55522100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_55522100_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)counter_58_8400_55524600;
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

SignalI ack__mac_55522040_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack__mac_55522040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_55522040_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)counter_58_8400_55524600;
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

Block __55506140;

Block __55505920;

void code__55505920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55540540(),q_55506260_counter_58_840_55507360_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55540460(),ack__mac_55522040_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__55505920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55505920 = block;
   block->owner = (Object)__55506140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55505920;

   return block;
};

Block __55504220;

Block __55503940;

Block __55501580;

void code__55501580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55539940(),q_55506260_counter_58_840_55507360_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55539840(),ack__mac_55522040_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__55501580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55501580 = block;
   block->owner = (Object)__55503940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55501580;

   return block;
};

void code__55503940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = q_55506260_counter_58_840_55507360_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55540180();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_55506260_counter_58_840_55507360_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_55506260_counter_58_840_55507360_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55540040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55501580();
   }
      }
   }
}

Block make__55503940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55503940 = block;
   block->owner = (Object)__55504220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55503940;

   return block;
};

void code__55504220() {
 code__55503940();
}

Block make__55504220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55504220 = block;
   block->owner = (Object)__55506140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55504220;

   return block;
};

void code__55506140() {
   {
      Value cond = rst_55522100_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55505920();
   }
   else if (value2integer(ack_55522120_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value)) {
  code__55504220();
   }
      }
   }
}

Block make__55506140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55506140 = block;
   block->owner = (Object)__55525140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55506140;

   return block;
};

Value make__55540540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__55540460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55540180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55540040() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55539940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__55539840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_55507360;

SignalI q_55506260_counter_58_840_55507360_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeq_55506260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_55506260_counter_58_840_55507360_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)counter_58_840_55507360;
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

Behavior __55525140;

Behavior make__55525140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55525140 = behavior;
   behavior->owner = (Object)counter_58_840_55507360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55522140_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_55522140_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg += 1;
   clk_55522140_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg = realloc(clk_55522140_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg,clk_55522140_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg*sizeof(Object));
clk_55522140_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg[clk_55522140_counter_58_8400_55524600_layer1_58_84_55660900_layer1_58_840_48843960_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg-1] = (Object)behavior;
   behavior->block = make__55506140();

   return behavior;
}

Scope makecounter_58_840_55507360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_55507360 = scope;
   scope->owner = (Object)counter_58_8400_55524600;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_55506260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55525140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_55524600() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_55524600 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_55522140();
   systemT->inputs[1] = makeack_55522120();
   systemT->inputs[2] = makerst_55522100();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_55522040();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_55507360();

   return systemT;
}