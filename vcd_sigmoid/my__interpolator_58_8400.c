#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_49419120;

SignalI base_49616940_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makebase_49616940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49616940_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_49419120;
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

SignalI next__data_49789340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makenext__data_49789340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49789340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_49419120;
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

SignalI change_53791540_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makechange_53791540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_53791540_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_49419120;
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

SignalI remaining_53939340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeremaining_53939340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53939340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_49419120;
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

SignalI interpolated__value_54086960_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeinterpolated__value_54086960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_54086960_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_49419120;
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

Block __53808100;

void code__53808100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_49616940_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
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
                                    src0 = next__data_49789340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
                                    src1 = base_49616940_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_53939340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53841900();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_54086960_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__53808100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53808100 = block;
   block->owner = (Object)__53845840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53808100;

   return block;
};

Value make__53841900() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_840_46860360;

Scope __47069540;

Scope make__47069540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47069540 = scope;
   scope->owner = (Object)my__interpolator_58_840_46860360;
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

Behavior __53845840;

Behavior make__53845840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53845840 = behavior;
   behavior->owner = (Object)my__interpolator_58_840_46860360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49616940_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   base_49616940_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   base_49616940_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(base_49616940_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,base_49616940_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
base_49616940_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[base_49616940_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49789340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   next__data_49789340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   next__data_49789340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(next__data_49789340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,next__data_49789340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
next__data_49789340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[next__data_49789340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_53939340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   remaining_53939340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   remaining_53939340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(remaining_53939340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,remaining_53939340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
remaining_53939340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[remaining_53939340_my__interpolator_58_8400_49419120_func1_58_84_55387080_func1_58_840_56837240_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__53808100();

   return behavior;
}

Scope makemy__interpolator_58_840_46860360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_840_46860360 = scope;
   scope->owner = (Object)my__interpolator_58_8400_49419120;
   scope->name = "my_interpolator:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__47069540();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53845840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_49419120() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_49419120 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_49616940();
   systemT->inputs[1] = makenext__data_49789340();
   systemT->inputs[2] = makechange_53791540();
   systemT->inputs[3] = makeremaining_53939340();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_54086960();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_840_46860360();

   return systemT;
}