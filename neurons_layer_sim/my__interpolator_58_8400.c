#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_51094720;

SignalI remaining_51500960_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeremaining_51500960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51500960_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_51094720;
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

SignalI base_51657060_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makebase_51657060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51657060_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_51094720;
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

SignalI next__data_51854080_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makenext__data_51854080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51854080_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_51094720;
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

SignalI interpolated__value_52180180_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeinterpolated__value_52180180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_52180180_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_51094720;
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

Block __51526660;

void code__51526660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_51657060_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
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
                                    src0 = next__data_51854080_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                                    src1 = base_51657060_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_51500960_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51560240();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_52180180_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51526660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51526660 = block;
   block->owner = (Object)__51523560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51526660;

   return block;
};

Value make__51560240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_840_53158020;

Scope __53198360;

Scope make__53198360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __53198360 = scope;
   scope->owner = (Object)my__interpolator_58_840_53158020;
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

Behavior __51523560;

Behavior make__51523560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51523560 = behavior;
   behavior->owner = (Object)my__interpolator_58_840_53158020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51657060_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   base_51657060_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   base_51657060_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(base_51657060_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,base_51657060_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
base_51657060_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[base_51657060_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51854080_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   next__data_51854080_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   next__data_51854080_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(next__data_51854080_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,next__data_51854080_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
next__data_51854080_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[next__data_51854080_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_51500960_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   remaining_51500960_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   remaining_51500960_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(remaining_51500960_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,remaining_51500960_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
remaining_51500960_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[remaining_51500960_my__interpolator_58_8400_51094720_func1_58_84_49733680_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51526660();

   return behavior;
}

Scope makemy__interpolator_58_840_53158020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_840_53158020 = scope;
   scope->owner = (Object)my__interpolator_58_8400_51094720;
   scope->name = "my_interpolator:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__53198360();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51523560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_51094720() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_51094720 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_51500960();
   systemT->inputs[1] = makebase_51657060();
   systemT->inputs[2] = makenext__data_51854080();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_52180180();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_840_53158020();

   return systemT;
}