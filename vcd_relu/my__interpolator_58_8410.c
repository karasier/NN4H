#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8410_57487500;

SignalI base_57743660_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makebase_57743660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_57743660_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_57487500;
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

SignalI next__data_57957380_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makenext__data_57957380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_57957380_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_57487500;
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

SignalI remaining_58108080_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeremaining_58108080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_58108080_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_57487500;
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

SignalI interpolated__value_58204720_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeinterpolated__value_58204720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_58204720_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_57487500;
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

Block __58126060;

void code__58126060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_57743660_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
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
                                                src0 = next__data_57957380_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                                                src1 = base_57743660_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                                                dst = sub_value(src0,src1,dst);
                                                set_value_pos(pool_state);
                                             dst; });
                                          dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                                          set_value_pos(pool_state);
                                       dst; });
                                    src1 = make__58161040();
                                    dst = shift_right_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_58108080_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58160860();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_58204720_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58126060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58126060 = block;
   block->owner = (Object)__58123920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58126060;

   return block;
};

Value make__58161040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58160860() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_841_55631520;

Scope __55630880;

Scope make__55630880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __55630880 = scope;
   scope->owner = (Object)my__interpolator_58_841_55631520;
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

Behavior __58123920;

Behavior make__58123920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58123920 = behavior;
   behavior->owner = (Object)my__interpolator_58_841_55631520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_57743660_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   base_57743660_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   base_57743660_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(base_57743660_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,base_57743660_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
base_57743660_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[base_57743660_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_57957380_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   next__data_57957380_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   next__data_57957380_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(next__data_57957380_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,next__data_57957380_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
next__data_57957380_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[next__data_57957380_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_58108080_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   remaining_58108080_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   remaining_58108080_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(remaining_58108080_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,remaining_58108080_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
remaining_58108080_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[remaining_58108080_my__interpolator_58_8410_57487500_func0_58_840_51030640_func0_58_8400_56813300_layer1_58_84_49488840_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__58126060();

   return behavior;
}

Scope makemy__interpolator_58_841_55631520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_841_55631520 = scope;
   scope->owner = (Object)my__interpolator_58_8410_57487500;
   scope->name = "my_interpolator:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__55630880();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58123920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8410_57487500() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8410_57487500 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T10";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_57743660();
   systemT->inputs[1] = makenext__data_57957380();
   systemT->inputs[2] = makeremaining_58108080();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_58204720();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_841_55631520();

   return systemT;
}