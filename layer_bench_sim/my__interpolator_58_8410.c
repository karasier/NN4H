#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8410_62499640;

SignalI remaining_62634280_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeremaining_62634280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_62634280_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_62499640;
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

SignalI base_62697040_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makebase_62697040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_62697040_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_62499640;
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

SignalI next__data_62776180_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makenext__data_62776180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_62776180_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_62499640;
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

SignalI interpolated__value_62920800_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeinterpolated__value_62920800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_62920800_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_62499640;
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

Block __62022300;

void code__62022300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_62697040_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
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
                                    src0 = next__data_62776180_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
                                    src1 = base_62697040_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_62634280_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62060080();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_62920800_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__62022300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62022300 = block;
   block->owner = (Object)__62061960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62022300;

   return block;
};

Value make__62060080() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_841_61428500;

Scope __61428200;

Scope make__61428200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __61428200 = scope;
   scope->owner = (Object)my__interpolator_58_841_61428500;
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

Behavior __62061960;

Behavior make__62061960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62061960 = behavior;
   behavior->owner = (Object)my__interpolator_58_841_61428500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_62697040_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   base_62697040_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   base_62697040_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(base_62697040_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,base_62697040_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
base_62697040_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[base_62697040_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_62776180_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   next__data_62776180_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   next__data_62776180_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(next__data_62776180_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,next__data_62776180_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
next__data_62776180_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[next__data_62776180_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_62634280_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   remaining_62634280_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   remaining_62634280_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(remaining_62634280_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,remaining_62634280_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
remaining_62634280_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[remaining_62634280_my__interpolator_58_8410_62499640_func0_58_840_55182960_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__62022300();

   return behavior;
}

Scope makemy__interpolator_58_841_61428500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_841_61428500 = scope;
   scope->owner = (Object)my__interpolator_58_8410_62499640;
   scope->name = "my_interpolator:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__61428200();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62061960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8410_62499640() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8410_62499640 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T10";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_62634280();
   systemT->inputs[1] = makebase_62697040();
   systemT->inputs[2] = makenext__data_62776180();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_62920800();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_841_61428500();

   return systemT;
}