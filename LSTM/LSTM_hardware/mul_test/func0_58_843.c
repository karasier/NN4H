#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_843_53883280;

SignalI z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makez__value_53985300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_843_53883280;
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

SignalI a_54205740_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makea_54205740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_54205740_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_843_53883280;
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

Block __78336180;

void code__78336180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            first = value2integer(make__78372460());
            last = value2integer(make__78372440());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78336180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78336180 = block;
   block->owner = (Object)__78335920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78336180;

   return block;
};

Block __78335880;

void code__78335880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040,value2integer(make__78372300()),value2integer(make__78372280())));
      set_value_pos(pool_state);
   }
}

Block make__78335880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78335880 = block;
   block->owner = (Object)__78335600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78335880;

   return block;
};

Block __78335560;

void code__78335560() {
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
            src0 = make__78371780();
            src1 = make__78371760();
            src2 = make__78371740();
            src3 = make__78371720();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            first = value2integer(make__78371560());
            last = value2integer(make__78371540());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_57284720_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78335560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78335560 = block;
   block->owner = (Object)__78335020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78335560;

   return block;
};

Block __78334980;

void code__78334980() {
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
            src0 = make__78371100();
            src1 = make__78371080();
            src2 = make__78371060();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78371000();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__78370840();
            src1 = make__78370820();
            src2 = make__78370800();
            src3 = make__78370780();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_46002420_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78334980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78334980 = block;
   block->owner = (Object)__78334520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78334980;

   return block;
};

Block __78336400;

void code__78336400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56985500_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,base_55389860_my__interpolator_58_845_55159960_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_57115980_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,next__data_55544920_my__interpolator_58_845_55159960_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_46002420_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,change_55744260_my__interpolator_58_845_55159960_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_57284720_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,remaining_55951260_my__interpolator_58_845_55159960_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_56059400_my__interpolator_58_845_55159960_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,a_54205740_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78336400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78336400 = block;
   block->owner = (Object)__78353060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78336400;

   return block;
};

Block __78336340;

void code__78336340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53880160_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,base_56985500_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53988060_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,next__data_57115980_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78336340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78336340 = block;
   block->owner = (Object)__78352900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78336340;

   return block;
};

Value make__78372460() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78372440() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78372300() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78372280() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78371780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78371760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78371740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78371720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78371560() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78371540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78371100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78371080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78371060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78371000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78370840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78370820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78370800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78370780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_84_56637700;

SignalI base_56985500_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makebase_56985500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56985500_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_84_56637700;
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

SignalI next__data_57115980_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makenext__data_57115980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_57115980_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_84_56637700;
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

SignalI address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeaddress_57115880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_84_56637700;
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

SignalI remaining_57284720_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeremaining_57284720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_57284720_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_84_56637700;
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

SignalI change_46002420_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makechange_46002420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_46002420_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)func0_58_84_56637700;
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

SystemI my__lut_53987860;

SystemI makemy__lut_53987860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_53987860 = systemI;
   systemI->owner = (Object)func0_58_84_56637700;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_845_53642560;

   return systemI;
};

SystemI my__interpolator_56059120;

SystemI makemy__interpolator_56059120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_56059120 = systemI;
   systemI->owner = (Object)func0_58_84_56637700;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_845_55159960;

   return systemI;
};

Behavior __78335920;

Behavior make__78335920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78335920 = behavior;
   behavior->owner = (Object)func0_58_84_56637700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78336180();

   return behavior;
}

Behavior __78335600;

Behavior make__78335600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78335600 = behavior;
   behavior->owner = (Object)func0_58_84_56637700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78335880();

   return behavior;
}

Behavior __78335020;

Behavior make__78335020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78335020 = behavior;
   behavior->owner = (Object)func0_58_84_56637700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[z__value_53985300_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78335560();

   return behavior;
}

Behavior __78334520;

Behavior make__78334520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78334520 = behavior;
   behavior->owner = (Object)func0_58_84_56637700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__78334980();

   return behavior;
}

Behavior __78353060;

Behavior make__78353060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78353060 = behavior;
   behavior->owner = (Object)func0_58_84_56637700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[address_57115880_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_56985500_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   base_56985500_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   base_56985500_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(base_56985500_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,base_56985500_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
base_56985500_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[base_56985500_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_57115980_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   next__data_57115980_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   next__data_57115980_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(next__data_57115980_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,next__data_57115980_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
next__data_57115980_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[next__data_57115980_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_46002420_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   change_46002420_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   change_46002420_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(change_46002420_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,change_46002420_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
change_46002420_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[change_46002420_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_57284720_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   remaining_57284720_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   remaining_57284720_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(remaining_57284720_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,remaining_57284720_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
remaining_57284720_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[remaining_57284720_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_56059400_my__interpolator_58_845_55159960_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   interpolated__value_56059400_my__interpolator_58_845_55159960_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   interpolated__value_56059400_my__interpolator_58_845_55159960_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(interpolated__value_56059400_my__interpolator_58_845_55159960_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,interpolated__value_56059400_my__interpolator_58_845_55159960_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
interpolated__value_56059400_my__interpolator_58_845_55159960_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[interpolated__value_56059400_my__interpolator_58_845_55159960_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78336400();

   return behavior;
}

Behavior __78352900;

Behavior make__78352900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78352900 = behavior;
   behavior->owner = (Object)func0_58_84_56637700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_53880160_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   base_53880160_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   base_53880160_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(base_53880160_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,base_53880160_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
base_53880160_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[base_53880160_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_53988060_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   next__data_53988060_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   next__data_53988060_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(next__data_53988060_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,next__data_53988060_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
next__data_53988060_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[next__data_53988060_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78336340();

   return behavior;
}

Scope makefunc0_58_84_56637700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_56637700 = scope;
   scope->owner = (Object)func0_58_843_53883280;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_53987860();
   scope->systemIs[1] = makemy__interpolator_56059120();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_56985500();
   scope->inners[1] = makenext__data_57115980();
   scope->inners[2] = makeaddress_57115880();
   scope->inners[3] = makeremaining_57284720();
   scope->inners[4] = makechange_46002420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78335920();
   scope->behaviors[1] = make__78335600();
   scope->behaviors[2] = make__78335020();
   scope->behaviors[3] = make__78334520();
   scope->behaviors[4] = make__78353060();
   scope->behaviors[5] = make__78352900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_843_53883280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_843_53883280 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T3";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_53985300();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_54205740();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_56637700();

   return systemT;
}