#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_84200_152966700;

SignalI base_153418100_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makebase_153418100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_153418100_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84200_152966700;
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

SignalI next__data_156510880_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makenext__data_156510880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_156510880_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84200_152966700;
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

SignalI change_156695020_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makechange_156695020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_156695020_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84200_152966700;
   signalI->name = "change";
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

SignalI remaining_50344180_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makeremaining_50344180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_50344180_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84200_152966700;
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

SignalI interpolated__value_63276000_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makeinterpolated__value_63276000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_63276000_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84200_152966700;
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

Block __183478200;

void code__183478200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_153418100_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
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
                                    src0 = next__data_156510880_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                                    src1 = base_153418100_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_50344180_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__183715800();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_63276000_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__183478200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __183478200 = block;
   block->owner = (Object)__183721640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__183478200;

   return block;
};

Value make__183715800() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_8420_150136940;

Scope __150136560;

Scope make__150136560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __150136560 = scope;
   scope->owner = (Object)my__interpolator_58_8420_150136940;
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

Behavior __183721640;

Behavior make__183721640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __183721640 = behavior;
   behavior->owner = (Object)my__interpolator_58_8420_150136940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_153418100_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   base_153418100_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   base_153418100_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(base_153418100_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,base_153418100_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_153418100_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[base_153418100_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_156510880_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   next__data_156510880_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_156510880_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(next__data_156510880_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,next__data_156510880_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_156510880_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[next__data_156510880_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_50344180_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   remaining_50344180_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_50344180_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(remaining_50344180_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,remaining_50344180_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_50344180_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[remaining_50344180_my__interpolator_58_84200_152966700_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__183478200();

   return behavior;
}

Scope makemy__interpolator_58_8420_150136940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_8420_150136940 = scope;
   scope->owner = (Object)my__interpolator_58_84200_152966700;
   scope->name = "my_interpolator:T20";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__150136560();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__183721640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_84200_152966700() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_84200_152966700 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T200";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_153418100();
   systemT->inputs[1] = makenext__data_156510880();
   systemT->inputs[2] = makechange_156695020();
   systemT->inputs[3] = makeremaining_50344180();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_63276000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_8420_150136940();

   return systemT;
}