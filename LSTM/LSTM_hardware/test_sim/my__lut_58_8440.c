#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8440_109580000;

SignalI address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makeaddress_109577500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_8440_109580000;
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

SignalI base_109642480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makebase_109642480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_109642480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_8440_109580000;
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

SignalI next__data_109903700_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makenext__data_109903700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_109903700_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_8440_109580000;
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

Block __107913780;

Block __109018660;

void code__109018660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(make__145749280());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_109903700_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__109018660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __109018660 = block;
   block->owner = (Object)__107913780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__109018660;

   return block;
};

Block __107913560;

Block __108546500;

void code__108546500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_109903700_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__108546500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __108546500 = block;
   block->owner = (Object)__107913560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__108546500;

   return block;
};

Block __107913380;

void code__107913380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__145744680();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_109903700_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__107913380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107913380 = block;
   block->owner = (Object)__107913560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107913380;

   return block;
};

void code__107913560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__145746860();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__145746260();
                     src1 = make__145746220();
                     src2 = make__145746160();
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
    code__108546500();
   }
   else {
  code__107913380();
   }
      }
   }
}

Block make__107913560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107913560 = block;
   block->owner = (Object)__107913780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107913560;

   return block;
};

void code__107913780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__145749600();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__109018660();
   }
   else {
  code__107913560();
   }
      }
   }
}

Block make__107913780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107913780 = block;
   block->owner = (Object)__109580340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107913780;

   return block;
};

Block __139564220;

void code__139564220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_109642480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__139564220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __139564220 = block;
   block->owner = (Object)__139561360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__139564220;

   return block;
};

Value make__145727680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145727640() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145727560() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145751940() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145751660() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145751520() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145751440() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145751160() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145751080() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145751060() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145751020() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145750940() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145750900() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145750840() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145750760() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145750660() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__145749600() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__145749280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__145746860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__145746260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__145746220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__145746160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__145744680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_844_102687480;

SignalI lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makelut_107654280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_844_102687480;
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
         src0 = make__145727680();
         src1 = make__145727640();
         src2 = make__145727560();
         src3 = make__145751940();
         src4 = make__145751660();
         src5 = make__145751520();
         src6 = make__145751440();
         src7 = make__145751160();
         src8 = make__145751080();
         src9 = make__145751060();
         src10 = make__145751020();
         src11 = make__145750940();
         src12 = make__145750900();
         src13 = make__145750840();
         src14 = make__145750760();
         src15 = make__145750660();
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

Behavior __109580340;

Behavior make__109580340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __109580340 = behavior;
   behavior->owner = (Object)my__lut_58_844_102687480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__107913780();

   return behavior;
}

Behavior __139561360;

Behavior make__139561360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __139561360 = behavior;
   behavior->owner = (Object)my__lut_58_844_102687480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[address_109577500_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[lut_107654280_my__lut_58_844_102687480_my__lut_58_8440_109580000_func3_58_84_102103220_func3_58_843_115587860_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__139564220();

   return behavior;
}

Scope makemy__lut_58_844_102687480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_844_102687480 = scope;
   scope->owner = (Object)my__lut_58_8440_109580000;
   scope->name = "my_lut:T4";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_107654280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__109580340();
   scope->behaviors[1] = make__139561360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8440_109580000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8440_109580000 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T40";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_109577500();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_109642480();
   systemT->outputs[1] = makenext__data_109903700();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_844_102687480();

   return systemT;
}