#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_49967480;

SignalI z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makez__value_50053200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)func1_58_840_49967480;
   signalI->name = "z_value";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI a_50239440_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makea_50239440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50239440_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)func1_58_840_49967480;
   signalI->name = "a";
   signalI->type = get_type_vector(get_type_bit(),8);
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

Block __48450700;

void code__48450700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->c_value;
            first = value2integer(make__48900780());
            last = value2integer(make__48900760());
            dst = read_range(ref,first,last,get_type_bit(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__48450700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48450700 = block;
   block->owner = (Object)__48450140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48450700;

   return block;
};

Block __48449960;

void code__48449960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value;
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),({
      Value ref,dst = get_value();
      unsigned long long first,last;
      unsigned int pool_state = get_value_pos();
      ref = z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->c_value;
      first = value2integer(make__48900560());
      last = value2integer(make__48900540());
      dst = write_range(ref,first,last,get_type_bit(),dst);
      set_value_pos(pool_state);
   dst; }));
      set_value_pos(pool_state);
   }
}

Block make__48449960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48449960 = block;
   block->owner = (Object)__48449320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48449960;

   return block;
};

Block __48449200;

void code__48449200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__48900040();
            src1 = make__48900020();
            src2 = make__48899980();
            src3 = make__48899960();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_49133240___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__48449200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48449200 = block;
   block->owner = (Object)__48448680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48449200;

   return block;
};

Block __48448640;

void code__48448640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->c_value;
            first = value2integer(make__48899760());
            last = value2integer(make__48899720());
            dst = read_range(ref,first,last,get_type_bit(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),decimal__part_49133160___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__48448640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48448640 = block;
   block->owner = (Object)__48448120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48448640;

   return block;
};

Block __48447960;

void code__48447960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = decimal__part_49133160___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value;
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),({
      Value ref,dst = get_value();
      unsigned long long first,last;
      unsigned int pool_state = get_value_pos();
      ref = z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->c_value;
      first = value2integer(make__48899500());
      last = value2integer(make__48899480());
      dst = write_range(ref,first,last,get_type_bit(),dst);
      set_value_pos(pool_state);
   dst; }));
      set_value_pos(pool_state);
   }
}

Block make__48447960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48447960 = block;
   block->owner = (Object)__48447580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48447960;

   return block;
};

Block __48451020;

void code__48451020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value,addr_50575320_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->c_value,z__value_49580640_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48449980___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value,base_49826460_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49016600___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value,next__data_49964500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_49133240___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value,integer__part_50054500_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_50209960_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value,a_50239440_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__48451020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48451020 = block;
   block->owner = (Object)__48882340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48451020;

   return block;
};

Block __48450960;

void code__48450960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50659220_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value,base_48449980___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50743460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->c_value,next__data_49016600___47777900_func1_58_840_49967480___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__48450960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48450960 = block;
   block->owner = (Object)__48882140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48450960;

   return block;
};

Value make__48900780() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48900760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48900560() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48900540() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48900040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48900020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48899980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48899960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48899760() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48899720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48899500() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48899480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47777900;

SignalI base_48449980___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makebase_48449980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48449980___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)__47777900;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI next__data_49016600___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makenext__data_49016600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49016600___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)__47777900;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makeaddr_49016520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)__47777900;
   signalI->name = "addr";
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

SignalI integer__part_49133240___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makeinteger__part_49133240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_49133240___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)__47777900;
   signalI->name = "integer_part";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI decimal__part_49133160___47777900_func1_58_840_49967480___43144740______58_840_45098000;

SignalI makedecimal__part_49133160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   decimal__part_49133160___47777900_func1_58_840_49967480___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)__47777900;
   signalI->name = "decimal_part";
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

SystemI my__lut_50743280;

SystemI makemy__lut_50743280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50743280 = systemI;
   systemI->owner = (Object)__47777900;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_50536500;

   return systemI;
};

SystemI my__interpolator_50209820;

SystemI makemy__interpolator_50209820() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_50209820 = systemI;
   systemI->owner = (Object)__47777900;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_49418880;

   return systemI;
};

Behavior __48450140;

Behavior make__48450140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48450140 = behavior;
   behavior->owner = (Object)__47777900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000);
   z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->any,z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->any[z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__48450700();

   return behavior;
}

Behavior __48449320;

Behavior make__48449320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48449320 = behavior;
   behavior->owner = (Object)__47777900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__48449960();

   return behavior;
}

Behavior __48448680;

Behavior make__48448680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48448680 = behavior;
   behavior->owner = (Object)__47777900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__48449200();

   return behavior;
}

Behavior __48448120;

Behavior make__48448120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48448120 = behavior;
   behavior->owner = (Object)__47777900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000);
   z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->any,z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->any[z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__48448640();

   return behavior;
}

Behavior __48447580;

Behavior make__48447580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48447580 = behavior;
   behavior->owner = (Object)__47777900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,decimal__part_49133160___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   decimal__part_49133160___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   decimal__part_49133160___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(decimal__part_49133160___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,decimal__part_49133160___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
decimal__part_49133160___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[decimal__part_49133160___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__48447960();

   return behavior;
}

Behavior __48882340;

Behavior make__48882340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48882340 = behavior;
   behavior->owner = (Object)__47777900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[addr_49016520___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000);
   z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->any,z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->any[z__value_50053200_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_48449980___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   base_48449980___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   base_48449980___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(base_48449980___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,base_48449980___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
base_48449980___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[base_48449980___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_49016600___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   next__data_49016600___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   next__data_49016600___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(next__data_49016600___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,next__data_49016600___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
next__data_49016600___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[next__data_49016600___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_49133240___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   integer__part_49133240___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   integer__part_49133240___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(integer__part_49133240___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,integer__part_49133240___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
integer__part_49133240___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[integer__part_49133240___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_50209960_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   interpolated__value_50209960_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   interpolated__value_50209960_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(interpolated__value_50209960_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,interpolated__value_50209960_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
interpolated__value_50209960_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[interpolated__value_50209960_my__interpolator_58_8400_49418880___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__48451020();

   return behavior;
}

Behavior __48882140;

Behavior make__48882140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48882140 = behavior;
   behavior->owner = (Object)__47777900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50659220_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   base_50659220_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   base_50659220_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(base_50659220_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,base_50659220_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
base_50659220_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[base_50659220_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50743460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000);
   next__data_50743460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any += 1;
   next__data_50743460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any = realloc(next__data_50743460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any,next__data_50743460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any*sizeof(Object));
next__data_50743460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->any[next__data_50743460_my__lut_58_8400_50536500___47777900_func1_58_840_49967480___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__48450960();

   return behavior;
}

Scope make__47777900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47777900 = scope;
   scope->owner = (Object)func1_58_840_49967480;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50743280();
   scope->systemIs[1] = makemy__interpolator_50209820();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_48449980();
   scope->inners[1] = makenext__data_49016600();
   scope->inners[2] = makeaddr_49016520();
   scope->inners[3] = makeinteger__part_49133240();
   scope->inners[4] = makedecimal__part_49133160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48450140();
   scope->behaviors[1] = make__48449320();
   scope->behaviors[2] = make__48448680();
   scope->behaviors[3] = make__48448120();
   scope->behaviors[4] = make__48447580();
   scope->behaviors[5] = make__48882340();
   scope->behaviors[6] = make__48882140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_49967480() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_49967480 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_50053200();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50239440();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47777900();

   return systemT;
}