#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_52387640;

SignalI z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makez__value_52670500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func1_58_840_52387640;
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

SignalI a_54375540_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makea_54375540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_54375540_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func1_58_840_52387640;
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

Block __52721820;

void code__52721820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
            first = value2integer(make__52640760());
            last = value2integer(make__52640740());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52721820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52721820 = block;
   block->owner = (Object)__52721220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52721820;

   return block;
};

Block __52721160;

void code__52721160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420,value2integer(make__52640600()),value2integer(make__52640580())));
      set_value_pos(pool_state);
   }
}

Block make__52721160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52721160 = block;
   block->owner = (Object)__52720640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52721160;

   return block;
};

Block __52720500;

void code__52720500() {
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
            src0 = make__52640060();
            src1 = make__52640040();
            src2 = make__52639980();
            src3 = make__52639960();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
            first = value2integer(make__52639860());
            last = value2integer(make__52639840());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_48766640_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52720500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52720500 = block;
   block->owner = (Object)__52719600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52720500;

   return block;
};

Block __52723420;

void code__52723420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,address_52783620_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_48766640_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,remaining_49592180_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49076400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,base_50664600_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49511400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,next__data_51444380_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_51577100_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,a_54375540_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52723420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52723420 = block;
   block->owner = (Object)__52781200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52723420;

   return block;
};

Block __52723280;

void code__52723280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47720660_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,base_49076400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49476440_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,next__data_49511400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52723280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52723280 = block;
   block->owner = (Object)__52895700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52723280;

   return block;
};

Value make__52640760() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52640740() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52640600() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52640580() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52640060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52640040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52639980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52639960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52639860() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52639840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_47963100;

SignalI base_49076400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makebase_49076400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49076400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func1_58_84_47963100;
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

SignalI next__data_49511400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makenext__data_49511400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49511400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func1_58_84_47963100;
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

SignalI address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeaddress_49511300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func1_58_84_47963100;
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

SignalI remaining_48766640_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeremaining_48766640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_48766640_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func1_58_84_47963100;
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

SystemI my__lut_49475000;

SystemI makemy__lut_49475000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_49475000 = systemI;
   systemI->owner = (Object)func1_58_84_47963100;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_52786980;

   return systemI;
};

SystemI my__interpolator_51576900;

SystemI makemy__interpolator_51576900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_51576900 = systemI;
   systemI->owner = (Object)func1_58_84_47963100;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_48912540;

   return systemI;
};

Behavior __52721220;

Behavior make__52721220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52721220 = behavior;
   behavior->owner = (Object)func1_58_84_47963100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52721820();

   return behavior;
}

Behavior __52720640;

Behavior make__52720640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52720640 = behavior;
   behavior->owner = (Object)func1_58_84_47963100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52721160();

   return behavior;
}

Behavior __52719600;

Behavior make__52719600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52719600 = behavior;
   behavior->owner = (Object)func1_58_84_47963100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[z__value_52670500_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52720500();

   return behavior;
}

Behavior __52781200;

Behavior make__52781200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52781200 = behavior;
   behavior->owner = (Object)func1_58_84_47963100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[address_49511300_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_48766640_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   remaining_48766640_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   remaining_48766640_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(remaining_48766640_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,remaining_48766640_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
remaining_48766640_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[remaining_48766640_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_49076400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   base_49076400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   base_49076400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(base_49076400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,base_49076400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
base_49076400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[base_49076400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_49511400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   next__data_49511400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   next__data_49511400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(next__data_49511400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,next__data_49511400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
next__data_49511400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[next__data_49511400_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_51577100_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   interpolated__value_51577100_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   interpolated__value_51577100_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(interpolated__value_51577100_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,interpolated__value_51577100_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
interpolated__value_51577100_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[interpolated__value_51577100_my__interpolator_58_8400_48912540_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52723420();

   return behavior;
}

Behavior __52895700;

Behavior make__52895700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52895700 = behavior;
   behavior->owner = (Object)func1_58_84_47963100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47720660_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   base_47720660_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   base_47720660_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(base_47720660_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,base_47720660_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
base_47720660_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[base_47720660_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49476440_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   next__data_49476440_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   next__data_49476440_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(next__data_49476440_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,next__data_49476440_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
next__data_49476440_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[next__data_49476440_my__lut_58_8400_52786980_func1_58_84_47963100_func1_58_840_52387640_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52723280();

   return behavior;
}

Scope makefunc1_58_84_47963100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_47963100 = scope;
   scope->owner = (Object)func1_58_840_52387640;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_49475000();
   scope->systemIs[1] = makemy__interpolator_51576900();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_49076400();
   scope->inners[1] = makenext__data_49511400();
   scope->inners[2] = makeaddress_49511300();
   scope->inners[3] = makeremaining_48766640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52721220();
   scope->behaviors[1] = make__52720640();
   scope->behaviors[2] = make__52719600();
   scope->behaviors[3] = make__52781200();
   scope->behaviors[4] = make__52895700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_52387640() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_52387640 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52670500();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_54375540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_47963100();

   return systemT;
}