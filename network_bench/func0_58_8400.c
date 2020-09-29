#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_68277280;

SignalI z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makez__value_77614640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func0_58_8400_68277280;
   signalI->name = "z_value";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SignalI a_77845520_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makea_77845520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_77845520_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func0_58_8400_68277280;
   signalI->name = "a";
   signalI->type = get_type_vector(get_type_signed(),16);
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

Block __58057820;

void code__58057820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
            first = value2integer(make__58607520());
            last = value2integer(make__58607440());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__58057820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58057820 = block;
   block->owner = (Object)__58113640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58057820;

   return block;
};

Block __58112780;

void code__58112780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760,value2integer(make__58605780()),value2integer(make__58605720())));
      set_value_pos(pool_state);
   }
}

Block make__58112780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58112780 = block;
   block->owner = (Object)__58111020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58112780;

   return block;
};

Block __58110780;

void code__58110780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,src2,src3,src4,src5,src6,src7;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__58626200();
            src1 = make__58624900();
            src2 = make__58624640();
            src3 = make__58624580();
            src4 = make__58624520();
            src5 = make__58624260();
            src6 = make__58624140();
            src7 = make__58623880();
            concat_value(8,1,dst,src0,src1,src2,src3,src4,src5,src6,src7);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
            first = value2integer(make__58623020());
            last = value2integer(make__58623000());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_67635600_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__58110780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58110780 = block;
   block->owner = (Object)__58129280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58110780;

   return block;
};

Block __58059900;

void code__58059900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,address_80948300_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_67635600_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,remaining_83400960_my__interpolator_58_8410_83153680_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_66952000_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,base_83715320_my__interpolator_58_8410_83153680_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_67408840_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,next__data_83883300_my__interpolator_58_8410_83153680_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_42036100_my__interpolator_58_8410_83153680_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,a_77845520_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__58059900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58059900 = block;
   block->owner = (Object)__58431120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58059900;

   return block;
};

Block __58058860;

void code__58058860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_81304800_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,base_66952000_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_81415020_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,next__data_67408840_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__58058860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58058860 = block;
   block->owner = (Object)__58430560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58058860;

   return block;
};

Value make__58607520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58607440() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58605780() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58605720() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58626200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58624900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58624640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58624580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58624520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58624260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58624140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58623880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58623020() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58623000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_66649700;

SignalI base_66952000_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makebase_66952000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_66952000_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func0_58_840_66649700;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SignalI next__data_67408840_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makenext__data_67408840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_67408840_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func0_58_840_66649700;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SignalI address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeaddress_67408700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func0_58_840_66649700;
   signalI->name = "address";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI remaining_67635600_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeremaining_67635600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_67635600_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)func0_58_840_66649700;
   signalI->name = "remaining";
   signalI->type = get_type_vector(get_type_signed(),16);
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

SystemI my__lut_81414880;

SystemI makemy__lut_81414880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_81414880 = systemI;
   systemI->owner = (Object)func0_58_840_66649700;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_80951420;

   return systemI;
};

SystemI my__interpolator_42102820;

SystemI makemy__interpolator_42102820() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_42102820 = systemI;
   systemI->owner = (Object)func0_58_840_66649700;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_83153680;

   return systemI;
};

Behavior __58113640;

Behavior make__58113640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58113640 = behavior;
   behavior->owner = (Object)func0_58_840_66649700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__58057820();

   return behavior;
}

Behavior __58111020;

Behavior make__58111020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58111020 = behavior;
   behavior->owner = (Object)func0_58_840_66649700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__58112780();

   return behavior;
}

Behavior __58129280;

Behavior make__58129280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58129280 = behavior;
   behavior->owner = (Object)func0_58_840_66649700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[z__value_77614640_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__58110780();

   return behavior;
}

Behavior __58431120;

Behavior make__58431120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58431120 = behavior;
   behavior->owner = (Object)func0_58_840_66649700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[address_67408700_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_67635600_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   remaining_67635600_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   remaining_67635600_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(remaining_67635600_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,remaining_67635600_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
remaining_67635600_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[remaining_67635600_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_66952000_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   base_66952000_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   base_66952000_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(base_66952000_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,base_66952000_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
base_66952000_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[base_66952000_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_67408840_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   next__data_67408840_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   next__data_67408840_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(next__data_67408840_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,next__data_67408840_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
next__data_67408840_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[next__data_67408840_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_42036100_my__interpolator_58_8410_83153680_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   interpolated__value_42036100_my__interpolator_58_8410_83153680_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   interpolated__value_42036100_my__interpolator_58_8410_83153680_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(interpolated__value_42036100_my__interpolator_58_8410_83153680_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,interpolated__value_42036100_my__interpolator_58_8410_83153680_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
interpolated__value_42036100_my__interpolator_58_8410_83153680_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[interpolated__value_42036100_my__interpolator_58_8410_83153680_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__58059900();

   return behavior;
}

Behavior __58430560;

Behavior make__58430560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58430560 = behavior;
   behavior->owner = (Object)func0_58_840_66649700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_81304800_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   base_81304800_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   base_81304800_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(base_81304800_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,base_81304800_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
base_81304800_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[base_81304800_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_81415020_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   next__data_81415020_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   next__data_81415020_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(next__data_81415020_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,next__data_81415020_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
next__data_81415020_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[next__data_81415020_my__lut_58_8410_80951420_func0_58_840_66649700_func0_58_8400_68277280_layer1_58_84_69930240_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__58058860();

   return behavior;
}

Scope makefunc0_58_840_66649700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_66649700 = scope;
   scope->owner = (Object)func0_58_8400_68277280;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_81414880();
   scope->systemIs[1] = makemy__interpolator_42102820();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_66952000();
   scope->inners[1] = makenext__data_67408840();
   scope->inners[2] = makeaddress_67408700();
   scope->inners[3] = makeremaining_67635600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58113640();
   scope->behaviors[1] = make__58111020();
   scope->behaviors[2] = make__58129280();
   scope->behaviors[3] = make__58431120();
   scope->behaviors[4] = make__58430560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_68277280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_68277280 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_77614640();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_77845520();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_66649700();

   return systemT;
}