#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_841_51081980;

SignalI z__value_51443280_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makez__value_51443280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51443280_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)my__interpolator_58_841_51081980;
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

SignalI base_51610540_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makebase_51610540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51610540_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)my__interpolator_58_841_51081980;
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

SignalI next__data_51809940_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makenext__data_51809940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51809940_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)my__interpolator_58_841_51081980;
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

SignalI integer__part_47483460_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makeinteger__part_47483460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_47483460_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)my__interpolator_58_841_51081980;
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

SignalI interpolated__value_47692360_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makeinterpolated__value_47692360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_47692360_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)my__interpolator_58_841_51081980;
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

Block __51809660;

void code__51809660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_51610540_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value;
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
                                    src0 = next__data_51809940_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value;
                                    src1 = base_51610540_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value;
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
                                    src0 = z__value_51443280_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value;
                                    src1 = integer__part_47483460_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value;
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
            src1 = make__51894460();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_47692360_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51809660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51809660 = block;
   block->owner = (Object)__51807080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51809660;

   return block;
};

Value make__51894460() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47658320;

Scope __47656300;

Scope make__47656300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47656300 = scope;
   scope->owner = (Object)__47658320;
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

Behavior __51807080;

Behavior make__51807080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51807080 = behavior;
   behavior->owner = (Object)__47658320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51610540_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   base_51610540_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   base_51610540_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(base_51610540_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,base_51610540_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
base_51610540_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[base_51610540_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51809940_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   next__data_51809940_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   next__data_51809940_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(next__data_51809940_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,next__data_51809940_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
next__data_51809940_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[next__data_51809940_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,z__value_51443280_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   z__value_51443280_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   z__value_51443280_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(z__value_51443280_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,z__value_51443280_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
z__value_51443280_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[z__value_51443280_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,integer__part_47483460_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   integer__part_47483460_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   integer__part_47483460_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(integer__part_47483460_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,integer__part_47483460_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
integer__part_47483460_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[integer__part_47483460_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__51809660();

   return behavior;
}

Scope make__47658320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47658320 = scope;
   scope->owner = (Object)my__interpolator_58_841_51081980;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__47656300();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51807080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_841_51081980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_841_51081980 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T1";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51443280();
   systemT->inputs[1] = makebase_51610540();
   systemT->inputs[2] = makenext__data_51809940();
   systemT->inputs[3] = makeinteger__part_47483460();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_47692360();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47658320();

   return systemT;
}