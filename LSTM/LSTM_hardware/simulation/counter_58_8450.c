#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8450_156012840;

SignalI clk_156008900_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeclk_156008900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_156008900_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8450_156012840;
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

SignalI ack_156008840_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeack_156008840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_156008840_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8450_156012840;
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

SignalI rst_156008820_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makerst_156008820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_156008820_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8450_156012840;
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

SignalI ack__mac_156008760_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeack__mac_156008760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_156008760_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8450_156012840;
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

Block __155921040;

Block __155920640;

void code__155920640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__89559320(),q_155921280_counter_58_845_155922960_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__89559260(),ack__mac_156008760_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__155920640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __155920640 = block;
   block->owner = (Object)__155921040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__155920640;

   return block;
};

Block __155919180;

Block __155918880;

Block __156015020;

void code__156015020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__89558740(),q_155921280_counter_58_845_155922960_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__89558620(),ack__mac_156008760_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__156015020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __156015020 = block;
   block->owner = (Object)__155918880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__156015020;

   return block;
};

void code__155918880() {
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
                  src0 = q_155921280_counter_58_845_155922960_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__89559060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),q_155921280_counter_58_845_155922960_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_155921280_counter_58_845_155922960_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__89558840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__156015020();
   }
      }
   }
}

Block make__155918880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __155918880 = block;
   block->owner = (Object)__155919180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__155918880;

   return block;
};

void code__155919180() {
 code__155918880();
}

Block make__155919180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __155919180 = block;
   block->owner = (Object)__155921040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__155919180;

   return block;
};

void code__155921040() {
   {
      Value cond = rst_156008820_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__155920640();
   }
   else if (value2integer(ack_156008840_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value)) {
  code__155919180();
   }
      }
   }
}

Block make__155921040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __155921040 = block;
   block->owner = (Object)__156013380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__155921040;

   return block;
};

Value make__89559320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),4),1,data);
}

Value make__89559260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__89559060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__89558840() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__89558740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),4),1,data);
}

Value make__89558620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_845_155922960;

SignalI q_155921280_counter_58_845_155922960_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeq_155921280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_155921280_counter_58_845_155922960_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_845_155922960;
   signalI->name = "q";
   signalI->type = get_type_vector(get_type_bit(),4);
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

Behavior __156013380;

Behavior make__156013380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __156013380 = behavior;
   behavior->owner = (Object)counter_58_845_155922960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_156008900_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   clk_156008900_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_neg += 1;
   clk_156008900_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->neg = realloc(clk_156008900_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->neg,clk_156008900_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_neg*sizeof(Object));
clk_156008900_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->neg[clk_156008900_counter_58_8450_156012840_layer0_58_842_205893040_layer0_58_8420_210054680_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_neg-1] = (Object)behavior;
   behavior->block = make__155921040();

   return behavior;
}

Scope makecounter_58_845_155922960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_845_155922960 = scope;
   scope->owner = (Object)counter_58_8450_156012840;
   scope->name = "counter:T5";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_155921280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__156013380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8450_156012840() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8450_156012840 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T50";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_156008900();
   systemT->inputs[1] = makeack_156008840();
   systemT->inputs[2] = makerst_156008820();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_156008760();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_845_155922960();

   return systemT;
}