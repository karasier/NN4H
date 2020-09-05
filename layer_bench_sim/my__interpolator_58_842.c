#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_842_54080360;

SignalI remaining_54209900_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeremaining_54209900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_54209900_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_54080360;
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

SignalI base_54291180_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makebase_54291180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_54291180_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_54080360;
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

SignalI next__data_54388380_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makenext__data_54388380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54388380_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_54080360;
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

SignalI interpolated__value_54748680_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeinterpolated__value_54748680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_54748680_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_54080360;
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

Block __61542060;

void code__61542060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_54291180_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
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
                                    src0 = next__data_54388380_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
                                    src1 = base_54291180_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_54209900_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61538980();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_54748680_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61542060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61542060 = block;
   block->owner = (Object)__61540800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61542060;

   return block;
};

Value make__61538980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_84_52712640;

Scope __52712320;

Scope make__52712320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52712320 = scope;
   scope->owner = (Object)my__interpolator_58_84_52712640;
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

Behavior __61540800;

Behavior make__61540800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61540800 = behavior;
   behavior->owner = (Object)my__interpolator_58_84_52712640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_54291180_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   base_54291180_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   base_54291180_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(base_54291180_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,base_54291180_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
base_54291180_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[base_54291180_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_54388380_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   next__data_54388380_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   next__data_54388380_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(next__data_54388380_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,next__data_54388380_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
next__data_54388380_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[next__data_54388380_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_54209900_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   remaining_54209900_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   remaining_54209900_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(remaining_54209900_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,remaining_54209900_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
remaining_54209900_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[remaining_54209900_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61542060();

   return behavior;
}

Scope makemy__interpolator_58_84_52712640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_84_52712640 = scope;
   scope->owner = (Object)my__interpolator_58_842_54080360;
   scope->name = "my_interpolator:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__52712320();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61540800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_842_54080360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_842_54080360 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T2";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_54209900();
   systemT->inputs[1] = makebase_54291180();
   systemT->inputs[2] = makenext__data_54388380();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_54748680();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_84_52712640();

   return systemT;
}