#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_44180660;

SignalI addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380;

SignalI makeaddr_44275580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)my__lut_58_8400_44180660;
   signalI->name = "addr";
   signalI->type = get_type_vector(get_type_bit(),4);
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

SignalI base_47032600_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380;

SignalI makebase_47032600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47032600_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)my__lut_58_8400_44180660;
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

SignalI next__data_47609960_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380;

SignalI makenext__data_47609960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47609960_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)my__lut_58_8400_44180660;
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

Block __53464420;

Block __53723320;

void code__53723320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value;
            idx = value2integer(make__53868260());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47609960_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
}

Block make__53723320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53723320 = block;
   block->owner = (Object)__53464420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53723320;

   return block;
};

Block __53464220;

void code__53464220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__53868000();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47609960_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
}

Block make__53464220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53464220 = block;
   block->owner = (Object)__53464420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53464220;

   return block;
};

void code__53464420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53868400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53723320();
   }
   else {
  code__53464220();
   }
      }
   }
}

Block make__53464420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53464420 = block;
   block->owner = (Object)__43917980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53464420;

   return block;
};

Block __53850980;

void code__53850980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value;
            idx = value2integer(addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_47032600_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
}

Block make__53850980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53850980 = block;
   block->owner = (Object)__53849620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53850980;

   return block;
};

Value make__53870360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53870120() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53870100() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53870080() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53870020() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53870000() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53869980() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53869960() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53869920() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53869840() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53869740() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53869440() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53869280() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53868820() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53868800() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53868780() {
   static unsigned long long data[] = { 4294967292ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53868400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53868260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53868000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __52773000;

SignalI lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380;

SignalI makelut_53156720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)__52773000;
   signalI->name = "lut";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__53870360();
         src1 = make__53870120();
         src2 = make__53870100();
         src3 = make__53870080();
         src4 = make__53870020();
         src5 = make__53870000();
         src6 = make__53869980();
         src7 = make__53869960();
         src8 = make__53869920();
         src9 = make__53869840();
         src10 = make__53869740();
         src11 = make__53869440();
         src12 = make__53869280();
         src13 = make__53868820();
         src14 = make__53868800();
         src15 = make__53868780();
         concat_value(16,0,dst,src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15);
         set_value_pos(pool_state);
      dst; }),signalI->c_value);
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

Behavior __43917980;

Behavior make__43917980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43917980 = behavior;
   behavior->owner = (Object)__52773000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380);
   addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any,addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any[addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380);
   lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any,lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any[lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->block = make__53464420();

   return behavior;
}

Behavior __53849620;

Behavior make__53849620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53849620 = behavior;
   behavior->owner = (Object)__52773000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380);
   addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any,addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any[addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380);
   lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any,lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any[lut_53156720___52773000_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->block = make__53850980();

   return behavior;
}

Scope make__52773000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52773000 = scope;
   scope->owner = (Object)my__lut_58_8400_44180660;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_53156720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__43917980();
   scope->behaviors[1] = make__53849620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_44180660() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_44180660 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_44275580();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_47032600();
   systemT->outputs[1] = makenext__data_47609960();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__52773000();

   return systemT;
}