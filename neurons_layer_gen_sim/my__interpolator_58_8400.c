#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_54490040;

SignalI remaining_43456060_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeremaining_43456060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_43456060_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_54490040;
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

SignalI base_47573400_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makebase_47573400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47573400_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_54490040;
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

SignalI next__data_48049580_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makenext__data_48049580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48049580_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_54490040;
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

SignalI interpolated__value_49184280_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeinterpolated__value_49184280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_49184280_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_54490040;
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

Block __58891000;

void code__58891000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_47573400_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
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
                                    src0 = next__data_48049580_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
                                    src1 = base_47573400_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_43456060_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58887820();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_49184280_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__58891000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58891000 = block;
   block->owner = (Object)__58889740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58891000;

   return block;
};

Value make__58887820() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_840_52696180;

Scope __52695760;

Scope make__52695760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52695760 = scope;
   scope->owner = (Object)my__interpolator_58_840_52696180;
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

Behavior __58889740;

Behavior make__58889740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58889740 = behavior;
   behavior->owner = (Object)my__interpolator_58_840_52696180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47573400_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   base_47573400_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   base_47573400_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(base_47573400_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,base_47573400_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
base_47573400_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[base_47573400_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_48049580_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   next__data_48049580_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   next__data_48049580_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(next__data_48049580_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,next__data_48049580_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
next__data_48049580_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[next__data_48049580_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_43456060_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   remaining_43456060_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   remaining_43456060_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(remaining_43456060_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,remaining_43456060_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
remaining_43456060_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[remaining_43456060_my__interpolator_58_8400_54490040_func1_58_84_52191660_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__58891000();

   return behavior;
}

Scope makemy__interpolator_58_840_52696180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_840_52696180 = scope;
   scope->owner = (Object)my__interpolator_58_8400_54490040;
   scope->name = "my_interpolator:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__52695760();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58889740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_54490040() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_54490040 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_43456060();
   systemT->inputs[1] = makebase_47573400();
   systemT->inputs[2] = makenext__data_48049580();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_49184280();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_840_52696180();

   return systemT;
}