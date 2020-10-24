#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_50266160;

SignalI base_50484480_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makebase_50484480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50484480_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_50266160;
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

SignalI next__data_50618180_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makenext__data_50618180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50618180_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_50266160;
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

SignalI change_50763200_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makechange_50763200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_50763200_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_50266160;
   signalI->name = "change";
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

SignalI remaining_54672160_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeremaining_54672160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_54672160_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_50266160;
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

SignalI interpolated__value_54778760_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeinterpolated__value_54778760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_54778760_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_50266160;
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

Block __50711960;

void code__50711960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_50484480_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
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
                                    src0 = next__data_50618180_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                                    src1 = base_50484480_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_54672160_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50742340();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_54778760_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50711960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50711960 = block;
   block->owner = (Object)__50749280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50711960;

   return block;
};

Value make__50742340() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_840_48074320;

Scope __48073920;

Scope make__48073920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48073920 = scope;
   scope->owner = (Object)my__interpolator_58_840_48074320;
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

Behavior __50749280;

Behavior make__50749280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50749280 = behavior;
   behavior->owner = (Object)my__interpolator_58_840_48074320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50484480_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   base_50484480_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   base_50484480_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(base_50484480_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,base_50484480_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
base_50484480_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[base_50484480_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50618180_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   next__data_50618180_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   next__data_50618180_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(next__data_50618180_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,next__data_50618180_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
next__data_50618180_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[next__data_50618180_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_54672160_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   remaining_54672160_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   remaining_54672160_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(remaining_54672160_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,remaining_54672160_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
remaining_54672160_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[remaining_54672160_my__interpolator_58_8400_50266160_func1_58_84_56300400_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__50711960();

   return behavior;
}

Scope makemy__interpolator_58_840_48074320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_840_48074320 = scope;
   scope->owner = (Object)my__interpolator_58_8400_50266160;
   scope->name = "my_interpolator:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__48073920();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50749280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_50266160() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_50266160 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_50484480();
   systemT->inputs[1] = makenext__data_50618180();
   systemT->inputs[2] = makechange_50763200();
   systemT->inputs[3] = makeremaining_54672160();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_54778760();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_840_48074320();

   return systemT;
}