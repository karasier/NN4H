#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_57321000;

SignalI z__value_57455620_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makez__value_57455620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_57455620_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_57321000;
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

SignalI base_57674040_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makebase_57674040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_57674040_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_57321000;
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

SignalI next__data_57802280_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makenext__data_57802280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_57802280_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_57321000;
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

SignalI integer__part_45421580_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeinteger__part_45421580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_45421580_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_57321000;
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

SignalI interpolated__value_47402480_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760;

SignalI makeinterpolated__value_47402480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_47402480_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_57321000;
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

Block __55702900;

void code__55702900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_57674040_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
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
                                    src0 = next__data_57802280_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
                                    src1 = base_57674040_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
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
                                    src0 = z__value_57455620_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
                                    src1 = integer__part_45421580_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->c_value;
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
            src1 = make__55697760();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_47402480_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
      set_value_pos(pool_state);
   }
}

Block make__55702900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55702900 = block;
   block->owner = (Object)__55699840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55702900;

   return block;
};

Value make__55697760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __56140840;

Scope __56140540;

Scope make__56140540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __56140540 = scope;
   scope->owner = (Object)__56140840;
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

Behavior __55699840;

Behavior make__55699840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55699840 = behavior;
   behavior->owner = (Object)__56140840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_57674040_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   base_57674040_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   base_57674040_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(base_57674040_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,base_57674040_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
base_57674040_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[base_57674040_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_57802280_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   next__data_57802280_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   next__data_57802280_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(next__data_57802280_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,next__data_57802280_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
next__data_57802280_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[next__data_57802280_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,z__value_57455620_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   z__value_57455620_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   z__value_57455620_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(z__value_57455620_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,z__value_57455620_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
z__value_57455620_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[z__value_57455620_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,integer__part_45421580_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760);
   integer__part_45421580_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any += 1;
   integer__part_45421580_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any = realloc(integer__part_45421580_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any,integer__part_45421580_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any*sizeof(Object));
integer__part_45421580_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->any[integer__part_45421580_my__interpolator_58_8400_57321000___51201500_func1_58_840_55702360___50438680_layer0_58_840_51654360___48221760______58_840_51820760->num_any-1] = (Object)behavior;
   behavior->block = make__55702900();

   return behavior;
}

Scope make__56140840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __56140840 = scope;
   scope->owner = (Object)my__interpolator_58_8400_57321000;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__56140540();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55699840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_57321000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_57321000 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_57455620();
   systemT->inputs[1] = makebase_57674040();
   systemT->inputs[2] = makenext__data_57802280();
   systemT->inputs[3] = makeinteger__part_45421580();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_47402480();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__56140840();

   return systemT;
}