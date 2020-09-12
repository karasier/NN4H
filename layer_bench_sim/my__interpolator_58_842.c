#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_842_52439740;

SignalI remaining_52541940_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeremaining_52541940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_52541940_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_52439740;
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

SignalI base_52620480_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makebase_52620480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52620480_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_52439740;
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

SignalI next__data_52815240_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makenext__data_52815240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52815240_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_52439740;
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

SignalI interpolated__value_52977720_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeinterpolated__value_52977720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_52977720_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_52439740;
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

Block __60167320;

void code__60167320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_52620480_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
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
                                    src0 = next__data_52815240_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
                                    src1 = base_52620480_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_52541940_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60164080();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_52977720_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60167320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60167320 = block;
   block->owner = (Object)__60166060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60167320;

   return block;
};

Value make__60164080() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_84_49242660;

Scope __49263340;

Scope make__49263340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __49263340 = scope;
   scope->owner = (Object)my__interpolator_58_84_49242660;
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

Behavior __60166060;

Behavior make__60166060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60166060 = behavior;
   behavior->owner = (Object)my__interpolator_58_84_49242660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52620480_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   base_52620480_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   base_52620480_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(base_52620480_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,base_52620480_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
base_52620480_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[base_52620480_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52815240_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   next__data_52815240_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   next__data_52815240_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(next__data_52815240_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,next__data_52815240_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
next__data_52815240_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[next__data_52815240_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_52541940_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   remaining_52541940_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   remaining_52541940_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(remaining_52541940_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,remaining_52541940_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
remaining_52541940_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[remaining_52541940_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60167320();

   return behavior;
}

Scope makemy__interpolator_58_84_49242660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_84_49242660 = scope;
   scope->owner = (Object)my__interpolator_58_842_52439740;
   scope->name = "my_interpolator:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__49263340();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60166060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_842_52439740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_842_52439740 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T2";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_52541940();
   systemT->inputs[1] = makebase_52620480();
   systemT->inputs[2] = makenext__data_52815240();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_52977720();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_84_49242660();

   return systemT;
}