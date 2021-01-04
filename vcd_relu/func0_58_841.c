#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_54169100;

SignalI z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makez__value_54326820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func0_58_841_54169100;
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

SignalI a_54560420_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makea_54560420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_54560420_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func0_58_841_54169100;
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

Block __59251840;

void code__59251840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            first = value2integer(make__59280560());
            last = value2integer(make__59280540());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59251840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59251840 = block;
   block->owner = (Object)__59251540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59251840;

   return block;
};

Block __59251500;

void code__59251500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440,value2integer(make__59280400()),value2integer(make__59280380())));
      set_value_pos(pool_state);
   }
}

Block make__59251500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59251500 = block;
   block->owner = (Object)__59251040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59251500;

   return block;
};

Block __59250980;

void code__59250980() {
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
            src0 = make__59279900();
            src1 = make__59279880();
            src2 = make__59279860();
            src3 = make__59279840();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            first = value2integer(make__59279700());
            last = value2integer(make__59279640());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_53224160_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59250980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59250980 = block;
   block->owner = (Object)__59250480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59250980;

   return block;
};

Block __59252060;

void code__59252060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,address_52766520_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52824060_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,base_45434060_my__interpolator_58_842_54761900_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52950880_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,next__data_47889000_my__interpolator_58_842_54761900_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_53224160_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,remaining_48588320_my__interpolator_58_842_54761900_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49697220_my__interpolator_58_842_54761900_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,a_54560420_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59252060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59252060 = block;
   block->owner = (Object)__59285060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59252060;

   return block;
};

Block __59252000;

void code__59252000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52897340_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,base_52824060_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53231560_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,next__data_52950880_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59252000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59252000 = block;
   block->owner = (Object)__59284900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59252000;

   return block;
};

Value make__59280560() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59280540() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59280400() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59280380() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59279900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59279880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59279860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59279840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59279700() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59279640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_52739480;

SignalI base_52824060_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makebase_52824060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52824060_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func0_58_84_52739480;
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

SignalI next__data_52950880_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makenext__data_52950880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52950880_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func0_58_84_52739480;
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

SignalI address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeaddress_52950780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func0_58_84_52739480;
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

SignalI remaining_53224160_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeremaining_53224160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53224160_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func0_58_84_52739480;
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

SignalI change_53408320_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makechange_53408320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_53408320_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func0_58_84_52739480;
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

SystemI my__lut_53231420;

SystemI makemy__lut_53231420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_53231420 = systemI;
   systemI->owner = (Object)func0_58_84_52739480;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_52769020;

   return systemI;
};

SystemI my__interpolator_49696980;

SystemI makemy__interpolator_49696980() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49696980 = systemI;
   systemI->owner = (Object)func0_58_84_52739480;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_54761900;

   return systemI;
};

Behavior __59251540;

Behavior make__59251540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59251540 = behavior;
   behavior->owner = (Object)func0_58_84_52739480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59251840();

   return behavior;
}

Behavior __59251040;

Behavior make__59251040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59251040 = behavior;
   behavior->owner = (Object)func0_58_84_52739480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59251500();

   return behavior;
}

Behavior __59250480;

Behavior make__59250480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59250480 = behavior;
   behavior->owner = (Object)func0_58_84_52739480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[z__value_54326820_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59250980();

   return behavior;
}

Behavior __59285060;

Behavior make__59285060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59285060 = behavior;
   behavior->owner = (Object)func0_58_84_52739480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[address_52950780_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_52824060_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   base_52824060_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   base_52824060_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(base_52824060_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,base_52824060_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
base_52824060_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[base_52824060_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_52950880_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   next__data_52950880_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   next__data_52950880_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(next__data_52950880_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,next__data_52950880_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
next__data_52950880_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[next__data_52950880_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,remaining_53224160_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   remaining_53224160_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   remaining_53224160_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(remaining_53224160_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,remaining_53224160_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
remaining_53224160_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[remaining_53224160_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49697220_my__interpolator_58_842_54761900_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   interpolated__value_49697220_my__interpolator_58_842_54761900_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   interpolated__value_49697220_my__interpolator_58_842_54761900_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(interpolated__value_49697220_my__interpolator_58_842_54761900_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,interpolated__value_49697220_my__interpolator_58_842_54761900_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
interpolated__value_49697220_my__interpolator_58_842_54761900_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[interpolated__value_49697220_my__interpolator_58_842_54761900_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59252060();

   return behavior;
}

Behavior __59284900;

Behavior make__59284900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59284900 = behavior;
   behavior->owner = (Object)func0_58_84_52739480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52897340_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   base_52897340_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   base_52897340_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(base_52897340_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,base_52897340_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
base_52897340_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[base_52897340_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_53231560_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   next__data_53231560_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   next__data_53231560_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(next__data_53231560_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,next__data_53231560_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
next__data_53231560_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[next__data_53231560_my__lut_58_842_52769020_func0_58_84_52739480_func0_58_841_54169100_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59252000();

   return behavior;
}

Scope makefunc0_58_84_52739480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_52739480 = scope;
   scope->owner = (Object)func0_58_841_54169100;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_53231420();
   scope->systemIs[1] = makemy__interpolator_49696980();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_52824060();
   scope->inners[1] = makenext__data_52950880();
   scope->inners[2] = makeaddress_52950780();
   scope->inners[3] = makeremaining_53224160();
   scope->inners[4] = makechange_53408320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59251540();
   scope->behaviors[1] = make__59251040();
   scope->behaviors[2] = make__59250480();
   scope->behaviors[3] = make__59285060();
   scope->behaviors[4] = make__59284900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_54169100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_54169100 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_54326820();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_54560420();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_52739480();

   return systemT;
}