#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_50536500;

SignalI addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makeaddr_50575320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__lut_58_8400_50536500;
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

SignalI base_50659220_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makebase_50659220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50659220_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__lut_58_8400_50536500;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI next__data_50743460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makenext__data_50743460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50743460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__lut_58_8400_50536500;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_bit(),8);
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

Block __49782420;

Block __50113320;

void code__50113320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value;
            idx = value2integer(addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50743460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__50113320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50113320 = block;
   block->owner = (Object)__49782420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50113320;

   return block;
};

Block __49782200;

void code__49782200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__48951260();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50743460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__49782200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49782200 = block;
   block->owner = (Object)__49782420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49782200;

   return block;
};

void code__49782420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48951620();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50113320();
   }
   else {
  code__49782200();
   }
      }
   }
}

Block make__49782420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49782420 = block;
   block->owner = (Object)__50536820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49782420;

   return block;
};

Block __48955220;

void code__48955220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value;
            idx = value2integer(addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_50659220_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__48955220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48955220 = block;
   block->owner = (Object)__48954000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48955220;

   return block;
};

Value make__48952400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48952320() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48952300() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48952260() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48952220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48952160() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48952140() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48952120() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48952100() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48952060() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48952040() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48951980() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48951960() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48951940() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48951920() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48951900() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48951620() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48951260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __49132460;

SignalI lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makelut_49204820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)__49132460;
   signalI->name = "lut";
   signalI->type = get_type_vector(get_type_vector(get_type_bit(),8),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__48952400();
         src1 = make__48952320();
         src2 = make__48952300();
         src3 = make__48952260();
         src4 = make__48952220();
         src5 = make__48952160();
         src6 = make__48952140();
         src7 = make__48952120();
         src8 = make__48952100();
         src9 = make__48952060();
         src10 = make__48952040();
         src11 = make__48951980();
         src12 = make__48951960();
         src13 = make__48951940();
         src14 = make__48951920();
         src15 = make__48951900();
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

Behavior __50536820;

Behavior make__50536820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50536820 = behavior;
   behavior->owner = (Object)__49132460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__49782420();

   return behavior;
}

Behavior __48954000;

Behavior make__48954000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48954000 = behavior;
   behavior->owner = (Object)__49132460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[lut_49204820___49132460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__48955220();

   return behavior;
}

Scope make__49132460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __49132460 = scope;
   scope->owner = (Object)my__lut_58_8400_50536500;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_49204820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50536820();
   scope->behaviors[1] = make__48954000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_50536500() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_50536500 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_50575320();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_50659220();
   systemT->outputs[1] = makenext__data_50743460();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__49132460();

   return systemT;
}