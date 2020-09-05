#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_840_47587520;

SignalI address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeaddress_47609020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)my__lut_58_840_47587520;
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

SignalI base_47855840_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makebase_47855840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47855840_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)my__lut_58_840_47587520;
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

SignalI next__data_49642120_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makenext__data_49642120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49642120_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)my__lut_58_840_47587520;
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

Block __51162920;

Block __46847440;

void code__46847440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
            idx = value2integer(make__50935260());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49642120_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__46847440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46847440 = block;
   block->owner = (Object)__51162920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46847440;

   return block;
};

Block __51162760;

Block __51562260;

void code__51562260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
            idx = value2integer(address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49642120_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__51562260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51562260 = block;
   block->owner = (Object)__51162760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51562260;

   return block;
};

Block __51162580;

void code__51162580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__50933760();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49642120_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__51162580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51162580 = block;
   block->owner = (Object)__51162760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51162580;

   return block;
};

void code__51162760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__50934820();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__50934560();
                     src1 = make__50934540();
                     src2 = make__50934520();
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
    code__51562260();
   }
   else {
  code__51162580();
   }
      }
   }
}

Block make__51162760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51162760 = block;
   block->owner = (Object)__51162920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51162760;

   return block;
};

void code__51162920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50935440();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46847440();
   }
   else {
  code__51162760();
   }
      }
   }
}

Block make__51162920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51162920 = block;
   block->owner = (Object)__47588120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51162920;

   return block;
};

Block __50841680;

void code__50841680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
            idx = value2integer(address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_47855840_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50841680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50841680 = block;
   block->owner = (Object)__50840600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50841680;

   return block;
};

Value make__50936500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50936460() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50936440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50936420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50936360() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50936340() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50936200() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50936180() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50936160() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50936140() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50936120() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50936100() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50936080() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50936040() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50936020() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50935940() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50935440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50935260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50934820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50934560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50934540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50934520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50933760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_47478040;

SignalI lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makelut_50646540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)my__lut_58_84_47478040;
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
         src0 = make__50936500();
         src1 = make__50936460();
         src2 = make__50936440();
         src3 = make__50936420();
         src4 = make__50936360();
         src5 = make__50936340();
         src6 = make__50936200();
         src7 = make__50936180();
         src8 = make__50936160();
         src9 = make__50936140();
         src10 = make__50936120();
         src11 = make__50936100();
         src12 = make__50936080();
         src13 = make__50936040();
         src14 = make__50936020();
         src15 = make__50935940();
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

Behavior __47588120;

Behavior make__47588120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47588120 = behavior;
   behavior->owner = (Object)my__lut_58_84_47478040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__51162920();

   return behavior;
}

Behavior __50840600;

Behavior make__50840600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50840600 = behavior;
   behavior->owner = (Object)my__lut_58_84_47478040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[lut_50646540_my__lut_58_84_47478040_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50841680();

   return behavior;
}

Scope makemy__lut_58_84_47478040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_47478040 = scope;
   scope->owner = (Object)my__lut_58_840_47587520;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_50646540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47588120();
   scope->behaviors[1] = make__50840600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_840_47587520() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_840_47587520 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_47609020();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_47855840();
   systemT->outputs[1] = makenext__data_49642120();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_47478040();

   return systemT;
}