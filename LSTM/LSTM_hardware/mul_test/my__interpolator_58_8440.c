#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8440_62999740;

SignalI base_63385360_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makebase_63385360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_63385360_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__interpolator_58_8440_62999740;
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

SignalI next__data_63631560_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makenext__data_63631560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_63631560_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__interpolator_58_8440_62999740;
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

SignalI change_63947400_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makechange_63947400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_63947400_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__interpolator_58_8440_62999740;
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

SignalI remaining_64266520_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeremaining_64266520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_64266520_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__interpolator_58_8440_62999740;
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

SignalI interpolated__value_64497740_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeinterpolated__value_64497740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_64497740_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__interpolator_58_8440_62999740;
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

Block __52009700;

void code__52009700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_63385360_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
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
                                    src0 = next__data_63631560_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                                    src1 = base_63385360_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_64266520_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53647540();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_64497740_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__52009700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52009700 = block;
   block->owner = (Object)__52026780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52009700;

   return block;
};

Value make__53647540() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_844_55658500;

Scope __55696580;

Scope make__55696580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __55696580 = scope;
   scope->owner = (Object)my__interpolator_58_844_55658500;
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

Behavior __52026780;

Behavior make__52026780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52026780 = behavior;
   behavior->owner = (Object)my__interpolator_58_844_55658500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_63385360_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   base_63385360_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   base_63385360_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(base_63385360_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,base_63385360_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
base_63385360_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[base_63385360_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_63631560_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   next__data_63631560_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   next__data_63631560_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(next__data_63631560_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,next__data_63631560_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
next__data_63631560_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[next__data_63631560_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_64266520_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   remaining_64266520_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   remaining_64266520_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(remaining_64266520_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,remaining_64266520_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
remaining_64266520_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[remaining_64266520_my__interpolator_58_8440_62999740_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__52009700();

   return behavior;
}

Scope makemy__interpolator_58_844_55658500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_844_55658500 = scope;
   scope->owner = (Object)my__interpolator_58_8440_62999740;
   scope->name = "my_interpolator:T4";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__55696580();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52026780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8440_62999740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8440_62999740 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T40";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_63385360();
   systemT->inputs[1] = makenext__data_63631560();
   systemT->inputs[2] = makechange_63947400();
   systemT->inputs[3] = makeremaining_64266520();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_64497740();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_844_55658500();

   return systemT;
}