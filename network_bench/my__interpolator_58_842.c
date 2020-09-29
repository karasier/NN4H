#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_842_57446880;

SignalI remaining_57628020_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeremaining_57628020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_57628020_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_57446880;
   signalI->name = "remaining";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SignalI base_57895380_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makebase_57895380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_57895380_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_57446880;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SignalI next__data_58366460_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makenext__data_58366460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_58366460_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_57446880;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SignalI interpolated__value_58526720_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeinterpolated__value_58526720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_58526720_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_57446880;
   signalI->name = "interpolated_value";
   signalI->type = get_type_vector(get_type_signed(),16);
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

Block __84180800;

void code__84180800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_57895380_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
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
                                    src0 = next__data_58366460_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                                    src1 = base_57895380_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),24),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_57628020_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),24),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__84175600();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_58526720_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__84180800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __84180800 = block;
   block->owner = (Object)__84178640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__84180800;

   return block;
};

Value make__84175600() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_84_48901060;

Scope __48899660;

Scope make__48899660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48899660 = scope;
   scope->owner = (Object)my__interpolator_58_84_48901060;
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

Behavior __84178640;

Behavior make__84178640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __84178640 = behavior;
   behavior->owner = (Object)my__interpolator_58_84_48901060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_57895380_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   base_57895380_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   base_57895380_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(base_57895380_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,base_57895380_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
base_57895380_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[base_57895380_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_58366460_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   next__data_58366460_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   next__data_58366460_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(next__data_58366460_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,next__data_58366460_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
next__data_58366460_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[next__data_58366460_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_57628020_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   remaining_57628020_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   remaining_57628020_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(remaining_57628020_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,remaining_57628020_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
remaining_57628020_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[remaining_57628020_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__84180800();

   return behavior;
}

Scope makemy__interpolator_58_84_48901060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_84_48901060 = scope;
   scope->owner = (Object)my__interpolator_58_842_57446880;
   scope->name = "my_interpolator:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__48899660();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__84178640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_842_57446880() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_842_57446880 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T2";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_57628020();
   systemT->inputs[1] = makebase_57895380();
   systemT->inputs[2] = makenext__data_58366460();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_58526720();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_84_48901060();

   return systemT;
}