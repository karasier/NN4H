#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_46060020;

SignalI base_48373960_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makebase_48373960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48373960_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_46060020;
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

SignalI next__data_49682360_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makenext__data_49682360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49682360_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_46060020;
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

SignalI remaining_50031340_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeremaining_50031340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_50031340_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_46060020;
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

SignalI interpolated__value_50218180_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeinterpolated__value_50218180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_50218180_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_46060020;
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

Block __59360540;

void code__59360540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_48373960_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
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
                                                src0 = next__data_49682360_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                                                src1 = base_48373960_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                                                dst = sub_value(src0,src1,dst);
                                                set_value_pos(pool_state);
                                             dst; });
                                          dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                                          set_value_pos(pool_state);
                                       dst; });
                                    src1 = make__59373440();
                                    dst = shift_right_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_50031340_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59373280();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_50218180_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59360540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59360540 = block;
   block->owner = (Object)__59375560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59360540;

   return block;
};

Value make__59373440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59373280() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_840_52914440;

Scope __52914080;

Scope make__52914080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52914080 = scope;
   scope->owner = (Object)my__interpolator_58_840_52914440;
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

Behavior __59375560;

Behavior make__59375560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59375560 = behavior;
   behavior->owner = (Object)my__interpolator_58_840_52914440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_48373960_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   base_48373960_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   base_48373960_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(base_48373960_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,base_48373960_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
base_48373960_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[base_48373960_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49682360_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   next__data_49682360_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   next__data_49682360_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(next__data_49682360_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,next__data_49682360_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
next__data_49682360_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[next__data_49682360_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_50031340_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   remaining_50031340_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   remaining_50031340_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(remaining_50031340_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,remaining_50031340_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
remaining_50031340_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[remaining_50031340_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59360540();

   return behavior;
}

Scope makemy__interpolator_58_840_52914440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_840_52914440 = scope;
   scope->owner = (Object)my__interpolator_58_8400_46060020;
   scope->name = "my_interpolator:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__52914080();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59375560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_46060020() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_46060020 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_48373960();
   systemT->inputs[1] = makenext__data_49682360();
   systemT->inputs[2] = makeremaining_50031340();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_50218180();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_840_52914440();

   return systemT;
}