#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_58947620;

SignalI z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makez__value_45601760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func1_58_840_58947620;
   signalI->name = "z_value";
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

SignalI a_47432040_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makea_47432040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47432040_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func1_58_840_58947620;
   signalI->name = "a";
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

Block __56631380;

void code__56631380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            first = value2integer(make__56786400());
            last = value2integer(make__56786380());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56631380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56631380 = block;
   block->owner = (Object)__56655580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56631380;

   return block;
};

Block __56655460;

void code__56655460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640,value2integer(make__56785980()),value2integer(make__56785940())));
      set_value_pos(pool_state);
   }
}

Block make__56655460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56655460 = block;
   block->owner = (Object)__56655160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56655460;

   return block;
};

Block __56655100;

void code__56655100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__56785300();
            src1 = make__56785280();
            src2 = make__56785260();
            src3 = make__56785240();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            first = value2integer(make__56785140());
            last = value2integer(make__56785120());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_50264400_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56655100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56655100 = block;
   block->owner = (Object)__56654460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56655100;

   return block;
};

Block __56631800;

void code__56631800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,address_50694340_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_50264400_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,remaining_56573900_my__interpolator_58_8400_56473660_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49681080_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,base_56651580_my__interpolator_58_8400_56473660_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50131920_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,next__data_56974920_my__interpolator_58_8400_56473660_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_57027920_my__interpolator_58_8400_56473660_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,a_47432040_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56631800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56631800 = block;
   block->owner = (Object)__56701680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56631800;

   return block;
};

Block __56631600;

void code__56631600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50845720_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,base_49681080_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48567920_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,next__data_50131920_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56631600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56631600 = block;
   block->owner = (Object)__56701500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56631600;

   return block;
};

Value make__56786400() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56786380() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56785980() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56785940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56785300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56785280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56785260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56785240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56785140() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56785120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_49413780;

SignalI base_49681080_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makebase_49681080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49681080_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func1_58_84_49413780;
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

SignalI next__data_50131920_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makenext__data_50131920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50131920_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func1_58_84_49413780;
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

SignalI address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeaddress_50131800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func1_58_84_49413780;
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

SignalI remaining_50264400_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeremaining_50264400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_50264400_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func1_58_84_49413780;
   signalI->name = "remaining";
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

SystemI my__lut_48567780;

SystemI makemy__lut_48567780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_48567780 = systemI;
   systemI->owner = (Object)func1_58_84_49413780;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_50698880;

   return systemI;
};

SystemI my__interpolator_57027780;

SystemI makemy__interpolator_57027780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_57027780 = systemI;
   systemI->owner = (Object)func1_58_84_49413780;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_56473660;

   return systemI;
};

Behavior __56655580;

Behavior make__56655580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56655580 = behavior;
   behavior->owner = (Object)func1_58_84_49413780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56631380();

   return behavior;
}

Behavior __56655160;

Behavior make__56655160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56655160 = behavior;
   behavior->owner = (Object)func1_58_84_49413780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56655460();

   return behavior;
}

Behavior __56654460;

Behavior make__56654460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56654460 = behavior;
   behavior->owner = (Object)func1_58_84_49413780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56655100();

   return behavior;
}

Behavior __56701680;

Behavior make__56701680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56701680 = behavior;
   behavior->owner = (Object)func1_58_84_49413780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[address_50131800_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_50264400_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   remaining_50264400_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   remaining_50264400_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(remaining_50264400_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,remaining_50264400_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
remaining_50264400_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[remaining_50264400_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_49681080_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   base_49681080_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   base_49681080_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(base_49681080_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,base_49681080_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
base_49681080_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[base_49681080_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_50131920_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   next__data_50131920_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   next__data_50131920_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(next__data_50131920_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,next__data_50131920_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
next__data_50131920_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[next__data_50131920_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_57027920_my__interpolator_58_8400_56473660_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   interpolated__value_57027920_my__interpolator_58_8400_56473660_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   interpolated__value_57027920_my__interpolator_58_8400_56473660_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(interpolated__value_57027920_my__interpolator_58_8400_56473660_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,interpolated__value_57027920_my__interpolator_58_8400_56473660_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
interpolated__value_57027920_my__interpolator_58_8400_56473660_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[interpolated__value_57027920_my__interpolator_58_8400_56473660_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56631800();

   return behavior;
}

Behavior __56701500;

Behavior make__56701500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56701500 = behavior;
   behavior->owner = (Object)func1_58_84_49413780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50845720_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   base_50845720_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   base_50845720_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(base_50845720_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,base_50845720_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
base_50845720_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[base_50845720_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_48567920_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   next__data_48567920_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   next__data_48567920_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(next__data_48567920_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,next__data_48567920_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
next__data_48567920_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[next__data_48567920_my__lut_58_8400_50698880_func1_58_84_49413780_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56631600();

   return behavior;
}

Scope makefunc1_58_84_49413780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_49413780 = scope;
   scope->owner = (Object)func1_58_840_58947620;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_48567780();
   scope->systemIs[1] = makemy__interpolator_57027780();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_49681080();
   scope->inners[1] = makenext__data_50131920();
   scope->inners[2] = makeaddress_50131800();
   scope->inners[3] = makeremaining_50264400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56655580();
   scope->behaviors[1] = make__56655160();
   scope->behaviors[2] = make__56654460();
   scope->behaviors[3] = make__56701680();
   scope->behaviors[4] = make__56701500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_58947620() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_58947620 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_45601760();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_47432040();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_49413780();

   return systemT;
}