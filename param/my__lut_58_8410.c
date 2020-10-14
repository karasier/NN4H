#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8410_45769900;

SignalI address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920;

SignalI makeaddress_45836700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__lut_58_8410_45769900;
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

SignalI base_47464120_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920;

SignalI makebase_47464120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47464120_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__lut_58_8410_45769900;
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

SignalI next__data_47613380_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920;

SignalI makenext__data_47613380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47613380_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__lut_58_8410_45769900;
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

Block __50068340;

Block __51292460;

void code__51292460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value;
            idx = value2integer(make__49220920());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47613380_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__51292460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51292460 = block;
   block->owner = (Object)__50068340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51292460;

   return block;
};

Block __50068040;

Block __50458280;

void code__50458280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value;
            idx = value2integer(address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47613380_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__50458280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50458280 = block;
   block->owner = (Object)__50068040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50458280;

   return block;
};

Block __50067800;

void code__50067800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__49218260();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47613380_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__50067800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50067800 = block;
   block->owner = (Object)__50068040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50067800;

   return block;
};

void code__50068040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__49219900();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__49219260();
                     src1 = make__49219160();
                     src2 = make__49218940();
                     concat_value(3,1,dst,src0,src1,src2);
                     set_value_pos(pool_state);
                  dst; });
               concat_value(2,1,dst,src0,src1);
               set_value_pos(pool_state);
            dst; });
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50458280();
   }
   else {
  code__50067800();
   }
      }
   }
}

Block make__50068040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50068040 = block;
   block->owner = (Object)__50068340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50068040;

   return block;
};

void code__50068340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49221080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51292460();
   }
   else {
  code__50068040();
   }
      }
   }
}

Block make__50068340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50068340 = block;
   block->owner = (Object)__45715440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50068340;

   return block;
};

Block __47938120;

void code__47938120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value;
            idx = value2integer(address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_47464120_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47938120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47938120 = block;
   block->owner = (Object)__47932060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47938120;

   return block;
};

Value make__49222280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49222260() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49222220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49222200() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49222180() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49222160() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49222140() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49222120() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49222060() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49222040() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49221980() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49221960() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49221860() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49221840() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49221820() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49221740() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49221080() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49220920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49219900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49219260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49219160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49218940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49218260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_841_47528620;

SignalI lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920;

SignalI makelut_47778300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__lut_58_841_47528620;
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
         src0 = make__49222280();
         src1 = make__49222260();
         src2 = make__49222220();
         src3 = make__49222200();
         src4 = make__49222180();
         src5 = make__49222160();
         src6 = make__49222140();
         src7 = make__49222120();
         src8 = make__49222060();
         src9 = make__49222040();
         src10 = make__49221980();
         src11 = make__49221960();
         src12 = make__49221860();
         src13 = make__49221840();
         src14 = make__49221820();
         src15 = make__49221740();
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

Behavior __45715440;

Behavior make__45715440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45715440 = behavior;
   behavior->owner = (Object)my__lut_58_841_47528620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
   address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any += 1;
   address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any = realloc(address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any,address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any[address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
   lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any += 1;
   lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any = realloc(lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any,lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any[lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__50068340();

   return behavior;
}

Behavior __47932060;

Behavior make__47932060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47932060 = behavior;
   behavior->owner = (Object)my__lut_58_841_47528620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
   address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any += 1;
   address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any = realloc(address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any,address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any[address_45836700_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920);
   lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any += 1;
   lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any = realloc(lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any,lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->any[lut_47778300_my__lut_58_841_47528620_my__lut_58_8410_45769900_func0__1_58_84_41980100_func0__1_58_840_47530080______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47938120();

   return behavior;
}

Scope makemy__lut_58_841_47528620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_841_47528620 = scope;
   scope->owner = (Object)my__lut_58_8410_45769900;
   scope->name = "my_lut:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_47778300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45715440();
   scope->behaviors[1] = make__47932060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8410_45769900() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8410_45769900 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_45836700();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_47464120();
   systemT->outputs[1] = makenext__data_47613380();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_841_47528620();

   return systemT;
}