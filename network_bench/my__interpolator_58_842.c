#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_842_48389360;

SignalI remaining_49389760_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeremaining_49389760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_49389760_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_48389360;
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

SignalI base_49507260_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makebase_49507260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49507260_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_48389360;
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

SignalI next__data_49772740_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makenext__data_49772740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49772740_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_48389360;
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

SignalI interpolated__value_50056620_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeinterpolated__value_50056620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_50056620_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_48389360;
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

Block __58474700;

void code__58474700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_49507260_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
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
                                    src0 = next__data_49772740_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                                    src1 = base_49507260_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_49389760_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58511480();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_50056620_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__58474700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58474700 = block;
   block->owner = (Object)__58513860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58474700;

   return block;
};

Value make__58511480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_84_51748080;

Scope __51747560;

Scope make__51747560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51747560 = scope;
   scope->owner = (Object)my__interpolator_58_84_51748080;
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

Behavior __58513860;

Behavior make__58513860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58513860 = behavior;
   behavior->owner = (Object)my__interpolator_58_84_51748080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49507260_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   base_49507260_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   base_49507260_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(base_49507260_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,base_49507260_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
base_49507260_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[base_49507260_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49772740_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   next__data_49772740_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   next__data_49772740_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(next__data_49772740_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,next__data_49772740_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
next__data_49772740_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[next__data_49772740_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_49389760_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   remaining_49389760_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   remaining_49389760_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(remaining_49389760_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,remaining_49389760_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
remaining_49389760_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[remaining_49389760_my__interpolator_58_842_48389360_func0_58_84_49838220_func0_58_841_49169360_layer0_58_84_50198040_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__58474700();

   return behavior;
}

Scope makemy__interpolator_58_84_51748080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_84_51748080 = scope;
   scope->owner = (Object)my__interpolator_58_842_48389360;
   scope->name = "my_interpolator:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__51747560();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58513860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_842_48389360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_842_48389360 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T2";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_49389760();
   systemT->inputs[1] = makebase_49507260();
   systemT->inputs[2] = makenext__data_49772740();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_50056620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_84_51748080();

   return systemT;
}