#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__calculator_58_840_45426340;

SignalI decimal__part_45550520_my__calculator_58_840_45426340___47904480______58_840_43571960;

SignalI makedecimal__part_45550520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   decimal__part_45550520_my__calculator_58_840_45426340___47904480______58_840_43571960 = signalI;
   signalI->owner = (Object)my__calculator_58_840_45426340;
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

SignalI base_45805760_my__calculator_58_840_45426340___47904480______58_840_43571960;

SignalI makebase_45805760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_45805760_my__calculator_58_840_45426340___47904480______58_840_43571960 = signalI;
   signalI->owner = (Object)my__calculator_58_840_45426340;
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

SignalI next__data_47529040_my__calculator_58_840_45426340___47904480______58_840_43571960;

SignalI makenext__data_47529040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47529040_my__calculator_58_840_45426340___47904480______58_840_43571960 = signalI;
   signalI->owner = (Object)my__calculator_58_840_45426340;
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

SignalI estimated__value_46957240_my__calculator_58_840_45426340___47904480______58_840_43571960;

SignalI makeestimated__value_46957240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   estimated__value_46957240_my__calculator_58_840_45426340___47904480______58_840_43571960 = signalI;
   signalI->owner = (Object)my__calculator_58_840_45426340;
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

Block __45276940;

void code__45276940() {
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
                  src0 = base_45805760_my__calculator_58_840_45426340___47904480______58_840_43571960->c_value;
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
                                    src0 = next__data_47529040_my__calculator_58_840_45426340___47904480______58_840_43571960->c_value;
                                    src1 = base_45805760_my__calculator_58_840_45426340___47904480______58_840_43571960->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),60),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = decimal__part_45550520_my__calculator_58_840_45426340___47904480______58_840_43571960->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),60),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__45002840();
                  dst = shift_right_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),estimated__value_46957240_my__calculator_58_840_45426340___47904480______58_840_43571960);
      set_value_pos(pool_state);
   }
}

Block make__45276940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45276940 = block;
   block->owner = (Object)__45273940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45276940;

   return block;
};

Value make__45002840() {
   static unsigned long long data[] = { 0ULL,28ULL };
   return make_set_value(get_type_vector(get_type_bit(),60),1,data);
}

Scope __46960200;

Scope __46959320;

Scope make__46959320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46959320 = scope;
   scope->owner = (Object)__46960200;
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

Behavior __45273940;

Behavior make__45273940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45273940 = behavior;
   behavior->owner = (Object)__46960200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_45805760_my__calculator_58_840_45426340___47904480______58_840_43571960);
   base_45805760_my__calculator_58_840_45426340___47904480______58_840_43571960->num_any += 1;
   base_45805760_my__calculator_58_840_45426340___47904480______58_840_43571960->any = realloc(base_45805760_my__calculator_58_840_45426340___47904480______58_840_43571960->any,base_45805760_my__calculator_58_840_45426340___47904480______58_840_43571960->num_any*sizeof(Object));
base_45805760_my__calculator_58_840_45426340___47904480______58_840_43571960->any[base_45805760_my__calculator_58_840_45426340___47904480______58_840_43571960->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_47529040_my__calculator_58_840_45426340___47904480______58_840_43571960);
   next__data_47529040_my__calculator_58_840_45426340___47904480______58_840_43571960->num_any += 1;
   next__data_47529040_my__calculator_58_840_45426340___47904480______58_840_43571960->any = realloc(next__data_47529040_my__calculator_58_840_45426340___47904480______58_840_43571960->any,next__data_47529040_my__calculator_58_840_45426340___47904480______58_840_43571960->num_any*sizeof(Object));
next__data_47529040_my__calculator_58_840_45426340___47904480______58_840_43571960->any[next__data_47529040_my__calculator_58_840_45426340___47904480______58_840_43571960->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,decimal__part_45550520_my__calculator_58_840_45426340___47904480______58_840_43571960);
   decimal__part_45550520_my__calculator_58_840_45426340___47904480______58_840_43571960->num_any += 1;
   decimal__part_45550520_my__calculator_58_840_45426340___47904480______58_840_43571960->any = realloc(decimal__part_45550520_my__calculator_58_840_45426340___47904480______58_840_43571960->any,decimal__part_45550520_my__calculator_58_840_45426340___47904480______58_840_43571960->num_any*sizeof(Object));
decimal__part_45550520_my__calculator_58_840_45426340___47904480______58_840_43571960->any[decimal__part_45550520_my__calculator_58_840_45426340___47904480______58_840_43571960->num_any-1] = (Object)behavior;
   behavior->block = make__45276940();

   return behavior;
}

Scope make__46960200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46960200 = scope;
   scope->owner = (Object)my__calculator_58_840_45426340;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__46959320();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45273940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__calculator_58_840_45426340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__calculator_58_840_45426340 = systemT;
systemT->owner = NULL;
   systemT->name = "my_calculator:T0";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makedecimal__part_45550520();
   systemT->inputs[1] = makebase_45805760();
   systemT->inputs[2] = makenext__data_47529040();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeestimated__value_46957240();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__46960200();

   return systemT;
}