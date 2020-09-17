#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_47345060;

SignalI remaining_47776760_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeremaining_47776760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47776760_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_47345060;
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

SignalI base_48910780_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makebase_48910780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48910780_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_47345060;
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

SignalI next__data_49202480_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makenext__data_49202480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49202480_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_47345060;
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

SignalI interpolated__value_49483580_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeinterpolated__value_49483580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_49483580_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_47345060;
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

Block __60266440;

void code__60266440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_48910780_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
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
                                    src0 = next__data_49202480_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                                    src1 = base_48910780_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_47776760_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60263300();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_49483580_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60266440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60266440 = block;
   block->owner = (Object)__60265280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60266440;

   return block;
};

Value make__60263300() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_840_52817520;

Scope __52816940;

Scope make__52816940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52816940 = scope;
   scope->owner = (Object)my__interpolator_58_840_52817520;
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

Behavior __60265280;

Behavior make__60265280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60265280 = behavior;
   behavior->owner = (Object)my__interpolator_58_840_52817520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_48910780_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   base_48910780_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   base_48910780_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(base_48910780_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,base_48910780_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
base_48910780_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[base_48910780_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49202480_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   next__data_49202480_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   next__data_49202480_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(next__data_49202480_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,next__data_49202480_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
next__data_49202480_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[next__data_49202480_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_47776760_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   remaining_47776760_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   remaining_47776760_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(remaining_47776760_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,remaining_47776760_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
remaining_47776760_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[remaining_47776760_my__interpolator_58_8400_47345060_func1_58_84_52240940_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60266440();

   return behavior;
}

Scope makemy__interpolator_58_840_52817520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_840_52817520 = scope;
   scope->owner = (Object)my__interpolator_58_8400_47345060;
   scope->name = "my_interpolator:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__52816940();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60265280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_47345060() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_47345060 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_47776760();
   systemT->inputs[1] = makebase_48910780();
   systemT->inputs[2] = makenext__data_49202480();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_49483580();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_840_52817520();

   return systemT;
}