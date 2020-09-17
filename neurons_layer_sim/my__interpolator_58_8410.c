#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8410_61306020;

SignalI remaining_61709340_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeremaining_61709340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_61709340_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_61306020;
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

SignalI base_61786940_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makebase_61786940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_61786940_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_61306020;
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

SignalI next__data_61913660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makenext__data_61913660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_61913660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_61306020;
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

SignalI interpolated__value_47493660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeinterpolated__value_47493660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_47493660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_61306020;
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

Block __48112280;

void code__48112280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_61786940_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
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
                                    src0 = next__data_61913660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
                                    src1 = base_61786940_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_61709340_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49066980();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_47493660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__48112280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48112280 = block;
   block->owner = (Object)__49017820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48112280;

   return block;
};

Value make__49066980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_841_60158700;

Scope __60158400;

Scope make__60158400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __60158400 = scope;
   scope->owner = (Object)my__interpolator_58_841_60158700;
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

Behavior __49017820;

Behavior make__49017820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49017820 = behavior;
   behavior->owner = (Object)my__interpolator_58_841_60158700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_61786940_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   base_61786940_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   base_61786940_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(base_61786940_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,base_61786940_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
base_61786940_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[base_61786940_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_61913660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   next__data_61913660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   next__data_61913660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(next__data_61913660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,next__data_61913660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
next__data_61913660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[next__data_61913660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_61709340_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   remaining_61709340_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   remaining_61709340_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(remaining_61709340_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,remaining_61709340_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
remaining_61709340_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[remaining_61709340_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__48112280();

   return behavior;
}

Scope makemy__interpolator_58_841_60158700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_841_60158700 = scope;
   scope->owner = (Object)my__interpolator_58_8410_61306020;
   scope->name = "my_interpolator:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__60158400();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49017820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8410_61306020() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8410_61306020 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T10";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_61709340();
   systemT->inputs[1] = makebase_61786940();
   systemT->inputs[2] = makenext__data_61913660();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_47493660();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_841_60158700();

   return systemT;
}