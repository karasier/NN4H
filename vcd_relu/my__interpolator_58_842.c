#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_842_56025740;

SignalI base_56140180_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makebase_56140180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56140180_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_56025740;
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

SignalI next__data_56256420_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makenext__data_56256420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_56256420_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_56025740;
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

SignalI remaining_56356280_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeremaining_56356280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_56356280_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_56025740;
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

SignalI interpolated__value_56472540_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeinterpolated__value_56472540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_56472540_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_56025740;
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

Block __56474500;

void code__56474500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_56140180_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
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
                                                src0 = next__data_56256420_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                                                src1 = base_56140180_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                                                dst = sub_value(src0,src1,dst);
                                                set_value_pos(pool_state);
                                             dst; });
                                          dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                                          set_value_pos(pool_state);
                                       dst; });
                                    src1 = make__56469100();
                                    dst = shift_right_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_56356280_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56468900();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_56472540_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56474500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56474500 = block;
   block->owner = (Object)__56472760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56474500;

   return block;
};

Value make__56469100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56468900() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_84_50784280;

Scope __50783920;

Scope make__50783920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50783920 = scope;
   scope->owner = (Object)my__interpolator_58_84_50784280;
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

Behavior __56472760;

Behavior make__56472760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56472760 = behavior;
   behavior->owner = (Object)my__interpolator_58_84_50784280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56140180_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   base_56140180_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   base_56140180_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(base_56140180_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,base_56140180_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
base_56140180_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[base_56140180_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_56256420_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   next__data_56256420_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   next__data_56256420_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(next__data_56256420_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,next__data_56256420_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
next__data_56256420_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[next__data_56256420_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_56356280_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   remaining_56356280_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   remaining_56356280_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(remaining_56356280_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,remaining_56356280_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
remaining_56356280_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[remaining_56356280_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56474500();

   return behavior;
}

Scope makemy__interpolator_58_84_50784280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_84_50784280 = scope;
   scope->owner = (Object)my__interpolator_58_842_56025740;
   scope->name = "my_interpolator:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__50783920();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56472760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_842_56025740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_842_56025740 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T2";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_56140180();
   systemT->inputs[1] = makenext__data_56256420();
   systemT->inputs[2] = makeremaining_56356280();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_56472540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_84_50784280();

   return systemT;
}