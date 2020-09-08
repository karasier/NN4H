#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_52606600;

SignalI address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeaddress_52603920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)my__lut_58_842_52606600;
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

SignalI base_52730500_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makebase_52730500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52730500_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)my__lut_58_842_52606600;
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

SignalI next__data_52815860_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makenext__data_52815860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52815860_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)my__lut_58_842_52606600;
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

Block __49342100;

Block __52146440;

void code__52146440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
            idx = value2integer(make__61565800());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52815860_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52146440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52146440 = block;
   block->owner = (Object)__49342100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52146440;

   return block;
};

Block __49341720;

Block __51674320;

void code__51674320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
            idx = value2integer(address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52815860_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__51674320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51674320 = block;
   block->owner = (Object)__49341720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51674320;

   return block;
};

Block __49341340;

void code__49341340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__61564500();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52815860_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__49341340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49341340 = block;
   block->owner = (Object)__49341720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49341340;

   return block;
};

void code__49341720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__61565320();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__61565000();
                     src1 = make__61564980();
                     src2 = make__61564960();
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
    code__51674320();
   }
   else {
  code__49341340();
   }
      }
   }
}

Block make__49341720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49341720 = block;
   block->owner = (Object)__49342100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49341720;

   return block;
};

void code__49342100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61565920();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52146440();
   }
   else {
  code__49341720();
   }
      }
   }
}

Block make__49342100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49342100 = block;
   block->owner = (Object)__52607020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49342100;

   return block;
};

Block __61570060;

void code__61570060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
            idx = value2integer(address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_52730500_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61570060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61570060 = block;
   block->owner = (Object)__61568880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61570060;

   return block;
};

Value make__61566600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566580() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566560() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566540() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566500() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566420() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566400() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566380() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566340() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566320() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566300() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566280() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61566260() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61565920() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61565800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61565320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61565000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61564980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61564960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61564500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_53718660;

SignalI lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makelut_48517060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)my__lut_58_84_53718660;
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
         src0 = make__61566600();
         src1 = make__61566580();
         src2 = make__61566560();
         src3 = make__61566540();
         src4 = make__61566520();
         src5 = make__61566500();
         src6 = make__61566480();
         src7 = make__61566440();
         src8 = make__61566420();
         src9 = make__61566400();
         src10 = make__61566380();
         src11 = make__61566340();
         src12 = make__61566320();
         src13 = make__61566300();
         src14 = make__61566280();
         src15 = make__61566260();
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

Behavior __52607020;

Behavior make__52607020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52607020 = behavior;
   behavior->owner = (Object)my__lut_58_84_53718660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__49342100();

   return behavior;
}

Behavior __61568880;

Behavior make__61568880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61568880 = behavior;
   behavior->owner = (Object)my__lut_58_84_53718660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[lut_48517060_my__lut_58_84_53718660_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61570060();

   return behavior;
}

Scope makemy__lut_58_84_53718660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_53718660 = scope;
   scope->owner = (Object)my__lut_58_842_52606600;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_48517060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52607020();
   scope->behaviors[1] = make__61568880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_52606600() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_52606600 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_52603920();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_52730500();
   systemT->outputs[1] = makenext__data_52815860();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_53718660();

   return systemT;
}