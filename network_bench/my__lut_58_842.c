#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_49077220;

SignalI address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeaddress_49074320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)my__lut_58_842_49077220;
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

SignalI base_49305340_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makebase_49305340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49305340_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)my__lut_58_842_49077220;
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

SignalI next__data_49493120_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makenext__data_49493120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49493120_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)my__lut_58_842_49077220;
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

Block __52129800;

Block __47135360;

void code__47135360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            idx = value2integer(make__60178140());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49493120_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__47135360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47135360 = block;
   block->owner = (Object)__52129800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47135360;

   return block;
};

Block __52129620;

Block __52629980;

void code__52629980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            idx = value2integer(address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49493120_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__52629980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52629980 = block;
   block->owner = (Object)__52129620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52629980;

   return block;
};

Block __52129360;

void code__52129360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__60176720();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49493120_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__52129360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52129360 = block;
   block->owner = (Object)__52129620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52129360;

   return block;
};

void code__52129620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__60177560();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__60177240();
                     src1 = make__60177220();
                     src2 = make__60177200();
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
    code__52629980();
   }
   else {
  code__52129360();
   }
      }
   }
}

Block make__52129620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52129620 = block;
   block->owner = (Object)__52129800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52129620;

   return block;
};

void code__52129800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60178300();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47135360();
   }
   else {
  code__52129620();
   }
      }
   }
}

Block make__52129800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52129800 = block;
   block->owner = (Object)__49077720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52129800;

   return block;
};

Block __60125780;

void code__60125780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            idx = value2integer(address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_49305340_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__60125780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60125780 = block;
   block->owner = (Object)__60124780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60125780;

   return block;
};

Value make__60122020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60122000() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60121960() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60121940() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60121920() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60121900() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60121840() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60121820() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60121740() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60121620() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60121540() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60121520() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60121500() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60121480() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60121460() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60121440() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60178300() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60178140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60177560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60177240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60177220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60177200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60176720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_49037960;

SignalI lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makelut_51448260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)my__lut_58_84_49037960;
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
         src0 = make__60122020();
         src1 = make__60122000();
         src2 = make__60121960();
         src3 = make__60121940();
         src4 = make__60121920();
         src5 = make__60121900();
         src6 = make__60121840();
         src7 = make__60121820();
         src8 = make__60121740();
         src9 = make__60121620();
         src10 = make__60121540();
         src11 = make__60121520();
         src12 = make__60121500();
         src13 = make__60121480();
         src14 = make__60121460();
         src15 = make__60121440();
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

Behavior __49077720;

Behavior make__49077720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49077720 = behavior;
   behavior->owner = (Object)my__lut_58_84_49037960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__52129800();

   return behavior;
}

Behavior __60124780;

Behavior make__60124780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60124780 = behavior;
   behavior->owner = (Object)my__lut_58_84_49037960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[address_49074320_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[lut_51448260_my__lut_58_84_49037960_my__lut_58_842_49077220_func0_58_84_47195480_func0_58_841_51323140_layer0_58_84_41936620_layer0_58_840_58179940_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__60125780();

   return behavior;
}

Scope makemy__lut_58_84_49037960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_49037960 = scope;
   scope->owner = (Object)my__lut_58_842_49077220;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_51448260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49077720();
   scope->behaviors[1] = make__60124780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_49077220() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_49077220 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_49074320();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_49305340();
   systemT->outputs[1] = makenext__data_49493120();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_49037960();

   return systemT;
}