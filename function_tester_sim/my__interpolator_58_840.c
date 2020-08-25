#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_840_45779080;

SignalI remaining_47243120_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580;

SignalI makeremaining_47243120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47243120_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_45779080;
   signalI->name = "remaining";
   signalI->type = get_type_vector(get_type_signed(),8);
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

SignalI base_47511180_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580;

SignalI makebase_47511180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47511180_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_45779080;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),8);
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

SignalI next__data_47623580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580;

SignalI makenext__data_47623580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47623580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_45779080;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),8);
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

SignalI interpolated__value_47740580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580;

SignalI makeinterpolated__value_47740580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_47740580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_45779080;
   signalI->name = "interpolated_value";
   signalI->type = get_type_vector(get_type_signed(),8);
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

Block __48090140;

void code__48090140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_47511180_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value;
      src1 = ({
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
                              src0 = ({
                                    Value src0,src1,dst = get_value();
                                    unsigned int pool_state = get_value_pos();
                                    src0 = next__data_47623580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value;
                                    src1 = base_47511180_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_47243120_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__42405460();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_47740580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
}

Block make__48090140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48090140 = block;
   block->owner = (Object)__48087500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48090140;

   return block;
};

Value make__42405460() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_84_47544680;

Scope __47543500;

Scope make__47543500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47543500 = scope;
   scope->owner = (Object)my__interpolator_58_84_47544680;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48087500;

Behavior make__48087500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48087500 = behavior;
   behavior->owner = (Object)my__interpolator_58_84_47544680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47511180_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   base_47511180_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   base_47511180_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(base_47511180_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,base_47511180_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
base_47511180_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[base_47511180_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_47623580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   next__data_47623580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   next__data_47623580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(next__data_47623580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,next__data_47623580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
next__data_47623580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[next__data_47623580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_47243120_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   remaining_47243120_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   remaining_47243120_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(remaining_47243120_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,remaining_47243120_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
remaining_47243120_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[remaining_47243120_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->block = make__48090140();

   return behavior;
}

Scope makemy__interpolator_58_84_47544680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_84_47544680 = scope;
   scope->owner = (Object)my__interpolator_58_840_45779080;
   scope->name = "my_interpolator:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__47543500();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48087500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_840_45779080() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_840_45779080 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_47243120();
   systemT->inputs[1] = makebase_47511180();
   systemT->inputs[2] = makenext__data_47623580();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_47740580();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_84_47544680();

   return systemT;
}