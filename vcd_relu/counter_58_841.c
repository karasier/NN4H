#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_48882100;

SignalI clk_50264000_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeclk_50264000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_50264000_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)counter_58_841_48882100;
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

SignalI ack_50263980_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeack_50263980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_50263980_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)counter_58_841_48882100;
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

SignalI rst_50263900_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makerst_50263900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_50263900_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)counter_58_841_48882100;
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

SignalI ack__mac_50263860_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeack__mac_50263860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50263860_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)counter_58_841_48882100;
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

Block __48888060;

Block __48887800;

void code__48887800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56174700(),q_48888200_counter_58_84_48888680_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56174520(),ack__mac_50263860_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__48887800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48887800 = block;
   block->owner = (Object)__48888060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48887800;

   return block;
};

Block __48885400;

Block __48884980;

Block __48883920;

void code__48883920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56173680(),q_48888200_counter_58_84_48888680_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56173560(),ack__mac_50263860_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__48883920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48883920 = block;
   block->owner = (Object)__48884980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48883920;

   return block;
};

void code__48884980() {
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
                  src0 = q_48888200_counter_58_84_48888680_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56174200();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_48888200_counter_58_84_48888680_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_48888200_counter_58_84_48888680_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56173960();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48883920();
   }
      }
   }
}

Block make__48884980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48884980 = block;
   block->owner = (Object)__48885400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48884980;

   return block;
};

void code__48885400() {
 code__48884980();
}

Block make__48885400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48885400 = block;
   block->owner = (Object)__48888060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48885400;

   return block;
};

void code__48888060() {
   {
      Value cond = rst_50263900_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48887800();
   }
   else if (value2integer(ack_50263980_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value)) {
  code__48885400();
   }
      }
   }
}

Block make__48888060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48888060 = block;
   block->owner = (Object)__48882560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48888060;

   return block;
};

Value make__56174700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56174520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56174200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56173960() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56173680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56173560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_48888680;

SignalI q_48888200_counter_58_84_48888680_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeq_48888200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_48888200_counter_58_84_48888680_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)counter_58_84_48888680;
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

Behavior __48882560;

Behavior make__48882560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48882560 = behavior;
   behavior->owner = (Object)counter_58_84_48888680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50264000_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_50264000_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg += 1;
   clk_50264000_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg = realloc(clk_50264000_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg,clk_50264000_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg*sizeof(Object));
clk_50264000_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg[clk_50264000_counter_58_841_48882100_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg-1] = (Object)behavior;
   behavior->block = make__48888060();

   return behavior;
}

Scope makecounter_58_84_48888680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_48888680 = scope;
   scope->owner = (Object)counter_58_841_48882100;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_48888200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48882560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_48882100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_48882100 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_50264000();
   systemT->inputs[1] = makeack_50263980();
   systemT->inputs[2] = makerst_50263900();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_50263860();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_48888680();

   return systemT;
}