#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8400_56224920;

SignalI clk_56222260_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeclk_56222260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_56222260_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)counter_58_8400_56224920;
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

SignalI ack_56222200_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack_56222200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_56222200_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)counter_58_8400_56224920;
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

SignalI rst_56222180_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makerst_56222180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_56222180_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)counter_58_8400_56224920;
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

SignalI ack__mac_56222140_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack__mac_56222140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_56222140_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)counter_58_8400_56224920;
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

Block __56205900;

Block __56229800;

void code__56229800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50480520(),q_56206020_counter_58_840_56207680_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50480440(),ack__mac_56222140_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56229800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56229800 = block;
   block->owner = (Object)__56205900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56229800;

   return block;
};

Block __56228520;

Block __56228360;

Block __56226740;

void code__56226740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50479860(),q_56206020_counter_58_840_56207680_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50479700(),ack__mac_56222140_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56226740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56226740 = block;
   block->owner = (Object)__56228360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56226740;

   return block;
};

void code__56228360() {
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
                  src0 = q_56206020_counter_58_840_56207680_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50480200();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_56206020_counter_58_840_56207680_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_56206020_counter_58_840_56207680_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50480020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56226740();
   }
      }
   }
}

Block make__56228360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56228360 = block;
   block->owner = (Object)__56228520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56228360;

   return block;
};

void code__56228520() {
 code__56228360();
}

Block make__56228520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56228520 = block;
   block->owner = (Object)__56205900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56228520;

   return block;
};

void code__56205900() {
   {
      Value cond = rst_56222180_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56229800();
   }
   else if (value2integer(ack_56222200_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value)) {
  code__56228520();
   }
      }
   }
}

Block make__56205900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56205900 = block;
   block->owner = (Object)__56225340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56205900;

   return block;
};

Value make__50480520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__50480440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50480200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50480020() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50479860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__50479700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_840_56207680;

SignalI q_56206020_counter_58_840_56207680_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeq_56206020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_56206020_counter_58_840_56207680_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)counter_58_840_56207680;
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

Behavior __56225340;

Behavior make__56225340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56225340 = behavior;
   behavior->owner = (Object)counter_58_840_56207680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56222260_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_56222260_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg += 1;
   clk_56222260_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg = realloc(clk_56222260_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg,clk_56222260_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg*sizeof(Object));
clk_56222260_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg[clk_56222260_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg-1] = (Object)behavior;
   behavior->block = make__56205900();

   return behavior;
}

Scope makecounter_58_840_56207680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_840_56207680 = scope;
   scope->owner = (Object)counter_58_8400_56224920;
   scope->name = "counter:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_56206020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56225340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8400_56224920() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8400_56224920 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_56222260();
   systemT->inputs[1] = makeack_56222200();
   systemT->inputs[2] = makerst_56222180();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_56222140();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_840_56207680();

   return systemT;
}