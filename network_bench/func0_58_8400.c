#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_59152420;

SignalI z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makez__value_59235820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)func0_58_8400_59152420;
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

SignalI a_59412680_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makea_59412680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_59412680_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)func0_58_8400_59152420;
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

Block __59530680;

void code__59530680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
            first = value2integer(make__59541380());
            last = value2integer(make__59541360());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59530680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59530680 = block;
   block->owner = (Object)__59530320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59530680;

   return block;
};

Block __59530280;

void code__59530280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720,value2integer(make__59541220()),value2integer(make__59541200())));
      set_value_pos(pool_state);
   }
}

Block make__59530280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59530280 = block;
   block->owner = (Object)__59529920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59530280;

   return block;
};

Block __59529880;

void code__59529880() {
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
            src0 = make__59540680();
            src1 = make__59540660();
            src2 = make__59540580();
            src3 = make__59540560();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
            first = value2integer(make__59540440());
            last = value2integer(make__59540420());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_57824400_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59529880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59529880 = block;
   block->owner = (Object)__59529140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59529880;

   return block;
};

Block __59530940;

void code__59530940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,address_59430020_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_57824400_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,remaining_50867680_my__interpolator_58_8410_50530640_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_57564320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,base_51359080_my__interpolator_58_8410_50530640_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_57736300_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,next__data_51637980_my__interpolator_58_8410_50530640_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_52027680_my__interpolator_58_8410_50530640_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,a_59412680_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59530940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59530940 = block;
   block->owner = (Object)__59547160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59530940;

   return block;
};

Block __59530880;

void code__59530880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59541740_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,base_57564320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59621480_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,next__data_57736300_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59530880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59530880 = block;
   block->owner = (Object)__59546900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59530880;

   return block;
};

Value make__59541380() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59541360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59541220() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59541200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59540680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59540660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59540580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59540560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59540440() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59540420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_57482520;

SignalI base_57564320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makebase_57564320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_57564320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)func0_58_840_57482520;
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

SignalI next__data_57736300_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makenext__data_57736300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_57736300_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)func0_58_840_57482520;
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

SignalI address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeaddress_57736220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)func0_58_840_57482520;
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

SignalI remaining_57824400_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeremaining_57824400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_57824400_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)func0_58_840_57482520;
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

SystemI my__lut_59662260;

SystemI makemy__lut_59662260() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_59662260 = systemI;
   systemI->owner = (Object)func0_58_840_57482520;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_59432320;

   return systemI;
};

SystemI my__interpolator_52051380;

SystemI makemy__interpolator_52051380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_52051380 = systemI;
   systemI->owner = (Object)func0_58_840_57482520;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_50530640;

   return systemI;
};

Behavior __59530320;

Behavior make__59530320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59530320 = behavior;
   behavior->owner = (Object)func0_58_840_57482520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59530680();

   return behavior;
}

Behavior __59529920;

Behavior make__59529920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59529920 = behavior;
   behavior->owner = (Object)func0_58_840_57482520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59530280();

   return behavior;
}

Behavior __59529140;

Behavior make__59529140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59529140 = behavior;
   behavior->owner = (Object)func0_58_840_57482520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59529880();

   return behavior;
}

Behavior __59547160;

Behavior make__59547160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59547160 = behavior;
   behavior->owner = (Object)func0_58_840_57482520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[address_57736220_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_57824400_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   remaining_57824400_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   remaining_57824400_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(remaining_57824400_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,remaining_57824400_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
remaining_57824400_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[remaining_57824400_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_57564320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   base_57564320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   base_57564320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(base_57564320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,base_57564320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
base_57564320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[base_57564320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_57736300_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   next__data_57736300_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   next__data_57736300_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(next__data_57736300_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,next__data_57736300_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
next__data_57736300_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[next__data_57736300_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_52027680_my__interpolator_58_8410_50530640_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   interpolated__value_52027680_my__interpolator_58_8410_50530640_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   interpolated__value_52027680_my__interpolator_58_8410_50530640_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(interpolated__value_52027680_my__interpolator_58_8410_50530640_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,interpolated__value_52027680_my__interpolator_58_8410_50530640_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
interpolated__value_52027680_my__interpolator_58_8410_50530640_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[interpolated__value_52027680_my__interpolator_58_8410_50530640_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59530940();

   return behavior;
}

Behavior __59546900;

Behavior make__59546900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59546900 = behavior;
   behavior->owner = (Object)func0_58_840_57482520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_59541740_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   base_59541740_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   base_59541740_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(base_59541740_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,base_59541740_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
base_59541740_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[base_59541740_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_59621480_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   next__data_59621480_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   next__data_59621480_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(next__data_59621480_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,next__data_59621480_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
next__data_59621480_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[next__data_59621480_my__lut_58_8410_59432320_func0_58_840_57482520_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59530880();

   return behavior;
}

Scope makefunc0_58_840_57482520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_57482520 = scope;
   scope->owner = (Object)func0_58_8400_59152420;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_59662260();
   scope->systemIs[1] = makemy__interpolator_52051380();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_57564320();
   scope->inners[1] = makenext__data_57736300();
   scope->inners[2] = makeaddress_57736220();
   scope->inners[3] = makeremaining_57824400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59530320();
   scope->behaviors[1] = make__59529920();
   scope->behaviors[2] = make__59529140();
   scope->behaviors[3] = make__59547160();
   scope->behaviors[4] = make__59546900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_59152420() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_59152420 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_59235820();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_59412680();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_57482520();

   return systemT;
}