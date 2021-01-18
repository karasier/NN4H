#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_52870840;

SignalI z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makez__value_53214920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func0_58_8400_52870840;
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

SignalI a_53667740_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makea_53667740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_53667740_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func0_58_8400_52870840;
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

Block __58037960;

void code__58037960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
            first = value2integer(make__58065580());
            last = value2integer(make__58065560());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__58037960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58037960 = block;
   block->owner = (Object)__58037620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58037960;

   return block;
};

Block __58037520;

void code__58037520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140,value2integer(make__58065380()),value2integer(make__58065360())));
      set_value_pos(pool_state);
   }
}

Block make__58037520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58037520 = block;
   block->owner = (Object)__58036900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58037520;

   return block;
};

Block __58036860;

void code__58036860() {
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
            src0 = make__58089360();
            src1 = make__58089320();
            src2 = make__58089300();
            src3 = make__58089280();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
            first = value2integer(make__58089160());
            last = value2integer(make__58089140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_49750880_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__58036860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58036860 = block;
   block->owner = (Object)__58036380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58036860;

   return block;
};

Block __58038180;

void code__58038180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,address_58114760_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49076700_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,base_59823340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49343820_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,next__data_59884820_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_49750880_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,remaining_60093420_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_60212340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,a_53667740_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__58038180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58038180 = block;
   block->owner = (Object)__58070840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58038180;

   return block;
};

Block __58038120;

void code__58038120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_58286940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,base_49076700_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_58495940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,next__data_49343820_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__58038120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58038120 = block;
   block->owner = (Object)__58070620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58038120;

   return block;
};

Value make__58065580() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58065560() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58065380() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58065360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58089360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58089320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58089300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58089280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58089160() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58089140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_47572820;

SignalI base_49076700_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makebase_49076700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49076700_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func0_58_840_47572820;
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

SignalI next__data_49343820_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makenext__data_49343820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49343820_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func0_58_840_47572820;
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

SignalI address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeaddress_49343640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func0_58_840_47572820;
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

SignalI remaining_49750880_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeremaining_49750880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_49750880_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func0_58_840_47572820;
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

SignalI change_51089640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makechange_51089640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_51089640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func0_58_840_47572820;
   signalI->name = "change";
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

SystemI my__lut_58495800;

SystemI makemy__lut_58495800() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_58495800 = systemI;
   systemI->owner = (Object)func0_58_840_47572820;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_58117060;

   return systemI;
};

SystemI my__interpolator_60212200;

SystemI makemy__interpolator_60212200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_60212200 = systemI;
   systemI->owner = (Object)func0_58_840_47572820;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_59658360;

   return systemI;
};

Behavior __58037620;

Behavior make__58037620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58037620 = behavior;
   behavior->owner = (Object)func0_58_840_47572820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__58037960();

   return behavior;
}

Behavior __58036900;

Behavior make__58036900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58036900 = behavior;
   behavior->owner = (Object)func0_58_840_47572820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__58037520();

   return behavior;
}

Behavior __58036380;

Behavior make__58036380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58036380 = behavior;
   behavior->owner = (Object)func0_58_840_47572820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__58036860();

   return behavior;
}

Behavior __58070840;

Behavior make__58070840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58070840 = behavior;
   behavior->owner = (Object)func0_58_840_47572820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[address_49343640_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_49076700_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   base_49076700_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   base_49076700_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(base_49076700_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,base_49076700_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
base_49076700_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[base_49076700_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_49343820_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   next__data_49343820_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   next__data_49343820_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(next__data_49343820_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,next__data_49343820_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
next__data_49343820_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[next__data_49343820_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,remaining_49750880_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   remaining_49750880_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   remaining_49750880_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(remaining_49750880_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,remaining_49750880_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
remaining_49750880_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[remaining_49750880_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_60212340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   interpolated__value_60212340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   interpolated__value_60212340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(interpolated__value_60212340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,interpolated__value_60212340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
interpolated__value_60212340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[interpolated__value_60212340_my__interpolator_58_8410_59658360_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__58038180();

   return behavior;
}

Behavior __58070620;

Behavior make__58070620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58070620 = behavior;
   behavior->owner = (Object)func0_58_840_47572820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_58286940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   base_58286940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   base_58286940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(base_58286940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,base_58286940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
base_58286940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[base_58286940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_58495940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   next__data_58495940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   next__data_58495940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(next__data_58495940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,next__data_58495940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
next__data_58495940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[next__data_58495940_my__lut_58_8410_58117060_func0_58_840_47572820_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__58038120();

   return behavior;
}

Scope makefunc0_58_840_47572820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_47572820 = scope;
   scope->owner = (Object)func0_58_8400_52870840;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_58495800();
   scope->systemIs[1] = makemy__interpolator_60212200();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_49076700();
   scope->inners[1] = makenext__data_49343820();
   scope->inners[2] = makeaddress_49343640();
   scope->inners[3] = makeremaining_49750880();
   scope->inners[4] = makechange_51089640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58037620();
   scope->behaviors[1] = make__58036900();
   scope->behaviors[2] = make__58036380();
   scope->behaviors[3] = make__58070840();
   scope->behaviors[4] = make__58070620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_52870840() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_52870840 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_53214920();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_53667740();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_47572820();

   return systemT;
}