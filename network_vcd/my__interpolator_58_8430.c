#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8430_53880060;

SignalI remaining_54176840_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeremaining_54176840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_54176840_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)my__interpolator_58_8430_53880060;
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

SignalI base_54376340_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makebase_54376340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_54376340_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)my__interpolator_58_8430_53880060;
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

SignalI next__data_54708620_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makenext__data_54708620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54708620_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)my__interpolator_58_8430_53880060;
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

SignalI interpolated__value_55010660_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeinterpolated__value_55010660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_55010660_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)my__interpolator_58_8430_53880060;
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

Block __54121940;

void code__54121940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_54376340_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
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
                                    src0 = next__data_54708620_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                                    src1 = base_54376340_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_54176840_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__54129240();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_55010660_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__54121940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54121940 = block;
   block->owner = (Object)__54118260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54121940;

   return block;
};

Value make__54129240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_843_65309540;

Scope __65309180;

Scope make__65309180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __65309180 = scope;
   scope->owner = (Object)my__interpolator_58_843_65309540;
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

Behavior __54118260;

Behavior make__54118260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54118260 = behavior;
   behavior->owner = (Object)my__interpolator_58_843_65309540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_54376340_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   base_54376340_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   base_54376340_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(base_54376340_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,base_54376340_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
base_54376340_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[base_54376340_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_54708620_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   next__data_54708620_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   next__data_54708620_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(next__data_54708620_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,next__data_54708620_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
next__data_54708620_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[next__data_54708620_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_54176840_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   remaining_54176840_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   remaining_54176840_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(remaining_54176840_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,remaining_54176840_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
remaining_54176840_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[remaining_54176840_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__54121940();

   return behavior;
}

Scope makemy__interpolator_58_843_65309540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_843_65309540 = scope;
   scope->owner = (Object)my__interpolator_58_8430_53880060;
   scope->name = "my_interpolator:T3";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__65309180();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54118260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8430_53880060() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8430_53880060 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T30";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_54176840();
   systemT->inputs[1] = makebase_54376340();
   systemT->inputs[2] = makenext__data_54708620();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_55010660();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_843_65309540();

   return systemT;
}