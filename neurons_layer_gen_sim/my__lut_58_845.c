#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_845_57125960;

SignalI address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makeaddress_57124060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)my__lut_58_845_57125960;
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

SignalI base_57244080_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makebase_57244080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_57244080_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)my__lut_58_845_57125960;
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

SignalI next__data_57290460_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makenext__data_57290460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_57290460_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)my__lut_58_845_57125960;
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

Block __56139500;

Block __56840380;

void code__56840380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
            idx = value2integer(make__55223200());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_57290460_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__56840380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56840380 = block;
   block->owner = (Object)__56139500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56840380;

   return block;
};

Block __56139340;

Block __56382560;

void code__56382560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
            idx = value2integer(address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_57290460_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__56382560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56382560 = block;
   block->owner = (Object)__56139340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56382560;

   return block;
};

Block __56139180;

void code__56139180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__55588300();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_57290460_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__56139180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56139180 = block;
   block->owner = (Object)__56139340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56139180;

   return block;
};

void code__56139340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__55590420();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__55589500();
                     src1 = make__55589480();
                     src2 = make__55589420();
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
    code__56382560();
   }
   else {
  code__56139180();
   }
      }
   }
}

Block make__56139340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56139340 = block;
   block->owner = (Object)__56139500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56139340;

   return block;
};

void code__56139500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55223700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56840380();
   }
   else {
  code__56139340();
   }
      }
   }
}

Block make__56139500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56139500 = block;
   block->owner = (Object)__57126280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56139500;

   return block;
};

Block __51559900;

void code__51559900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
            idx = value2integer(address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_57244080_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__51559900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51559900 = block;
   block->owner = (Object)__51576420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51559900;

   return block;
};

Value make__55225460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55225440() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55225380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55225360() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55225300() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55225280() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55225160() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55225140() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55225080() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55225060() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55225040() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55225020() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55224960() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55224920() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55224860() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55224820() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55223700() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55223200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55590420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55589500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55589480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55589420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55588300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_47848560;

SignalI lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makelut_55812460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)my__lut_58_84_47848560;
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
         src0 = make__55225460();
         src1 = make__55225440();
         src2 = make__55225380();
         src3 = make__55225360();
         src4 = make__55225300();
         src5 = make__55225280();
         src6 = make__55225160();
         src7 = make__55225140();
         src8 = make__55225080();
         src9 = make__55225060();
         src10 = make__55225040();
         src11 = make__55225020();
         src12 = make__55224960();
         src13 = make__55224920();
         src14 = make__55224860();
         src15 = make__55224820();
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

Behavior __57126280;

Behavior make__57126280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57126280 = behavior;
   behavior->owner = (Object)my__lut_58_84_47848560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__56139500();

   return behavior;
}

Behavior __51576420;

Behavior make__51576420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51576420 = behavior;
   behavior->owner = (Object)my__lut_58_84_47848560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[lut_55812460_my__lut_58_84_47848560_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__51559900();

   return behavior;
}

Scope makemy__lut_58_84_47848560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_47848560 = scope;
   scope->owner = (Object)my__lut_58_845_57125960;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_55812460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57126280();
   scope->behaviors[1] = make__51576420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_845_57125960() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_845_57125960 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T5";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_57124060();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_57244080();
   systemT->outputs[1] = makenext__data_57290460();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_47848560();

   return systemT;
}