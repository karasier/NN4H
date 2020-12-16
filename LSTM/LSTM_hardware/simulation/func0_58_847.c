#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_847_83488940;

SignalI z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makez__value_83656580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func0_58_847_83488940;
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

SignalI a_83779880_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makea_83779880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_83779880_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func0_58_847_83488940;
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

Block __197408700;

void code__197408700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__197438020());
            last = value2integer(make__197438000());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__197408700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197408700 = block;
   block->owner = (Object)__197408380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197408700;

   return block;
};

Block __197408320;

void code__197408320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400,value2integer(make__197437800()),value2integer(make__197437780())));
      set_value_pos(pool_state);
   }
}

Block make__197408320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197408320 = block;
   block->owner = (Object)__197407720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197408320;

   return block;
};

Block __197407660;

void code__197407660() {
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
            src0 = make__197436800();
            src1 = make__197436780();
            src2 = make__197436720();
            src3 = make__197436700();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__197436560());
            last = value2integer(make__197436480());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_83881240_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__197407660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197407660 = block;
   block->owner = (Object)__197406960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197407660;

   return block;
};

Block __197406920;

void code__197406920() {
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
            src0 = make__197435580();
            src1 = make__197435540();
            src2 = make__197435520();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__197435440();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__197459640();
            src1 = make__197459620();
            src2 = make__197459580();
            src3 = make__197459540();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_84301520_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__197406920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197406920 = block;
   block->owner = (Object)__197406160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197406920;

   return block;
};

Block __197408920;

void code__197408920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,address_66867980_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_83321780_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,base_79539520_my__interpolator_58_8439_79387360_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_83716580_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,next__data_79715600_my__interpolator_58_8439_79387360_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_84301520_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,change_79837240_my__interpolator_58_8439_79387360_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_83881240_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,remaining_79984580_my__interpolator_58_8439_79387360_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_80278860_my__interpolator_58_8439_79387360_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,a_83779880_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__197408920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197408920 = block;
   block->owner = (Object)__197422020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197408920;

   return block;
};

Block __197408860;

void code__197408860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_67057200_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,base_83321780_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_67221160_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,next__data_83716580_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__197408860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197408860 = block;
   block->owner = (Object)__197421680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197408860;

   return block;
};

Value make__197438020() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197438000() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197437800() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197437780() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197436800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197436780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197436720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197436700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197436560() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197436480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197435580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197435540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197435520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197435440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197459640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197459620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197459580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197459540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_84_82926560;

SignalI base_83321780_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makebase_83321780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_83321780_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func0_58_84_82926560;
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

SignalI next__data_83716580_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makenext__data_83716580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_83716580_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func0_58_84_82926560;
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

SignalI address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makeaddress_83716460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func0_58_84_82926560;
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

SignalI remaining_83881240_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makeremaining_83881240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_83881240_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func0_58_84_82926560;
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

SignalI change_84301520_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makechange_84301520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_84301520_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func0_58_84_82926560;
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

SystemI my__lut_67220760;

SystemI makemy__lut_67220760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_67220760 = systemI;
   systemI->owner = (Object)func0_58_84_82926560;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8439_66848560;

   return systemI;
};

SystemI my__interpolator_80278640;

SystemI makemy__interpolator_80278640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_80278640 = systemI;
   systemI->owner = (Object)func0_58_84_82926560;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8439_79387360;

   return systemI;
};

Behavior __197408380;

Behavior make__197408380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197408380 = behavior;
   behavior->owner = (Object)func0_58_84_82926560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__197408700();

   return behavior;
}

Behavior __197407720;

Behavior make__197407720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197407720 = behavior;
   behavior->owner = (Object)func0_58_84_82926560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__197408320();

   return behavior;
}

Behavior __197406960;

Behavior make__197406960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197406960 = behavior;
   behavior->owner = (Object)func0_58_84_82926560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[z__value_83656580_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__197407660();

   return behavior;
}

Behavior __197406160;

Behavior make__197406160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197406160 = behavior;
   behavior->owner = (Object)func0_58_84_82926560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__197406920();

   return behavior;
}

Behavior __197422020;

Behavior make__197422020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197422020 = behavior;
   behavior->owner = (Object)func0_58_84_82926560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[address_83716460_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_83321780_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   base_83321780_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   base_83321780_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(base_83321780_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,base_83321780_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_83321780_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[base_83321780_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_83716580_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   next__data_83716580_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_83716580_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(next__data_83716580_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,next__data_83716580_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_83716580_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[next__data_83716580_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_84301520_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   change_84301520_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   change_84301520_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(change_84301520_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,change_84301520_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
change_84301520_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[change_84301520_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_83881240_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   remaining_83881240_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_83881240_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(remaining_83881240_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,remaining_83881240_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_83881240_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[remaining_83881240_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_80278860_my__interpolator_58_8439_79387360_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   interpolated__value_80278860_my__interpolator_58_8439_79387360_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   interpolated__value_80278860_my__interpolator_58_8439_79387360_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(interpolated__value_80278860_my__interpolator_58_8439_79387360_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,interpolated__value_80278860_my__interpolator_58_8439_79387360_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
interpolated__value_80278860_my__interpolator_58_8439_79387360_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[interpolated__value_80278860_my__interpolator_58_8439_79387360_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__197408920();

   return behavior;
}

Behavior __197421680;

Behavior make__197421680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197421680 = behavior;
   behavior->owner = (Object)func0_58_84_82926560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_67057200_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   base_67057200_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   base_67057200_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(base_67057200_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,base_67057200_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_67057200_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[base_67057200_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_67221160_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   next__data_67221160_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_67221160_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(next__data_67221160_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,next__data_67221160_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_67221160_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[next__data_67221160_my__lut_58_8439_66848560_func0_58_84_82926560_func0_58_847_83488940_layer0_58_84_81967720_layer0_58_843_85501040_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__197408860();

   return behavior;
}

Scope makefunc0_58_84_82926560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_82926560 = scope;
   scope->owner = (Object)func0_58_847_83488940;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_67220760();
   scope->systemIs[1] = makemy__interpolator_80278640();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_83321780();
   scope->inners[1] = makenext__data_83716580();
   scope->inners[2] = makeaddress_83716460();
   scope->inners[3] = makeremaining_83881240();
   scope->inners[4] = makechange_84301520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__197408380();
   scope->behaviors[1] = make__197407720();
   scope->behaviors[2] = make__197406960();
   scope->behaviors[3] = make__197406160();
   scope->behaviors[4] = make__197422020();
   scope->behaviors[5] = make__197421680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_847_83488940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_847_83488940 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T7";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_83656580();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_83779880();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_82926560();

   return systemT;
}