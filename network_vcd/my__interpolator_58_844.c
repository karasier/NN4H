#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_844_48999300;

SignalI remaining_49280220_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeremaining_49280220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_49280220_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)my__interpolator_58_844_48999300;
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

SignalI base_49496480_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makebase_49496480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49496480_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)my__interpolator_58_844_48999300;
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

SignalI next__data_48969420_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makenext__data_48969420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48969420_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)my__interpolator_58_844_48999300;
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

SignalI interpolated__value_49883740_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeinterpolated__value_49883740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_49883740_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)my__interpolator_58_844_48999300;
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

Block __65311200;

void code__65311200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_49496480_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
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
                                    src0 = next__data_48969420_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                                    src1 = base_49496480_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_49280220_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__65404000();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_49883740_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__65311200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65311200 = block;
   block->owner = (Object)__65308480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65311200;

   return block;
};

Value make__65404000() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_84_56131020;

Scope __56130720;

Scope make__56130720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __56130720 = scope;
   scope->owner = (Object)my__interpolator_58_84_56131020;
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

Behavior __65308480;

Behavior make__65308480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65308480 = behavior;
   behavior->owner = (Object)my__interpolator_58_84_56131020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49496480_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   base_49496480_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   base_49496480_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(base_49496480_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,base_49496480_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
base_49496480_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[base_49496480_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_48969420_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   next__data_48969420_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   next__data_48969420_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(next__data_48969420_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,next__data_48969420_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
next__data_48969420_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[next__data_48969420_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_49280220_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   remaining_49280220_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   remaining_49280220_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(remaining_49280220_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,remaining_49280220_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
remaining_49280220_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[remaining_49280220_my__interpolator_58_844_48999300_func0_58_84_54424080_func0_58_841_54826640_layer0_58_84_48021300_layer0_58_840_55559360_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__65311200();

   return behavior;
}

Scope makemy__interpolator_58_84_56131020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_84_56131020 = scope;
   scope->owner = (Object)my__interpolator_58_844_48999300;
   scope->name = "my_interpolator:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__56130720();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65308480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_844_48999300() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_844_48999300 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T4";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_49280220();
   systemT->inputs[1] = makebase_49496480();
   systemT->inputs[2] = makenext__data_48969420();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_49883740();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_84_56131020();

   return systemT;
}