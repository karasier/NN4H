#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_56551000;

SignalI addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeaddr_56590020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)my__lut_58_8400_56551000;
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

SignalI base_56669120_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makebase_56669120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56669120_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)my__lut_58_8400_56551000;
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

SignalI next__data_56748260_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makenext__data_56748260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_56748260_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)my__lut_58_8400_56551000;
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

Block __53475580;

Block __56117980;

void code__56117980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
            idx = value2integer(make__56072480());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_56748260_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__56117980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56117980 = block;
   block->owner = (Object)__53475580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56117980;

   return block;
};

Block __53475420;

Block __55840400;

void code__55840400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
            idx = value2integer(addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_56748260_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55840400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55840400 = block;
   block->owner = (Object)__53475420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55840400;

   return block;
};

Block __53475260;

void code__53475260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__56071120();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_56748260_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__53475260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53475260 = block;
   block->owner = (Object)__53475420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53475260;

   return block;
};

void code__53475420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__56072000();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__56071680();
                     src1 = make__56071640();
                     src2 = make__56071620();
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
    code__55840400();
   }
   else {
  code__53475260();
   }
      }
   }
}

Block make__53475420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53475420 = block;
   block->owner = (Object)__53475580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53475420;

   return block;
};

void code__53475580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56072600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56117980();
   }
   else {
  code__53475420();
   }
      }
   }
}

Block make__53475580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53475580 = block;
   block->owner = (Object)__56551320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53475580;

   return block;
};

Block __56051620;

void code__56051620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
            idx = value2integer(addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_56669120_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__56051620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56051620 = block;
   block->owner = (Object)__56050540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56051620;

   return block;
};

Value make__56073180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56073160() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56073140() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56073120() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56073100() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56073080() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56073060() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56073040() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56073020() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56073000() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56072980() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56072960() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56072940() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56072920() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56072900() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56072880() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56072600() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56072480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56072000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56071680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56071640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56071620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56071120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_840_49776320;

SignalI lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makelut_51496660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)my__lut_58_840_49776320;
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
         src0 = make__56073180();
         src1 = make__56073160();
         src2 = make__56073140();
         src3 = make__56073120();
         src4 = make__56073100();
         src5 = make__56073080();
         src6 = make__56073060();
         src7 = make__56073040();
         src8 = make__56073020();
         src9 = make__56073000();
         src10 = make__56072980();
         src11 = make__56072960();
         src12 = make__56072940();
         src13 = make__56072920();
         src14 = make__56072900();
         src15 = make__56072880();
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

Behavior __56551320;

Behavior make__56551320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56551320 = behavior;
   behavior->owner = (Object)my__lut_58_840_49776320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__53475580();

   return behavior;
}

Behavior __56050540;

Behavior make__56050540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56050540 = behavior;
   behavior->owner = (Object)my__lut_58_840_49776320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[addr_56590020_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[lut_51496660_my__lut_58_840_49776320_my__lut_58_8400_56551000_func1_58_84_46247080_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__56051620();

   return behavior;
}

Scope makemy__lut_58_840_49776320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_840_49776320 = scope;
   scope->owner = (Object)my__lut_58_8400_56551000;
   scope->name = "my_lut:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_51496660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56551320();
   scope->behaviors[1] = make__56050540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_56551000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_56551000 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_56590020();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_56669120();
   systemT->outputs[1] = makenext__data_56748260();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_840_49776320();

   return systemT;
}