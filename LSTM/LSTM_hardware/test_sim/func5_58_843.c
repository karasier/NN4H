#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func5_58_843_54549940;

SignalI z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makez__value_54817080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_843_54549940;
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

SignalI a_58670980_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makea_58670980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_58670980_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_843_54549940;
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

Block __157131480;

void code__157131480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__144418840());
            last = value2integer(make__144418820());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__157131480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __157131480 = block;
   block->owner = (Object)__157130800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__157131480;

   return block;
};

Block __157130760;

void code__157130760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940,value2integer(make__144418560()),value2integer(make__144418540())));
      set_value_pos(pool_state);
   }
}

Block make__157130760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __157130760 = block;
   block->owner = (Object)__157154100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__157130760;

   return block;
};

Block __157154020;

void code__157154020() {
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
            src0 = make__144417720();
            src1 = make__144417680();
            src2 = make__144417640();
            src3 = make__144417620();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__144417260());
            last = value2integer(make__144417240());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_104393180_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__157154020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __157154020 = block;
   block->owner = (Object)__157152280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__157154020;

   return block;
};

Block __157152180;

void code__157152180() {
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
            src0 = make__159129140();
            src1 = make__159129120();
            src2 = make__159129100();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__159128960();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__159128660();
            src1 = make__159128600();
            src2 = make__159128580();
            src3 = make__159128520();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_104512360_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__157152180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __157152180 = block;
   block->owner = (Object)__157150780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__157152180;

   return block;
};

Block __157132280;

void code__157132280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,address_113155700_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_104010100_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,base_114788300_my__interpolator_58_8460_114618940_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_104224300_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,next__data_114853480_my__interpolator_58_8460_114618940_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_104512360_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,change_115049260_my__interpolator_58_8460_114618940_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_104393180_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,remaining_115270020_my__interpolator_58_8460_114618940_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_115351480_my__interpolator_58_8460_114618940_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,a_58670980_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__157132280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __157132280 = block;
   block->owner = (Object)__159266640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__157132280;

   return block;
};

Block __157132180;

void code__157132180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_113219340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,base_104010100_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_113471340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value,next__data_104224300_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__157132180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __157132180 = block;
   block->owner = (Object)__159265860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__157132180;

   return block;
};

Value make__144418840() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__144418820() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__144418560() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__144418540() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__144417720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__144417680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__144417640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__144417620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__144417260() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__144417240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__159129140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__159129120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__159129100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__159128960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__159128660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__159128600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__159128580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__159128520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func5_58_84_103924940;

SignalI base_104010100_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makebase_104010100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_104010100_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_84_103924940;
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

SignalI next__data_104224300_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makenext__data_104224300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_104224300_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_84_103924940;
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

SignalI address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makeaddress_104224140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_84_103924940;
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

SignalI remaining_104393180_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makeremaining_104393180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_104393180_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_84_103924940;
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

SignalI change_104512360_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makechange_104512360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_104512360_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_84_103924940;
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

SystemI my__lut_113471120;

SystemI makemy__lut_113471120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_113471120 = systemI;
   systemI->owner = (Object)func5_58_84_103924940;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8460_113133460;

   return systemI;
};

SystemI my__interpolator_115351320;

SystemI makemy__interpolator_115351320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_115351320 = systemI;
   systemI->owner = (Object)func5_58_84_103924940;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8460_114618940;

   return systemI;
};

Behavior __157130800;

Behavior make__157130800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __157130800 = behavior;
   behavior->owner = (Object)func5_58_84_103924940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__157131480();

   return behavior;
}

Behavior __157154100;

Behavior make__157154100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __157154100 = behavior;
   behavior->owner = (Object)func5_58_84_103924940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__157130760();

   return behavior;
}

Behavior __157152280;

Behavior make__157152280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __157152280 = behavior;
   behavior->owner = (Object)func5_58_84_103924940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[z__value_54817080_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__157154020();

   return behavior;
}

Behavior __157150780;

Behavior make__157150780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __157150780 = behavior;
   behavior->owner = (Object)func5_58_84_103924940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__157152180();

   return behavior;
}

Behavior __159266640;

Behavior make__159266640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __159266640 = behavior;
   behavior->owner = (Object)func5_58_84_103924940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[address_104224140_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_104010100_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   base_104010100_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   base_104010100_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(base_104010100_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,base_104010100_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_104010100_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[base_104010100_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_104224300_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   next__data_104224300_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_104224300_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(next__data_104224300_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,next__data_104224300_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_104224300_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[next__data_104224300_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_104512360_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   change_104512360_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   change_104512360_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(change_104512360_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,change_104512360_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
change_104512360_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[change_104512360_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_104393180_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   remaining_104393180_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_104393180_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(remaining_104393180_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,remaining_104393180_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_104393180_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[remaining_104393180_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_115351480_my__interpolator_58_8460_114618940_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   interpolated__value_115351480_my__interpolator_58_8460_114618940_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   interpolated__value_115351480_my__interpolator_58_8460_114618940_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(interpolated__value_115351480_my__interpolator_58_8460_114618940_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,interpolated__value_115351480_my__interpolator_58_8460_114618940_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
interpolated__value_115351480_my__interpolator_58_8460_114618940_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[interpolated__value_115351480_my__interpolator_58_8460_114618940_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__157132280();

   return behavior;
}

Behavior __159265860;

Behavior make__159265860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __159265860 = behavior;
   behavior->owner = (Object)func5_58_84_103924940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_113219340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   base_113219340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   base_113219340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(base_113219340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,base_113219340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_113219340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[base_113219340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_113471340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   next__data_113471340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_113471340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(next__data_113471340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,next__data_113471340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_113471340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[next__data_113471340_my__lut_58_8460_113133460_func5_58_84_103924940_func5_58_843_54549940_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__157132180();

   return behavior;
}

Scope makefunc5_58_84_103924940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func5_58_84_103924940 = scope;
   scope->owner = (Object)func5_58_843_54549940;
   scope->name = "func5:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_113471120();
   scope->systemIs[1] = makemy__interpolator_115351320();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_104010100();
   scope->inners[1] = makenext__data_104224300();
   scope->inners[2] = makeaddress_104224140();
   scope->inners[3] = makeremaining_104393180();
   scope->inners[4] = makechange_104512360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__157130800();
   scope->behaviors[1] = make__157154100();
   scope->behaviors[2] = make__157152280();
   scope->behaviors[3] = make__157150780();
   scope->behaviors[4] = make__159266640();
   scope->behaviors[5] = make__159265860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc5_58_843_54549940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func5_58_843_54549940 = systemT;
systemT->owner = NULL;
   systemT->name = "func5:T3";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_54817080();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_58670980();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc5_58_84_103924940();

   return systemT;
}