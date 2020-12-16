#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_84240_87628940;

SignalI base_89852980_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makebase_89852980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_89852980_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__interpolator_58_84240_87628940;
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

SignalI next__data_104700160_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makenext__data_104700160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_104700160_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__interpolator_58_84240_87628940;
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

SignalI change_106160380_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makechange_106160380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_106160380_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__interpolator_58_84240_87628940;
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

SignalI remaining_107302580_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeremaining_107302580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_107302580_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__interpolator_58_84240_87628940;
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

SignalI interpolated__value_108667120_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeinterpolated__value_108667120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_108667120_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__interpolator_58_84240_87628940;
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

Block __216035600;

void code__216035600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_89852980_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
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
                                    src0 = next__data_104700160_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                                    src1 = base_89852980_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_107302580_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__216031500();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_108667120_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__216035600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __216035600 = block;
   block->owner = (Object)__216034000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__216035600;

   return block;
};

Value make__216031500() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_8424_166662200;

Scope __166661640;

Scope make__166661640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __166661640 = scope;
   scope->owner = (Object)my__interpolator_58_8424_166662200;
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

Behavior __216034000;

Behavior make__216034000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __216034000 = behavior;
   behavior->owner = (Object)my__interpolator_58_8424_166662200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_89852980_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   base_89852980_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   base_89852980_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(base_89852980_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,base_89852980_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_89852980_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[base_89852980_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_104700160_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   next__data_104700160_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_104700160_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(next__data_104700160_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,next__data_104700160_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_104700160_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[next__data_104700160_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_107302580_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   remaining_107302580_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_107302580_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(remaining_107302580_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,remaining_107302580_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_107302580_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[remaining_107302580_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__216035600();

   return behavior;
}

Scope makemy__interpolator_58_8424_166662200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_8424_166662200 = scope;
   scope->owner = (Object)my__interpolator_58_84240_87628940;
   scope->name = "my_interpolator:T24";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__166661640();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__216034000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_84240_87628940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_84240_87628940 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T240";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_89852980();
   systemT->inputs[1] = makenext__data_104700160();
   systemT->inputs[2] = makechange_106160380();
   systemT->inputs[3] = makeremaining_107302580();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_108667120();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_8424_166662200();

   return systemT;
}