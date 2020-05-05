#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_42759180;

Block __42126640;

void code__42126640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__42776800(),x_42128540___42129980______58_840_42759180);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__42776220(),y_42128280___42129980______58_840_42759180);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__42759500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = x_42128540___42129980______58_840_42759180->c_value;
            src1 = y_42128280___42129980______58_840_42759180->c_value;
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_vector(get_type_bit(),4),4),dst);
      set_value_pos(pool_state);
   dst; }),z_42127180___42129980______58_840_42759180);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__42759500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = x_42128540___42129980______58_840_42759180->c_value;
            src1 = y_42128280___42129980______58_840_42759180->c_value;
            dst = mul_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_vector(get_type_bit(),4),4),dst);
      set_value_pos(pool_state);
   dst; }),z_42127180___42129980______58_840_42759180);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__42759500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = z_42127180___42129980______58_840_42759180->c_value;
      src1 = x_42128540___42129980______58_840_42759180->c_value;
      dst = div_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),z_42127180___42129980______58_840_42759180);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__42759500);
}

Block make__42126640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42126640 = block;
   block->owner = (Object)__42759500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42126640;

   return block;
};

Value make__42776800() {
   static unsigned long long data[] = { 51ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_bit(),4),4),1,data);
}

Value make__42776220() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_bit(),4),4),1,data);
}

Scope __42129980;

SignalI x_42128540___42129980______58_840_42759180;

SignalI makex_42128540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   x_42128540___42129980______58_840_42759180 = signalI;
   signalI->owner = (Object)__42129980;
   signalI->name = "x";
   signalI->type = get_type_vector(get_type_vector(get_type_bit(),4),4);
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

SignalI y_42128280___42129980______58_840_42759180;

SignalI makey_42128280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   y_42128280___42129980______58_840_42759180 = signalI;
   signalI->owner = (Object)__42129980;
   signalI->name = "y";
   signalI->type = get_type_vector(get_type_vector(get_type_bit(),4),4);
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

SignalI z_42127180___42129980______58_840_42759180;

SignalI makez_42127180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z_42127180___42129980______58_840_42759180 = signalI;
   signalI->owner = (Object)__42129980;
   signalI->name = "z";
   signalI->type = get_type_vector(get_type_vector(get_type_bit(),4),4);
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

Behavior __42759500;

Behavior make__42759500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42759500 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__42129980;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__42126640();

   return behavior;
}

Scope make__42129980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42129980 = scope;
   scope->owner = (Object)_____58_840_42759180;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 3;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makex_42128540();
   scope->inners[1] = makey_42128280();
   scope->inners[2] = makez_42127180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__42759500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_42759180() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_42759180 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__42129980();

   return systemT;
}