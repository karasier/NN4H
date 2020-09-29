#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_58951660;

SignalI clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeclk_58973740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)counter_58_8400_58951660;
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

SignalI ack_58973720_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeack_58973720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_58973720_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)counter_58_8400_58951660;
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

SignalI rst_58973700_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makerst_58973700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58973700_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)counter_58_8400_58951660;
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

SignalI ack__mac_58973660_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeack__mac_58973660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_58973660_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)counter_58_8400_58951660;
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

Block __58957500;

Block __58957180;

void code__58957180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58269640(),q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58269560(),ack__mac_58973660_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__58957180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58957180 = block;
   block->owner = (Object)__58957500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58957180;

   return block;
};

Block __58956020;

void code__58956020() {
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
                  src0 = q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58269240();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__58956020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58956020 = block;
   block->owner = (Object)__58957500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58956020;

   return block;
};

void code__58957500() {
   {
      Value cond = rst_58973700_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58957180();
   }
   else if (value2integer(ack_58973720_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value)) {
  code__58956020();
   }
      }
   }
}

Block make__58957500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58957500 = block;
   block->owner = (Object)__58955160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58957500;

   return block;
};

Block __58955000;

Block __58954400;

void code__58954400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58268820(),q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__58954400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58954400 = block;
   block->owner = (Object)__58955000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58954400;

   return block;
};

void code__58955000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58268940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58954400();
   }
      }
   }
}

Block make__58955000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58955000 = block;
   block->owner = (Object)__58953620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58955000;

   return block;
};

Block __58953500;

Block __58953100;

void code__58953100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58268540(),ack__mac_58973660_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__58953100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58953100 = block;
   block->owner = (Object)__58953500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58953100;

   return block;
};

void code__58953500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58268720();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58953100();
   }
      }
   }
}

Block make__58953500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58953500 = block;
   block->owner = (Object)__58951980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58953500;

   return block;
};

Value make__58269640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58269560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58269240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58268940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58268820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__58268720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58268540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_58802380;

SignalI q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeq_58957620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)counter_58_840_58802380;
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

Behavior __58955160;

Behavior make__58955160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58955160 = behavior;
   behavior->owner = (Object)counter_58_840_58802380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos += 1;
   clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos = realloc(clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos,clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos*sizeof(Object));
clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos[clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos-1] = (Object)behavior;
   behavior->block = make__58957500();

   return behavior;
}

Behavior __58953620;

Behavior make__58953620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58953620 = behavior;
   behavior->owner = (Object)counter_58_840_58802380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_neg += 1;
   clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->neg = realloc(clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->neg,clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_neg*sizeof(Object));
clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->neg[clk_58973740_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_neg-1] = (Object)behavior;
   behavior->block = make__58955000();

   return behavior;
}

Behavior __58951980;

Behavior make__58951980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58951980 = behavior;
   behavior->owner = (Object)counter_58_840_58802380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[q_58957620_counter_58_840_58802380_counter_58_8400_58951660_layer1_58_84_59207640_layer1_58_840_50302140_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__58953500();

   return behavior;
}

Scope makecounter_58_840_58802380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_58802380 = scope;
   scope->owner = (Object)counter_58_8400_58951660;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_58957620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58955160();
   scope->behaviors[1] = make__58953620();
   scope->behaviors[2] = make__58951980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_58951660() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_58951660 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58973740();
   systemT->inputs[1] = makeack_58973720();
   systemT->inputs[2] = makerst_58973700();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_58973660();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_58802380();

   return systemT;
}