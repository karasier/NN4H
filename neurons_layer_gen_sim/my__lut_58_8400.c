#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_51707160;

SignalI address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeaddress_51704160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)my__lut_58_8400_51707160;
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

SignalI base_51898540_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makebase_51898540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51898540_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)my__lut_58_8400_51707160;
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

SignalI next__data_52069260_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makenext__data_52069260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52069260_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)my__lut_58_8400_51707160;
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

Block __47449060;

Block __48492380;

void code__48492380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
            idx = value2integer(make__52805580());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52069260_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__48492380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48492380 = block;
   block->owner = (Object)__47449060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48492380;

   return block;
};

Block __47448460;

Block __48917580;

void code__48917580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
            idx = value2integer(address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52069260_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__48917580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48917580 = block;
   block->owner = (Object)__47448460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48917580;

   return block;
};

Block __47472380;

void code__47472380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__52802200();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52069260_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47472380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47472380 = block;
   block->owner = (Object)__47448460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47472380;

   return block;
};

void code__47448460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__52803320();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__52803000();
                     src1 = make__52802980();
                     src2 = make__52802940();
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
    code__48917580();
   }
   else {
  code__47472380();
   }
      }
   }
}

Block make__47448460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47448460 = block;
   block->owner = (Object)__47449060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47448460;

   return block;
};

void code__47449060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52781200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48492380();
   }
   else {
  code__47448460();
   }
      }
   }
}

Block make__47449060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47449060 = block;
   block->owner = (Object)__51707760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47449060;

   return block;
};

Block __52749180;

void code__52749180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
            idx = value2integer(address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_51898540_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52749180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52749180 = block;
   block->owner = (Object)__52786920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52749180;

   return block;
};

Value make__52782440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52782400() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52782380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52782340() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52782320() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52782220() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52782180() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52782100() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52782080() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52782000() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52781920() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52781880() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52781840() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52781780() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52781760() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52781740() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52781200() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52805580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52803320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52803000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52802980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52802940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52802200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_840_51470520;

SignalI lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makelut_53288780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)my__lut_58_840_51470520;
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
         src0 = make__52782440();
         src1 = make__52782400();
         src2 = make__52782380();
         src3 = make__52782340();
         src4 = make__52782320();
         src5 = make__52782220();
         src6 = make__52782180();
         src7 = make__52782100();
         src8 = make__52782080();
         src9 = make__52782000();
         src10 = make__52781920();
         src11 = make__52781880();
         src12 = make__52781840();
         src13 = make__52781780();
         src14 = make__52781760();
         src15 = make__52781740();
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

Behavior __51707760;

Behavior make__51707760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51707760 = behavior;
   behavior->owner = (Object)my__lut_58_840_51470520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__47449060();

   return behavior;
}

Behavior __52786920;

Behavior make__52786920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52786920 = behavior;
   behavior->owner = (Object)my__lut_58_840_51470520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[address_51704160_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[lut_53288780_my__lut_58_840_51470520_my__lut_58_8400_51707160_func1_58_84_49417780_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__52749180();

   return behavior;
}

Scope makemy__lut_58_840_51470520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_840_51470520 = scope;
   scope->owner = (Object)my__lut_58_8400_51707160;
   scope->name = "my_lut:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_53288780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51707760();
   scope->behaviors[1] = make__52786920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_51707160() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_51707160 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_51704160();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_51898540();
   systemT->outputs[1] = makenext__data_52069260();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_840_51470520();

   return systemT;
}