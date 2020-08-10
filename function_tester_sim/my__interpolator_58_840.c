#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_840_46598340;

SignalI z__value_47407900_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makez__value_47407900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47407900_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_46598340;
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

SignalI base_47837920_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makebase_47837920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47837920_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_46598340;
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

SignalI next__data_48213740_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makenext__data_48213740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48213740_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_46598340;
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

SignalI integer__part_48280640_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makeinteger__part_48280640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_48280640_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_46598340;
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

SignalI interpolated__value_48347880_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makeinterpolated__value_48347880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_48347880_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)my__interpolator_58_840_46598340;
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

Block __47790780;

void code__47790780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47786920(),denominator_48294820___48250800_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
}

Block make__47790780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47790780 = block;
   block->owner = (Object)__47790580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47790780;

   return block;
};

Block __47790960;

void code__47790960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_47837920_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
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
                                    src0 = next__data_48213740_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
                                    src1 = base_47837920_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = make__47786540();
                        dst = shift_left_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = denominator_48294820___48250800_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
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
                        src0 = z__value_47407900_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
                        src1 = integer__part_48280640_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
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
   dst; }),interpolated__value_48347880_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
}

Block make__47790960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47790960 = block;
   block->owner = (Object)__47789180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47790960;

   return block;
};

Value make__47786920() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47786540() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __48250800;

SignalI denominator_48294820___48250800_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makedenominator_48294820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   denominator_48294820___48250800_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)__48250800;
   signalI->name = "denominator";
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

Scope __48250500;

Scope make__48250500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48250500 = scope;
   scope->owner = (Object)__48250800;
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

Behavior __47790580;

Behavior make__47790580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47790580 = behavior;
   behavior->owner = (Object)__48250800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__47790780();

   return behavior;
}

Behavior __47789180;

Behavior make__47789180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47789180 = behavior;
   behavior->owner = (Object)__48250800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47837920_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   base_47837920_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   base_47837920_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(base_47837920_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,base_47837920_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
base_47837920_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[base_47837920_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_48213740_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   next__data_48213740_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   next__data_48213740_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(next__data_48213740_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,next__data_48213740_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
next__data_48213740_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[next__data_48213740_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,denominator_48294820___48250800_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   denominator_48294820___48250800_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   denominator_48294820___48250800_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(denominator_48294820___48250800_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,denominator_48294820___48250800_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
denominator_48294820___48250800_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[denominator_48294820___48250800_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,z__value_47407900_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   z__value_47407900_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   z__value_47407900_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(z__value_47407900_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,z__value_47407900_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
z__value_47407900_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[z__value_47407900_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_48280640_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   integer__part_48280640_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   integer__part_48280640_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(integer__part_48280640_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,integer__part_48280640_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
integer__part_48280640_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[integer__part_48280640_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->block = make__47790960();

   return behavior;
}

Scope make__48250800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48250800 = scope;
   scope->owner = (Object)my__interpolator_58_840_46598340;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makedenominator_48294820();
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__48250500();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47790580();
   scope->behaviors[1] = make__47789180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_840_46598340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_840_46598340 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47407900();
   systemT->inputs[1] = makebase_47837920();
   systemT->inputs[2] = makenext__data_48213740();
   systemT->inputs[3] = makeinteger__part_48280640();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_48347880();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__48250800();

   return systemT;
}