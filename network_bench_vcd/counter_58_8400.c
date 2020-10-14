#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_57263560;

SignalI clk_57286040_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeclk_57286040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_57286040_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)counter_58_8400_57263560;
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

SignalI ack_57286020_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeack_57286020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_57286020_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)counter_58_8400_57263560;
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

SignalI rst_57286000_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makerst_57286000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_57286000_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)counter_58_8400_57263560;
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

SignalI ack__mac_57285960_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeack__mac_57285960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_57285960_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)counter_58_8400_57263560;
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

Block __57267000;

Block __57266780;

void code__57266780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57284080(),q_57267120_counter_58_840_57267500_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57284020(),ack__mac_57285960_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__57266780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57266780 = block;
   block->owner = (Object)__57267000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57266780;

   return block;
};

Block __57265900;

Block __57265740;

Block __57264940;

void code__57264940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57283560(),q_57267120_counter_58_840_57267500_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57283420(),ack__mac_57285960_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__57264940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57264940 = block;
   block->owner = (Object)__57265740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57264940;

   return block;
};

void code__57265740() {
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
                  src0 = q_57267120_counter_58_840_57267500_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57283820();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_57267120_counter_58_840_57267500_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_57267120_counter_58_840_57267500_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57283660();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57264940();
   }
      }
   }
}

Block make__57265740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57265740 = block;
   block->owner = (Object)__57265900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57265740;

   return block;
};

void code__57265900() {
 code__57265740();
}

Block make__57265900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57265900 = block;
   block->owner = (Object)__57267000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57265900;

   return block;
};

void code__57267000() {
   {
      Value cond = rst_57286000_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57266780();
   }
   else if (value2integer(ack_57286020_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value)) {
  code__57265900();
   }
      }
   }
}

Block make__57267000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57267000 = block;
   block->owner = (Object)__57263880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57267000;

   return block;
};

Value make__57284080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57284020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57283820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57283660() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57283560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57283420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_57267500;

SignalI q_57267120_counter_58_840_57267500_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeq_57267120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_57267120_counter_58_840_57267500_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)counter_58_840_57267500;
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

Behavior __57263880;

Behavior make__57263880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57263880 = behavior;
   behavior->owner = (Object)counter_58_840_57267500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57286040_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   clk_57286040_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_neg += 1;
   clk_57286040_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->neg = realloc(clk_57286040_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->neg,clk_57286040_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_neg*sizeof(Object));
clk_57286040_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->neg[clk_57286040_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_neg-1] = (Object)behavior;
   behavior->block = make__57267000();

   return behavior;
}

Scope makecounter_58_840_57267500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_57267500 = scope;
   scope->owner = (Object)counter_58_8400_57263560;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_57267120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57263880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_57263560() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_57263560 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_57286040();
   systemT->inputs[1] = makeack_57286020();
   systemT->inputs[2] = makerst_57286000();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_57285960();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_57267500();

   return systemT;
}