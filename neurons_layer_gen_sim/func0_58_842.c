#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_842_55603580;

SignalI z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makez__value_55769280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func0_58_842_55603580;
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

SignalI a_55814020_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makea_55814020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_55814020_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func0_58_842_55603580;
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

Block __51289740;

void code__51289740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
            first = value2integer(make__51473920());
            last = value2integer(make__51473480());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__51289740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51289740 = block;
   block->owner = (Object)__51289000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51289740;

   return block;
};

Block __51287920;

void code__51287920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440,value2integer(make__51487840()),value2integer(make__51487800())));
      set_value_pos(pool_state);
   }
}

Block make__51287920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51287920 = block;
   block->owner = (Object)__51286600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51287920;

   return block;
};

Block __51286380;

void code__51286380() {
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
            src0 = make__51487020();
            src1 = make__51486960();
            src2 = make__51486940();
            src3 = make__51486760();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value;
            first = value2integer(make__51510880());
            last = value2integer(make__51510840());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47849420_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__51286380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51286380 = block;
   block->owner = (Object)__51306140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51286380;

   return block;
};

Block __51265940;

void code__51265940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value,address_57124060_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47849420_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value,remaining_58601680_my__interpolator_58_845_58499820_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51319720_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value,base_58705420_my__interpolator_58_845_58499820_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51520100_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value,next__data_58792700_my__interpolator_58_845_58499820_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_58822460_my__interpolator_58_845_58499820_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value,a_55814020_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__51265940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51265940 = block;
   block->owner = (Object)__51384540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51265940;

   return block;
};

Block __51290020;

void code__51290020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_57244080_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value,base_51319720_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_57290460_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->c_value,next__data_51520100_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__51290020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51290020 = block;
   block->owner = (Object)__51382260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51290020;

   return block;
};

Value make__51473920() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51473480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51487840() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51487800() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51487020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51486960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51486940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51486760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51510880() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51510840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_51203660;

SignalI base_51319720_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makebase_51319720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51319720_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func0_58_84_51203660;
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

SignalI next__data_51520100_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makenext__data_51520100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51520100_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func0_58_84_51203660;
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

SignalI address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makeaddress_51520000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func0_58_84_51203660;
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

SignalI remaining_47849420_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440;

SignalI makeremaining_47849420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47849420_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)func0_58_84_51203660;
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

SystemI my__lut_57290320;

SystemI makemy__lut_57290320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_57290320 = systemI;
   systemI->owner = (Object)func0_58_84_51203660;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_845_57125960;

   return systemI;
};

SystemI my__interpolator_58822320;

SystemI makemy__interpolator_58822320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_58822320 = systemI;
   systemI->owner = (Object)func0_58_84_51203660;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_845_58499820;

   return systemI;
};

Behavior __51289000;

Behavior make__51289000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51289000 = behavior;
   behavior->owner = (Object)func0_58_84_51203660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__51289740();

   return behavior;
}

Behavior __51286600;

Behavior make__51286600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51286600 = behavior;
   behavior->owner = (Object)func0_58_84_51203660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__51287920();

   return behavior;
}

Behavior __51306140;

Behavior make__51306140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51306140 = behavior;
   behavior->owner = (Object)func0_58_84_51203660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[z__value_55769280_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__51286380();

   return behavior;
}

Behavior __51384540;

Behavior make__51384540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51384540 = behavior;
   behavior->owner = (Object)func0_58_84_51203660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[address_51520000_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47849420_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   remaining_47849420_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   remaining_47849420_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(remaining_47849420_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,remaining_47849420_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
remaining_47849420_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[remaining_47849420_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51319720_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   base_51319720_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   base_51319720_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(base_51319720_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,base_51319720_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
base_51319720_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[base_51319720_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_51520100_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   next__data_51520100_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   next__data_51520100_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(next__data_51520100_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,next__data_51520100_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
next__data_51520100_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[next__data_51520100_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_58822460_my__interpolator_58_845_58499820_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   interpolated__value_58822460_my__interpolator_58_845_58499820_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   interpolated__value_58822460_my__interpolator_58_845_58499820_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(interpolated__value_58822460_my__interpolator_58_845_58499820_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,interpolated__value_58822460_my__interpolator_58_845_58499820_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
interpolated__value_58822460_my__interpolator_58_845_58499820_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[interpolated__value_58822460_my__interpolator_58_845_58499820_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__51265940();

   return behavior;
}

Behavior __51382260;

Behavior make__51382260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51382260 = behavior;
   behavior->owner = (Object)func0_58_84_51203660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_57244080_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   base_57244080_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   base_57244080_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(base_57244080_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,base_57244080_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
base_57244080_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[base_57244080_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_57290460_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440);
   next__data_57290460_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any += 1;
   next__data_57290460_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any = realloc(next__data_57290460_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any,next__data_57290460_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
next__data_57290460_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->any[next__data_57290460_my__lut_58_845_57125960_func0_58_84_51203660_func0_58_842_55603580_layer0_58_84_51510660_layer0_58_840_58565480______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__51290020();

   return behavior;
}

Scope makefunc0_58_84_51203660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_51203660 = scope;
   scope->owner = (Object)func0_58_842_55603580;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_57290320();
   scope->systemIs[1] = makemy__interpolator_58822320();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51319720();
   scope->inners[1] = makenext__data_51520100();
   scope->inners[2] = makeaddress_51520000();
   scope->inners[3] = makeremaining_47849420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51289000();
   scope->behaviors[1] = make__51286600();
   scope->behaviors[2] = make__51306140();
   scope->behaviors[3] = make__51384540();
   scope->behaviors[4] = make__51382260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_842_55603580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_842_55603580 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_55769280();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_55814020();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_51203660();

   return systemT;
}