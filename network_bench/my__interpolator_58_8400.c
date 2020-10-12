#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_57121740;

SignalI remaining_57164660_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeremaining_57164660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_57164660_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_57121740;
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

SignalI base_57389680_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makebase_57389680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_57389680_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_57121740;
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

SignalI next__data_57565620_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makenext__data_57565620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_57565620_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_57121740;
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

SignalI interpolated__value_57733280_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeinterpolated__value_57733280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_57733280_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_57121740;
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

Block __57138800;

void code__57138800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_57389680_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
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
                                    src0 = next__data_57565620_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                                    src1 = base_57389680_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_57164660_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57133940();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_57733280_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57138800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57138800 = block;
   block->owner = (Object)__57136780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57138800;

   return block;
};

Value make__57133940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_840_55564500;

Scope __55564200;

Scope make__55564200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __55564200 = scope;
   scope->owner = (Object)my__interpolator_58_840_55564500;
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

Behavior __57136780;

Behavior make__57136780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57136780 = behavior;
   behavior->owner = (Object)my__interpolator_58_840_55564500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_57389680_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   base_57389680_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   base_57389680_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(base_57389680_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,base_57389680_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
base_57389680_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[base_57389680_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_57565620_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   next__data_57565620_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   next__data_57565620_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(next__data_57565620_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,next__data_57565620_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
next__data_57565620_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[next__data_57565620_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_57164660_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   remaining_57164660_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   remaining_57164660_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(remaining_57164660_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,remaining_57164660_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
remaining_57164660_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[remaining_57164660_my__interpolator_58_8400_57121740_func1_58_84_50712360_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57138800();

   return behavior;
}

Scope makemy__interpolator_58_840_55564500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_840_55564500 = scope;
   scope->owner = (Object)my__interpolator_58_8400_57121740;
   scope->name = "my_interpolator:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__55564200();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57136780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_57121740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_57121740 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_57164660();
   systemT->inputs[1] = makebase_57389680();
   systemT->inputs[2] = makenext__data_57565620();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_57733280();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_840_55564500();

   return systemT;
}