#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter1_58_840_59097720;

SignalI clk_59120420_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeclk_59120420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59120420_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)counter1_58_840_59097720;
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

SignalI ack_59120400_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeack_59120400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_59120400_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)counter1_58_840_59097720;
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

SignalI rst_59120380_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makerst_59120380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59120380_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)counter1_58_840_59097720;
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

SignalI ack__mac_59120340_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeack__mac_59120340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_59120340_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)counter1_58_840_59097720;
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

Block __59102000;

Block __59100380;

void code__59100380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60935560(),q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60935480(),ack__mac_59120340_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59100380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59100380 = block;
   block->owner = (Object)__59102000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59100380;

   return block;
};

Block __59101840;

Block __59100900;

void code__59100900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60935260(),q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59100900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59100900 = block;
   block->owner = (Object)__59101840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59100900;

   return block;
};

Block __59101680;

void code__59101680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
            dst = cast_value(src0,get_type_bit(),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = ack_59120400_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59101680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59101680 = block;
   block->owner = (Object)__59101840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59101680;

   return block;
};

void code__59101840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60935400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59100900();
   }
   else {
  code__59101680();
   }
      }
   }
}

Block make__59101840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59101840 = block;
   block->owner = (Object)__59102000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59101840;

   return block;
};

void code__59102000() {
   {
      Value cond = rst_59120380_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59100380();
   }
   else {
  code__59101840();
   }
      }
   }
}

Block make__59102000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59102000 = block;
   block->owner = (Object)__59099540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59102000;

   return block;
};

Block __59099420;

Block __59098720;

void code__59098720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60934940(),ack__mac_59120340_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59098720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59098720 = block;
   block->owner = (Object)__59099420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59098720;

   return block;
};

Block __59099260;

void code__59099260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60934880(),ack__mac_59120340_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59099260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59099260 = block;
   block->owner = (Object)__59099420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59099260;

   return block;
};

void code__59099420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60935020();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59098720();
   }
   else {
  code__59099260();
   }
      }
   }
}

Block make__59099420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59099420 = block;
   block->owner = (Object)__59098040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59099420;

   return block;
};

Value make__60935560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60935480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60935400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60935260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60935020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60934940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60934880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter1_58_84_59102500;

SignalI q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700;

SignalI makeq_59102120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)counter1_58_84_59102500;
   signalI->name = "q";
   signalI->type = get_type_vector(get_type_bit(),1);
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

Behavior __59099540;

Behavior make__59099540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59099540 = behavior;
   behavior->owner = (Object)counter1_58_84_59102500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59120420_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   clk_59120420_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos += 1;
   clk_59120420_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos = realloc(clk_59120420_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos,clk_59120420_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos*sizeof(Object));
clk_59120420_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->pos[clk_59120420_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_pos-1] = (Object)behavior;
   behavior->block = make__59102000();

   return behavior;
}

Behavior __59098040;

Behavior make__59098040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59098040 = behavior;
   behavior->owner = (Object)counter1_58_84_59102500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[q_59102120_counter1_58_84_59102500_counter1_58_840_59097720_layer1_58_84_52987540_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__59099420();

   return behavior;
}

Scope makecounter1_58_84_59102500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter1_58_84_59102500 = scope;
   scope->owner = (Object)counter1_58_840_59097720;
   scope->name = "counter1:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_59102120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59099540();
   scope->behaviors[1] = make__59098040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter1_58_840_59097720() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter1_58_840_59097720 = systemT;
systemT->owner = NULL;
   systemT->name = "counter1:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59120420();
   systemT->inputs[1] = makeack_59120400();
   systemT->inputs[2] = makerst_59120380();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_59120340();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter1_58_84_59102500();

   return systemT;
}