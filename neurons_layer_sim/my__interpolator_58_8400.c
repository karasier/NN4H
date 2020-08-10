#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_49418880;

SignalI z__value_49580640_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makez__value_49580640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49580640_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_49418880;
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

SignalI base_49826460_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makebase_49826460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49826460_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_49418880;
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

SignalI next__data_49964500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makenext__data_49964500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49964500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_49418880;
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

SignalI integer__part_50054500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makeinteger__part_50054500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_50054500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_49418880;
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

SignalI interpolated__value_50209960_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makeinterpolated__value_50209960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_50209960_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_49418880;
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

Block __48950400;

void code__48950400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49020100(),denominator_50850460___50742680_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__48950400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48950400 = block;
   block->owner = (Object)__48950180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48950400;

   return block;
};

Block __48950640;

void code__48950640() {
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
                  src0 = base_49826460_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value;
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
                                          src0 = next__data_49964500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value;
                                          src1 = base_49826460_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value;
                                          dst = sub_value(src0,src1,dst);
                                          set_value_pos(pool_state);
                                       dst; });
                                    dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              src1 = make__49019680();
                              dst = shift_left_value(src0,src1,dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = denominator_50850460___50742680_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value;
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
                              src0 = z__value_49580640_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value;
                              src1 = integer__part_50054500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value;
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
   dst; }),interpolated__value_50209960_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__48950640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48950640 = block;
   block->owner = (Object)__48948840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48950640;

   return block;
};

Value make__49020100() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__49019680() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __50742680;

SignalI denominator_50850460___50742680_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makedenominator_50850460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   denominator_50850460___50742680_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)__50742680;
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

Scope __50742300;

Scope make__50742300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50742300 = scope;
   scope->owner = (Object)__50742680;
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

Behavior __48950180;

Behavior make__48950180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48950180 = behavior;
   behavior->owner = (Object)__50742680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__48950400();

   return behavior;
}

Behavior __48948840;

Behavior make__48948840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48948840 = behavior;
   behavior->owner = (Object)__50742680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49826460_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   base_49826460_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   base_49826460_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(base_49826460_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,base_49826460_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
base_49826460_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[base_49826460_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49964500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   next__data_49964500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   next__data_49964500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(next__data_49964500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,next__data_49964500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
next__data_49964500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[next__data_49964500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,denominator_50850460___50742680_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   denominator_50850460___50742680_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   denominator_50850460___50742680_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(denominator_50850460___50742680_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,denominator_50850460___50742680_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
denominator_50850460___50742680_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[denominator_50850460___50742680_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,z__value_49580640_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   z__value_49580640_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   z__value_49580640_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(z__value_49580640_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,z__value_49580640_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
z__value_49580640_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[z__value_49580640_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_50054500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   integer__part_50054500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   integer__part_50054500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(integer__part_50054500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,integer__part_50054500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
integer__part_50054500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[integer__part_50054500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__48950640();

   return behavior;
}

Scope make__50742680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50742680 = scope;
   scope->owner = (Object)my__interpolator_58_8400_49418880;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makedenominator_50850460();
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__50742300();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48950180();
   scope->behaviors[1] = make__48948840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_49418880() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_49418880 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49580640();
   systemT->inputs[1] = makebase_49826460();
   systemT->inputs[2] = makenext__data_49964500();
   systemT->inputs[3] = makeinteger__part_50054500();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_50209960();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__50742680();

   return systemT;
}