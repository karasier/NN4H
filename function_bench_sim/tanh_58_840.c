#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh_58_840_48164460;

SignalI z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540;

SignalI makez__value_48237240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)tanh_58_840_48164460;
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

SignalI a_48317980_tanh_58_840_48164460______58_84_47881340______58_840_48083540;

SignalI makea_48317980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_48317980_tanh_58_840_48164460______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)tanh_58_840_48164460;
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

Block __48097240;

void code__48097240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value;
            first = value2integer(make__48132660());
            last = value2integer(make__48132640());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
}

Block make__48097240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48097240 = block;
   block->owner = (Object)__48096980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48097240;

   return block;
};

Block __48096940;

void code__48096940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540,value2integer(make__48132500()),value2integer(make__48132480())));
      set_value_pos(pool_state);
   }
}

Block make__48096940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48096940 = block;
   block->owner = (Object)__48096640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48096940;

   return block;
};

Block __48096580;

void code__48096580() {
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
            src0 = make__48131740();
            src1 = make__48131720();
            src2 = make__48131680();
            src3 = make__48131660();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value;
            first = value2integer(make__48131460());
            last = value2integer(make__48131440());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_48161020_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
}

Block make__48096580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48096580 = block;
   block->owner = (Object)__48095580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48096580;

   return block;
};

Block __48097400;

void code__48097400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value,address_44765320_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_48161020_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value,remaining_45745240_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48051980_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value,base_46117680_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48114740_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value,next__data_46426740_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47574880_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value,a_48317980_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
}

Block make__48097400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48097400 = block;
   block->owner = (Object)__48113220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48097400;

   return block;
};

Block __48097340;

void code__48097340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_46051400_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value,base_48051980_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_46324980_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value,next__data_48114740_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
}

Block make__48097340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48097340 = block;
   block->owner = (Object)__48113060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48097340;

   return block;
};

Value make__48132660() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48132640() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48132500() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48132480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48131740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48131720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48131680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48131660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48131460() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48131440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope tanh_58_84_47981360;

SignalI base_48051980_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540;

SignalI makebase_48051980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48051980_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)tanh_58_84_47981360;
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

SignalI next__data_48114740_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540;

SignalI makenext__data_48114740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48114740_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)tanh_58_84_47981360;
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

SignalI address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540;

SignalI makeaddress_48114660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)tanh_58_84_47981360;
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

SignalI remaining_48161020_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540;

SignalI makeremaining_48161020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_48161020_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)tanh_58_84_47981360;
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

SystemI my__lut_46324420;

SystemI makemy__lut_46324420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_46324420 = systemI;
   systemI->owner = (Object)tanh_58_84_47981360;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_840_43062320;

   return systemI;
};

SystemI my__interpolator_47573960;

SystemI makemy__interpolator_47573960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47573960 = systemI;
   systemI->owner = (Object)tanh_58_84_47981360;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_840_48388580;

   return systemI;
};

Behavior __48096980;

Behavior make__48096980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48096980 = behavior;
   behavior->owner = (Object)tanh_58_84_47981360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->block = make__48097240();

   return behavior;
}

Behavior __48096640;

Behavior make__48096640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48096640 = behavior;
   behavior->owner = (Object)tanh_58_84_47981360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->block = make__48096940();

   return behavior;
}

Behavior __48095580;

Behavior make__48095580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48095580 = behavior;
   behavior->owner = (Object)tanh_58_84_47981360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->block = make__48096580();

   return behavior;
}

Behavior __48113220;

Behavior make__48113220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48113220 = behavior;
   behavior->owner = (Object)tanh_58_84_47981360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[address_48114660_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_48161020_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   remaining_48161020_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   remaining_48161020_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(remaining_48161020_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,remaining_48161020_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
remaining_48161020_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[remaining_48161020_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_48051980_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   base_48051980_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   base_48051980_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(base_48051980_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,base_48051980_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
base_48051980_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[base_48051980_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_48114740_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   next__data_48114740_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   next__data_48114740_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(next__data_48114740_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,next__data_48114740_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
next__data_48114740_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[next__data_48114740_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_47574880_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   interpolated__value_47574880_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   interpolated__value_47574880_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(interpolated__value_47574880_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,interpolated__value_47574880_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
interpolated__value_47574880_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[interpolated__value_47574880_my__interpolator_58_840_48388580_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->block = make__48097400();

   return behavior;
}

Behavior __48113060;

Behavior make__48113060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48113060 = behavior;
   behavior->owner = (Object)tanh_58_84_47981360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_46051400_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   base_46051400_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   base_46051400_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(base_46051400_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,base_46051400_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
base_46051400_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[base_46051400_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_46324980_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   next__data_46324980_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   next__data_46324980_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(next__data_46324980_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,next__data_46324980_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
next__data_46324980_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[next__data_46324980_my__lut_58_840_43062320_tanh_58_84_47981360_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->block = make__48097340();

   return behavior;
}

Scope maketanh_58_84_47981360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   tanh_58_84_47981360 = scope;
   scope->owner = (Object)tanh_58_840_48164460;
   scope->name = "tanh:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_46324420();
   scope->systemIs[1] = makemy__interpolator_47573960();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_48051980();
   scope->inners[1] = makenext__data_48114740();
   scope->inners[2] = makeaddress_48114660();
   scope->inners[3] = makeremaining_48161020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48096980();
   scope->behaviors[1] = make__48096640();
   scope->behaviors[2] = make__48095580();
   scope->behaviors[3] = make__48113220();
   scope->behaviors[4] = make__48113060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh_58_840_48164460() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh_58_840_48164460 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_48237240();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_48317980();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = maketanh_58_84_47981360();

   return systemT;
}