#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_847_55239860;

SignalI z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makez__value_55681060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_847_55239860;
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

SignalI a_56735960_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makea_56735960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_56735960_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_847_55239860;
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

Block __145839620;

void code__145839620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__146379620());
            last = value2integer(make__146379420());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__145839620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __145839620 = block;
   block->owner = (Object)__145838380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__145839620;

   return block;
};

Block __145838220;

void code__145838220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940,value2integer(make__146378220()),value2integer(make__146378120())));
      set_value_pos(pool_state);
   }
}

Block make__145838220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __145838220 = block;
   block->owner = (Object)__145837360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__145838220;

   return block;
};

Block __145837220;

void code__145837220() {
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
            src0 = make__146376740();
            src1 = make__146376720();
            src2 = make__146376700();
            src3 = make__146376680();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__146376260());
            last = value2integer(make__146376200());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_60663020_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__145837220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __145837220 = block;
   block->owner = (Object)__145834980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__145837220;

   return block;
};

Block __145834900;

void code__145834900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,src2;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,src2;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__146374720();
            src1 = make__146399160();
            src2 = make__146399140();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__146398900();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__146397020();
            src1 = make__146396860();
            src2 = make__146396840();
            src3 = make__146396780();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_61124360_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__145834900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __145834900 = block;
   block->owner = (Object)__145922760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__145834900;

   return block;
};

Block __145840460;

void code__145840460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,address_80962340_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_59820040_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,base_83017540_my__interpolator_58_8439_82613740_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_60234580_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,next__data_83289880_my__interpolator_58_8439_82613740_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_61124360_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,change_83525300_my__interpolator_58_8439_82613740_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_60663020_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,remaining_83602680_my__interpolator_58_8439_82613740_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_83757920_my__interpolator_58_8439_82613740_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,a_56735960_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__145840460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __145840460 = block;
   block->owner = (Object)__146122440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__145840460;

   return block;
};

Block __145840300;

void code__145840300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_81270440_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,base_59820040_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_81403680_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,next__data_60234580_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__145840300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __145840300 = block;
   block->owner = (Object)__146121960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__145840300;

   return block;
};

Value make__146379620() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__146379420() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__146378220() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__146378120() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__146376740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__146376720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__146376700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__146376680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__146376260() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__146376200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__146374720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__146399160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__146399140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__146398900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__146397020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__146396860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__146396840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__146396780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_84_59436120;

SignalI base_59820040_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makebase_59820040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_59820040_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_84_59436120;
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

SignalI next__data_60234580_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makenext__data_60234580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_60234580_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_84_59436120;
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

SignalI address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makeaddress_60234500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_84_59436120;
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

SignalI remaining_60663020_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makeremaining_60663020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_60663020_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_84_59436120;
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

SignalI change_61124360_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makechange_61124360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_61124360_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_84_59436120;
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

SystemI my__lut_81403480;

SystemI makemy__lut_81403480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_81403480 = systemI;
   systemI->owner = (Object)func0_58_84_59436120;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8439_80965180;

   return systemI;
};

SystemI my__interpolator_83757760;

SystemI makemy__interpolator_83757760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_83757760 = systemI;
   systemI->owner = (Object)func0_58_84_59436120;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8439_82613740;

   return systemI;
};

Behavior __145838380;

Behavior make__145838380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __145838380 = behavior;
   behavior->owner = (Object)func0_58_84_59436120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__145839620();

   return behavior;
}

Behavior __145837360;

Behavior make__145837360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __145837360 = behavior;
   behavior->owner = (Object)func0_58_84_59436120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__145838220();

   return behavior;
}

Behavior __145834980;

Behavior make__145834980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __145834980 = behavior;
   behavior->owner = (Object)func0_58_84_59436120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[z__value_55681060_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__145837220();

   return behavior;
}

Behavior __145922760;

Behavior make__145922760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __145922760 = behavior;
   behavior->owner = (Object)func0_58_84_59436120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__145834900();

   return behavior;
}

Behavior __146122440;

Behavior make__146122440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __146122440 = behavior;
   behavior->owner = (Object)func0_58_84_59436120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[address_60234500_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_59820040_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   base_59820040_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   base_59820040_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(base_59820040_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,base_59820040_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_59820040_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[base_59820040_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_60234580_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   next__data_60234580_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_60234580_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(next__data_60234580_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,next__data_60234580_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_60234580_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[next__data_60234580_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_61124360_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   change_61124360_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   change_61124360_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(change_61124360_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,change_61124360_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
change_61124360_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[change_61124360_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_60663020_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   remaining_60663020_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_60663020_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(remaining_60663020_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,remaining_60663020_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_60663020_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[remaining_60663020_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_83757920_my__interpolator_58_8439_82613740_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   interpolated__value_83757920_my__interpolator_58_8439_82613740_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   interpolated__value_83757920_my__interpolator_58_8439_82613740_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(interpolated__value_83757920_my__interpolator_58_8439_82613740_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,interpolated__value_83757920_my__interpolator_58_8439_82613740_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
interpolated__value_83757920_my__interpolator_58_8439_82613740_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[interpolated__value_83757920_my__interpolator_58_8439_82613740_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__145840460();

   return behavior;
}

Behavior __146121960;

Behavior make__146121960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __146121960 = behavior;
   behavior->owner = (Object)func0_58_84_59436120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_81270440_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   base_81270440_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   base_81270440_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(base_81270440_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,base_81270440_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_81270440_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[base_81270440_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_81403680_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   next__data_81403680_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_81403680_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(next__data_81403680_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,next__data_81403680_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_81403680_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[next__data_81403680_my__lut_58_8439_80965180_func0_58_84_59436120_func0_58_847_55239860_layer0_58_84_81399900_layer0_58_843_65717780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__145840300();

   return behavior;
}

Scope makefunc0_58_84_59436120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_59436120 = scope;
   scope->owner = (Object)func0_58_847_55239860;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_81403480();
   scope->systemIs[1] = makemy__interpolator_83757760();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_59820040();
   scope->inners[1] = makenext__data_60234580();
   scope->inners[2] = makeaddress_60234500();
   scope->inners[3] = makeremaining_60663020();
   scope->inners[4] = makechange_61124360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__145838380();
   scope->behaviors[1] = make__145837360();
   scope->behaviors[2] = make__145834980();
   scope->behaviors[3] = make__145922760();
   scope->behaviors[4] = make__146122440();
   scope->behaviors[5] = make__146121960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_847_55239860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_847_55239860 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T7";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_55681060();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_56735960();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_59436120();

   return systemT;
}