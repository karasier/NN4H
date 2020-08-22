#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_841_51669780;

SignalI address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeaddress_51667480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)my__lut_58_841_51669780;
   signalI->name = "address";
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

SignalI base_51771940_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makebase_51771940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51771940_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)my__lut_58_841_51669780;
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

SignalI next__data_51884980_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makenext__data_51884980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51884980_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)my__lut_58_841_51669780;
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

Block __47449080;

Block __50957440;

void code__50957440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
            idx = value2integer(make__51488760());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51884980_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__50957440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50957440 = block;
   block->owner = (Object)__47449080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50957440;

   return block;
};

Block __47448440;

Block __48852400;

void code__48852400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
            idx = value2integer(address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51884980_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__48852400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48852400 = block;
   block->owner = (Object)__47448440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48852400;

   return block;
};

Block __47448280;

void code__47448280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__51486800();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51884980_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__47448280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47448280 = block;
   block->owner = (Object)__47448440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47448280;

   return block;
};

void code__47448440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__51488000();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__51487700();
                     src1 = make__51487640();
                     src2 = make__51487620();
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
    code__48852400();
   }
   else {
  code__47448280();
   }
      }
   }
}

Block make__47448440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47448440 = block;
   block->owner = (Object)__47449080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47448440;

   return block;
};

void code__47449080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51488980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50957440();
   }
   else {
  code__47448440();
   }
      }
   }
}

Block make__47449080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47449080 = block;
   block->owner = (Object)__51670120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47449080;

   return block;
};

Block __51348560;

void code__51348560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
            idx = value2integer(address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_51771940_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__51348560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51348560 = block;
   block->owner = (Object)__51493560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51348560;

   return block;
};

Value make__51490140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51490120() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51490060() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51490040() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51489880() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51489820() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51489780() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51489760() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51489700() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51489640() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51489580() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51489520() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51489500() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51489480() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51489460() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51489440() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51488980() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51488760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51488000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51487700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51487640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51487620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51486800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __52191840;

SignalI lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makelut_53229240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__52191840;
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
         src0 = make__51490140();
         src1 = make__51490120();
         src2 = make__51490060();
         src3 = make__51490040();
         src4 = make__51489880();
         src5 = make__51489820();
         src6 = make__51489780();
         src7 = make__51489760();
         src8 = make__51489700();
         src9 = make__51489640();
         src10 = make__51489580();
         src11 = make__51489520();
         src12 = make__51489500();
         src13 = make__51489480();
         src14 = make__51489460();
         src15 = make__51489440();
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

Behavior __51670120;

Behavior make__51670120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51670120 = behavior;
   behavior->owner = (Object)__52191840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__47449080();

   return behavior;
}

Behavior __51493560;

Behavior make__51493560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51493560 = behavior;
   behavior->owner = (Object)__52191840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[address_51667480_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[lut_53229240___52191840_my__lut_58_841_51669780___51884720_func0_58_840_52581280___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__51348560();

   return behavior;
}

Scope make__52191840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52191840 = scope;
   scope->owner = (Object)my__lut_58_841_51669780;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_53229240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51670120();
   scope->behaviors[1] = make__51493560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_841_51669780() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_841_51669780 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_51667480();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_51771940();
   systemT->outputs[1] = makenext__data_51884980();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__52191840();

   return systemT;
}