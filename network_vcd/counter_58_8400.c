#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_61891440;

SignalI clk_61930420_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeclk_61930420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_61930420_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)counter_58_8400_61891440;
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

SignalI ack_61930400_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack_61930400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_61930400_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)counter_58_8400_61891440;
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

SignalI rst_61930380_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makerst_61930380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_61930380_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)counter_58_8400_61891440;
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

SignalI ack__mac_61930340_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack__mac_61930340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_61930340_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)counter_58_8400_61891440;
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

Block __61894680;

Block __61894460;

void code__61894460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63786740(),q_61894800_counter_58_840_61895180_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63786660(),ack__mac_61930340_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61894460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61894460 = block;
   block->owner = (Object)__61894680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61894460;

   return block;
};

Block __61893680;

Block __61893520;

Block __61892720;

void code__61892720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__63786120(),q_61894800_counter_58_840_61895180_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__63786040(),ack__mac_61930340_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61892720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61892720 = block;
   block->owner = (Object)__61893520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61892720;

   return block;
};

void code__61893520() {
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
                  src0 = q_61894800_counter_58_840_61895180_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__63786360();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_61894800_counter_58_840_61895180_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_61894800_counter_58_840_61895180_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__63786200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61892720();
   }
      }
   }
}

Block make__61893520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61893520 = block;
   block->owner = (Object)__61893680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61893520;

   return block;
};

void code__61893680() {
 code__61893520();
}

Block make__61893680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61893680 = block;
   block->owner = (Object)__61894680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61893680;

   return block;
};

void code__61894680() {
   {
      Value cond = rst_61930380_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61894460();
   }
   else if (value2integer(ack_61930400_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value)) {
  code__61893680();
   }
      }
   }
}

Block make__61894680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61894680 = block;
   block->owner = (Object)__61891820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61894680;

   return block;
};

Value make__63786740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__63786660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63786360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63786200() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63786120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__63786040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_61895180;

SignalI q_61894800_counter_58_840_61895180_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeq_61894800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_61894800_counter_58_840_61895180_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)counter_58_840_61895180;
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

Behavior __61891820;

Behavior make__61891820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61891820 = behavior;
   behavior->owner = (Object)counter_58_840_61895180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_61930420_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_61930420_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg += 1;
   clk_61930420_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg = realloc(clk_61930420_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg,clk_61930420_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg*sizeof(Object));
clk_61930420_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg[clk_61930420_counter_58_8400_61891440_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg-1] = (Object)behavior;
   behavior->block = make__61894680();

   return behavior;
}

Scope makecounter_58_840_61895180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_61895180 = scope;
   scope->owner = (Object)counter_58_8400_61891440;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_61894800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61891820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_61891440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_61891440 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_61930420();
   systemT->inputs[1] = makeack_61930400();
   systemT->inputs[2] = makerst_61930380();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_61930340();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_61895180();

   return systemT;
}