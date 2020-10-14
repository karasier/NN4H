#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_48912540;

SignalI remaining_49592180_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeremaining_49592180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_49592180_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_48912540;
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

SignalI base_50664600_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makebase_50664600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50664600_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_48912540;
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

SignalI next__data_51444380_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makenext__data_51444380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51444380_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_48912540;
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

SignalI interpolated__value_51577100_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeinterpolated__value_51577100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_51577100_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_48912540;
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

Block __54726280;

void code__54726280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_50664600_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
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
                                    src0 = next__data_51444380_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
                                    src1 = base_50664600_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_49592180_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__54378400();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_51577100_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__54726280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54726280 = block;
   block->owner = (Object)__54724780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54726280;

   return block;
};

Value make__54378400() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_840_49472160;

Scope __49511940;

Scope make__49511940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __49511940 = scope;
   scope->owner = (Object)my__interpolator_58_840_49472160;
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

Behavior __54724780;

Behavior make__54724780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54724780 = behavior;
   behavior->owner = (Object)my__interpolator_58_840_49472160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50664600_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   base_50664600_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   base_50664600_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(base_50664600_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,base_50664600_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
base_50664600_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[base_50664600_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51444380_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   next__data_51444380_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   next__data_51444380_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(next__data_51444380_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,next__data_51444380_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
next__data_51444380_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[next__data_51444380_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_49592180_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   remaining_49592180_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   remaining_49592180_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(remaining_49592180_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,remaining_49592180_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
remaining_49592180_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[remaining_49592180_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__54726280();

   return behavior;
}

Scope makemy__interpolator_58_840_49472160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_840_49472160 = scope;
   scope->owner = (Object)my__interpolator_58_8400_48912540;
   scope->name = "my_interpolator:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__49511940();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54724780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_48912540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_48912540 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_49592180();
   systemT->inputs[1] = makebase_50664600();
   systemT->inputs[2] = makenext__data_51444380();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_51577100();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_840_49472160();

   return systemT;
}