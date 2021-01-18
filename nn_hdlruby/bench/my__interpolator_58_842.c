#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_842_49810980;

SignalI base_51016800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makebase_51016800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51016800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_49810980;
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

SignalI next__data_51197800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makenext__data_51197800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51197800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_49810980;
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

SignalI remaining_51412680_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeremaining_51412680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51412680_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_49810980;
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

SignalI interpolated__value_51698740_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeinterpolated__value_51698740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_51698740_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_49810980;
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

Block __52965580;

void code__52965580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_51016800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
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
                                                src0 = next__data_51197800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                                                src1 = base_51016800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                                                dst = sub_value(src0,src1,dst);
                                                set_value_pos(pool_state);
                                             dst; });
                                          dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                                          set_value_pos(pool_state);
                                       dst; });
                                    src1 = make__52986780();
                                    dst = shift_right_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_51412680_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53010320();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_51698740_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__52965580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52965580 = block;
   block->owner = (Object)__52961900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52965580;

   return block;
};

Value make__52986780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53010320() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_84_53204340;

Scope __53203520;

Scope make__53203520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __53203520 = scope;
   scope->owner = (Object)my__interpolator_58_84_53204340;
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

Behavior __52961900;

Behavior make__52961900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52961900 = behavior;
   behavior->owner = (Object)my__interpolator_58_84_53204340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51016800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   base_51016800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   base_51016800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(base_51016800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,base_51016800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
base_51016800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[base_51016800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51197800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   next__data_51197800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   next__data_51197800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(next__data_51197800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,next__data_51197800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
next__data_51197800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[next__data_51197800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_51412680_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   remaining_51412680_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   remaining_51412680_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(remaining_51412680_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,remaining_51412680_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
remaining_51412680_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[remaining_51412680_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__52965580();

   return behavior;
}

Scope makemy__interpolator_58_84_53204340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_84_53204340 = scope;
   scope->owner = (Object)my__interpolator_58_842_49810980;
   scope->name = "my_interpolator:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__53203520();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52961900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_842_49810980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_842_49810980 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T2";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_51016800();
   systemT->inputs[1] = makenext__data_51197800();
   systemT->inputs[2] = makeremaining_51412680();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_51698740();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_84_53204340();

   return systemT;
}