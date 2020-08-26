#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_840_48388580;

SignalI remaining_45745240_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540;

SignalI makeremaining_45745240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_45745240_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_48388580;
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

SignalI base_46117680_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540;

SignalI makebase_46117680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_46117680_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_48388580;
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

SignalI next__data_46426740_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540;

SignalI makenext__data_46426740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_46426740_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_48388580;
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

SignalI interpolated__value_47574880_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540;

SignalI makeinterpolated__value_47574880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_47574880_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_48388580;
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

Block __48147200;

void code__48147200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_46117680_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value;
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
                                    src0 = next__data_46426740_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value;
                                    src1 = base_46117680_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_45745240_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48167440();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_47574880_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
}

Block make__48147200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48147200 = block;
   block->owner = (Object)__48145580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48147200;

   return block;
};

Value make__48167440() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_84_46322000;

Scope __46321160;

Scope make__46321160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46321160 = scope;
   scope->owner = (Object)my__interpolator_58_84_46322000;
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

Behavior __48145580;

Behavior make__48145580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48145580 = behavior;
   behavior->owner = (Object)my__interpolator_58_84_46322000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_46117680_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   base_46117680_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   base_46117680_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(base_46117680_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,base_46117680_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
base_46117680_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[base_46117680_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_46426740_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   next__data_46426740_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   next__data_46426740_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(next__data_46426740_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,next__data_46426740_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
next__data_46426740_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[next__data_46426740_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_45745240_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   remaining_45745240_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   remaining_45745240_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(remaining_45745240_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,remaining_45745240_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
remaining_45745240_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[remaining_45745240_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->block = make__48147200();

   return behavior;
}

Scope makemy__interpolator_58_84_46322000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_84_46322000 = scope;
   scope->owner = (Object)my__interpolator_58_840_48388580;
   scope->name = "my_interpolator:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__46321160();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48145580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_840_48388580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_840_48388580 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_45745240();
   systemT->inputs[1] = makebase_46117680();
   systemT->inputs[2] = makenext__data_46426740();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_47574880();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_84_46322000();

   return systemT;
}