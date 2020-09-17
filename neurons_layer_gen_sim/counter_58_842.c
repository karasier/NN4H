#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_842_51207420;

SignalI clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makeclk_51204540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)counter_58_842_51207420;
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

SignalI ack_51204520_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makeack_51204520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_51204520_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)counter_58_842_51207420;
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

SignalI rst_51204500_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makerst_51204500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_51204500_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)counter_58_842_51207420;
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

SignalI ack__mac_51204460_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makeack__mac_51204460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_51204460_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)counter_58_842_51207420;
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

Block __51174180;

Block __51173920;

void code__51173920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51272160(),q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51271900(),ack__mac_51204460_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__51173920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51173920 = block;
   block->owner = (Object)__51174180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51173920;

   return block;
};

Block __51173080;

void code__51173080() {
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
                  src0 = q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51270860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__51173080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51173080 = block;
   block->owner = (Object)__51174180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51173080;

   return block;
};

void code__51174180() {
   {
      Value cond = rst_51204500_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51173920();
   }
   else if (value2integer(ack_51204520_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value)) {
  code__51173080();
   }
      }
   }
}

Block make__51174180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51174180 = block;
   block->owner = (Object)__51171640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51174180;

   return block;
};

Block __51171180;

Block __51170200;

void code__51170200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51270080(),q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__51170200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51170200 = block;
   block->owner = (Object)__51171180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51170200;

   return block;
};

void code__51171180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51270300();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51170200();
   }
      }
   }
}

Block make__51171180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51171180 = block;
   block->owner = (Object)__51168720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51171180;

   return block;
};

Block __51168580;

Block __51168060;

void code__51168060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51268200(),ack__mac_51204460_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__51168060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51168060 = block;
   block->owner = (Object)__51168580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51168060;

   return block;
};

void code__51168580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51268520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51168060();
   }
      }
   }
}

Block make__51168580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51168580 = block;
   block->owner = (Object)__51207960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51168580;

   return block;
};

Value make__51272160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__51271900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51270860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51270300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51270080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__51268520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51268200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_84_51175180;

SignalI q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makeq_51174420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)counter_58_84_51175180;
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

Behavior __51171640;

Behavior make__51171640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51171640 = behavior;
   behavior->owner = (Object)counter_58_84_51175180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_pos += 1;
   clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->pos = realloc(clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->pos,clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_pos*sizeof(Object));
clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->pos[clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_pos-1] = (Object)behavior;
   behavior->block = make__51174180();

   return behavior;
}

Behavior __51168720;

Behavior make__51168720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51168720 = behavior;
   behavior->owner = (Object)counter_58_84_51175180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_neg += 1;
   clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->neg = realloc(clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->neg,clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_neg*sizeof(Object));
clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->neg[clk_51204540_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_neg-1] = (Object)behavior;
   behavior->block = make__51171180();

   return behavior;
}

Behavior __51207960;

Behavior make__51207960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51207960 = behavior;
   behavior->owner = (Object)counter_58_84_51175180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[q_51174420_counter_58_84_51175180_counter_58_842_51207420_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__51168580();

   return behavior;
}

Scope makecounter_58_84_51175180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_84_51175180 = scope;
   scope->owner = (Object)counter_58_842_51207420;
   scope->name = "counter:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_51174420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51171640();
   scope->behaviors[1] = make__51168720();
   scope->behaviors[2] = make__51207960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_842_51207420() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_842_51207420 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T2";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_51204540();
   systemT->inputs[1] = makeack_51204520();
   systemT->inputs[2] = makerst_51204500();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_51204460();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_84_51175180();

   return systemT;
}