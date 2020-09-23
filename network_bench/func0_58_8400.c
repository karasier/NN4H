#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_49135800;

SignalI z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makez__value_49521520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func0_58_8400_49135800;
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

SignalI a_49911000_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makea_49911000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49911000_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func0_58_8400_49135800;
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

Block __59674960;

void code__59674960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
            first = value2integer(make__59687320());
            last = value2integer(make__59687300());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59674960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59674960 = block;
   block->owner = (Object)__59674640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59674960;

   return block;
};

Block __59674600;

void code__59674600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280,value2integer(make__59687160()),value2integer(make__59687140())));
      set_value_pos(pool_state);
   }
}

Block make__59674600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59674600 = block;
   block->owner = (Object)__59674260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59674600;

   return block;
};

Block __59674200;

void code__59674200() {
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
            src0 = make__59743980();
            src1 = make__59743940();
            src2 = make__59743920();
            src3 = make__59743900();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
            first = value2integer(make__59743780());
            last = value2integer(make__59743760());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_48756120_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59674200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59674200 = block;
   block->owner = (Object)__59673460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59674200;

   return block;
};

Block __59675220;

void code__59675220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,address_51983760_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_48756120_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,remaining_58038140_my__interpolator_58_8410_57933780_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_60394820_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,base_58217620_my__interpolator_58_8410_57933780_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_45769280_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,next__data_58471440_my__interpolator_58_8410_57933780_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_58618980_my__interpolator_58_8410_57933780_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,a_49911000_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59675220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59675220 = block;
   block->owner = (Object)__59691820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59675220;

   return block;
};

Block __59675160;

void code__59675160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52411840_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,base_60394820_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52722420_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,next__data_45769280_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59675160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59675160 = block;
   block->owner = (Object)__59691660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59675160;

   return block;
};

Value make__59687320() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59687300() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59687160() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59687140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59743980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59743940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59743920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59743900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59743780() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59743760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_60333940;

SignalI base_60394820_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makebase_60394820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_60394820_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func0_58_840_60333940;
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

SignalI next__data_45769280_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makenext__data_45769280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_45769280_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func0_58_840_60333940;
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

SignalI address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeaddress_45768920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func0_58_840_60333940;
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

SignalI remaining_48756120_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeremaining_48756120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_48756120_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)func0_58_840_60333940;
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

SystemI my__lut_52722180;

SystemI makemy__lut_52722180() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52722180 = systemI;
   systemI->owner = (Object)func0_58_840_60333940;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_51964800;

   return systemI;
};

SystemI my__interpolator_58618820;

SystemI makemy__interpolator_58618820() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_58618820 = systemI;
   systemI->owner = (Object)func0_58_840_60333940;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_57933780;

   return systemI;
};

Behavior __59674640;

Behavior make__59674640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59674640 = behavior;
   behavior->owner = (Object)func0_58_840_60333940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59674960();

   return behavior;
}

Behavior __59674260;

Behavior make__59674260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59674260 = behavior;
   behavior->owner = (Object)func0_58_840_60333940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59674600();

   return behavior;
}

Behavior __59673460;

Behavior make__59673460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59673460 = behavior;
   behavior->owner = (Object)func0_58_840_60333940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59674200();

   return behavior;
}

Behavior __59691820;

Behavior make__59691820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59691820 = behavior;
   behavior->owner = (Object)func0_58_840_60333940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[address_45768920_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_48756120_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   remaining_48756120_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   remaining_48756120_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(remaining_48756120_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,remaining_48756120_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
remaining_48756120_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[remaining_48756120_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_60394820_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   base_60394820_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   base_60394820_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(base_60394820_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,base_60394820_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
base_60394820_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[base_60394820_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_45769280_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   next__data_45769280_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   next__data_45769280_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(next__data_45769280_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,next__data_45769280_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
next__data_45769280_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[next__data_45769280_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_58618980_my__interpolator_58_8410_57933780_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   interpolated__value_58618980_my__interpolator_58_8410_57933780_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   interpolated__value_58618980_my__interpolator_58_8410_57933780_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(interpolated__value_58618980_my__interpolator_58_8410_57933780_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,interpolated__value_58618980_my__interpolator_58_8410_57933780_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
interpolated__value_58618980_my__interpolator_58_8410_57933780_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[interpolated__value_58618980_my__interpolator_58_8410_57933780_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59675220();

   return behavior;
}

Behavior __59691660;

Behavior make__59691660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59691660 = behavior;
   behavior->owner = (Object)func0_58_840_60333940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52411840_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   base_52411840_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   base_52411840_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(base_52411840_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,base_52411840_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
base_52411840_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[base_52411840_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52722420_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   next__data_52722420_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   next__data_52722420_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(next__data_52722420_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,next__data_52722420_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
next__data_52722420_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[next__data_52722420_my__lut_58_8410_51964800_func0_58_840_60333940_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59675160();

   return behavior;
}

Scope makefunc0_58_840_60333940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_60333940 = scope;
   scope->owner = (Object)func0_58_8400_49135800;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52722180();
   scope->systemIs[1] = makemy__interpolator_58618820();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_60394820();
   scope->inners[1] = makenext__data_45769280();
   scope->inners[2] = makeaddress_45768920();
   scope->inners[3] = makeremaining_48756120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59674640();
   scope->behaviors[1] = make__59674260();
   scope->behaviors[2] = make__59673460();
   scope->behaviors[3] = make__59691820();
   scope->behaviors[4] = make__59691660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_49135800() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_49135800 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49521520();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49911000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_60333940();

   return systemT;
}