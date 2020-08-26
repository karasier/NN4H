#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_840_43062320;

SignalI address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540;

SignalI makeaddress_44765320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)my__lut_58_840_43062320;
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

SignalI base_46051400_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540;

SignalI makebase_46051400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_46051400_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)my__lut_58_840_43062320;
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

SignalI next__data_46324980_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540;

SignalI makenext__data_46324980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_46324980_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)my__lut_58_840_43062320;
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

Block __47555180;

Block __48220120;

void code__48220120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value;
            idx = value2integer(make__48149560());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_46324980_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
}

Block make__48220120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48220120 = block;
   block->owner = (Object)__47555180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48220120;

   return block;
};

Block __47554940;

Block __48015540;

void code__48015540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value;
            idx = value2integer(address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_46324980_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
}

Block make__48015540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48015540 = block;
   block->owner = (Object)__47554940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48015540;

   return block;
};

Block __47554720;

void code__47554720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__48147820();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_46324980_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
}

Block make__47554720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47554720 = block;
   block->owner = (Object)__47554940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47554720;

   return block;
};

void code__47554940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__48148760();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__48148340();
                     src1 = make__48148320();
                     src2 = make__48148300();
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
    code__48015540();
   }
   else {
  code__47554720();
   }
      }
   }
}

Block make__47554940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47554940 = block;
   block->owner = (Object)__47555180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47554940;

   return block;
};

void code__47555180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48149760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48220120();
   }
   else {
  code__47554940();
   }
      }
   }
}

Block make__47555180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47555180 = block;
   block->owner = (Object)__44090340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47555180;

   return block;
};

Block __48130060;

void code__48130060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value;
            idx = value2integer(address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_46051400_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
}

Block make__48130060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48130060 = block;
   block->owner = (Object)__48128540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48130060;

   return block;
};

Value make__48150380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150320() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150300() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150280() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150260() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150240() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150200() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150180() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150160() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150140() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150120() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150100() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150080() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150060() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48150040() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48149760() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48149560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48148760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48148340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48148320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48148300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48147820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_48185260;

SignalI lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540;

SignalI makelut_45880720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)my__lut_58_84_48185260;
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
         src0 = make__48150380();
         src1 = make__48150320();
         src2 = make__48150300();
         src3 = make__48150280();
         src4 = make__48150260();
         src5 = make__48150240();
         src6 = make__48150220();
         src7 = make__48150200();
         src8 = make__48150180();
         src9 = make__48150160();
         src10 = make__48150140();
         src11 = make__48150120();
         src12 = make__48150100();
         src13 = make__48150080();
         src14 = make__48150060();
         src15 = make__48150040();
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

Behavior __44090340;

Behavior make__44090340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44090340 = behavior;
   behavior->owner = (Object)my__lut_58_84_48185260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->block = make__47555180();

   return behavior;
}

Behavior __48128540;

Behavior make__48128540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48128540 = behavior;
   behavior->owner = (Object)my__lut_58_84_48185260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[lut_45880720_my__lut_58_84_48185260_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->block = make__48130060();

   return behavior;
}

Scope makemy__lut_58_84_48185260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_48185260 = scope;
   scope->owner = (Object)my__lut_58_840_43062320;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_45880720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__44090340();
   scope->behaviors[1] = make__48128540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_840_43062320() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_840_43062320 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_44765320();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_46051400();
   systemT->outputs[1] = makenext__data_46324980();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_48185260();

   return systemT;
}