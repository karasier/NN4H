#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_52466180;

SignalI z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makez__value_52613780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func0_58_841_52466180;
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

SignalI a_52810000_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makea_52810000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52810000_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func0_58_841_52466180;
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

Block __60934580;

void code__60934580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
            first = value2integer(make__60948500());
            last = value2integer(make__61005780());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60934580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60934580 = block;
   block->owner = (Object)__60934320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60934580;

   return block;
};

Block __60934280;

void code__60934280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240,value2integer(make__61005640()),value2integer(make__61005620())));
      set_value_pos(pool_state);
   }
}

Block make__60934280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60934280 = block;
   block->owner = (Object)__60934020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60934280;

   return block;
};

Block __60933980;

void code__60933980() {
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
            src0 = make__61005160();
            src1 = make__61005140();
            src2 = make__61005120();
            src3 = make__61005100();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
            first = value2integer(make__61005000());
            last = value2integer(make__61004980());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_53068400_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60933980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60933980 = block;
   block->owner = (Object)__60933520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60933980;

   return block;
};

Block __60934860;

void code__60934860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,address_51685660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_53068400_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,remaining_53398420_my__interpolator_58_842_53312000_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52859900_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,base_53610060_my__interpolator_58_842_53312000_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52992540_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,next__data_53919240_my__interpolator_58_842_53312000_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_54079320_my__interpolator_58_842_53312000_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,a_52810000_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60934860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60934860 = block;
   block->owner = (Object)__60952600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60934860;

   return block;
};

Block __60934780;

void code__60934780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51839660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,base_52859900_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52001880_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,next__data_52992540_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60934780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60934780 = block;
   block->owner = (Object)__60952440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60934780;

   return block;
};

Value make__60948500() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61005780() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61005640() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61005620() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61005160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61005140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61005120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61005100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61005000() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61004980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_52793620;

SignalI base_52859900_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makebase_52859900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52859900_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func0_58_84_52793620;
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

SignalI next__data_52992540_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makenext__data_52992540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52992540_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func0_58_84_52793620;
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

SignalI address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeaddress_52992460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func0_58_84_52793620;
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

SignalI remaining_53068400_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeremaining_53068400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53068400_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)func0_58_84_52793620;
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

SystemI my__lut_52001680;

SystemI makemy__lut_52001680() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52001680 = systemI;
   systemI->owner = (Object)func0_58_84_52793620;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_51688180;

   return systemI;
};

SystemI my__interpolator_54079180;

SystemI makemy__interpolator_54079180() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_54079180 = systemI;
   systemI->owner = (Object)func0_58_84_52793620;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_53312000;

   return systemI;
};

Behavior __60934320;

Behavior make__60934320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60934320 = behavior;
   behavior->owner = (Object)func0_58_84_52793620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60934580();

   return behavior;
}

Behavior __60934020;

Behavior make__60934020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60934020 = behavior;
   behavior->owner = (Object)func0_58_84_52793620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60934280();

   return behavior;
}

Behavior __60933520;

Behavior make__60933520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60933520 = behavior;
   behavior->owner = (Object)func0_58_84_52793620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60933980();

   return behavior;
}

Behavior __60952600;

Behavior make__60952600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60952600 = behavior;
   behavior->owner = (Object)func0_58_84_52793620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[address_52992460_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_53068400_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   remaining_53068400_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   remaining_53068400_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(remaining_53068400_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,remaining_53068400_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
remaining_53068400_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[remaining_53068400_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_52859900_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   base_52859900_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   base_52859900_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(base_52859900_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,base_52859900_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
base_52859900_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[base_52859900_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_52992540_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   next__data_52992540_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   next__data_52992540_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(next__data_52992540_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,next__data_52992540_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
next__data_52992540_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[next__data_52992540_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_54079320_my__interpolator_58_842_53312000_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   interpolated__value_54079320_my__interpolator_58_842_53312000_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   interpolated__value_54079320_my__interpolator_58_842_53312000_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(interpolated__value_54079320_my__interpolator_58_842_53312000_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,interpolated__value_54079320_my__interpolator_58_842_53312000_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
interpolated__value_54079320_my__interpolator_58_842_53312000_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[interpolated__value_54079320_my__interpolator_58_842_53312000_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60934860();

   return behavior;
}

Behavior __60952440;

Behavior make__60952440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60952440 = behavior;
   behavior->owner = (Object)func0_58_84_52793620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51839660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   base_51839660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   base_51839660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(base_51839660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,base_51839660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
base_51839660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[base_51839660_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52001880_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   next__data_52001880_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   next__data_52001880_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(next__data_52001880_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,next__data_52001880_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
next__data_52001880_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[next__data_52001880_my__lut_58_842_51688180_func0_58_84_52793620_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60934780();

   return behavior;
}

Scope makefunc0_58_84_52793620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_52793620 = scope;
   scope->owner = (Object)func0_58_841_52466180;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52001680();
   scope->systemIs[1] = makemy__interpolator_54079180();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_52859900();
   scope->inners[1] = makenext__data_52992540();
   scope->inners[2] = makeaddress_52992460();
   scope->inners[3] = makeremaining_53068400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60934320();
   scope->behaviors[1] = make__60934020();
   scope->behaviors[2] = make__60933520();
   scope->behaviors[3] = make__60952600();
   scope->behaviors[4] = make__60952440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_52466180() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_52466180 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52613780();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52810000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_52793620();

   return systemT;
}