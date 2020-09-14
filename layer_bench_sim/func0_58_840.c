#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_53306240;

SignalI z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makez__value_53590200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func0_58_840_53306240;
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

SignalI a_53773980_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makea_53773980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_53773980_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func0_58_840_53306240;
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

Block __60506780;

void code__60506780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
            first = value2integer(make__60545240());
            last = value2integer(make__60545220());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60506780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60506780 = block;
   block->owner = (Object)__60506520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60506780;

   return block;
};

Block __60506480;

void code__60506480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700,value2integer(make__60545080()),value2integer(make__60545060())));
      set_value_pos(pool_state);
   }
}

Block make__60506480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60506480 = block;
   block->owner = (Object)__60506120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60506480;

   return block;
};

Block __60530560;

void code__60530560() {
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
            src0 = make__60544480();
            src1 = make__60544460();
            src2 = make__60544420();
            src3 = make__60544400();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value;
            first = value2integer(make__60544300());
            last = value2integer(make__60544260());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_54039400_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60530560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60530560 = block;
   block->owner = (Object)__60530060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60530560;

   return block;
};

Block __60507000;

void code__60507000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,address_52637480_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_54039400_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,remaining_47732500_my__interpolator_58_842_47372240_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53757560_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,base_48176580_my__interpolator_58_842_47372240_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53840600_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,next__data_49321620_my__interpolator_58_842_47372240_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_48902560_my__interpolator_58_842_47372240_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,a_53773980_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60507000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60507000 = block;
   block->owner = (Object)__60524800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60507000;

   return block;
};

Block __60506940;

void code__60506940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52758540_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,base_53757560_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52871700_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,next__data_53840600_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60506940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60506940 = block;
   block->owner = (Object)__60524640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60506940;

   return block;
};

Value make__60545240() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60545220() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60545080() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60545060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60544480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60544460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60544420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60544400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60544300() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60544260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_53552200;

SignalI base_53757560_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makebase_53757560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53757560_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func0_58_84_53552200;
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

SignalI next__data_53840600_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makenext__data_53840600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53840600_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func0_58_84_53552200;
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

SignalI address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makeaddress_53840460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func0_58_84_53552200;
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

SignalI remaining_54039400_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700;

SignalI makeremaining_54039400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_54039400_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)func0_58_84_53552200;
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

SystemI my__lut_52871540;

SystemI makemy__lut_52871540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52871540 = systemI;
   systemI->owner = (Object)func0_58_84_53552200;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_52640040;

   return systemI;
};

SystemI my__interpolator_48902020;

SystemI makemy__interpolator_48902020() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_48902020 = systemI;
   systemI->owner = (Object)func0_58_84_53552200;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_47372240;

   return systemI;
};

Behavior __60506520;

Behavior make__60506520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60506520 = behavior;
   behavior->owner = (Object)func0_58_84_53552200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60506780();

   return behavior;
}

Behavior __60506120;

Behavior make__60506120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60506120 = behavior;
   behavior->owner = (Object)func0_58_84_53552200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60506480();

   return behavior;
}

Behavior __60530060;

Behavior make__60530060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60530060 = behavior;
   behavior->owner = (Object)func0_58_84_53552200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[z__value_53590200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60530560();

   return behavior;
}

Behavior __60524800;

Behavior make__60524800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60524800 = behavior;
   behavior->owner = (Object)func0_58_84_53552200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[address_53840460_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_54039400_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   remaining_54039400_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   remaining_54039400_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(remaining_54039400_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,remaining_54039400_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
remaining_54039400_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[remaining_54039400_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53757560_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   base_53757560_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   base_53757560_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(base_53757560_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,base_53757560_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
base_53757560_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[base_53757560_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53840600_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   next__data_53840600_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   next__data_53840600_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(next__data_53840600_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,next__data_53840600_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
next__data_53840600_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[next__data_53840600_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_48902560_my__interpolator_58_842_47372240_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   interpolated__value_48902560_my__interpolator_58_842_47372240_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   interpolated__value_48902560_my__interpolator_58_842_47372240_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(interpolated__value_48902560_my__interpolator_58_842_47372240_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,interpolated__value_48902560_my__interpolator_58_842_47372240_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
interpolated__value_48902560_my__interpolator_58_842_47372240_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[interpolated__value_48902560_my__interpolator_58_842_47372240_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60507000();

   return behavior;
}

Behavior __60524640;

Behavior make__60524640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60524640 = behavior;
   behavior->owner = (Object)func0_58_84_53552200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52758540_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   base_52758540_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   base_52758540_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(base_52758540_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,base_52758540_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
base_52758540_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[base_52758540_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52871700_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   next__data_52871700_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   next__data_52871700_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(next__data_52871700_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,next__data_52871700_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
next__data_52871700_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[next__data_52871700_my__lut_58_842_52640040_func0_58_84_53552200_func0_58_840_53306240_layer__hidden_58_84_49756180_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60506940();

   return behavior;
}

Scope makefunc0_58_84_53552200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_53552200 = scope;
   scope->owner = (Object)func0_58_840_53306240;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52871540();
   scope->systemIs[1] = makemy__interpolator_48902020();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53757560();
   scope->inners[1] = makenext__data_53840600();
   scope->inners[2] = makeaddress_53840460();
   scope->inners[3] = makeremaining_54039400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60506520();
   scope->behaviors[1] = make__60506120();
   scope->behaviors[2] = make__60530060();
   scope->behaviors[3] = make__60524800();
   scope->behaviors[4] = make__60524640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_53306240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_53306240 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_53590200();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_53773980();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_53552200();

   return systemT;
}