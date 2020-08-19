#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_840_45875900;

SignalI addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840;

SignalI makeaddr_45911180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840 = signalI;
   signalI->owner = (Object)my__lut_58_840_45875900;
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

SignalI base_47152040_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840;

SignalI makebase_47152040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47152040_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840 = signalI;
   signalI->owner = (Object)my__lut_58_840_45875900;
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

SignalI next__data_47217380_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840;

SignalI makenext__data_47217380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47217380_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840 = signalI;
   signalI->owner = (Object)my__lut_58_840_45875900;
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

Block __47558140;

Block __48022900;

void code__48022900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value;
            idx = value2integer(make__45304820());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47217380_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
}

Block make__48022900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48022900 = block;
   block->owner = (Object)__47558140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48022900;

   return block;
};

Block __47557980;

Block __47826820;

void code__47826820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value;
            idx = value2integer(addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47217380_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
}

Block make__47826820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47826820 = block;
   block->owner = (Object)__47557980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47826820;

   return block;
};

Block __47557820;

void code__47557820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__45364660();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47217380_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
}

Block make__47557820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47557820 = block;
   block->owner = (Object)__47557980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47557820;

   return block;
};

void code__47557980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__45303300();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__45302240();
                     src1 = make__45302160();
                     src2 = make__45302000();
                     concat_value(3,1,dst,src0,src1,src2);
                     set_value_pos(pool_state);
                  dst; });
               concat_value(2,1,dst,src0,src1);
               set_value_pos(pool_state);
            dst; });
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47826820();
   }
   else {
  code__47557820();
   }
      }
   }
}

Block make__47557980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47557980 = block;
   block->owner = (Object)__47558140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47557980;

   return block;
};

void code__47558140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__45305240();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48022900();
   }
   else {
  code__47557980();
   }
      }
   }
}

Block make__47558140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47558140 = block;
   block->owner = (Object)__45876960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47558140;

   return block;
};

Block __45289140;

void code__45289140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value;
            idx = value2integer(addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_47152040_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
}

Block make__45289140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45289140 = block;
   block->owner = (Object)__45287760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45289140;

   return block;
};

Value make__45307700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45307460() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45307380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45307340() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45307300() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45307220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45307180() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45307140() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45307020() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45306840() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45306800() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45306760() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45306580() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45306540() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45306500() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45306460() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__45305240() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45304820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45303300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45302240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45302160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45302000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45364660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __43740420;

SignalI lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840;

SignalI makelut_47150580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840 = signalI;
   signalI->owner = (Object)__43740420;
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
         src0 = make__45307700();
         src1 = make__45307460();
         src2 = make__45307380();
         src3 = make__45307340();
         src4 = make__45307300();
         src5 = make__45307220();
         src6 = make__45307180();
         src7 = make__45307140();
         src8 = make__45307020();
         src9 = make__45306840();
         src10 = make__45306800();
         src11 = make__45306760();
         src12 = make__45306580();
         src13 = make__45306540();
         src14 = make__45306500();
         src15 = make__45306460();
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

Behavior __45876960;

Behavior make__45876960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45876960 = behavior;
   behavior->owner = (Object)__43740420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
   addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any,addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any[addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
   lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any,lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any[lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->block = make__47558140();

   return behavior;
}

Behavior __45287760;

Behavior make__45287760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45287760 = behavior;
   behavior->owner = (Object)__43740420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
   addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any,addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any[addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
   lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any,lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any[lut_47150580___43740420_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->block = make__45289140();

   return behavior;
}

Scope make__43740420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43740420 = scope;
   scope->owner = (Object)my__lut_58_840_45875900;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_47150580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45876960();
   scope->behaviors[1] = make__45287760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_840_45875900() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_840_45875900 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_45911180();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_47152040();
   systemT->outputs[1] = makenext__data_47217380();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__43740420();

   return systemT;
}