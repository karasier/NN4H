#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_52783180;

SignalI address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makeaddress_52854580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)my__lut_58_842_52783180;
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

SignalI base_52918380_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makebase_52918380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52918380_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)my__lut_58_842_52783180;
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

SignalI next__data_53039800_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makenext__data_53039800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53039800_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)my__lut_58_842_52783180;
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

Block __49549920;

Block __52175680;

void code__52175680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
            idx = value2integer(make__60517540());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53039800_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__52175680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52175680 = block;
   block->owner = (Object)__49549920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52175680;

   return block;
};

Block __49548400;

Block __49956540;

void code__49956540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
            idx = value2integer(address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53039800_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__49956540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49956540 = block;
   block->owner = (Object)__49548400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49956540;

   return block;
};

Block __49547640;

void code__49547640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__60516180();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53039800_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__49547640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49547640 = block;
   block->owner = (Object)__49548400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49547640;

   return block;
};

void code__49548400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__60517100();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__60516740();
                     src1 = make__60516680();
                     src2 = make__60516660();
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
    code__49956540();
   }
   else {
  code__49547640();
   }
      }
   }
}

Block make__49548400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49548400 = block;
   block->owner = (Object)__49549920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49548400;

   return block;
};

void code__49549920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60517660();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52175680();
   }
   else {
  code__49548400();
   }
      }
   }
}

Block make__49549920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49549920 = block;
   block->owner = (Object)__52783500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49549920;

   return block;
};

Block __60521560;

void code__60521560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value;
            idx = value2integer(address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_52918380_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60521560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60521560 = block;
   block->owner = (Object)__60520380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60521560;

   return block;
};

Value make__60518240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60518220() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60518200() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60518180() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60518160() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60518140() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60518120() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60518100() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60518080() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60518060() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60518040() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60518020() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60518000() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60517980() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60517960() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60517940() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60517660() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60517540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60517100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60516740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60516680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60516660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60516180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_54213360;

SignalI lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700;

SignalI makelut_47868660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)my__lut_58_84_54213360;
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
         src0 = make__60518240();
         src1 = make__60518220();
         src2 = make__60518200();
         src3 = make__60518180();
         src4 = make__60518160();
         src5 = make__60518140();
         src6 = make__60518120();
         src7 = make__60518100();
         src8 = make__60518080();
         src9 = make__60518060();
         src10 = make__60518040();
         src11 = make__60518020();
         src12 = make__60518000();
         src13 = make__60517980();
         src14 = make__60517960();
         src15 = make__60517940();
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

Behavior __52783500;

Behavior make__52783500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52783500 = behavior;
   behavior->owner = (Object)my__lut_58_84_54213360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__49549920();

   return behavior;
}

Behavior __60520380;

Behavior make__60520380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60520380 = behavior;
   behavior->owner = (Object)my__lut_58_84_54213360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[address_52854580_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[lut_47868660_my__lut_58_84_54213360_my__lut_58_842_52783180_func0_58_84_53570580_func0_58_841_53382340_layer0_58_84_49878600_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60521560();

   return behavior;
}

Scope makemy__lut_58_84_54213360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_54213360 = scope;
   scope->owner = (Object)my__lut_58_842_52783180;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_47868660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52783500();
   scope->behaviors[1] = make__60520380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_52783180() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_52783180 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_52854580();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_52918380();
   systemT->outputs[1] = makenext__data_53039800();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_54213360();

   return systemT;
}