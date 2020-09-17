#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_58409440;

SignalI z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makez__value_58523960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func0_58_8400_58409440;
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

SignalI a_58632460_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makea_58632460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_58632460_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func0_58_8400_58409440;
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

Block __47795340;

void code__47795340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
            first = value2integer(make__47968580());
            last = value2integer(make__47968560());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__47795340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47795340 = block;
   block->owner = (Object)__47794020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47795340;

   return block;
};

Block __47793800;

void code__47793800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080,value2integer(make__47968300()),value2integer(make__47968200())));
      set_value_pos(pool_state);
   }
}

Block make__47793800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47793800 = block;
   block->owner = (Object)__47792680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47793800;

   return block;
};

Block __47792460;

void code__47792460() {
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
            src0 = make__47964240();
            src1 = make__47988600();
            src2 = make__47988420();
            src3 = make__47988340();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
            first = value2integer(make__47987880());
            last = value2integer(make__47987860());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_59709700_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__47792460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47792460 = block;
   block->owner = (Object)__47811020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47792460;

   return block;
};

Block __47796140;

void code__47796140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,address_59823980_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_59709700_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,remaining_61709340_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59412320_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,base_61786940_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59475080_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,next__data_61913660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47493660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,a_58632460_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__47796140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47796140 = block;
   block->owner = (Object)__47915640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47796140;

   return block;
};

Block __47795880;

void code__47795880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_60040680_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,base_59412320_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_60159180_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,next__data_59475080_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__47795880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47795880 = block;
   block->owner = (Object)__47915380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47795880;

   return block;
};

Value make__47968580() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47968560() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47968300() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47968200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47964240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47988600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47988420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47988340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47987880() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47987860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_59349860;

SignalI base_59412320_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makebase_59412320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_59412320_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func0_58_840_59349860;
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

SignalI next__data_59475080_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makenext__data_59475080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_59475080_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func0_58_840_59349860;
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

SignalI address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeaddress_59475000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func0_58_840_59349860;
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

SignalI remaining_59709700_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeremaining_59709700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_59709700_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)func0_58_840_59349860;
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

SystemI my__lut_60159040;

SystemI makemy__lut_60159040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_60159040 = systemI;
   systemI->owner = (Object)func0_58_840_59349860;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_59825980;

   return systemI;
};

SystemI my__interpolator_47493380;

SystemI makemy__interpolator_47493380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47493380 = systemI;
   systemI->owner = (Object)func0_58_840_59349860;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_61306020;

   return systemI;
};

Behavior __47794020;

Behavior make__47794020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47794020 = behavior;
   behavior->owner = (Object)func0_58_840_59349860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__47795340();

   return behavior;
}

Behavior __47792680;

Behavior make__47792680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47792680 = behavior;
   behavior->owner = (Object)func0_58_840_59349860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__47793800();

   return behavior;
}

Behavior __47811020;

Behavior make__47811020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47811020 = behavior;
   behavior->owner = (Object)func0_58_840_59349860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__47792460();

   return behavior;
}

Behavior __47915640;

Behavior make__47915640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47915640 = behavior;
   behavior->owner = (Object)func0_58_840_59349860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[address_59475000_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_59709700_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   remaining_59709700_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   remaining_59709700_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(remaining_59709700_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,remaining_59709700_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
remaining_59709700_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[remaining_59709700_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_59412320_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   base_59412320_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   base_59412320_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(base_59412320_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,base_59412320_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
base_59412320_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[base_59412320_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_59475080_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   next__data_59475080_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   next__data_59475080_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(next__data_59475080_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,next__data_59475080_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
next__data_59475080_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[next__data_59475080_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_47493660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   interpolated__value_47493660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   interpolated__value_47493660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(interpolated__value_47493660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,interpolated__value_47493660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
interpolated__value_47493660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[interpolated__value_47493660_my__interpolator_58_8410_61306020_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__47796140();

   return behavior;
}

Behavior __47915380;

Behavior make__47915380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47915380 = behavior;
   behavior->owner = (Object)func0_58_840_59349860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_60040680_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   base_60040680_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   base_60040680_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(base_60040680_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,base_60040680_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
base_60040680_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[base_60040680_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_60159180_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   next__data_60159180_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   next__data_60159180_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(next__data_60159180_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,next__data_60159180_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
next__data_60159180_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[next__data_60159180_my__lut_58_8410_59825980_func0_58_840_59349860_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__47795880();

   return behavior;
}

Scope makefunc0_58_840_59349860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_59349860 = scope;
   scope->owner = (Object)func0_58_8400_58409440;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_60159040();
   scope->systemIs[1] = makemy__interpolator_47493380();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_59412320();
   scope->inners[1] = makenext__data_59475080();
   scope->inners[2] = makeaddress_59475000();
   scope->inners[3] = makeremaining_59709700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47794020();
   scope->behaviors[1] = make__47792680();
   scope->behaviors[2] = make__47811020();
   scope->behaviors[3] = make__47915640();
   scope->behaviors[4] = make__47915380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_58409440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_58409440 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_58523960();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_58632460();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_59349860();

   return systemT;
}