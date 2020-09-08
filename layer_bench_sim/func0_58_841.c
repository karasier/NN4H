#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_53880540;

SignalI z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makez__value_54083260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func0_58_841_53880540;
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

SignalI a_45226680_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makea_45226680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_45226680_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func0_58_841_53880540;
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

Block __61528080;

void code__61528080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
            first = value2integer(make__61547720());
            last = value2integer(make__61547700());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61528080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61528080 = block;
   block->owner = (Object)__61526520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61528080;

   return block;
};

Block __61526280;

void code__61526280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100,value2integer(make__61547560()),value2integer(make__61547540())));
      set_value_pos(pool_state);
   }
}

Block make__61526280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61526280 = block;
   block->owner = (Object)__61525600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61526280;

   return block;
};

Block __61525560;

void code__61525560() {
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
            src0 = make__61546920();
            src1 = make__61546900();
            src2 = make__61546840();
            src3 = make__61546820();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value;
            first = value2integer(make__61546720());
            last = value2integer(make__61546700());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_53719420_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61525560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61525560 = block;
   block->owner = (Object)__61525080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61525560;

   return block;
};

Block __61528600;

void code__61528600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,address_52603920_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_53719420_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,remaining_48570780_my__interpolator_58_842_47697180_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53210560_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,base_48932860_my__interpolator_58_842_47697180_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53448620_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,next__data_49097660_my__interpolator_58_842_47697180_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49342760_my__interpolator_58_842_47697180_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,a_45226680_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61528600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61528600 = block;
   block->owner = (Object)__61552160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61528600;

   return block;
};

Block __61528360;

void code__61528360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52730500_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,base_53210560_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52815860_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,next__data_53448620_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61528360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61528360 = block;
   block->owner = (Object)__61551980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61528360;

   return block;
};

Value make__61547720() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61547700() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61547560() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61547540() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61546920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61546900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61546840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61546820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61546720() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61546700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_53063100;

SignalI base_53210560_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makebase_53210560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53210560_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func0_58_84_53063100;
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

SignalI next__data_53448620_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makenext__data_53448620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53448620_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func0_58_84_53063100;
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

SignalI address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeaddress_53448540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func0_58_84_53063100;
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

SignalI remaining_53719420_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100;

SignalI makeremaining_53719420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53719420_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)func0_58_84_53063100;
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

SystemI my__lut_52815720;

SystemI makemy__lut_52815720() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52815720 = systemI;
   systemI->owner = (Object)func0_58_84_53063100;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_52606600;

   return systemI;
};

SystemI my__interpolator_49342600;

SystemI makemy__interpolator_49342600() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49342600 = systemI;
   systemI->owner = (Object)func0_58_84_53063100;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_47697180;

   return systemI;
};

Behavior __61526520;

Behavior make__61526520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61526520 = behavior;
   behavior->owner = (Object)func0_58_84_53063100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61528080();

   return behavior;
}

Behavior __61525600;

Behavior make__61525600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61525600 = behavior;
   behavior->owner = (Object)func0_58_84_53063100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61526280();

   return behavior;
}

Behavior __61525080;

Behavior make__61525080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61525080 = behavior;
   behavior->owner = (Object)func0_58_84_53063100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[z__value_54083260_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61525560();

   return behavior;
}

Behavior __61552160;

Behavior make__61552160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61552160 = behavior;
   behavior->owner = (Object)func0_58_84_53063100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[address_53448540_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_53719420_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   remaining_53719420_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   remaining_53719420_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(remaining_53719420_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,remaining_53719420_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
remaining_53719420_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[remaining_53719420_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53210560_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   base_53210560_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   base_53210560_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(base_53210560_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,base_53210560_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
base_53210560_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[base_53210560_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53448620_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   next__data_53448620_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   next__data_53448620_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(next__data_53448620_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,next__data_53448620_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
next__data_53448620_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[next__data_53448620_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49342760_my__interpolator_58_842_47697180_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   interpolated__value_49342760_my__interpolator_58_842_47697180_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   interpolated__value_49342760_my__interpolator_58_842_47697180_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(interpolated__value_49342760_my__interpolator_58_842_47697180_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,interpolated__value_49342760_my__interpolator_58_842_47697180_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
interpolated__value_49342760_my__interpolator_58_842_47697180_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[interpolated__value_49342760_my__interpolator_58_842_47697180_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61528600();

   return behavior;
}

Behavior __61551980;

Behavior make__61551980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61551980 = behavior;
   behavior->owner = (Object)func0_58_84_53063100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52730500_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   base_52730500_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   base_52730500_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(base_52730500_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,base_52730500_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
base_52730500_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[base_52730500_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52815860_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   next__data_52815860_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   next__data_52815860_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(next__data_52815860_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,next__data_52815860_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
next__data_52815860_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[next__data_52815860_my__lut_58_842_52606600_func0_58_84_53063100_func0_58_841_53880540_layer0_58_84_48639220_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__61528360();

   return behavior;
}

Scope makefunc0_58_84_53063100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_53063100 = scope;
   scope->owner = (Object)func0_58_841_53880540;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52815720();
   scope->systemIs[1] = makemy__interpolator_49342600();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53210560();
   scope->inners[1] = makenext__data_53448620();
   scope->inners[2] = makeaddress_53448540();
   scope->inners[3] = makeremaining_53719420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61526520();
   scope->behaviors[1] = make__61525600();
   scope->behaviors[2] = make__61525080();
   scope->behaviors[3] = make__61552160();
   scope->behaviors[4] = make__61551980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_53880540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_53880540 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_54083260();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_45226680();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_53063100();

   return systemT;
}