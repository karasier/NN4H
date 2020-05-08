#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_46763360;

Block __46766880;

Block __46765540;

void code__46765540() {
}

Block make__46765540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46765540 = block;
   block->owner = (Object)__46766880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46765540;

   return block;
};

Block __46764600;

void code__46764600() {
}

Block make__46764600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46764600 = block;
   block->owner = (Object)__46766880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46764600;

   return block;
};

void code__46766880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__46759980(),x_46767240___46767660______58_840_46763360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__46784260(),y_46767140___46767660______58_840_46763360);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__46763500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = x_46767240___46767660______58_840_46763360->c_value;
            src1 = y_46767140___46767660______58_840_46763360->c_value;
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),z_46767040___46767660______58_840_46763360);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__46763500);
 code__46765540();
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
                  src0 = ({
                        Value src0,src1,dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = x_46767240___46767660______58_840_46763360->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = y_46767140___46767660______58_840_46763360->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__46783940();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),z_46767040___46767660______58_840_46763360);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__46763500);
 code__46764600();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = z_46767040___46767660______58_840_46763360->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__46783720();
                  dst = shift_left_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = x_46767240___46767660______58_840_46763360->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_bit(),2147483660),dst);
                  set_value_pos(pool_state);
               dst; });
            dst = div_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),z_46767040___46767660______58_840_46763360);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__46763500);
}

Block make__46766880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46766880 = block;
   block->owner = (Object)__46763500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46766880;

   return block;
};

Value make__46759980() {
   static unsigned long long data[] = { 51ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__46784260() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__46783940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__46783720() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __46767660;

SignalI x_46767240___46767660______58_840_46763360;

SignalI makex_46767240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   x_46767240___46767660______58_840_46763360 = signalI;
   signalI->owner = (Object)__46767660;
   signalI->name = "x";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI y_46767140___46767660______58_840_46763360;

SignalI makey_46767140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   y_46767140___46767660______58_840_46763360 = signalI;
   signalI->owner = (Object)__46767660;
   signalI->name = "y";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI z_46767040___46767660______58_840_46763360;

SignalI makez_46767040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z_46767040___46767660______58_840_46763360 = signalI;
   signalI->owner = (Object)__46767660;
   signalI->name = "z";
   signalI->type = get_type_vector(get_type_bit(),8);
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

Behavior __46763500;

Behavior make__46763500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46763500 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__46767660;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__46766880();

   return behavior;
}

Scope make__46767660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46767660 = scope;
   scope->owner = (Object)_____58_840_46763360;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 3;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makex_46767240();
   scope->inners[1] = makey_46767140();
   scope->inners[2] = makez_46767040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46763500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_46763360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_46763360 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__46767660();

   return systemT;
}