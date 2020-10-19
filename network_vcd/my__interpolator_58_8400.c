#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_54050280;

SignalI base_54211560_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makebase_54211560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_54211560_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_54050280;
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

SignalI next__data_54409980_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makenext__data_54409980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54409980_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_54050280;
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

SignalI change_54486340_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makechange_54486340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_54486340_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_54050280;
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

SignalI remaining_54619280_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeremaining_54619280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_54619280_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_54050280;
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

SignalI interpolated__value_54802020_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeinterpolated__value_54802020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_54802020_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_54050280;
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

Block __63073200;

void code__63073200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_54211560_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
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
                                    src0 = next__data_54409980_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                                    src1 = base_54211560_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_54619280_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__63093440();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_54802020_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__63073200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63073200 = block;
   block->owner = (Object)__63071680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63073200;

   return block;
};

Value make__63093440() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_840_49415840;

Scope __49415200;

Scope make__49415200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __49415200 = scope;
   scope->owner = (Object)my__interpolator_58_840_49415840;
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

Behavior __63071680;

Behavior make__63071680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63071680 = behavior;
   behavior->owner = (Object)my__interpolator_58_840_49415840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_54211560_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   base_54211560_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   base_54211560_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(base_54211560_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,base_54211560_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
base_54211560_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[base_54211560_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_54409980_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   next__data_54409980_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   next__data_54409980_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(next__data_54409980_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,next__data_54409980_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
next__data_54409980_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[next__data_54409980_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_54619280_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   remaining_54619280_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   remaining_54619280_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(remaining_54619280_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,remaining_54619280_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
remaining_54619280_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[remaining_54619280_my__interpolator_58_8400_54050280_func1_58_84_54256600_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__63073200();

   return behavior;
}

Scope makemy__interpolator_58_840_49415840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_840_49415840 = scope;
   scope->owner = (Object)my__interpolator_58_8400_54050280;
   scope->name = "my_interpolator:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__49415200();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63071680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_54050280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_54050280 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_54211560();
   systemT->inputs[1] = makenext__data_54409980();
   systemT->inputs[2] = makechange_54486340();
   systemT->inputs[3] = makeremaining_54619280();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_54802020();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_840_49415840();

   return systemT;
}