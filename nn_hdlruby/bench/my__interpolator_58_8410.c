#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8410_59658360;

SignalI base_59823340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makebase_59823340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_59823340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_59658360;
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

SignalI next__data_59884820_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makenext__data_59884820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_59884820_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_59658360;
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

SignalI remaining_60093420_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeremaining_60093420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_60093420_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_59658360;
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

SignalI interpolated__value_60212340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeinterpolated__value_60212340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_60212340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_59658360;
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

Block __58104840;

void code__58104840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_59823340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
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
                                                src0 = next__data_59884820_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                                                src1 = base_59823340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                                                dst = sub_value(src0,src1,dst);
                                                set_value_pos(pool_state);
                                             dst; });
                                          dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                                          set_value_pos(pool_state);
                                       dst; });
                                    src1 = make__58100760();
                                    dst = shift_right_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_60093420_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58100600();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_60212340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__58104840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58104840 = block;
   block->owner = (Object)__58103240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58104840;

   return block;
};

Value make__58100760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58100600() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_841_58495440;

Scope __58494920;

Scope make__58494920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __58494920 = scope;
   scope->owner = (Object)my__interpolator_58_841_58495440;
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

Behavior __58103240;

Behavior make__58103240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58103240 = behavior;
   behavior->owner = (Object)my__interpolator_58_841_58495440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_59823340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   base_59823340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   base_59823340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(base_59823340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,base_59823340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
base_59823340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[base_59823340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_59884820_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   next__data_59884820_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   next__data_59884820_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(next__data_59884820_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,next__data_59884820_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
next__data_59884820_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[next__data_59884820_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_60093420_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   remaining_60093420_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   remaining_60093420_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(remaining_60093420_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,remaining_60093420_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
remaining_60093420_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[remaining_60093420_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__58104840();

   return behavior;
}

Scope makemy__interpolator_58_841_58495440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_841_58495440 = scope;
   scope->owner = (Object)my__interpolator_58_8410_59658360;
   scope->name = "my_interpolator:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__58494920();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58103240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8410_59658360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8410_59658360 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T10";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_59823340();
   systemT->inputs[1] = makenext__data_59884820();
   systemT->inputs[2] = makeremaining_60093420();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_60212340();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_841_58495440();

   return systemT;
}