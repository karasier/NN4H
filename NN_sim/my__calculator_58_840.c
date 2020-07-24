#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__calculator_58_840_48317520;

SignalI decimal__part_48339960_my__calculator_58_840_48317520___46157400______58_840_43627720;

SignalI makedecimal__part_48339960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   decimal__part_48339960_my__calculator_58_840_48317520___46157400______58_840_43627720 = signalI;
   signalI->owner = (Object)my__calculator_58_840_48317520;
   signalI->name = "decimal_part";
   signalI->type = get_type_vector(get_type_bit(),28);
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

SignalI base_48383920_my__calculator_58_840_48317520___46157400______58_840_43627720;

SignalI makebase_48383920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48383920_my__calculator_58_840_48317520___46157400______58_840_43627720 = signalI;
   signalI->owner = (Object)my__calculator_58_840_48317520;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),32);
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

SignalI next__data_48450120_my__calculator_58_840_48317520___46157400______58_840_43627720;

SignalI makenext__data_48450120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48450120_my__calculator_58_840_48317520___46157400______58_840_43627720 = signalI;
   signalI->owner = (Object)my__calculator_58_840_48317520;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),32);
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

SignalI estimated__value_43623660_my__calculator_58_840_48317520___46157400______58_840_43627720;

SignalI makeestimated__value_43623660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   estimated__value_43623660_my__calculator_58_840_48317520___46157400______58_840_43627720 = signalI;
   signalI->owner = (Object)my__calculator_58_840_48317520;
   signalI->name = "estimated_value";
   signalI->type = get_type_vector(get_type_signed(),32);
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

Block __44174120;

void code__44174120() {
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
                  src0 = base_48383920_my__calculator_58_840_48317520___46157400______58_840_43627720->c_value;
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
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = ({
                                    Value src0,src1,dst = get_value();
                                    unsigned int pool_state = get_value_pos();
                                    src0 = next__data_48450120_my__calculator_58_840_48317520___46157400______58_840_43627720->c_value;
                                    src1 = base_48383920_my__calculator_58_840_48317520___46157400______58_840_43627720->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),60),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = decimal__part_48339960_my__calculator_58_840_48317520___46157400______58_840_43627720->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),60),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__45441940();
                  dst = shift_right_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),estimated__value_43623660_my__calculator_58_840_48317520___46157400______58_840_43627720);
      set_value_pos(pool_state);
   }
}

Block make__44174120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44174120 = block;
   block->owner = (Object)__44171400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44174120;

   return block;
};

Value make__45441940() {
   static unsigned long long data[] = { 0ULL,28ULL };
   return make_set_value(get_type_vector(get_type_bit(),60),1,data);
}

Scope __47489560;

Scope __47489260;

Scope make__47489260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47489260 = scope;
   scope->owner = (Object)__47489560;
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

Behavior __44171400;

Behavior make__44171400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44171400 = behavior;
   behavior->owner = (Object)__47489560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_48383920_my__calculator_58_840_48317520___46157400______58_840_43627720);
   base_48383920_my__calculator_58_840_48317520___46157400______58_840_43627720->num_any += 1;
   base_48383920_my__calculator_58_840_48317520___46157400______58_840_43627720->any = realloc(base_48383920_my__calculator_58_840_48317520___46157400______58_840_43627720->any,base_48383920_my__calculator_58_840_48317520___46157400______58_840_43627720->num_any*sizeof(Object));
base_48383920_my__calculator_58_840_48317520___46157400______58_840_43627720->any[base_48383920_my__calculator_58_840_48317520___46157400______58_840_43627720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_48450120_my__calculator_58_840_48317520___46157400______58_840_43627720);
   next__data_48450120_my__calculator_58_840_48317520___46157400______58_840_43627720->num_any += 1;
   next__data_48450120_my__calculator_58_840_48317520___46157400______58_840_43627720->any = realloc(next__data_48450120_my__calculator_58_840_48317520___46157400______58_840_43627720->any,next__data_48450120_my__calculator_58_840_48317520___46157400______58_840_43627720->num_any*sizeof(Object));
next__data_48450120_my__calculator_58_840_48317520___46157400______58_840_43627720->any[next__data_48450120_my__calculator_58_840_48317520___46157400______58_840_43627720->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,decimal__part_48339960_my__calculator_58_840_48317520___46157400______58_840_43627720);
   decimal__part_48339960_my__calculator_58_840_48317520___46157400______58_840_43627720->num_any += 1;
   decimal__part_48339960_my__calculator_58_840_48317520___46157400______58_840_43627720->any = realloc(decimal__part_48339960_my__calculator_58_840_48317520___46157400______58_840_43627720->any,decimal__part_48339960_my__calculator_58_840_48317520___46157400______58_840_43627720->num_any*sizeof(Object));
decimal__part_48339960_my__calculator_58_840_48317520___46157400______58_840_43627720->any[decimal__part_48339960_my__calculator_58_840_48317520___46157400______58_840_43627720->num_any-1] = (Object)behavior;
   behavior->block = make__44174120();

   return behavior;
}

Scope make__47489560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47489560 = scope;
   scope->owner = (Object)my__calculator_58_840_48317520;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__47489260();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__44171400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__calculator_58_840_48317520() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__calculator_58_840_48317520 = systemT;
systemT->owner = NULL;
   systemT->name = "my_calculator:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makedecimal__part_48339960();
   systemT->inputs[1] = makebase_48383920();
   systemT->inputs[2] = makenext__data_48450120();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeestimated__value_43623660();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47489560();

   return systemT;
}