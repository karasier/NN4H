#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_46050660;

SignalI z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makez__value_47723720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func0_58_841_46050660;
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

SignalI a_47963700_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makea_47963700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47963700_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func0_58_841_46050660;
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

Block __52427380;

void code__52427380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
            first = value2integer(make__52621280());
            last = value2integer(make__52621260());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52427380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52427380 = block;
   block->owner = (Object)__52427000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52427380;

   return block;
};

Block __52426940;

void code__52426940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420,value2integer(make__52621020()),value2integer(make__52620980())));
      set_value_pos(pool_state);
   }
}

Block make__52426940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52426940 = block;
   block->owner = (Object)__52426320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52426940;

   return block;
};

Block __52426140;

void code__52426140() {
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
            src0 = make__52619560();
            src1 = make__52619500();
            src2 = make__52619480();
            src3 = make__52619460();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
            first = value2integer(make__52619220());
            last = value2integer(make__52619200());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_51105460_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52426140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52426140 = block;
   block->owner = (Object)__52424580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52426140;

   return block;
};

Block __52427720;

void code__52427720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,address_51427440_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_51105460_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,remaining_47721380_my__interpolator_58_842_46673120_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50606420_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,base_47925440_my__interpolator_58_842_46673120_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50782800_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,next__data_49028220_my__interpolator_58_842_46673120_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49455820_my__interpolator_58_842_46673120_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,a_47963700_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52427720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52427720 = block;
   block->owner = (Object)__52477140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52427720;

   return block;
};

Block __52427660;

void code__52427660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51525920_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,base_50606420_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51737740_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,next__data_50782800_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52427660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52427660 = block;
   block->owner = (Object)__52476820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52427660;

   return block;
};

Value make__52621280() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52621260() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52621020() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52620980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52619560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52619500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52619480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52619460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52619220() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52619200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_50473680;

SignalI base_50606420_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makebase_50606420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50606420_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func0_58_84_50473680;
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

SignalI next__data_50782800_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makenext__data_50782800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50782800_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func0_58_84_50473680;
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

SignalI address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeaddress_50782700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func0_58_84_50473680;
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

SignalI remaining_51105460_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeremaining_51105460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51105460_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func0_58_84_50473680;
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

SystemI my__lut_51737540;

SystemI makemy__lut_51737540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_51737540 = systemI;
   systemI->owner = (Object)func0_58_84_50473680;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_51405560;

   return systemI;
};

SystemI my__interpolator_49455640;

SystemI makemy__interpolator_49455640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49455640 = systemI;
   systemI->owner = (Object)func0_58_84_50473680;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_46673120;

   return systemI;
};

Behavior __52427000;

Behavior make__52427000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52427000 = behavior;
   behavior->owner = (Object)func0_58_84_50473680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52427380();

   return behavior;
}

Behavior __52426320;

Behavior make__52426320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52426320 = behavior;
   behavior->owner = (Object)func0_58_84_50473680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52426940();

   return behavior;
}

Behavior __52424580;

Behavior make__52424580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52424580 = behavior;
   behavior->owner = (Object)func0_58_84_50473680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[z__value_47723720_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52426140();

   return behavior;
}

Behavior __52477140;

Behavior make__52477140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52477140 = behavior;
   behavior->owner = (Object)func0_58_84_50473680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[address_50782700_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_51105460_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   remaining_51105460_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   remaining_51105460_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(remaining_51105460_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,remaining_51105460_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
remaining_51105460_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[remaining_51105460_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_50606420_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   base_50606420_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   base_50606420_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(base_50606420_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,base_50606420_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
base_50606420_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[base_50606420_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_50782800_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   next__data_50782800_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   next__data_50782800_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(next__data_50782800_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,next__data_50782800_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
next__data_50782800_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[next__data_50782800_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49455820_my__interpolator_58_842_46673120_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   interpolated__value_49455820_my__interpolator_58_842_46673120_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   interpolated__value_49455820_my__interpolator_58_842_46673120_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(interpolated__value_49455820_my__interpolator_58_842_46673120_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,interpolated__value_49455820_my__interpolator_58_842_46673120_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
interpolated__value_49455820_my__interpolator_58_842_46673120_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[interpolated__value_49455820_my__interpolator_58_842_46673120_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52427720();

   return behavior;
}

Behavior __52476820;

Behavior make__52476820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52476820 = behavior;
   behavior->owner = (Object)func0_58_84_50473680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51525920_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   base_51525920_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   base_51525920_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(base_51525920_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,base_51525920_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
base_51525920_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[base_51525920_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51737740_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   next__data_51737740_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   next__data_51737740_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(next__data_51737740_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,next__data_51737740_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
next__data_51737740_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[next__data_51737740_my__lut_58_842_51405560_func0_58_84_50473680_func0_58_841_46050660_layer0_58_84_49222100_layer0_58_840_59534360_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52427660();

   return behavior;
}

Scope makefunc0_58_84_50473680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_50473680 = scope;
   scope->owner = (Object)func0_58_841_46050660;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_51737540();
   scope->systemIs[1] = makemy__interpolator_49455640();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_50606420();
   scope->inners[1] = makenext__data_50782800();
   scope->inners[2] = makeaddress_50782700();
   scope->inners[3] = makeremaining_51105460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52427000();
   scope->behaviors[1] = make__52426320();
   scope->behaviors[2] = make__52424580();
   scope->behaviors[3] = make__52477140();
   scope->behaviors[4] = make__52476820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_46050660() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_46050660 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47723720();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_47963700();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_50473680();

   return systemT;
}