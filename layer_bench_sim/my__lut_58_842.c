#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_52640040;

SignalI address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makeaddress_52637480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)my__lut_58_842_52640040;
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

SignalI base_52758540_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makebase_52758540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52758540_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)my__lut_58_842_52640040;
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

SignalI next__data_52871700_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makenext__data_52871700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52871700_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)my__lut_58_842_52640040;
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

Block __49545900;

Block __52220800;

void code__52220800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
            idx = value2integer(make__60539260());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52871700_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__52220800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52220800 = block;
   block->owner = (Object)__49545900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52220800;

   return block;
};

Block __49545380;

Block __51655820;

void code__51655820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
            idx = value2integer(address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52871700_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__51655820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51655820 = block;
   block->owner = (Object)__49545380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51655820;

   return block;
};

Block __49569500;

void code__49569500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__60669000();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52871700_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__49569500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49569500 = block;
   block->owner = (Object)__49545380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49569500;

   return block;
};

void code__49545380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__60669840();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__60669540();
                     src1 = make__60669500();
                     src2 = make__60669480();
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
    code__51655820();
   }
   else {
  code__49569500();
   }
      }
   }
}

Block make__49545380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49545380 = block;
   block->owner = (Object)__49545900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49545380;

   return block;
};

void code__49545900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60539380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52220800();
   }
   else {
  code__49545380();
   }
      }
   }
}

Block make__49545900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49545900 = block;
   block->owner = (Object)__52640360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49545900;

   return block;
};

Block __60543140;

void code__60543140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
            idx = value2integer(address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_52758540_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60543140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60543140 = block;
   block->owner = (Object)__60541960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60543140;

   return block;
};

Value make__60540020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60540000() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539980() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539960() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539940() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539900() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539880() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539820() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539800() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539780() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539760() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539740() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539720() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539700() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539680() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539660() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60539380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60539260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60669840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60669540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60669500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60669480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60669000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_54038840;

SignalI lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makelut_49256800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)my__lut_58_84_54038840;
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
         src0 = make__60540020();
         src1 = make__60540000();
         src2 = make__60539980();
         src3 = make__60539960();
         src4 = make__60539940();
         src5 = make__60539900();
         src6 = make__60539880();
         src7 = make__60539820();
         src8 = make__60539800();
         src9 = make__60539780();
         src10 = make__60539760();
         src11 = make__60539740();
         src12 = make__60539720();
         src13 = make__60539700();
         src14 = make__60539680();
         src15 = make__60539660();
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

Behavior __52640360;

Behavior make__52640360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52640360 = behavior;
   behavior->owner = (Object)my__lut_58_84_54038840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__49545900();

   return behavior;
}

Behavior __60541960;

Behavior make__60541960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60541960 = behavior;
   behavior->owner = (Object)my__lut_58_84_54038840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[lut_49256800_my__lut_58_84_54038840_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60543140();

   return behavior;
}

Scope makemy__lut_58_84_54038840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_54038840 = scope;
   scope->owner = (Object)my__lut_58_842_52640040;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_49256800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52640360();
   scope->behaviors[1] = make__60541960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_52640040() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_52640040 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_52637480();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_52758540();
   systemT->outputs[1] = makenext__data_52871700();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_54038840();

   return systemT;
}