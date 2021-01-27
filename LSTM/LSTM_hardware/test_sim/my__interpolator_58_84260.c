#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_84260_174872340;

SignalI base_175174560_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makebase_175174560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_175174560_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84260_174872340;
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

SignalI next__data_175610460_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makenext__data_175610460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_175610460_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84260_174872340;
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

SignalI change_175628680_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makechange_175628680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_175628680_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84260_174872340;
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

SignalI remaining_176291400_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makeremaining_176291400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_176291400_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84260_174872340;
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

SignalI interpolated__value_176333040_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makeinterpolated__value_176333040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_176333040_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__interpolator_58_84260_174872340;
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

Block __187832000;

void code__187832000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_175174560_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
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
                                    src0 = next__data_175610460_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                                    src1 = base_175174560_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_176291400_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__187826200();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_176333040_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__187832000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __187832000 = block;
   block->owner = (Object)__187829680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__187832000;

   return block;
};

Value make__187826200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_8426_152675540;

Scope __153018260;

Scope make__153018260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __153018260 = scope;
   scope->owner = (Object)my__interpolator_58_8426_152675540;
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

Behavior __187829680;

Behavior make__187829680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __187829680 = behavior;
   behavior->owner = (Object)my__interpolator_58_8426_152675540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_175174560_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   base_175174560_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   base_175174560_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(base_175174560_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,base_175174560_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_175174560_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[base_175174560_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_175610460_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   next__data_175610460_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_175610460_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(next__data_175610460_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,next__data_175610460_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_175610460_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[next__data_175610460_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_176291400_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   remaining_176291400_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_176291400_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(remaining_176291400_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,remaining_176291400_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_176291400_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[remaining_176291400_my__interpolator_58_84260_174872340_func5_58_841_62208500_func5_58_8410_181447500_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__187832000();

   return behavior;
}

Scope makemy__interpolator_58_8426_152675540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_8426_152675540 = scope;
   scope->owner = (Object)my__interpolator_58_84260_174872340;
   scope->name = "my_interpolator:T26";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__153018260();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__187829680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_84260_174872340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_84260_174872340 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T260";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_175174560();
   systemT->inputs[1] = makenext__data_175610460();
   systemT->inputs[2] = makechange_175628680();
   systemT->inputs[3] = makeremaining_176291400();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_176333040();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_8426_152675540();

   return systemT;
}