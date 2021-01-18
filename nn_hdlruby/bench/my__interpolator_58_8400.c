#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_58292980;

SignalI base_58376400_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makebase_58376400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_58376400_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_58292980;
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

SignalI next__data_58535340_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makenext__data_58535340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_58535340_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_58292980;
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

SignalI remaining_58718840_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeremaining_58718840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_58718840_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_58292980;
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

SignalI interpolated__value_58771300_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeinterpolated__value_58771300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_58771300_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_58292980;
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

Block __53241140;

void code__53241140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_58376400_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
            dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
            set_value_pos(pool_state);
         dst; });
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
                                    src0 = ({
                                          Value src0, dst = get_value();
                                          unsigned int pool_state = get_value_pos();
                                          src0 = ({
                                                Value src0,src1,dst = get_value();
                                                unsigned int pool_state = get_value_pos();
                                                src0 = next__data_58535340_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                                                src1 = base_58376400_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                                                dst = sub_value(src0,src1,dst);
                                                set_value_pos(pool_state);
                                             dst; });
                                          dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                                          set_value_pos(pool_state);
                                       dst; });
                                    src1 = make__53257880();
                                    dst = shift_right_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_58718840_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53257620();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_58771300_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53241140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53241140 = block;
   block->owner = (Object)__53263220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53241140;

   return block;
};

Value make__53257880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53257620() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_840_52466240;

Scope __52465620;

Scope make__52465620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52465620 = scope;
   scope->owner = (Object)my__interpolator_58_840_52466240;
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

Behavior __53263220;

Behavior make__53263220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53263220 = behavior;
   behavior->owner = (Object)my__interpolator_58_840_52466240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_58376400_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   base_58376400_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   base_58376400_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(base_58376400_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,base_58376400_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
base_58376400_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[base_58376400_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_58535340_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   next__data_58535340_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   next__data_58535340_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(next__data_58535340_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,next__data_58535340_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
next__data_58535340_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[next__data_58535340_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_58718840_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   remaining_58718840_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   remaining_58718840_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(remaining_58718840_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,remaining_58718840_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
remaining_58718840_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[remaining_58718840_my__interpolator_58_8400_58292980_func1_58_84_51499040_func1_58_840_60651400_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53241140();

   return behavior;
}

Scope makemy__interpolator_58_840_52466240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_840_52466240 = scope;
   scope->owner = (Object)my__interpolator_58_8400_58292980;
   scope->name = "my_interpolator:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__52465620();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53263220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_58292980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_58292980 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_58376400();
   systemT->inputs[1] = makenext__data_58535340();
   systemT->inputs[2] = makeremaining_58718840();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_58771300();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_840_52466240();

   return systemT;
}