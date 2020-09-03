#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_840_47703280;

SignalI address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeaddress_47720020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)my__lut_58_840_47703280;
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

SignalI base_48519260_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makebase_48519260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48519260_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)my__lut_58_840_47703280;
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

SignalI next__data_49696880_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makenext__data_49696880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49696880_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)my__lut_58_840_47703280;
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

Block __51103420;

Block __47202000;

void code__47202000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
            idx = value2integer(make__50909040());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49696880_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__47202000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47202000 = block;
   block->owner = (Object)__51103420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47202000;

   return block;
};

Block __51103240;

Block __41669700;

void code__41669700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
            idx = value2integer(address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49696880_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__41669700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __41669700 = block;
   block->owner = (Object)__51103240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__41669700;

   return block;
};

Block __51103020;

void code__51103020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__50907360();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_49696880_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__51103020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51103020 = block;
   block->owner = (Object)__51103240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51103020;

   return block;
};

void code__51103240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__50908440();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__50908120();
                     src1 = make__50908100();
                     src2 = make__50908080();
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
    code__41669700();
   }
   else {
  code__51103020();
   }
      }
   }
}

Block make__51103240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51103240 = block;
   block->owner = (Object)__51103420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51103240;

   return block;
};

void code__51103420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50909200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47202000();
   }
   else {
  code__51103240();
   }
      }
   }
}

Block make__51103420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51103420 = block;
   block->owner = (Object)__47704700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51103420;

   return block;
};

Block __50791180;

void code__50791180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
            idx = value2integer(address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_48519260_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50791180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50791180 = block;
   block->owner = (Object)__50912520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50791180;

   return block;
};

Value make__50910100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50910080() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50910060() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50910040() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50910020() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50909980() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50909940() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50909920() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50909860() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50909800() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50909780() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50909760() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50909740() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50909700() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50909660() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50909640() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50909200() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50909040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50908440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50908120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50908100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50908080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50907360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_47461000;

SignalI lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makelut_50660740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)my__lut_58_84_47461000;
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
         src0 = make__50910100();
         src1 = make__50910080();
         src2 = make__50910060();
         src3 = make__50910040();
         src4 = make__50910020();
         src5 = make__50909980();
         src6 = make__50909940();
         src7 = make__50909920();
         src8 = make__50909860();
         src9 = make__50909800();
         src10 = make__50909780();
         src11 = make__50909760();
         src12 = make__50909740();
         src13 = make__50909700();
         src14 = make__50909660();
         src15 = make__50909640();
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

Behavior __47704700;

Behavior make__47704700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47704700 = behavior;
   behavior->owner = (Object)my__lut_58_84_47461000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__51103420();

   return behavior;
}

Behavior __50912520;

Behavior make__50912520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50912520 = behavior;
   behavior->owner = (Object)my__lut_58_84_47461000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[address_47720020_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[lut_50660740_my__lut_58_84_47461000_my__lut_58_840_47703280_func0_58_84_47008760_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50791180();

   return behavior;
}

Scope makemy__lut_58_84_47461000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_47461000 = scope;
   scope->owner = (Object)my__lut_58_840_47703280;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_50660740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47704700();
   scope->behaviors[1] = make__50912520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_840_47703280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_840_47703280 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_47720020();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_48519260();
   systemT->outputs[1] = makenext__data_49696880();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_47461000();

   return systemT;
}