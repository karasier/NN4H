#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8410_59298260;

SignalI clk_59294600_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeclk_59294600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59294600_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)counter_58_8410_59298260;
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

SignalI ack_59294540_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack_59294540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_59294540_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)counter_58_8410_59298260;
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

SignalI rst_59294520_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makerst_59294520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59294520_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)counter_58_8410_59298260;
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

SignalI ack__mac_59294400_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack__mac_59294400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_59294400_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)counter_58_8410_59298260;
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

Block __59263700;

Block __59263300;

void code__59263300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73417000(),q_59263900_counter_58_841_59265580_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__73416920(),ack__mac_59294400_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59263300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59263300 = block;
   block->owner = (Object)__59263700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59263300;

   return block;
};

Block __59262120;

Block __59261680;

Block __59300340;

void code__59300340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__73440860(),q_59263900_counter_58_841_59265580_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__73440760(),ack__mac_59294400_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59300340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59300340 = block;
   block->owner = (Object)__59261680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59300340;

   return block;
};

void code__59261680() {
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
                  src0 = q_59263900_counter_58_841_59265580_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__73441220();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),q_59263900_counter_58_841_59265580_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_59263900_counter_58_841_59265580_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__73440960();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59300340();
   }
      }
   }
}

Block make__59261680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59261680 = block;
   block->owner = (Object)__59262120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59261680;

   return block;
};

void code__59262120() {
 code__59261680();
}

Block make__59262120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59262120 = block;
   block->owner = (Object)__59263700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59262120;

   return block;
};

void code__59263700() {
   {
      Value cond = rst_59294520_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59263300();
   }
   else if (value2integer(ack_59294540_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value)) {
  code__59262120();
   }
      }
   }
}

Block make__59263700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59263700 = block;
   block->owner = (Object)__59298800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59263700;

   return block;
};

Value make__73417000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__73416920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__73441220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73440960() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__73440860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__73440760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_841_59265580;

SignalI q_59263900_counter_58_841_59265580_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeq_59263900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_59263900_counter_58_841_59265580_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)counter_58_841_59265580;
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

Behavior __59298800;

Behavior make__59298800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59298800 = behavior;
   behavior->owner = (Object)counter_58_841_59265580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59294600_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_59294600_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_59294600_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg = realloc(clk_59294600_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg,clk_59294600_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_59294600_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg[clk_59294600_counter_58_8410_59298260_layer0_58_840_59835720_layer0_58_8400_71480580_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__59263700();

   return behavior;
}

Scope makecounter_58_841_59265580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_841_59265580 = scope;
   scope->owner = (Object)counter_58_8410_59298260;
   scope->name = "counter:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_59263900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59298800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8410_59298260() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8410_59298260 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T10";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59294600();
   systemT->inputs[1] = makeack_59294540();
   systemT->inputs[2] = makerst_59294520();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_59294400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_841_59265580();

   return systemT;
}