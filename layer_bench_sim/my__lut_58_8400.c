#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_48990820;

SignalI address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeaddress_49011140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)my__lut_58_8400_48990820;
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

SignalI base_49173420_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makebase_49173420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49173420_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)my__lut_58_8400_48990820;
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

SignalI next__data_51320040_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makenext__data_51320040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51320040_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)my__lut_58_8400_48990820;
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

Block __52535440;

Block __48675120;

void code__48675120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
            idx = value2integer(make__51751560());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51320040_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__48675120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48675120 = block;
   block->owner = (Object)__52535440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48675120;

   return block;
};

Block __52567960;

Block __53119220;

void code__53119220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
            idx = value2integer(address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51320040_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__53119220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53119220 = block;
   block->owner = (Object)__52567960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53119220;

   return block;
};

Block __52567780;

void code__52567780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__51749280();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51320040_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__52567780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52567780 = block;
   block->owner = (Object)__52567960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52567780;

   return block;
};

void code__52567960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__51750640();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__51749880();
                     src1 = make__51749860();
                     src2 = make__51749840();
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
    code__53119220();
   }
   else {
  code__52567780();
   }
      }
   }
}

Block make__52567960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52567960 = block;
   block->owner = (Object)__52535440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52567960;

   return block;
};

void code__52535440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51751720();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48675120();
   }
   else {
  code__52567960();
   }
      }
   }
}

Block make__52535440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52535440 = block;
   block->owner = (Object)__48991660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52535440;

   return block;
};

Block __51717000;

void code__51717000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
            idx = value2integer(address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_49173420_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__51717000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51717000 = block;
   block->owner = (Object)__51756280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51717000;

   return block;
};

Value make__51752660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752640() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752580() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752560() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752460() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752340() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752240() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752220() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752200() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752160() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752140() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752080() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752060() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51752040() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51751720() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51751560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51750640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51749880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51749860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51749840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51749280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __44089220;

SignalI lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makelut_52078440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__44089220;
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
         src0 = make__51752660();
         src1 = make__51752640();
         src2 = make__51752580();
         src3 = make__51752560();
         src4 = make__51752460();
         src5 = make__51752440();
         src6 = make__51752380();
         src7 = make__51752340();
         src8 = make__51752240();
         src9 = make__51752220();
         src10 = make__51752200();
         src11 = make__51752160();
         src12 = make__51752140();
         src13 = make__51752080();
         src14 = make__51752060();
         src15 = make__51752040();
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

Behavior __48991660;

Behavior make__48991660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48991660 = behavior;
   behavior->owner = (Object)__44089220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__52535440();

   return behavior;
}

Behavior __51756280;

Behavior make__51756280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51756280 = behavior;
   behavior->owner = (Object)__44089220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[lut_52078440___44089220_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__51717000();

   return behavior;
}

Scope make__44089220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __44089220 = scope;
   scope->owner = (Object)my__lut_58_8400_48990820;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_52078440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48991660();
   scope->behaviors[1] = make__51756280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_48990820() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_48990820 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_49011140();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_49173420();
   systemT->outputs[1] = makenext__data_51320040();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__44089220();

   return systemT;
}