#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_47936940;

SignalI address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920;

SignalI makeaddress_47933620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__lut_58_8400_47936940;
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

SignalI base_49782580_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920;

SignalI makebase_49782580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49782580_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__lut_58_8400_47936940;
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

SignalI next__data_49894600_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920;

SignalI makenext__data_49894600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49894600_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__lut_58_8400_47936940;
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

Block __51138800;

Block __47475120;

void code__47475120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value;
            idx = value2integer(make__47821760());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49894600_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47475120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47475120 = block;
   block->owner = (Object)__51138800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47475120;

   return block;
};

Block __51138620;

Block __42100860;

void code__42100860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value;
            idx = value2integer(address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49894600_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__42100860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42100860 = block;
   block->owner = (Object)__51138620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42100860;

   return block;
};

Block __51138360;

void code__51138360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__47818480();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49894600_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__51138360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51138360 = block;
   block->owner = (Object)__51138620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51138360;

   return block;
};

void code__51138620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__47820360();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__47819960();
                     src1 = make__47819920();
                     src2 = make__47819880();
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
    code__42100860();
   }
   else {
  code__51138360();
   }
      }
   }
}

Block make__51138620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51138620 = block;
   block->owner = (Object)__51138800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51138620;

   return block;
};

void code__51138800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47822160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47475120();
   }
   else {
  code__51138620();
   }
      }
   }
}

Block make__51138800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51138800 = block;
   block->owner = (Object)__47937540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51138800;

   return block;
};

Block __47780480;

void code__47780480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value;
            idx = value2integer(address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_49782580_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47780480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47780480 = block;
   block->owner = (Object)__47806500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47780480;

   return block;
};

Value make__47800620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47800520() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47824660() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47824500() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47824240() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47824080() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47824060() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47823940() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47823760() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47823720() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47823500() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47823120() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47822960() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47822920() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47822900() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47822860() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47822160() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47821760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47820360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47819960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47819920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47819880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47818480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_840_47173940;

SignalI lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920;

SignalI makelut_50581080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__lut_58_840_47173940;
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
         src0 = make__47800620();
         src1 = make__47800520();
         src2 = make__47824660();
         src3 = make__47824500();
         src4 = make__47824240();
         src5 = make__47824080();
         src6 = make__47824060();
         src7 = make__47823940();
         src8 = make__47823760();
         src9 = make__47823720();
         src10 = make__47823500();
         src11 = make__47823120();
         src12 = make__47822960();
         src13 = make__47822920();
         src14 = make__47822900();
         src15 = make__47822860();
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

Behavior __47937540;

Behavior make__47937540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47937540 = behavior;
   behavior->owner = (Object)my__lut_58_840_47173940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__51138800();

   return behavior;
}

Behavior __47806500;

Behavior make__47806500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47806500 = behavior;
   behavior->owner = (Object)my__lut_58_840_47173940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[lut_50581080_my__lut_58_840_47173940_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47780480();

   return behavior;
}

Scope makemy__lut_58_840_47173940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_840_47173940 = scope;
   scope->owner = (Object)my__lut_58_8400_47936940;
   scope->name = "my_lut:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_50581080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47937540();
   scope->behaviors[1] = make__47806500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_47936940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_47936940 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_47933620();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_49782580();
   systemT->outputs[1] = makenext__data_49894600();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_840_47173940();

   return systemT;
}