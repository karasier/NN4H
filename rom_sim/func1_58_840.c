#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_52863980;

SignalI z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makez__value_53351140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func1_58_840_52863980;
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

SignalI a_52456820_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makea_52456820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52456820_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func1_58_840_52863980;
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

Block __52700540;

void code__52700540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
            first = value2integer(make__52870500());
            last = value2integer(make__52870480());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__52700540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52700540 = block;
   block->owner = (Object)__52699800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52700540;

   return block;
};

Block __52699460;

void code__52699460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640,value2integer(make__52870280()),value2integer(make__52870240())));
      set_value_pos(pool_state);
   }
}

Block make__52699460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52699460 = block;
   block->owner = (Object)__52723320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52699460;

   return block;
};

Block __52723240;

void code__52723240() {
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
            src0 = make__52869220();
            src1 = make__52868980();
            src2 = make__52868880();
            src3 = make__52868820();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value;
            first = value2integer(make__52868420());
            last = value2integer(make__52868380());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_52265740_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__52723240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52723240 = block;
   block->owner = (Object)__52721740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52723240;

   return block;
};

Block __52701140;

void code__52701140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,address_46404160_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_52265740_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,remaining_52815020_my__interpolator_58_8400_52604140_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51750460_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,base_52998620_my__interpolator_58_8400_52604140_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51998280_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,next__data_53215480_my__interpolator_58_8400_52604140_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_53414100_my__interpolator_58_8400_52604140_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,a_52456820_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__52701140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52701140 = block;
   block->owner = (Object)__52820260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52701140;

   return block;
};

Block __52700960;

void code__52700960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48088520_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,base_51750460_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49288340_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->c_value,next__data_51998280_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
      set_value_pos(pool_state);
   }
}

Block make__52700960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52700960 = block;
   block->owner = (Object)__52817500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52700960;

   return block;
};

Value make__52870500() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52870480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52870280() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52870240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52869220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52868980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52868880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52868820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52868420() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52868380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_51621400;

SignalI base_51750460_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makebase_51750460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51750460_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func1_58_84_51621400;
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

SignalI next__data_51998280_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makenext__data_51998280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51998280_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func1_58_84_51621400;
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

SignalI address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeaddress_51998180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func1_58_84_51621400;
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

SignalI remaining_52265740_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640;

SignalI makeremaining_52265740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_52265740_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640 = signalI;
   signalI->owner = (Object)func1_58_84_51621400;
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

SystemI my__lut_49287860;

SystemI makemy__lut_49287860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_49287860 = systemI;
   systemI->owner = (Object)func1_58_84_51621400;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_46198300;

   return systemI;
};

SystemI my__interpolator_53413900;

SystemI makemy__interpolator_53413900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_53413900 = systemI;
   systemI->owner = (Object)func1_58_84_51621400;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_52604140;

   return systemI;
};

Behavior __52699800;

Behavior make__52699800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52699800 = behavior;
   behavior->owner = (Object)func1_58_84_51621400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__52700540();

   return behavior;
}

Behavior __52723320;

Behavior make__52723320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52723320 = behavior;
   behavior->owner = (Object)func1_58_84_51621400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__52699460();

   return behavior;
}

Behavior __52721740;

Behavior make__52721740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52721740 = behavior;
   behavior->owner = (Object)func1_58_84_51621400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[z__value_53351140_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__52723240();

   return behavior;
}

Behavior __52820260;

Behavior make__52820260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52820260 = behavior;
   behavior->owner = (Object)func1_58_84_51621400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[address_51998180_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_52265740_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   remaining_52265740_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   remaining_52265740_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(remaining_52265740_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,remaining_52265740_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
remaining_52265740_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[remaining_52265740_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51750460_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   base_51750460_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   base_51750460_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(base_51750460_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,base_51750460_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
base_51750460_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[base_51750460_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_51998280_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   next__data_51998280_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   next__data_51998280_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(next__data_51998280_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,next__data_51998280_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
next__data_51998280_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[next__data_51998280_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_53414100_my__interpolator_58_8400_52604140_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   interpolated__value_53414100_my__interpolator_58_8400_52604140_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   interpolated__value_53414100_my__interpolator_58_8400_52604140_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(interpolated__value_53414100_my__interpolator_58_8400_52604140_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,interpolated__value_53414100_my__interpolator_58_8400_52604140_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
interpolated__value_53414100_my__interpolator_58_8400_52604140_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[interpolated__value_53414100_my__interpolator_58_8400_52604140_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__52701140();

   return behavior;
}

Behavior __52817500;

Behavior make__52817500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52817500 = behavior;
   behavior->owner = (Object)func1_58_84_51621400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_48088520_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   base_48088520_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   base_48088520_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(base_48088520_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,base_48088520_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
base_48088520_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[base_48088520_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49288340_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640);
   next__data_49288340_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any += 1;
   next__data_49288340_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any = realloc(next__data_49288340_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any,next__data_49288340_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any*sizeof(Object));
next__data_49288340_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->any[next__data_49288340_my__lut_58_8400_46198300_func1_58_84_51621400_func1_58_840_52863980_layer0_58_84_51309560_layer0_58_840_59259160_neural__network_58_84_49862240_neural__network_58_840_47993620______58_84_49862940______58_840_48580640->num_any-1] = (Object)behavior;
   behavior->block = make__52700960();

   return behavior;
}

Scope makefunc1_58_84_51621400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_51621400 = scope;
   scope->owner = (Object)func1_58_840_52863980;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_49287860();
   scope->systemIs[1] = makemy__interpolator_53413900();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51750460();
   scope->inners[1] = makenext__data_51998280();
   scope->inners[2] = makeaddress_51998180();
   scope->inners[3] = makeremaining_52265740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52699800();
   scope->behaviors[1] = make__52723320();
   scope->behaviors[2] = make__52721740();
   scope->behaviors[3] = make__52820260();
   scope->behaviors[4] = make__52817500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_52863980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_52863980 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_53351140();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52456820();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_51621400();

   return systemT;
}