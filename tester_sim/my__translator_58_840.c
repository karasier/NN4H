#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__translator_58_840_47345240;

SignalI z__value_47343240_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360;

SignalI makez__value_47343240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47343240_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360 = signalI;
   signalI->owner = (Object)my__translator_58_840_47345240;
   signalI->name = "z_value";
   signalI->type = get_type_vector(get_type_signed(),32);
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

SignalI addr_47343140_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360;

SignalI makeaddr_47343140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47343140_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360 = signalI;
   signalI->owner = (Object)my__translator_58_840_47345240;
   signalI->name = "addr";
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

SignalI remaining_47343060_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360;

SignalI makeremaining_47343060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47343060_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360 = signalI;
   signalI->owner = (Object)my__translator_58_840_47345240;
   signalI->name = "remaining";
   signalI->type = get_type_vector(get_type_bit(),24);
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

Block __50162180;

void code__50162180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47343240_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->c_value;
            first = value2integer(make__50183980());
            last = value2integer(make__50183960());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),addr_47343140_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47343240_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->c_value;
            first = value2integer(make__50183780());
            last = value2integer(make__50183760());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),24),dst);
      set_value_pos(pool_state);
   dst; }),remaining_47343060_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
}

Block make__50162180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50162180 = block;
   block->owner = (Object)__50160540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50162180;

   return block;
};

Value make__50183980() {
   static unsigned long long data[] = { 31ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50183960() {
   static unsigned long long data[] = { 24ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50183780() {
   static unsigned long long data[] = { 23ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50183760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47347440;

Behavior __50160540;

Behavior make__50160540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50160540 = behavior;
   behavior->owner = (Object)__47347440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47343240_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
   z__value_47343240_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any += 1;
   z__value_47343240_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any = realloc(z__value_47343240_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any,z__value_47343240_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any*sizeof(Object));
z__value_47343240_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any[z__value_47343240_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any-1] = (Object)behavior;
   behavior->block = make__50162180();

   return behavior;
}

Scope make__47347440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47347440 = scope;
   scope->owner = (Object)my__translator_58_840_47345240;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50160540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__translator_58_840_47345240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__translator_58_840_47345240 = systemT;
systemT->owner = NULL;
   systemT->name = "my_translator:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47343240();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeaddr_47343140();
   systemT->outputs[1] = makeremaining_47343060();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47347440();

   return systemT;
}