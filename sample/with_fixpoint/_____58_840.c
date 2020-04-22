#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_47737380;

Block __47740680;

void code__47740680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47758940(),x_47741080___47741540______58_840_47737380);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47758880(),y_47740940___47741540______58_840_47737380);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47737500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = x_47741080___47741540______58_840_47737380->c_value;
            src1 = y_47740940___47741540______58_840_47737380->c_value;
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_vector(get_type_bit(),4),4),dst);
      set_value_pos(pool_state);
   dst; }),z_47740800___47741540______58_840_47737380);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47737500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = x_47741080___47741540______58_840_47737380->c_value;
            src1 = y_47740940___47741540______58_840_47737380->c_value;
            dst = mul_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_vector(get_type_bit(),4),4),dst);
      set_value_pos(pool_state);
   dst; }),z_47740800___47741540______58_840_47737380);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47737500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = z_47740800___47741540______58_840_47737380->c_value;
      src1 = x_47741080___47741540______58_840_47737380->c_value;
      dst = div_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),z_47740800___47741540______58_840_47737380);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__47737500);
}

Block make__47740680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47740680 = block;
   block->owner = (Object)__47737500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47740680;

   return block;
};

Value make__47758940() {
   static unsigned long long data[] = { 51ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_bit(),4),4),1,data);
}

Value make__47758880() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_bit(),4),4),1,data);
}

Scope __47741540;

SignalI x_47741080___47741540______58_840_47737380;

SignalI makex_47741080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   x_47741080___47741540______58_840_47737380 = signalI;
   signalI->owner = (Object)__47741540;
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

SignalI y_47740940___47741540______58_840_47737380;

SignalI makey_47740940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   y_47740940___47741540______58_840_47737380 = signalI;
   signalI->owner = (Object)__47741540;
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

SignalI z_47740800___47741540______58_840_47737380;

SignalI makez_47740800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z_47740800___47741540______58_840_47737380 = signalI;
   signalI->owner = (Object)__47741540;
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

Behavior __47737500;

Behavior make__47737500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47737500 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__47741540;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__47740680();

   return behavior;
}

Scope make__47741540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47741540 = scope;
   scope->owner = (Object)_____58_840_47737380;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 3;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makex_47741080();
   scope->inners[1] = makey_47740940();
   scope->inners[2] = makez_47740800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47737500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_47737380() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_47737380 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47741540();

   return systemT;
}