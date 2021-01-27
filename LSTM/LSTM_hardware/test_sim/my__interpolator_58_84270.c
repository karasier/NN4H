#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_84270_202974580;

SignalI base_203043680_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makebase_203043680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_203043680_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84270_202974580;
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

SignalI next__data_203090040_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makenext__data_203090040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_203090040_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84270_202974580;
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

SignalI change_203160940_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makechange_203160940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_203160940_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84270_202974580;
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

SignalI remaining_203223700_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makeremaining_203223700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_203223700_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84270_202974580;
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

SignalI interpolated__value_203302820_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makeinterpolated__value_203302820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_203302820_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84270_202974580;
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

Block __188061580;

void code__188061580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_203043680_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
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
                                    src0 = next__data_203090040_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                                    src1 = base_203043680_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_203223700_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__188055700();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_203302820_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__188061580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __188061580 = block;
   block->owner = (Object)__188059100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__188061580;

   return block;
};

Value make__188055700() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_8427_157202480;

Scope __157202180;

Scope make__157202180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __157202180 = scope;
   scope->owner = (Object)my__interpolator_58_8427_157202480;
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

Behavior __188059100;

Behavior make__188059100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __188059100 = behavior;
   behavior->owner = (Object)my__interpolator_58_8427_157202480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_203043680_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   base_203043680_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   base_203043680_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(base_203043680_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,base_203043680_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_203043680_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[base_203043680_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_203090040_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   next__data_203090040_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_203090040_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(next__data_203090040_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,next__data_203090040_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_203090040_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[next__data_203090040_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_203223700_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   remaining_203223700_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_203223700_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(remaining_203223700_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,remaining_203223700_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_203223700_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[remaining_203223700_my__interpolator_58_84270_202974580_func6_58_841_181775500_func6_58_8410_205342240_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__188061580();

   return behavior;
}

Scope makemy__interpolator_58_8427_157202480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_8427_157202480 = scope;
   scope->owner = (Object)my__interpolator_58_84270_202974580;
   scope->name = "my_interpolator:T27";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__157202180();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__188059100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_84270_202974580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_84270_202974580 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T270";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_203043680();
   systemT->inputs[1] = makenext__data_203090040();
   systemT->inputs[2] = makechange_203160940();
   systemT->inputs[3] = makeremaining_203223700();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_203302820();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_8427_157202480();

   return systemT;
}