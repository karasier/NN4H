#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_840_48016600;

SignalI z__value_42483080_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makez__value_42483080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_42483080_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_48016600;
   signalI->name = "z_value";
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

SignalI base_44591640_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makebase_44591640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_44591640_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_48016600;
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

SignalI next__data_45766760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makenext__data_45766760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_45766760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_48016600;
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

SignalI integer__part_47237760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makeinteger__part_47237760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_47237760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_48016600;
   signalI->name = "integer_part";
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

SignalI interpolated__value_47567300_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makeinterpolated__value_47567300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_47567300_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_48016600;
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

Block __50552700;

void code__50552700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_44591640_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value;
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
                                    src0 = next__data_45766760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value;
                                    src1 = base_44591640_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = ({
                                    Value src0,src1,dst = get_value();
                                    unsigned int pool_state = get_value_pos();
                                    src0 = z__value_42483080_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value;
                                    src1 = integer__part_47237760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50549660();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_47567300_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
}

Block make__50552700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50552700 = block;
   block->owner = (Object)__50551540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50552700;

   return block;
};

Value make__50549660() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47553560;

Scope __47553180;

Scope make__47553180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47553180 = scope;
   scope->owner = (Object)__47553560;
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

Behavior __50551540;

Behavior make__50551540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50551540 = behavior;
   behavior->owner = (Object)__47553560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_44591640_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   base_44591640_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   base_44591640_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(base_44591640_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,base_44591640_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
base_44591640_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[base_44591640_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_45766760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   next__data_45766760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   next__data_45766760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(next__data_45766760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,next__data_45766760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
next__data_45766760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[next__data_45766760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,z__value_42483080_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   z__value_42483080_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   z__value_42483080_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(z__value_42483080_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,z__value_42483080_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
z__value_42483080_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[z__value_42483080_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,integer__part_47237760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   integer__part_47237760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   integer__part_47237760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(integer__part_47237760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,integer__part_47237760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
integer__part_47237760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[integer__part_47237760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->block = make__50552700();

   return behavior;
}

Scope make__47553560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47553560 = scope;
   scope->owner = (Object)my__interpolator_58_840_48016600;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__47553180();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50551540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_840_48016600() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_840_48016600 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_42483080();
   systemT->inputs[1] = makebase_44591640();
   systemT->inputs[2] = makenext__data_45766760();
   systemT->inputs[3] = makeinteger__part_47237760();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_47567300();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47553560();

   return systemT;
}