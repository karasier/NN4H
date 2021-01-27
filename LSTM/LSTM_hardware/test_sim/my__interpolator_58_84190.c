#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_84190_152199760;

SignalI base_152541640_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makebase_152541640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_152541640_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84190_152199760;
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

SignalI next__data_152627520_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makenext__data_152627520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_152627520_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84190_152199760;
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

SignalI change_152708200_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makechange_152708200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_152708200_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84190_152199760;
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

SignalI remaining_152984960_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makeremaining_152984960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_152984960_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84190_152199760;
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

SignalI interpolated__value_153238340_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makeinterpolated__value_153238340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_153238340_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84190_152199760;
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

Block __183351040;

void code__183351040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_152541640_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
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
                                    src0 = next__data_152627520_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                                    src1 = base_152541640_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_152984960_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__183345320();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_153238340_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__183351040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __183351040 = block;
   block->owner = (Object)__183348880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__183351040;

   return block;
};

Value make__183345320() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_8419_150751100;

Scope __150750640;

Scope make__150750640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __150750640 = scope;
   scope->owner = (Object)my__interpolator_58_8419_150751100;
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

Behavior __183348880;

Behavior make__183348880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __183348880 = behavior;
   behavior->owner = (Object)my__interpolator_58_8419_150751100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_152541640_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   base_152541640_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   base_152541640_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(base_152541640_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,base_152541640_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_152541640_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[base_152541640_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_152627520_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   next__data_152627520_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_152627520_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(next__data_152627520_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,next__data_152627520_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_152627520_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[next__data_152627520_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_152984960_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   remaining_152984960_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_152984960_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(remaining_152984960_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,remaining_152984960_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_152984960_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[remaining_152984960_my__interpolator_58_84190_152199760_func0_58_843_139173940_func0_58_8430_102414080_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__183351040();

   return behavior;
}

Scope makemy__interpolator_58_8419_150751100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_8419_150751100 = scope;
   scope->owner = (Object)my__interpolator_58_84190_152199760;
   scope->name = "my_interpolator:T19";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__150750640();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__183348880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_84190_152199760() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_84190_152199760 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T190";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_152541640();
   systemT->inputs[1] = makenext__data_152627520();
   systemT->inputs[2] = makechange_152708200();
   systemT->inputs[3] = makeremaining_152984960();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_153238340();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_8419_150751100();

   return systemT;
}