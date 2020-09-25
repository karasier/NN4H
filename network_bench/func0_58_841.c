#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_49472420;

SignalI z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makez__value_49647840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)func0_58_841_49472420;
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

SignalI a_50236120_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makea_50236120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50236120_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)func0_58_841_49472420;
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

Block __58859800;

void code__58859800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
            first = value2integer(make__59018300());
            last = value2integer(make__59018280());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__58859800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58859800 = block;
   block->owner = (Object)__58859540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58859800;

   return block;
};

Block __58933180;

void code__58933180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720,value2integer(make__59018080()),value2integer(make__59018060())));
      set_value_pos(pool_state);
   }
}

Block make__58933180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58933180 = block;
   block->owner = (Object)__58932880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58933180;

   return block;
};

Block __58932840;

void code__58932840() {
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
            src0 = make__59017460();
            src1 = make__59017440();
            src2 = make__59017420();
            src3 = make__59017400();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
            first = value2integer(make__59017240());
            last = value2integer(make__59017220());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_50453200_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__58932840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58932840 = block;
   block->owner = (Object)__58932240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58932840;

   return block;
};

Block __58860080;

void code__58860080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,address_51236900_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_50453200_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,remaining_49456020_my__interpolator_58_842_49205860_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49697100_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,base_49611500_my__interpolator_58_842_49205860_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50303720_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,next__data_50224280_my__interpolator_58_842_49205860_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_50415840_my__interpolator_58_842_49205860_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,a_50236120_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__58860080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58860080 = block;
   block->owner = (Object)__58925120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58860080;

   return block;
};

Block __58860000;

void code__58860000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51382000_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,base_49697100_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51523500_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,next__data_50303720_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__58860000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58860000 = block;
   block->owner = (Object)__59023140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58860000;

   return block;
};

Value make__59018300() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59018280() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59018080() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59018060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59017460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59017440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59017420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59017400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59017240() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59017220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_48787540;

SignalI base_49697100_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makebase_49697100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49697100_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)func0_58_84_48787540;
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

SignalI next__data_50303720_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makenext__data_50303720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50303720_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)func0_58_84_48787540;
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

SignalI address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeaddress_50303640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)func0_58_84_48787540;
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

SignalI remaining_50453200_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeremaining_50453200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_50453200_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)func0_58_84_48787540;
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

SystemI my__lut_51523340;

SystemI makemy__lut_51523340() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_51523340 = systemI;
   systemI->owner = (Object)func0_58_84_48787540;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_51240060;

   return systemI;
};

SystemI my__interpolator_50415680;

SystemI makemy__interpolator_50415680() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_50415680 = systemI;
   systemI->owner = (Object)func0_58_84_48787540;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_49205860;

   return systemI;
};

Behavior __58859540;

Behavior make__58859540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58859540 = behavior;
   behavior->owner = (Object)func0_58_84_48787540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__58859800();

   return behavior;
}

Behavior __58932880;

Behavior make__58932880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58932880 = behavior;
   behavior->owner = (Object)func0_58_84_48787540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__58933180();

   return behavior;
}

Behavior __58932240;

Behavior make__58932240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58932240 = behavior;
   behavior->owner = (Object)func0_58_84_48787540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[z__value_49647840_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__58932840();

   return behavior;
}

Behavior __58925120;

Behavior make__58925120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58925120 = behavior;
   behavior->owner = (Object)func0_58_84_48787540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[address_50303640_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_50453200_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   remaining_50453200_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   remaining_50453200_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(remaining_50453200_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,remaining_50453200_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
remaining_50453200_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[remaining_50453200_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_49697100_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   base_49697100_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   base_49697100_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(base_49697100_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,base_49697100_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
base_49697100_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[base_49697100_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_50303720_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   next__data_50303720_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   next__data_50303720_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(next__data_50303720_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,next__data_50303720_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
next__data_50303720_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[next__data_50303720_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_50415840_my__interpolator_58_842_49205860_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   interpolated__value_50415840_my__interpolator_58_842_49205860_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   interpolated__value_50415840_my__interpolator_58_842_49205860_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(interpolated__value_50415840_my__interpolator_58_842_49205860_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,interpolated__value_50415840_my__interpolator_58_842_49205860_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
interpolated__value_50415840_my__interpolator_58_842_49205860_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[interpolated__value_50415840_my__interpolator_58_842_49205860_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__58860080();

   return behavior;
}

Behavior __59023140;

Behavior make__59023140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59023140 = behavior;
   behavior->owner = (Object)func0_58_84_48787540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51382000_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   base_51382000_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   base_51382000_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(base_51382000_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,base_51382000_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
base_51382000_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[base_51382000_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51523500_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   next__data_51523500_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   next__data_51523500_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(next__data_51523500_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,next__data_51523500_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
next__data_51523500_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[next__data_51523500_my__lut_58_842_51240060_func0_58_84_48787540_func0_58_841_49472420_layer0_58_84_49459200_layer0_58_840_57910120_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__58860000();

   return behavior;
}

Scope makefunc0_58_84_48787540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_48787540 = scope;
   scope->owner = (Object)func0_58_841_49472420;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_51523340();
   scope->systemIs[1] = makemy__interpolator_50415680();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_49697100();
   scope->inners[1] = makenext__data_50303720();
   scope->inners[2] = makeaddress_50303640();
   scope->inners[3] = makeremaining_50453200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58859540();
   scope->behaviors[1] = make__58932880();
   scope->behaviors[2] = make__58932240();
   scope->behaviors[3] = make__58925120();
   scope->behaviors[4] = make__59023140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_49472420() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_49472420 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49647840();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50236120();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_48787540();

   return systemT;
}