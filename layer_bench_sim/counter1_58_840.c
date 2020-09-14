#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter1_58_840_58988560;

SignalI clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeclk_58986720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)counter1_58_840_58988560;
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

SignalI ack_58986700_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeack_58986700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_58986700_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)counter1_58_840_58988560;
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

SignalI rst_58986680_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makerst_58986680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58986680_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)counter1_58_840_58988560;
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

SignalI ack__mac_58986640_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeack__mac_58986640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_58986640_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)counter1_58_840_58988560;
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

Block __58968420;

Block __58968200;

void code__58968200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61226860(),q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61226800(),ack__mac_58986640_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__58968200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58968200 = block;
   block->owner = (Object)__58968420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58968200;

   return block;
};

Block __58967520;

void code__58967520() {
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
                  src0 = q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61226540();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__58967520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58967520 = block;
   block->owner = (Object)__58968420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58967520;

   return block;
};

void code__58968420() {
   {
      Value cond = rst_58986680_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58968200();
   }
   else if (value2integer(ack_58986700_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value)) {
  code__58967520();
   }
      }
   }
}

Block make__58968420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58968420 = block;
   block->owner = (Object)__58966700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58968420;

   return block;
};

Block __58966580;

Block __58966200;

void code__58966200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61226260(),q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__58966200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58966200 = block;
   block->owner = (Object)__58966580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58966200;

   return block;
};

void code__58966580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61226340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58966200();
   }
      }
   }
}

Block make__58966580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58966580 = block;
   block->owner = (Object)__58990060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58966580;

   return block;
};

Block __58989940;

Block __58989560;

void code__58989560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61225900(),ack__mac_58986640_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__58989560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58989560 = block;
   block->owner = (Object)__58989940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58989560;

   return block;
};

void code__58989940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61226120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58989560();
   }
      }
   }
}

Block make__58989940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58989940 = block;
   block->owner = (Object)__58988880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58989940;

   return block;
};

Value make__61226860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__61226800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61226540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61226340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61226260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__61226120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61225900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter1_58_84_58968920;

SignalI q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeq_58968540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)counter1_58_84_58968920;
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

Behavior __58966700;

Behavior make__58966700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58966700 = behavior;
   behavior->owner = (Object)counter1_58_84_58968920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos += 1;
   clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos = realloc(clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos,clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos*sizeof(Object));
clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos[clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos-1] = (Object)behavior;
   behavior->block = make__58968420();

   return behavior;
}

Behavior __58990060;

Behavior make__58990060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58990060 = behavior;
   behavior->owner = (Object)counter1_58_84_58968920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_neg += 1;
   clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->neg = realloc(clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->neg,clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_neg*sizeof(Object));
clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->neg[clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_neg-1] = (Object)behavior;
   behavior->block = make__58966580();

   return behavior;
}

Behavior __58988880;

Behavior make__58988880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58988880 = behavior;
   behavior->owner = (Object)counter1_58_84_58968920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[q_58968540_counter1_58_84_58968920_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__58989940();

   return behavior;
}

Scope makecounter1_58_84_58968920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter1_58_84_58968920 = scope;
   scope->owner = (Object)counter1_58_840_58988560;
   scope->name = "counter1:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_58968540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58966700();
   scope->behaviors[1] = make__58990060();
   scope->behaviors[2] = make__58988880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter1_58_840_58988560() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter1_58_840_58988560 = systemT;
systemT->owner = NULL;
   systemT->name = "counter1:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58986720();
   systemT->inputs[1] = makeack_58986700();
   systemT->inputs[2] = makerst_58986680();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_58986640();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter1_58_84_58968920();

   return systemT;
}