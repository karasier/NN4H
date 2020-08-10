#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_841_49859860;

SignalI addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makeaddr_49857960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__lut_58_841_49859860;
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

SignalI base_49986220_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makebase_49986220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49986220_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__lut_58_841_49859860;
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

SignalI next__data_50057160_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makenext__data_50057160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50057160_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)my__lut_58_841_49859860;
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

Block __49100380;

Block __49402320;

void code__49402320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value;
            idx = value2integer(addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50057160_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__49402320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49402320 = block;
   block->owner = (Object)__49100380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49402320;

   return block;
};

Block __49100220;

void code__49100220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__47961200();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50057160_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__49100220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49100220 = block;
   block->owner = (Object)__49100380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49100220;

   return block;
};

void code__49100380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47962400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49402320();
   }
   else {
  code__49100220();
   }
      }
   }
}

Block make__49100380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49100380 = block;
   block->owner = (Object)__49860180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49100380;

   return block;
};

Block __47947000;

void code__47947000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value;
            idx = value2integer(addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_49986220_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__47947000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47947000 = block;
   block->owner = (Object)__47945780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47947000;

   return block;
};

Value make__47943760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943740() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943720() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943700() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943680() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943640() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943620() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943600() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943580() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943560() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943540() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943500() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943460() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47943420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47962400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47961200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47585820;

SignalI lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makelut_47734640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)__47585820;
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
         src0 = make__47943760();
         src1 = make__47943740();
         src2 = make__47943720();
         src3 = make__47943700();
         src4 = make__47943680();
         src5 = make__47943640();
         src6 = make__47943620();
         src7 = make__47943600();
         src8 = make__47943580();
         src9 = make__47943560();
         src10 = make__47943540();
         src11 = make__47943500();
         src12 = make__47943480();
         src13 = make__47943460();
         src14 = make__47943440();
         src15 = make__47943420();
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

Behavior __49860180;

Behavior make__49860180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49860180 = behavior;
   behavior->owner = (Object)__47585820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__49100380();

   return behavior;
}

Behavior __47945780;

Behavior make__47945780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47945780 = behavior;
   behavior->owner = (Object)__47585820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[lut_47734640___47585820_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__47947000();

   return behavior;
}

Scope make__47585820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47585820 = scope;
   scope->owner = (Object)my__lut_58_841_49859860;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_47734640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49860180();
   scope->behaviors[1] = make__47945780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_841_49859860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_841_49859860 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_49857960();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_49986220();
   systemT->outputs[1] = makenext__data_50057160();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47585820();

   return systemT;
}