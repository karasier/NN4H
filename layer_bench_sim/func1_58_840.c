#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_53121580;

SignalI z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makez__value_42890920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)func1_58_840_53121580;
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

SignalI a_47157820_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makea_47157820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47157820_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)func1_58_840_53121580;
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

Block __51552880;

void code__51552880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
            first = value2integer(make__51720340());
            last = value2integer(make__51720320());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__51552880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51552880 = block;
   block->owner = (Object)__51552460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51552880;

   return block;
};

Block __51552420;

void code__51552420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200,value2integer(make__51720140()),value2integer(make__51720020())));
      set_value_pos(pool_state);
   }
}

Block make__51552420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51552420 = block;
   block->owner = (Object)__51641880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51552420;

   return block;
};

Block __51641800;

void code__51641800() {
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
            src0 = make__51719220();
            src1 = make__51719200();
            src2 = make__51719180();
            src3 = make__51719160();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
            first = value2integer(make__51718880());
            last = value2integer(make__51718860());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_44778760___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__51641800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51641800 = block;
   block->owner = (Object)__51640460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51641800;

   return block;
};

Block __51553200;

void code__51553200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,address_49011140_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_44778760___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,remaining_53021320_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53124260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,base_53228280_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53273340___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,next__data_44017960_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47689260_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,a_47157820_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__51553200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51553200 = block;
   block->owner = (Object)__51672680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51553200;

   return block;
};

Block __51553120;

void code__51553120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49173420_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,base_53124260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51320040_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value,next__data_53273340___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__51553120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51553120 = block;
   block->owner = (Object)__51672400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51553120;

   return block;
};

Value make__51720340() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51720320() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51720140() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51720020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51719220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51719200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51719180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51719160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51718880() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51718860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __52989140;

SignalI base_53124260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makebase_53124260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53124260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__52989140;
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

SignalI next__data_53273340___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makenext__data_53273340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53273340___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__52989140;
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

SignalI address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeaddress_53273260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__52989140;
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

SignalI remaining_44778760___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeremaining_44778760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_44778760___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)__52989140;
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

SystemI my__lut_51319600;

SystemI makemy__lut_51319600() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_51319600 = systemI;
   systemI->owner = (Object)__52989140;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_48990820;

   return systemI;
};

SystemI my__interpolator_47687380;

SystemI makemy__interpolator_47687380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47687380 = systemI;
   systemI->owner = (Object)__52989140;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_52895440;

   return systemI;
};

Behavior __51552460;

Behavior make__51552460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51552460 = behavior;
   behavior->owner = (Object)__52989140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__51552880();

   return behavior;
}

Behavior __51641880;

Behavior make__51641880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51641880 = behavior;
   behavior->owner = (Object)__52989140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__51552420();

   return behavior;
}

Behavior __51640460;

Behavior make__51640460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51640460 = behavior;
   behavior->owner = (Object)__52989140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[z__value_42890920_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__51641800();

   return behavior;
}

Behavior __51672680;

Behavior make__51672680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51672680 = behavior;
   behavior->owner = (Object)__52989140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[address_53273260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_44778760___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   remaining_44778760___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   remaining_44778760___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(remaining_44778760___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,remaining_44778760___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
remaining_44778760___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[remaining_44778760___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53124260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   base_53124260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   base_53124260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(base_53124260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,base_53124260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
base_53124260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[base_53124260___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53273340___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   next__data_53273340___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   next__data_53273340___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(next__data_53273340___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,next__data_53273340___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
next__data_53273340___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[next__data_53273340___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_47689260_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   interpolated__value_47689260_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   interpolated__value_47689260_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(interpolated__value_47689260_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,interpolated__value_47689260_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
interpolated__value_47689260_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[interpolated__value_47689260_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__51553200();

   return behavior;
}

Behavior __51672400;

Behavior make__51672400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51672400 = behavior;
   behavior->owner = (Object)__52989140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49173420_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   base_49173420_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   base_49173420_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(base_49173420_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,base_49173420_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
base_49173420_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[base_49173420_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51320040_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   next__data_51320040_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   next__data_51320040_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(next__data_51320040_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,next__data_51320040_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
next__data_51320040_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[next__data_51320040_my__lut_58_8400_48990820___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__51553120();

   return behavior;
}

Scope make__52989140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52989140 = scope;
   scope->owner = (Object)func1_58_840_53121580;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_51319600();
   scope->systemIs[1] = makemy__interpolator_47687380();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53124260();
   scope->inners[1] = makenext__data_53273340();
   scope->inners[2] = makeaddress_53273260();
   scope->inners[3] = makeremaining_44778760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51552460();
   scope->behaviors[1] = make__51641880();
   scope->behaviors[2] = make__51640460();
   scope->behaviors[3] = make__51672680();
   scope->behaviors[4] = make__51672400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_53121580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_53121580 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_42890920();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_47157820();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__52989140();

   return systemT;
}