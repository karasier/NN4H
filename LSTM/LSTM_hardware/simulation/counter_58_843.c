#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_843_56459660;

SignalI clk_56498380_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeclk_56498380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_56498380_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_843_56459660;
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

SignalI ack_56498360_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack_56498360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_56498360_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_843_56459660;
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

SignalI rst_56498340_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makerst_56498340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_56498340_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_843_56459660;
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

SignalI ack__mac_56498300_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack__mac_56498300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_56498300_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_843_56459660;
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

Block __56463300;

Block __56463060;

void code__56463060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78444460(),q_56463440_counter_58_84_56464020_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78444400(),ack__mac_56498300_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56463060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56463060 = block;
   block->owner = (Object)__56463300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56463060;

   return block;
};

Block __56462300;

Block __56462000;

Block __56461060;

void code__56461060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78444000(),q_56463440_counter_58_84_56464020_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78443940(),ack__mac_56498300_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56461060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56461060 = block;
   block->owner = (Object)__56462000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56461060;

   return block;
};

void code__56462000() {
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
                  src0 = q_56463440_counter_58_84_56464020_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78444200();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_56463440_counter_58_84_56464020_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_56463440_counter_58_84_56464020_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78444080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56461060();
   }
      }
   }
}

Block make__56462000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56462000 = block;
   block->owner = (Object)__56462300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56462000;

   return block;
};

void code__56462300() {
 code__56462000();
}

Block make__56462300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56462300 = block;
   block->owner = (Object)__56463300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56462300;

   return block;
};

void code__56463300() {
   {
      Value cond = rst_56498340_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56463060();
   }
   else if (value2integer(ack_56498360_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value)) {
  code__56462300();
   }
      }
   }
}

Block make__56463300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56463300 = block;
   block->owner = (Object)__56460100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56463300;

   return block;
};

Value make__78444460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__78444400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78444200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78444080() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78444000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__78443940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_56464020;

SignalI q_56463440_counter_58_84_56464020_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeq_56463440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_56463440_counter_58_84_56464020_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)counter_58_84_56464020;
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

Behavior __56460100;

Behavior make__56460100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56460100 = behavior;
   behavior->owner = (Object)counter_58_84_56464020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56498380_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_56498380_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_56498380_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg = realloc(clk_56498380_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg,clk_56498380_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_56498380_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg[clk_56498380_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__56463300();

   return behavior;
}

Scope makecounter_58_84_56464020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_56464020 = scope;
   scope->owner = (Object)counter_58_843_56459660;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_56463440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56460100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_843_56459660() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_843_56459660 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T3";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_56498380();
   systemT->inputs[1] = makeack_56498360();
   systemT->inputs[2] = makerst_56498340();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_56498300();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_56464020();

   return systemT;
}