#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_58166900;

SignalI clk_58164640_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeclk_58164640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58164640_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)counter_58_8400_58166900;
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

SignalI ack_58164620_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack_58164620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_58164620_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)counter_58_8400_58166900;
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

SignalI rst_58164600_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makerst_58164600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58164600_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)counter_58_8400_58166900;
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

SignalI ack__mac_58164540_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack__mac_58164540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_58164540_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)counter_58_8400_58166900;
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

Block __58170940;

Block __58170660;

void code__58170660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57307740(),q_58171120_counter_58_840_58114300_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57307620(),ack__mac_58164540_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__58170660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58170660 = block;
   block->owner = (Object)__58170940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58170660;

   return block;
};

Block __58169840;

Block __58169680;

Block __58168260;

void code__58168260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57306880(),q_58171120_counter_58_840_58114300_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57306780(),ack__mac_58164540_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__58168260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58168260 = block;
   block->owner = (Object)__58169680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58168260;

   return block;
};

void code__58169680() {
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
                  src0 = q_58171120_counter_58_840_58114300_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57307260();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_58171120_counter_58_840_58114300_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_58171120_counter_58_840_58114300_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57306980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58168260();
   }
      }
   }
}

Block make__58169680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58169680 = block;
   block->owner = (Object)__58169840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58169680;

   return block;
};

void code__58169840() {
 code__58169680();
}

Block make__58169840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58169840 = block;
   block->owner = (Object)__58170940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58169840;

   return block;
};

void code__58170940() {
   {
      Value cond = rst_58164600_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58170660();
   }
   else if (value2integer(ack_58164620_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value)) {
  code__58169840();
   }
      }
   }
}

Block make__58170940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58170940 = block;
   block->owner = (Object)__58167240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58170940;

   return block;
};

Value make__57307740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57307620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57307260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57306980() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57306880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57306780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_58114300;

SignalI q_58171120_counter_58_840_58114300_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeq_58171120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_58171120_counter_58_840_58114300_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)counter_58_840_58114300;
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

Behavior __58167240;

Behavior make__58167240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58167240 = behavior;
   behavior->owner = (Object)counter_58_840_58114300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58164640_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_58164640_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos += 1;
   clk_58164640_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos = realloc(clk_58164640_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos,clk_58164640_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos*sizeof(Object));
clk_58164640_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos[clk_58164640_counter_58_8400_58166900_layer1_58_84_58313820_layer1_58_840_47253500_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos-1] = (Object)behavior;
   behavior->block = make__58170940();

   return behavior;
}

Scope makecounter_58_840_58114300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_58114300 = scope;
   scope->owner = (Object)counter_58_8400_58166900;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_58171120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58167240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_58166900() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_58166900 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58164640();
   systemT->inputs[1] = makeack_58164620();
   systemT->inputs[2] = makerst_58164600();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_58164540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_58114300();

   return systemT;
}