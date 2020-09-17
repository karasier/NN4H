#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8420_55732520;

SignalI remaining_55996480_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440;

SignalI makeremaining_55996480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_55996480_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)my__interpolator_58_8420_55732520;
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

SignalI base_56155960_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440;

SignalI makebase_56155960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56155960_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)my__interpolator_58_8420_55732520;
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

SignalI next__data_56328560_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440;

SignalI makenext__data_56328560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_56328560_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)my__interpolator_58_8420_55732520;
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

SignalI interpolated__value_56693420_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440;

SignalI makeinterpolated__value_56693420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_56693420_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)my__interpolator_58_8420_55732520;
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

Block __57445140;

void code__57445140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_56155960_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->c_value;
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
                                    src0 = next__data_56328560_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->c_value;
                                    src1 = base_56155960_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_55996480_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57592240();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_56693420_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57445140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57445140 = block;
   block->owner = (Object)__57597280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57445140;

   return block;
};

Value make__57592240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_842_58468220;

Scope __58467820;

Scope make__58467820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __58467820 = scope;
   scope->owner = (Object)my__interpolator_58_842_58468220;
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

Behavior __57597280;

Behavior make__57597280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57597280 = behavior;
   behavior->owner = (Object)my__interpolator_58_842_58468220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56155960_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
   base_56155960_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any += 1;
   base_56155960_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any = realloc(base_56155960_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any,base_56155960_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
base_56155960_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any[base_56155960_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_56328560_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
   next__data_56328560_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any += 1;
   next__data_56328560_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any = realloc(next__data_56328560_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any,next__data_56328560_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
next__data_56328560_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any[next__data_56328560_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_55996480_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440);
   remaining_55996480_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any += 1;
   remaining_55996480_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any = realloc(remaining_55996480_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any,remaining_55996480_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
remaining_55996480_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->any[remaining_55996480_my__interpolator_58_8420_55732520_func1_58_840_57310300_func1_58_8400_64932100_layer1_58_84_47492120_layer1_58_840_67516840______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57445140();

   return behavior;
}

Scope makemy__interpolator_58_842_58468220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_842_58468220 = scope;
   scope->owner = (Object)my__interpolator_58_8420_55732520;
   scope->name = "my_interpolator:T2";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__58467820();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57597280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8420_55732520() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8420_55732520 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T20";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_55996480();
   systemT->inputs[1] = makebase_56155960();
   systemT->inputs[2] = makenext__data_56328560();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_56693420();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_842_58468220();

   return systemT;
}