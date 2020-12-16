#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_847_81964420;

SignalI z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makez__value_82120100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_847_81964420;
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

SignalI a_82330560_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makea_82330560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_82330560_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_847_81964420;
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

Block __197490260;

void code__197490260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__197519440());
            last = value2integer(make__197519420());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__197490260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197490260 = block;
   block->owner = (Object)__197489420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197490260;

   return block;
};

Block __197489360;

void code__197489360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400,value2integer(make__197519260()),value2integer(make__197519240())));
      set_value_pos(pool_state);
   }
}

Block make__197489360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197489360 = block;
   block->owner = (Object)__197488940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197489360;

   return block;
};

Block __197488900;

void code__197488900() {
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
            src0 = make__197518480();
            src1 = make__197518420();
            src2 = make__197518340();
            src3 = make__197518320();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__197518180());
            last = value2integer(make__197518160());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_84266300_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__197488900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197488900 = block;
   block->owner = (Object)__197488220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197488900;

   return block;
};

Block __197488160;

void code__197488160() {
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
            src0 = make__197582320();
            src1 = make__197582300();
            src2 = make__197582280();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__197582200();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__197582040();
            src1 = make__197582020();
            src2 = make__197582000();
            src3 = make__197581980();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_84348020_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__197488160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197488160 = block;
   block->owner = (Object)__197487460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197488160;

   return block;
};

Block __197490660;

void code__197490660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,address_64592400_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_83939360_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,base_66732340_my__interpolator_58_8400_66480840_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_84054420_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,next__data_66897400_my__interpolator_58_8400_66480840_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_84348020_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,change_67122520_my__interpolator_58_8400_66480840_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_84266300_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,remaining_67285440_my__interpolator_58_8400_66480840_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_78314200_my__interpolator_58_8400_66480840_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,a_82330560_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__197490660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197490660 = block;
   block->owner = (Object)__197502820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197490660;

   return block;
};

Block __197490600;

void code__197490600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_64818640_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,base_83939360_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_65036240_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,next__data_84054420_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__197490600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197490600 = block;
   block->owner = (Object)__197502500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197490600;

   return block;
};

Value make__197519440() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197519420() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197519260() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197519240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197518480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197518420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197518340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197518320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197518180() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197518160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197582320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197582300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197582280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197582200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197582040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197582020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197582000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197581980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_84_83802660;

SignalI base_83939360_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makebase_83939360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_83939360_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_84_83802660;
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

SignalI next__data_84054420_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makenext__data_84054420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_84054420_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_84_83802660;
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

SignalI address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makeaddress_84054260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_84_83802660;
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

SignalI remaining_84266300_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makeremaining_84266300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_84266300_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_84_83802660;
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

SignalI change_84348020_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makechange_84348020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_84348020_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_84_83802660;
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

SystemI my__lut_65035680;

SystemI makemy__lut_65035680() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_65035680 = systemI;
   systemI->owner = (Object)func1_58_84_83802660;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_64572460;

   return systemI;
};

SystemI my__interpolator_78313940;

SystemI makemy__interpolator_78313940() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_78313940 = systemI;
   systemI->owner = (Object)func1_58_84_83802660;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_66480840;

   return systemI;
};

Behavior __197489420;

Behavior make__197489420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197489420 = behavior;
   behavior->owner = (Object)func1_58_84_83802660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__197490260();

   return behavior;
}

Behavior __197488940;

Behavior make__197488940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197488940 = behavior;
   behavior->owner = (Object)func1_58_84_83802660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__197489360();

   return behavior;
}

Behavior __197488220;

Behavior make__197488220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197488220 = behavior;
   behavior->owner = (Object)func1_58_84_83802660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[z__value_82120100_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__197488900();

   return behavior;
}

Behavior __197487460;

Behavior make__197487460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197487460 = behavior;
   behavior->owner = (Object)func1_58_84_83802660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__197488160();

   return behavior;
}

Behavior __197502820;

Behavior make__197502820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197502820 = behavior;
   behavior->owner = (Object)func1_58_84_83802660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[address_84054260_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_83939360_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   base_83939360_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   base_83939360_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(base_83939360_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,base_83939360_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_83939360_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[base_83939360_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_84054420_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   next__data_84054420_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_84054420_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(next__data_84054420_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,next__data_84054420_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_84054420_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[next__data_84054420_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_84348020_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   change_84348020_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   change_84348020_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(change_84348020_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,change_84348020_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
change_84348020_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[change_84348020_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_84266300_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   remaining_84266300_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_84266300_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(remaining_84266300_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,remaining_84266300_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_84266300_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[remaining_84266300_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_78314200_my__interpolator_58_8400_66480840_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   interpolated__value_78314200_my__interpolator_58_8400_66480840_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   interpolated__value_78314200_my__interpolator_58_8400_66480840_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(interpolated__value_78314200_my__interpolator_58_8400_66480840_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,interpolated__value_78314200_my__interpolator_58_8400_66480840_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
interpolated__value_78314200_my__interpolator_58_8400_66480840_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[interpolated__value_78314200_my__interpolator_58_8400_66480840_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__197490660();

   return behavior;
}

Behavior __197502500;

Behavior make__197502500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197502500 = behavior;
   behavior->owner = (Object)func1_58_84_83802660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_64818640_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   base_64818640_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   base_64818640_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(base_64818640_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,base_64818640_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_64818640_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[base_64818640_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_65036240_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   next__data_65036240_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_65036240_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(next__data_65036240_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,next__data_65036240_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_65036240_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[next__data_65036240_my__lut_58_8400_64572460_func1_58_84_83802660_func1_58_847_81964420_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__197490600();

   return behavior;
}

Scope makefunc1_58_84_83802660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_83802660 = scope;
   scope->owner = (Object)func1_58_847_81964420;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_65035680();
   scope->systemIs[1] = makemy__interpolator_78313940();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_83939360();
   scope->inners[1] = makenext__data_84054420();
   scope->inners[2] = makeaddress_84054260();
   scope->inners[3] = makeremaining_84266300();
   scope->inners[4] = makechange_84348020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__197489420();
   scope->behaviors[1] = make__197488940();
   scope->behaviors[2] = make__197488220();
   scope->behaviors[3] = make__197487460();
   scope->behaviors[4] = make__197502820();
   scope->behaviors[5] = make__197502500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_847_81964420() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_847_81964420 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T7";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_82120100();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_82330560();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_83802660();

   return systemT;
}