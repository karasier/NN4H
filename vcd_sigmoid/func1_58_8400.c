#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_8400_61391260;

SignalI z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makez__value_61633160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func1_58_8400_61391260;
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

SignalI a_61746380_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makea_61746380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_61746380_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func1_58_8400_61391260;
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

Block __49573180;

void code__49573180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            first = value2integer(make__49830480());
            last = value2integer(make__49830400());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49573180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49573180 = block;
   block->owner = (Object)__49572580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49573180;

   return block;
};

Block __49572540;

void code__49572540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920,value2integer(make__49829900()),value2integer(make__49829800())));
      set_value_pos(pool_state);
   }
}

Block make__49572540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49572540 = block;
   block->owner = (Object)__49570660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49572540;

   return block;
};

Block __49570360;

void code__49570360() {
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
            src0 = make__49848120();
            src1 = make__49848080();
            src2 = make__49847600();
            src3 = make__49847380();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            first = value2integer(make__49844840());
            last = value2integer(make__49844700());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_63404280_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49570360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49570360 = block;
   block->owner = (Object)__49624580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49570360;

   return block;
};

Block __49624080;

void code__49624080() {
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
            src0 = make__49842660();
            src1 = make__49842640();
            src2 = make__49842600();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__49842440();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__49841300();
            src1 = make__49841160();
            src2 = make__49841140();
            src3 = make__49841060();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_63602780_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49624080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49624080 = block;
   block->owner = (Object)__49619060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49624080;

   return block;
};

Block __49574780;

void code__49574780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,address_63255400_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_63219740_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,base_64841700_my__interpolator_58_8420_64761460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_63287560_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,next__data_64997200_my__interpolator_58_8420_64761460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_63602780_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,change_46998600_my__interpolator_58_8420_64761460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_63404280_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,remaining_48224080_my__interpolator_58_8420_64761460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_48852600_my__interpolator_58_8420_64761460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,a_61746380_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49574780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49574780 = block;
   block->owner = (Object)__49721080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49574780;

   return block;
};

Block __49574140;

void code__49574140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_63378680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,base_63219740_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_63591680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,next__data_63287560_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__49574140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49574140 = block;
   block->owner = (Object)__49720620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49574140;

   return block;
};

Value make__49830480() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49830400() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49829900() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49829800() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49848120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49848080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49847600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49847380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49844840() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49844700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49842660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49842640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49842600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49842440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49841300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49841160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49841140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49841060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_840_63070520;

SignalI base_63219740_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makebase_63219740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_63219740_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func1_58_840_63070520;
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

SignalI next__data_63287560_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makenext__data_63287560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_63287560_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func1_58_840_63070520;
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

SignalI address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeaddress_63287460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func1_58_840_63070520;
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

SignalI remaining_63404280_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeremaining_63404280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_63404280_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func1_58_840_63070520;
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

SignalI change_63602780_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makechange_63602780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_63602780_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)func1_58_840_63070520;
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

SystemI my__lut_63591540;

SystemI makemy__lut_63591540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_63591540 = systemI;
   systemI->owner = (Object)func1_58_840_63070520;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8420_63257600;

   return systemI;
};

SystemI my__interpolator_48852240;

SystemI makemy__interpolator_48852240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_48852240 = systemI;
   systemI->owner = (Object)func1_58_840_63070520;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8420_64761460;

   return systemI;
};

Behavior __49572580;

Behavior make__49572580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49572580 = behavior;
   behavior->owner = (Object)func1_58_840_63070520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__49573180();

   return behavior;
}

Behavior __49570660;

Behavior make__49570660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49570660 = behavior;
   behavior->owner = (Object)func1_58_840_63070520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__49572540();

   return behavior;
}

Behavior __49624580;

Behavior make__49624580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49624580 = behavior;
   behavior->owner = (Object)func1_58_840_63070520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[z__value_61633160_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__49570360();

   return behavior;
}

Behavior __49619060;

Behavior make__49619060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49619060 = behavior;
   behavior->owner = (Object)func1_58_840_63070520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__49624080();

   return behavior;
}

Behavior __49721080;

Behavior make__49721080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49721080 = behavior;
   behavior->owner = (Object)func1_58_840_63070520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[address_63287460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_63219740_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   base_63219740_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   base_63219740_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(base_63219740_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,base_63219740_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
base_63219740_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[base_63219740_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_63287560_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   next__data_63287560_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   next__data_63287560_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(next__data_63287560_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,next__data_63287560_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
next__data_63287560_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[next__data_63287560_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_63602780_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   change_63602780_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   change_63602780_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(change_63602780_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,change_63602780_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
change_63602780_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[change_63602780_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_63404280_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   remaining_63404280_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   remaining_63404280_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(remaining_63404280_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,remaining_63404280_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
remaining_63404280_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[remaining_63404280_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_48852600_my__interpolator_58_8420_64761460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   interpolated__value_48852600_my__interpolator_58_8420_64761460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   interpolated__value_48852600_my__interpolator_58_8420_64761460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(interpolated__value_48852600_my__interpolator_58_8420_64761460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,interpolated__value_48852600_my__interpolator_58_8420_64761460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
interpolated__value_48852600_my__interpolator_58_8420_64761460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[interpolated__value_48852600_my__interpolator_58_8420_64761460_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__49574780();

   return behavior;
}

Behavior __49720620;

Behavior make__49720620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49720620 = behavior;
   behavior->owner = (Object)func1_58_840_63070520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_63378680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   base_63378680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   base_63378680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(base_63378680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,base_63378680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
base_63378680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[base_63378680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_63591680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   next__data_63591680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   next__data_63591680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(next__data_63591680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,next__data_63591680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
next__data_63591680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[next__data_63591680_my__lut_58_8420_63257600_func1_58_840_63070520_func1_58_8400_61391260_layer1_58_84_54061560_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__49574140();

   return behavior;
}

Scope makefunc1_58_840_63070520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_840_63070520 = scope;
   scope->owner = (Object)func1_58_8400_61391260;
   scope->name = "func1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_63591540();
   scope->systemIs[1] = makemy__interpolator_48852240();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_63219740();
   scope->inners[1] = makenext__data_63287560();
   scope->inners[2] = makeaddress_63287460();
   scope->inners[3] = makeremaining_63404280();
   scope->inners[4] = makechange_63602780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49572580();
   scope->behaviors[1] = make__49570660();
   scope->behaviors[2] = make__49624580();
   scope->behaviors[3] = make__49619060();
   scope->behaviors[4] = make__49721080();
   scope->behaviors[5] = make__49720620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_8400_61391260() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_8400_61391260 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_61633160();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_61746380();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_840_63070520();

   return systemT;
}