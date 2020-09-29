#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_66452660;

SignalI z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makez__value_66546380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func0_58_841_66452660;
   signalI->name = "z_value";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SignalI a_66666400_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makea_66666400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_66666400_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func0_58_841_66452660;
   signalI->name = "a";
   signalI->type = get_type_vector(get_type_signed(),16);
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

Block __83884200;

void code__83884200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
            first = value2integer(make__84064160());
            last = value2integer(make__84064060());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__83884200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83884200 = block;
   block->owner = (Object)__83883840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83884200;

   return block;
};

Block __83883780;

void code__83883780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760,value2integer(make__84063600()),value2integer(make__84063580())));
      set_value_pos(pool_state);
   }
}

Block make__83883780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83883780 = block;
   block->owner = (Object)__83883440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83883780;

   return block;
};

Block __83883380;

void code__83883380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,src2,src3,src4,src5,src6,src7;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__84062800();
            src1 = make__84062780();
            src2 = make__84062760();
            src3 = make__84062680();
            src4 = make__84062660();
            src5 = make__84062580();
            src6 = make__84062560();
            src7 = make__84062420();
            concat_value(8,1,dst,src0,src1,src2,src3,src4,src5,src6,src7);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
            first = value2integer(make__84062220());
            last = value2integer(make__84062180());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_48887800_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__83883380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83883380 = block;
   block->owner = (Object)__83882120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83883380;

   return block;
};

Block __83884720;

void code__83884720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,address_59832940_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_48887800_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,remaining_57628020_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47701940_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,base_57895380_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47897860_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,next__data_58366460_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_58526720_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,a_66666400_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__83884720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83884720 = block;
   block->owner = (Object)__84029260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83884720;

   return block;
};

Block __83884620;

void code__83884620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47511160_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,base_47701940_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48883940_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,next__data_47897860_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__83884620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83884620 = block;
   block->owner = (Object)__84029020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83884620;

   return block;
};

Value make__84064160() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__84064060() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__84063600() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__84063580() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__84062800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__84062780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__84062760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__84062680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__84062660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__84062580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__84062560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__84062420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__84062220() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__84062180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_47376620;

SignalI base_47701940_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makebase_47701940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47701940_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func0_58_84_47376620;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SignalI next__data_47897860_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makenext__data_47897860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47897860_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func0_58_84_47376620;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SignalI address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeaddress_47897780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func0_58_84_47376620;
   signalI->name = "address";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI remaining_48887800_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeremaining_48887800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_48887800_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func0_58_84_47376620;
   signalI->name = "remaining";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SystemI my__lut_48882960;

SystemI makemy__lut_48882960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_48882960 = systemI;
   systemI->owner = (Object)func0_58_84_47376620;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_59426500;

   return systemI;
};

SystemI my__interpolator_58526360;

SystemI makemy__interpolator_58526360() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_58526360 = systemI;
   systemI->owner = (Object)func0_58_84_47376620;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_57446880;

   return systemI;
};

Behavior __83883840;

Behavior make__83883840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __83883840 = behavior;
   behavior->owner = (Object)func0_58_84_47376620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__83884200();

   return behavior;
}

Behavior __83883440;

Behavior make__83883440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __83883440 = behavior;
   behavior->owner = (Object)func0_58_84_47376620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__83883780();

   return behavior;
}

Behavior __83882120;

Behavior make__83882120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __83882120 = behavior;
   behavior->owner = (Object)func0_58_84_47376620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[z__value_66546380_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__83883380();

   return behavior;
}

Behavior __84029260;

Behavior make__84029260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __84029260 = behavior;
   behavior->owner = (Object)func0_58_84_47376620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[address_47897780_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_48887800_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   remaining_48887800_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   remaining_48887800_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(remaining_48887800_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,remaining_48887800_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
remaining_48887800_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[remaining_48887800_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47701940_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   base_47701940_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   base_47701940_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(base_47701940_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,base_47701940_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
base_47701940_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[base_47701940_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47897860_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   next__data_47897860_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   next__data_47897860_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(next__data_47897860_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,next__data_47897860_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
next__data_47897860_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[next__data_47897860_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_58526720_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   interpolated__value_58526720_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   interpolated__value_58526720_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(interpolated__value_58526720_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,interpolated__value_58526720_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
interpolated__value_58526720_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[interpolated__value_58526720_my__interpolator_58_842_57446880_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__83884720();

   return behavior;
}

Behavior __84029020;

Behavior make__84029020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __84029020 = behavior;
   behavior->owner = (Object)func0_58_84_47376620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47511160_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   base_47511160_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   base_47511160_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(base_47511160_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,base_47511160_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
base_47511160_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[base_47511160_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_48883940_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   next__data_48883940_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   next__data_48883940_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(next__data_48883940_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,next__data_48883940_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
next__data_48883940_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[next__data_48883940_my__lut_58_842_59426500_func0_58_84_47376620_func0_58_841_66452660_layer0_58_84_50688000_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__83884620();

   return behavior;
}

Scope makefunc0_58_84_47376620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_47376620 = scope;
   scope->owner = (Object)func0_58_841_66452660;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_48882960();
   scope->systemIs[1] = makemy__interpolator_58526360();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_47701940();
   scope->inners[1] = makenext__data_47897860();
   scope->inners[2] = makeaddress_47897780();
   scope->inners[3] = makeremaining_48887800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__83883840();
   scope->behaviors[1] = make__83883440();
   scope->behaviors[2] = make__83882120();
   scope->behaviors[3] = make__84029260();
   scope->behaviors[4] = make__84029020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_66452660() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_66452660 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_66546380();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_66666400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_47376620();

   return systemT;
}