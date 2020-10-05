#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_57772400;

SignalI z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makez__value_57913360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func0_58_8400_57772400;
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

SignalI a_58053560_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makea_58053560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_58053560_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func0_58_8400_57772400;
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

Block __57942420;

void code__57942420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            first = value2integer(make__58034840());
            last = value2integer(make__58034820());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57942420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57942420 = block;
   block->owner = (Object)__58023880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57942420;

   return block;
};

Block __58023820;

void code__58023820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740,value2integer(make__58033580()),value2integer(make__58033560())));
      set_value_pos(pool_state);
   }
}

Block make__58023820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58023820 = block;
   block->owner = (Object)__58023400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58023820;

   return block;
};

Block __58023360;

void code__58023360() {
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
            src0 = make__58056340();
            src1 = make__58056320();
            src2 = make__58056300();
            src3 = make__58056280();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            first = value2integer(make__58055940());
            last = value2integer(make__58055920());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_52026100_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__58023360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58023360 = block;
   block->owner = (Object)__58022840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58023360;

   return block;
};

Block __57942740;

void code__57942740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,address_58164780_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_52026100_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,remaining_59837980_my__interpolator_58_8410_59743840_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51260820_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,base_60041400_my__interpolator_58_8410_59743840_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51707160_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,next__data_60121980_my__interpolator_58_8410_59743840_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_60289060_my__interpolator_58_8410_59743840_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,a_58053560_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57942740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57942740 = block;
   block->owner = (Object)__58016120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57942740;

   return block;
};

Block __57942620;

void code__57942620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_58302220_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,base_51260820_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_58398620_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,next__data_51707160_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57942620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57942620 = block;
   block->owner = (Object)__58015920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57942620;

   return block;
};

Value make__58034840() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58034820() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58033580() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58033560() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58056340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58056320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58056300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58056280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58055940() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58055920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_50963680;

SignalI base_51260820_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makebase_51260820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51260820_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func0_58_840_50963680;
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

SignalI next__data_51707160_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makenext__data_51707160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51707160_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func0_58_840_50963680;
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

SignalI address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeaddress_51707060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func0_58_840_50963680;
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

SignalI remaining_52026100_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeremaining_52026100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_52026100_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func0_58_840_50963680;
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

SystemI my__lut_58398480;

SystemI makemy__lut_58398480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_58398480 = systemI;
   systemI->owner = (Object)func0_58_840_50963680;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_58167080;

   return systemI;
};

SystemI my__interpolator_60288900;

SystemI makemy__interpolator_60288900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_60288900 = systemI;
   systemI->owner = (Object)func0_58_840_50963680;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_59743840;

   return systemI;
};

Behavior __58023880;

Behavior make__58023880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58023880 = behavior;
   behavior->owner = (Object)func0_58_840_50963680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57942420();

   return behavior;
}

Behavior __58023400;

Behavior make__58023400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58023400 = behavior;
   behavior->owner = (Object)func0_58_840_50963680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__58023820();

   return behavior;
}

Behavior __58022840;

Behavior make__58022840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58022840 = behavior;
   behavior->owner = (Object)func0_58_840_50963680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__58023360();

   return behavior;
}

Behavior __58016120;

Behavior make__58016120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58016120 = behavior;
   behavior->owner = (Object)func0_58_840_50963680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[address_51707060_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_52026100_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   remaining_52026100_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   remaining_52026100_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(remaining_52026100_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,remaining_52026100_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
remaining_52026100_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[remaining_52026100_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51260820_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   base_51260820_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   base_51260820_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(base_51260820_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,base_51260820_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
base_51260820_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[base_51260820_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_51707160_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   next__data_51707160_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   next__data_51707160_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(next__data_51707160_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,next__data_51707160_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
next__data_51707160_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[next__data_51707160_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_60289060_my__interpolator_58_8410_59743840_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   interpolated__value_60289060_my__interpolator_58_8410_59743840_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   interpolated__value_60289060_my__interpolator_58_8410_59743840_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(interpolated__value_60289060_my__interpolator_58_8410_59743840_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,interpolated__value_60289060_my__interpolator_58_8410_59743840_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
interpolated__value_60289060_my__interpolator_58_8410_59743840_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[interpolated__value_60289060_my__interpolator_58_8410_59743840_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57942740();

   return behavior;
}

Behavior __58015920;

Behavior make__58015920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58015920 = behavior;
   behavior->owner = (Object)func0_58_840_50963680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_58302220_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   base_58302220_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   base_58302220_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(base_58302220_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,base_58302220_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
base_58302220_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[base_58302220_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_58398620_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   next__data_58398620_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   next__data_58398620_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(next__data_58398620_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,next__data_58398620_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
next__data_58398620_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[next__data_58398620_my__lut_58_8410_58167080_func0_58_840_50963680_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57942620();

   return behavior;
}

Scope makefunc0_58_840_50963680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_50963680 = scope;
   scope->owner = (Object)func0_58_8400_57772400;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_58398480();
   scope->systemIs[1] = makemy__interpolator_60288900();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51260820();
   scope->inners[1] = makenext__data_51707160();
   scope->inners[2] = makeaddress_51707060();
   scope->inners[3] = makeremaining_52026100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58023880();
   scope->behaviors[1] = make__58023400();
   scope->behaviors[2] = make__58022840();
   scope->behaviors[3] = make__58016120();
   scope->behaviors[4] = make__58015920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_57772400() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_57772400 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_57913360();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_58053560();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_50963680();

   return systemT;
}