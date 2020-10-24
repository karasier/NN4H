#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_841_50715080;

SignalI clk_50712260_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeclk_50712260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_50712260_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)counter_58_841_50715080;
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

SignalI ack_50712160_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack_50712160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_50712160_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)counter_58_841_50715080;
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

SignalI rst_50712140_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makerst_50712140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_50712140_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)counter_58_841_50715080;
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

SignalI ack__mac_50712080_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack__mac_50712080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50712080_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)counter_58_841_50715080;
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

Block __50695940;

Block __50695720;

void code__50695720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49921020(),q_50696100_counter_58_84_50696540_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49920740(),ack__mac_50712080_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50695720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50695720 = block;
   block->owner = (Object)__50695940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50695720;

   return block;
};

Block __50694020;

Block __50693820;

Block __50692980;

void code__50692980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__49919400(),q_50696100_counter_58_84_50696540_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__49919280(),ack__mac_50712080_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50692980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50692980 = block;
   block->owner = (Object)__50693820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50692980;

   return block;
};

void code__50693820() {
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
                  src0 = q_50696100_counter_58_84_50696540_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49919760();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_50696100_counter_58_84_50696540_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_50696100_counter_58_84_50696540_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49919520();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50692980();
   }
      }
   }
}

Block make__50693820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50693820 = block;
   block->owner = (Object)__50694020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50693820;

   return block;
};

void code__50694020() {
 code__50693820();
}

Block make__50694020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50694020 = block;
   block->owner = (Object)__50695940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50694020;

   return block;
};

void code__50695940() {
   {
      Value cond = rst_50712140_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50695720();
   }
   else if (value2integer(ack_50712160_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value)) {
  code__50694020();
   }
      }
   }
}

Block make__50695940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50695940 = block;
   block->owner = (Object)__50715420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50695940;

   return block;
};

Value make__49921020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__49920740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49919760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49919520() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49919400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__49919280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_50696540;

SignalI q_50696100_counter_58_84_50696540_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeq_50696100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_50696100_counter_58_84_50696540_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)counter_58_84_50696540;
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

Behavior __50715420;

Behavior make__50715420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50715420 = behavior;
   behavior->owner = (Object)counter_58_84_50696540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50712260_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_50712260_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg += 1;
   clk_50712260_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg = realloc(clk_50712260_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg,clk_50712260_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg*sizeof(Object));
clk_50712260_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg[clk_50712260_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg-1] = (Object)behavior;
   behavior->block = make__50695940();

   return behavior;
}

Scope makecounter_58_84_50696540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_50696540 = scope;
   scope->owner = (Object)counter_58_841_50715080;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_50696100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50715420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_841_50715080() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_841_50715080 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T1";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_50712260();
   systemT->inputs[1] = makeack_50712160();
   systemT->inputs[2] = makerst_50712140();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_50712080();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_50696540();

   return systemT;
}