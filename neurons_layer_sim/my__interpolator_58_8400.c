#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_52087320;

SignalI z__value_52185620_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makez__value_52185620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52185620_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_52087320;
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

SignalI base_52409900_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makebase_52409900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52409900_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_52087320;
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

SignalI next__data_52508540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makenext__data_52508540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52508540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_52087320;
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

SignalI integer__part_52609260_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makeinteger__part_52609260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_52609260_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_52087320;
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

SignalI interpolated__value_52792540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makeinterpolated__value_52792540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_52792540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_52087320;
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

Block __49210760;

void code__49210760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_52409900_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value;
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
                                    src0 = next__data_52508540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value;
                                    src1 = base_52409900_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value;
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
                                    src0 = z__value_52185620_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value;
                                    src1 = integer__part_52609260_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value;
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
            src1 = make__49226740();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_52792540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__49210760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49210760 = block;
   block->owner = (Object)__49231180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49210760;

   return block;
};

Value make__49226740() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __53771880;

Scope __53771500;

Scope make__53771500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __53771500 = scope;
   scope->owner = (Object)__53771880;
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

Behavior __49231180;

Behavior make__49231180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49231180 = behavior;
   behavior->owner = (Object)__53771880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52409900_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   base_52409900_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   base_52409900_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(base_52409900_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,base_52409900_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
base_52409900_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[base_52409900_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52508540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   next__data_52508540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   next__data_52508540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(next__data_52508540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,next__data_52508540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
next__data_52508540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[next__data_52508540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,z__value_52185620_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   z__value_52185620_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   z__value_52185620_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(z__value_52185620_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,z__value_52185620_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
z__value_52185620_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[z__value_52185620_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,integer__part_52609260_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   integer__part_52609260_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   integer__part_52609260_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(integer__part_52609260_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,integer__part_52609260_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
integer__part_52609260_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[integer__part_52609260_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__49210760();

   return behavior;
}

Scope make__53771880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __53771880 = scope;
   scope->owner = (Object)my__interpolator_58_8400_52087320;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__53771500();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49231180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_52087320() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_52087320 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52185620();
   systemT->inputs[1] = makebase_52409900();
   systemT->inputs[2] = makenext__data_52508540();
   systemT->inputs[3] = makeinteger__part_52609260();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_52792540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__53771880();

   return systemT;
}