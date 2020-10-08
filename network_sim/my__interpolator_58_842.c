#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_842_49737860;

SignalI remaining_50493560_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeremaining_50493560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_50493560_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_49737860;
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

SignalI base_50832700_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makebase_50832700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50832700_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_49737860;
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

SignalI next__data_50947840_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makenext__data_50947840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50947840_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_49737860;
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

SignalI interpolated__value_51090400_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeinterpolated__value_51090400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_51090400_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_49737860;
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

Block __49159100;

void code__49159100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_50832700_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
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
                                    src0 = next__data_50947840_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                                    src1 = base_50832700_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_50493560_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50493100();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_51090400_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49159100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49159100 = block;
   block->owner = (Object)__49155940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49159100;

   return block;
};

Value make__50493100() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_84_51562980;

Scope __51562540;

Scope make__51562540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51562540 = scope;
   scope->owner = (Object)my__interpolator_58_84_51562980;
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

Behavior __49155940;

Behavior make__49155940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49155940 = behavior;
   behavior->owner = (Object)my__interpolator_58_84_51562980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50832700_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   base_50832700_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   base_50832700_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(base_50832700_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,base_50832700_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
base_50832700_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[base_50832700_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50947840_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   next__data_50947840_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   next__data_50947840_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(next__data_50947840_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,next__data_50947840_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
next__data_50947840_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[next__data_50947840_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_50493560_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   remaining_50493560_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   remaining_50493560_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(remaining_50493560_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,remaining_50493560_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
remaining_50493560_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[remaining_50493560_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__49159100();

   return behavior;
}

Scope makemy__interpolator_58_84_51562980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_84_51562980 = scope;
   scope->owner = (Object)my__interpolator_58_842_49737860;
   scope->name = "my_interpolator:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__51562540();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49155940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_842_49737860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_842_49737860 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T2";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_50493560();
   systemT->inputs[1] = makebase_50832700();
   systemT->inputs[2] = makenext__data_50947840();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_51090400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_84_51562980();

   return systemT;
}