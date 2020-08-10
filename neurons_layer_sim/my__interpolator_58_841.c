#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_841_47486960;

SignalI z__value_47619380_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makez__value_47619380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47619380_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__interpolator_58_841_47486960;
   signalI->name = "z_value";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI base_47831080_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makebase_47831080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47831080_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__interpolator_58_841_47486960;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI next__data_48888000_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makenext__data_48888000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48888000_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__interpolator_58_841_47486960;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI integer__part_49014740_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makeinteger__part_49014740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_49014740_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__interpolator_58_841_47486960;
   signalI->name = "integer_part";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI interpolated__value_49133040_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makeinterpolated__value_49133040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_49133040_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__interpolator_58_841_47486960;
   signalI->name = "interpolated_value";
   signalI->type = get_type_vector(get_type_bit(),8);
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

Block __47960100;

void code__47960100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48452740(),denominator_50216860___50056560_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__47960100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47960100 = block;
   block->owner = (Object)__47959800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47960100;

   return block;
};

Block __47960380;

void code__47960380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = base_47831080_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0,src1,dst = get_value();
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
                                          src0 = next__data_48888000_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value;
                                          src1 = base_47831080_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value;
                                          dst = sub_value(src0,src1,dst);
                                          set_value_pos(pool_state);
                                       dst; });
                                    dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              src1 = make__48452280();
                              dst = shift_left_value(src0,src1,dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = denominator_50216860___50056560_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = div_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = ({
                              Value src0,src1,dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = z__value_47619380_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value;
                              src1 = integer__part_49014740_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value;
                              dst = sub_value(src0,src1,dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = mul_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_49133040_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__47960380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47960380 = block;
   block->owner = (Object)__47957100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47960380;

   return block;
};

Value make__48452740() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__48452280() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __50056560;

SignalI denominator_50216860___50056560_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makedenominator_50216860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   denominator_50216860___50056560_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)__50056560;
   signalI->name = "denominator";
   signalI->type = get_type_vector(get_type_bit(),8);
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

Scope __50056260;

Scope make__50056260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50056260 = scope;
   scope->owner = (Object)__50056560;
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

Behavior __47959800;

Behavior make__47959800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47959800 = behavior;
   behavior->owner = (Object)__50056560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__47960100();

   return behavior;
}

Behavior __47957100;

Behavior make__47957100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47957100 = behavior;
   behavior->owner = (Object)__50056560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47831080_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   base_47831080_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   base_47831080_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(base_47831080_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,base_47831080_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
base_47831080_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[base_47831080_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_48888000_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   next__data_48888000_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   next__data_48888000_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(next__data_48888000_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,next__data_48888000_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
next__data_48888000_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[next__data_48888000_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,denominator_50216860___50056560_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   denominator_50216860___50056560_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   denominator_50216860___50056560_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(denominator_50216860___50056560_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,denominator_50216860___50056560_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
denominator_50216860___50056560_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[denominator_50216860___50056560_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,z__value_47619380_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   z__value_47619380_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   z__value_47619380_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(z__value_47619380_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,z__value_47619380_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
z__value_47619380_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[z__value_47619380_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_49014740_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   integer__part_49014740_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   integer__part_49014740_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(integer__part_49014740_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,integer__part_49014740_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
integer__part_49014740_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[integer__part_49014740_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__47960380();

   return behavior;
}

Scope make__50056560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50056560 = scope;
   scope->owner = (Object)my__interpolator_58_841_47486960;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makedenominator_50216860();
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__50056260();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47959800();
   scope->behaviors[1] = make__47957100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_841_47486960() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_841_47486960 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T1";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47619380();
   systemT->inputs[1] = makebase_47831080();
   systemT->inputs[2] = makenext__data_48888000();
   systemT->inputs[3] = makeinteger__part_49014740();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_49133040();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__50056560();

   return systemT;
}