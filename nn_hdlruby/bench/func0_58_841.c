#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_51014340;

SignalI z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makez__value_51222420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func0_58_841_51014340;
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

SignalI a_51499720_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makea_51499720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_51499720_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func0_58_841_51014340;
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

Block __52853100;

void code__52853100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
            first = value2integer(make__52944560());
            last = value2integer(make__52944500());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__52853100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52853100 = block;
   block->owner = (Object)__52852240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52853100;

   return block;
};

Block __52852200;

void code__52852200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140,value2integer(make__52943720()),value2integer(make__52943700())));
      set_value_pos(pool_state);
   }
}

Block make__52852200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52852200 = block;
   block->owner = (Object)__52851460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52852200;

   return block;
};

Block __52851200;

void code__52851200() {
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
            src0 = make__52942760();
            src1 = make__52942740();
            src2 = make__52942700();
            src3 = make__52942640();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
            first = value2integer(make__52942160());
            last = value2integer(make__52942140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_51840420_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__52851200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52851200 = block;
   block->owner = (Object)__52849860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52851200;

   return block;
};

Block __52853400;

void code__52853400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,address_52822640_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51343780_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,base_51016800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51530320_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,next__data_51197800_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_51840420_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,remaining_51412680_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_51698740_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,a_51499720_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__52853400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52853400 = block;
   block->owner = (Object)__52881580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52853400;

   return block;
};

Block __52853320;

void code__52853320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52948700_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,base_51343780_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53205060_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,next__data_51530320_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__52853320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52853320 = block;
   block->owner = (Object)__52881080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52853320;

   return block;
};

Value make__52944560() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52944500() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52943720() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52943700() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52942760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52942740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52942700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52942640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52942160() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52942140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_51134760;

SignalI base_51343780_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makebase_51343780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51343780_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func0_58_84_51134760;
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

SignalI next__data_51530320_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makenext__data_51530320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51530320_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func0_58_84_51134760;
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

SignalI address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeaddress_51530220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func0_58_84_51134760;
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

SignalI remaining_51840420_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeremaining_51840420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51840420_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func0_58_84_51134760;
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

SignalI change_52043620_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makechange_52043620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_52043620_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)func0_58_84_51134760;
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

SystemI my__lut_53204920;

SystemI makemy__lut_53204920() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_53204920 = systemI;
   systemI->owner = (Object)func0_58_84_51134760;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_52825680;

   return systemI;
};

SystemI my__interpolator_51698600;

SystemI makemy__interpolator_51698600() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_51698600 = systemI;
   systemI->owner = (Object)func0_58_84_51134760;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_49810980;

   return systemI;
};

Behavior __52852240;

Behavior make__52852240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52852240 = behavior;
   behavior->owner = (Object)func0_58_84_51134760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__52853100();

   return behavior;
}

Behavior __52851460;

Behavior make__52851460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52851460 = behavior;
   behavior->owner = (Object)func0_58_84_51134760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__52852200();

   return behavior;
}

Behavior __52849860;

Behavior make__52849860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52849860 = behavior;
   behavior->owner = (Object)func0_58_84_51134760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[z__value_51222420_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__52851200();

   return behavior;
}

Behavior __52881580;

Behavior make__52881580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52881580 = behavior;
   behavior->owner = (Object)func0_58_84_51134760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[address_51530220_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_51343780_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   base_51343780_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   base_51343780_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(base_51343780_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,base_51343780_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
base_51343780_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[base_51343780_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_51530320_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   next__data_51530320_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   next__data_51530320_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(next__data_51530320_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,next__data_51530320_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
next__data_51530320_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[next__data_51530320_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,remaining_51840420_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   remaining_51840420_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   remaining_51840420_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(remaining_51840420_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,remaining_51840420_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
remaining_51840420_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[remaining_51840420_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_51698740_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   interpolated__value_51698740_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   interpolated__value_51698740_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(interpolated__value_51698740_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,interpolated__value_51698740_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
interpolated__value_51698740_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[interpolated__value_51698740_my__interpolator_58_842_49810980_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__52853400();

   return behavior;
}

Behavior __52881080;

Behavior make__52881080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52881080 = behavior;
   behavior->owner = (Object)func0_58_84_51134760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52948700_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   base_52948700_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   base_52948700_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(base_52948700_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,base_52948700_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
base_52948700_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[base_52948700_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_53205060_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   next__data_53205060_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   next__data_53205060_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(next__data_53205060_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,next__data_53205060_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
next__data_53205060_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[next__data_53205060_my__lut_58_842_52825680_func0_58_84_51134760_func0_58_841_51014340_layer0_58_84_52122940_layer0_58_840_52990640_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__52853320();

   return behavior;
}

Scope makefunc0_58_84_51134760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_51134760 = scope;
   scope->owner = (Object)func0_58_841_51014340;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_53204920();
   scope->systemIs[1] = makemy__interpolator_51698600();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51343780();
   scope->inners[1] = makenext__data_51530320();
   scope->inners[2] = makeaddress_51530220();
   scope->inners[3] = makeremaining_51840420();
   scope->inners[4] = makechange_52043620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52852240();
   scope->behaviors[1] = make__52851460();
   scope->behaviors[2] = make__52849860();
   scope->behaviors[3] = make__52881580();
   scope->behaviors[4] = make__52881080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_51014340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_51014340 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51222420();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_51499720();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_51134760();

   return systemT;
}