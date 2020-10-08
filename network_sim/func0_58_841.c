#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_49825140;

SignalI z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makez__value_50120760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)func0_58_841_49825140;
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

SignalI a_50870000_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makea_50870000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50870000_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)func0_58_841_49825140;
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

Block __49072500;

void code__49072500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            first = value2integer(make__49327380());
            last = value2integer(make__49327240());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49072500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49072500 = block;
   block->owner = (Object)__49071880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49072500;

   return block;
};

Block __49071820;

void code__49071820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700,value2integer(make__49326700()),value2integer(make__49326300())));
      set_value_pos(pool_state);
   }
}

Block make__49071820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49071820 = block;
   block->owner = (Object)__49071040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49071820;

   return block;
};

Block __49070980;

void code__49070980() {
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
            src0 = make__49324120();
            src1 = make__50208700();
            src2 = make__50208680();
            src3 = make__50208660();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            first = value2integer(make__50208340());
            last = value2integer(make__50208320());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_49975680_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49070980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49070980 = block;
   block->owner = (Object)__49438260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49070980;

   return block;
};

Block __49073080;

void code__49073080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,address_51270920_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_49975680_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,remaining_50493560_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49610540_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,base_50832700_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49810320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,next__data_50947840_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_51090400_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,a_50870000_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49073080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49073080 = block;
   block->owner = (Object)__50038800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49073080;

   return block;
};

Block __49072860;

void code__49072860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51447800_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,base_49610540_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51564200_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,next__data_49810320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49072860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49072860 = block;
   block->owner = (Object)__50038080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49072860;

   return block;
};

Value make__49327380() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49327240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49326700() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49326300() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49324120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50208700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50208680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50208660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50208340() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50208320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_49233860;

SignalI base_49610540_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makebase_49610540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49610540_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)func0_58_84_49233860;
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

SignalI next__data_49810320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makenext__data_49810320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49810320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)func0_58_84_49233860;
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

SignalI address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeaddress_49810000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)func0_58_84_49233860;
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

SignalI remaining_49975680_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeremaining_49975680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_49975680_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)func0_58_84_49233860;
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

SystemI my__lut_51563960;

SystemI makemy__lut_51563960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_51563960 = systemI;
   systemI->owner = (Object)func0_58_84_49233860;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_51249320;

   return systemI;
};

SystemI my__interpolator_51090120;

SystemI makemy__interpolator_51090120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_51090120 = systemI;
   systemI->owner = (Object)func0_58_84_49233860;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_49737860;

   return systemI;
};

Behavior __49071880;

Behavior make__49071880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49071880 = behavior;
   behavior->owner = (Object)func0_58_84_49233860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__49072500();

   return behavior;
}

Behavior __49071040;

Behavior make__49071040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49071040 = behavior;
   behavior->owner = (Object)func0_58_84_49233860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__49071820();

   return behavior;
}

Behavior __49438260;

Behavior make__49438260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49438260 = behavior;
   behavior->owner = (Object)func0_58_84_49233860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__49070980();

   return behavior;
}

Behavior __50038800;

Behavior make__50038800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50038800 = behavior;
   behavior->owner = (Object)func0_58_84_49233860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[address_49810000_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_49975680_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   remaining_49975680_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   remaining_49975680_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(remaining_49975680_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,remaining_49975680_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
remaining_49975680_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[remaining_49975680_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_49610540_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   base_49610540_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   base_49610540_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(base_49610540_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,base_49610540_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
base_49610540_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[base_49610540_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_49810320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   next__data_49810320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   next__data_49810320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(next__data_49810320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,next__data_49810320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
next__data_49810320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[next__data_49810320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_51090400_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   interpolated__value_51090400_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   interpolated__value_51090400_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(interpolated__value_51090400_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,interpolated__value_51090400_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
interpolated__value_51090400_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[interpolated__value_51090400_my__interpolator_58_842_49737860_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__49073080();

   return behavior;
}

Behavior __50038080;

Behavior make__50038080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50038080 = behavior;
   behavior->owner = (Object)func0_58_84_49233860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51447800_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   base_51447800_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   base_51447800_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(base_51447800_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,base_51447800_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
base_51447800_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[base_51447800_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51564200_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   next__data_51564200_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   next__data_51564200_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(next__data_51564200_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,next__data_51564200_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
next__data_51564200_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[next__data_51564200_my__lut_58_842_51249320_func0_58_84_49233860_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__49072860();

   return behavior;
}

Scope makefunc0_58_84_49233860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_49233860 = scope;
   scope->owner = (Object)func0_58_841_49825140;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_51563960();
   scope->systemIs[1] = makemy__interpolator_51090120();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_49610540();
   scope->inners[1] = makenext__data_49810320();
   scope->inners[2] = makeaddress_49810000();
   scope->inners[3] = makeremaining_49975680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49071880();
   scope->behaviors[1] = make__49071040();
   scope->behaviors[2] = make__49438260();
   scope->behaviors[3] = make__50038800();
   scope->behaviors[4] = make__50038080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_49825140() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_49825140 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_50120760();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50870000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_49233860();

   return systemT;
}