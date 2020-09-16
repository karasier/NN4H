#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func10_58_840_52739400;

SignalI z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makez__value_52297100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func10_58_840_52739400;
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

SignalI a_58074380_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makea_58074380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_58074380_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func10_58_840_52739400;
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

Block __60869800;

void code__60869800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
            first = value2integer(make__60916320());
            last = value2integer(make__60916300());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60869800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60869800 = block;
   block->owner = (Object)__60869540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60869800;

   return block;
};

Block __60869500;

void code__60869500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220,value2integer(make__60916160()),value2integer(make__60916140())));
      set_value_pos(pool_state);
   }
}

Block make__60869500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60869500 = block;
   block->owner = (Object)__60869200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60869500;

   return block;
};

Block __60869140;

void code__60869140() {
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
            src0 = make__60940120();
            src1 = make__60940100();
            src2 = make__60940080();
            src3 = make__60940060();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
            first = value2integer(make__60939940());
            last = value2integer(make__60939900());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_59212180_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60869140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60869140 = block;
   block->owner = (Object)__60868540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60869140;

   return block;
};

Block __60870020;

void code__60870020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,address_59271760_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_59212180_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,remaining_60919680_my__interpolator_58_8410_60704800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_58972040_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,base_61193960_my__interpolator_58_8410_60704800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59034800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,next__data_61238800_my__interpolator_58_8410_60704800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_61414600_my__interpolator_58_8410_60704800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,a_58074380_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60870020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60870020 = block;
   block->owner = (Object)__60920580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60870020;

   return block;
};

Block __60869960;

void code__60869960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59529480_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,base_58972040_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59590780_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,next__data_59034800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60869960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60869960 = block;
   block->owner = (Object)__60920420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60869960;

   return block;
};

Value make__60916320() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60916300() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60916160() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60916140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60940120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60940100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60940080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60940060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60939940() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60939900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func10_58_84_58827700;

SignalI base_58972040_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makebase_58972040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_58972040_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func10_58_84_58827700;
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

SignalI next__data_59034800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makenext__data_59034800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_59034800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func10_58_84_58827700;
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

SignalI address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeaddress_59034720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func10_58_84_58827700;
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

SignalI remaining_59212180_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeremaining_59212180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_59212180_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)func10_58_84_58827700;
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

SystemI my__lut_59590620;

SystemI makemy__lut_59590620() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_59590620 = systemI;
   systemI->owner = (Object)func10_58_84_58827700;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_59273760;

   return systemI;
};

SystemI my__interpolator_61414460;

SystemI makemy__interpolator_61414460() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_61414460 = systemI;
   systemI->owner = (Object)func10_58_84_58827700;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_60704800;

   return systemI;
};

Behavior __60869540;

Behavior make__60869540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60869540 = behavior;
   behavior->owner = (Object)func10_58_84_58827700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60869800();

   return behavior;
}

Behavior __60869200;

Behavior make__60869200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60869200 = behavior;
   behavior->owner = (Object)func10_58_84_58827700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60869500();

   return behavior;
}

Behavior __60868540;

Behavior make__60868540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60868540 = behavior;
   behavior->owner = (Object)func10_58_84_58827700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60869140();

   return behavior;
}

Behavior __60920580;

Behavior make__60920580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60920580 = behavior;
   behavior->owner = (Object)func10_58_84_58827700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[address_59034720_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_59212180_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   remaining_59212180_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   remaining_59212180_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(remaining_59212180_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,remaining_59212180_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
remaining_59212180_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[remaining_59212180_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_58972040_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   base_58972040_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   base_58972040_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(base_58972040_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,base_58972040_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
base_58972040_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[base_58972040_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_59034800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   next__data_59034800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   next__data_59034800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(next__data_59034800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,next__data_59034800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
next__data_59034800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[next__data_59034800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_61414600_my__interpolator_58_8410_60704800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   interpolated__value_61414600_my__interpolator_58_8410_60704800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   interpolated__value_61414600_my__interpolator_58_8410_60704800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(interpolated__value_61414600_my__interpolator_58_8410_60704800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,interpolated__value_61414600_my__interpolator_58_8410_60704800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
interpolated__value_61414600_my__interpolator_58_8410_60704800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[interpolated__value_61414600_my__interpolator_58_8410_60704800_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60870020();

   return behavior;
}

Behavior __60920420;

Behavior make__60920420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60920420 = behavior;
   behavior->owner = (Object)func10_58_84_58827700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_59529480_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   base_59529480_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   base_59529480_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(base_59529480_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,base_59529480_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
base_59529480_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[base_59529480_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_59590780_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   next__data_59590780_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   next__data_59590780_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(next__data_59590780_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,next__data_59590780_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
next__data_59590780_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[next__data_59590780_my__lut_58_8410_59273760_func10_58_84_58827700_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60869960();

   return behavior;
}

Scope makefunc10_58_84_58827700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func10_58_84_58827700 = scope;
   scope->owner = (Object)func10_58_840_52739400;
   scope->name = "func10:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_59590620();
   scope->systemIs[1] = makemy__interpolator_61414460();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_58972040();
   scope->inners[1] = makenext__data_59034800();
   scope->inners[2] = makeaddress_59034720();
   scope->inners[3] = makeremaining_59212180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60869540();
   scope->behaviors[1] = make__60869200();
   scope->behaviors[2] = make__60868540();
   scope->behaviors[3] = make__60920580();
   scope->behaviors[4] = make__60920420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc10_58_840_52739400() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func10_58_840_52739400 = systemT;
systemT->owner = NULL;
   systemT->name = "func10:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52297100();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_58074380();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc10_58_84_58827700();

   return systemT;
}