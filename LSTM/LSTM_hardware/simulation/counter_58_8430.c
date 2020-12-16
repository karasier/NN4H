#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT counter_58_8430_108867480;

SignalI clk_108976720_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeclk_108976720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_108976720_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8430_108867480;
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

SignalI ack_108976700_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeack_108976700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_108976700_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8430_108867480;
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

SignalI rst_108976660_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makerst_108976660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_108976660_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8430_108867480;
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

SignalI ack__mac_108976520_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeack__mac_108976520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_108976520_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_8430_108867480;
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

Block __108819240;

Block __108818880;

void code__108818880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209277400(),q_108819360_counter_58_843_108820180_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209277340(),ack__mac_108976520_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__108818880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108818880 = block;
   block->owner = (Object)__108819240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108818880;

   return block;
};

Block __108815880;

Block __108815380;

Block __108870620;

void code__108870620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__209276640(),q_108819360_counter_58_843_108820180_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__209276500(),ack__mac_108976520_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__108870620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108870620 = block;
   block->owner = (Object)__108815380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108870620;

   return block;
};

void code__108815380() {
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
                  src0 = q_108819360_counter_58_843_108820180_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__209277120();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),q_108819360_counter_58_843_108820180_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = q_108819360_counter_58_843_108820180_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209276800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__108870620();
   }
      }
   }
}

Block make__108815380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108815380 = block;
   block->owner = (Object)__108815880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108815380;

   return block;
};

void code__108815880() {
 code__108815380();
}

Block make__108815880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108815880 = block;
   block->owner = (Object)__108819240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108815880;

   return block;
};

void code__108819240() {
   {
      Value cond = rst_108976660_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__108818880();
   }
   else if (value2integer(ack_108976700_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value)) {
  code__108815880();
   }
      }
   }
}

Block make__108819240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108819240 = block;
   block->owner = (Object)__108868240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108819240;

   return block;
};

Value make__209277400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),4),1,data);
}

Value make__209277340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209277120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209276800() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209276640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),4),1,data);
}

Value make__209276500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope counter_58_843_108820180;

SignalI q_108819360_counter_58_843_108820180_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeq_108819360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   q_108819360_counter_58_843_108820180_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)counter_58_843_108820180;
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

Behavior __108868240;

Behavior make__108868240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __108868240 = behavior;
   behavior->owner = (Object)counter_58_843_108820180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_108976720_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   clk_108976720_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg += 1;
   clk_108976720_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg = realloc(clk_108976720_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg,clk_108976720_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg*sizeof(Object));
clk_108976720_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg[clk_108976720_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg-1] = (Object)behavior;
   behavior->block = make__108819240();

   return behavior;
}

Scope makecounter_58_843_108820180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   counter_58_843_108820180 = scope;
   scope->owner = (Object)counter_58_8430_108867480;
   scope->name = "counter:T3";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeq_108819360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__108868240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makecounter_58_8430_108867480() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   counter_58_8430_108867480 = systemT;
systemT->owner = NULL;
   systemT->name = "counter:T30";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_108976720();
   systemT->inputs[1] = makeack_108976700();
   systemT->inputs[2] = makerst_108976660();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__mac_108976520();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makecounter_58_843_108820180();

   return systemT;
}