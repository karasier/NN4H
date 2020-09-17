#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_842_53666540;

SignalI remaining_53843180_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeremaining_53843180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53843180_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_53666540;
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

SignalI base_54185900_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makebase_54185900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_54185900_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_53666540;
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

SignalI next__data_54331300_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makenext__data_54331300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54331300_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_53666540;
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

SignalI interpolated__value_54444220_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160;

SignalI makeinterpolated__value_54444220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_54444220_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_53666540;
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

Block __59903680;

void code__59903680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_54185900_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
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
                                    src0 = next__data_54331300_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
                                    src1 = base_54185900_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_53843180_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59900500();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_54444220_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59903680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59903680 = block;
   block->owner = (Object)__59902380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59903680;

   return block;
};

Value make__59900500() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_84_52290540;

Scope __52290160;

Scope make__52290160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52290160 = scope;
   scope->owner = (Object)my__interpolator_58_84_52290540;
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

Behavior __59902380;

Behavior make__59902380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59902380 = behavior;
   behavior->owner = (Object)my__interpolator_58_84_52290540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_54185900_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   base_54185900_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   base_54185900_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(base_54185900_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,base_54185900_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
base_54185900_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[base_54185900_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_54331300_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   next__data_54331300_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   next__data_54331300_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(next__data_54331300_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,next__data_54331300_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
next__data_54331300_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[next__data_54331300_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_53843180_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   remaining_53843180_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   remaining_53843180_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(remaining_53843180_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,remaining_53843180_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
remaining_53843180_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[remaining_53843180_my__interpolator_58_842_53666540_func0_58_84_53255540_func0_58_840_52772800_layer__hidden_58_84_49667680_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59903680();

   return behavior;
}

Scope makemy__interpolator_58_84_52290540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_84_52290540 = scope;
   scope->owner = (Object)my__interpolator_58_842_53666540;
   scope->name = "my_interpolator:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__52290160();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59902380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_842_53666540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_842_53666540 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T2";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_53843180();
   systemT->inputs[1] = makebase_54185900();
   systemT->inputs[2] = makenext__data_54331300();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_54444220();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_84_52290540();

   return systemT;
}