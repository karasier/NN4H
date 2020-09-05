#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_51044640;

SignalI z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makez__value_51208460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)func0_58_840_51044640;
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

SignalI a_51401640_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makea_51401640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_51401640_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)func0_58_840_51044640;
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

Block __50776300;

void code__50776300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
            first = value2integer(make__50844780());
            last = value2integer(make__50844740());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50776300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50776300 = block;
   block->owner = (Object)__50776020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50776300;

   return block;
};

Block __50775960;

void code__50775960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480,value2integer(make__50844480()),value2integer(make__50844440())));
      set_value_pos(pool_state);
   }
}

Block make__50775960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50775960 = block;
   block->owner = (Object)__50775640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50775960;

   return block;
};

Block __50775600;

void code__50775600() {
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
            src0 = make__50843720();
            src1 = make__50843700();
            src2 = make__50843680();
            src3 = make__50843660();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
            first = value2integer(make__50843540());
            last = value2integer(make__50843480());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47478680_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50775600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50775600 = block;
   block->owner = (Object)__50775000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50775600;

   return block;
};

Block __50776700;

void code__50776700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,address_47609020_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47478680_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,remaining_51295120_my__interpolator_58_840_51061760_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_46864400_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,base_51400020_my__interpolator_58_840_51061760_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47341700_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,next__data_51546060_my__interpolator_58_840_51061760_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_51711860_my__interpolator_58_840_51061760_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,a_51401640_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50776700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50776700 = block;
   block->owner = (Object)__50825160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50776700;

   return block;
};

Block __50776580;

void code__50776580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47855840_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,base_46864400_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49642120_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,next__data_47341700_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50776580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50776580 = block;
   block->owner = (Object)__50824960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50776580;

   return block;
};

Value make__50844780() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50844740() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50844480() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50844440() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50843720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50843700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50843680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50843660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50843540() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50843480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_45488900;

SignalI base_46864400_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makebase_46864400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_46864400_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)func0_58_84_45488900;
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

SignalI next__data_47341700_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makenext__data_47341700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47341700_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)func0_58_84_45488900;
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

SignalI address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeaddress_47341620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)func0_58_84_45488900;
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

SignalI remaining_47478680_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeremaining_47478680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47478680_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)func0_58_84_45488900;
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

SystemI my__lut_49641980;

SystemI makemy__lut_49641980() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_49641980 = systemI;
   systemI->owner = (Object)func0_58_84_45488900;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_840_47587520;

   return systemI;
};

SystemI my__interpolator_51711720;

SystemI makemy__interpolator_51711720() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_51711720 = systemI;
   systemI->owner = (Object)func0_58_84_45488900;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_840_51061760;

   return systemI;
};

Behavior __50776020;

Behavior make__50776020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50776020 = behavior;
   behavior->owner = (Object)func0_58_84_45488900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50776300();

   return behavior;
}

Behavior __50775640;

Behavior make__50775640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50775640 = behavior;
   behavior->owner = (Object)func0_58_84_45488900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50775960();

   return behavior;
}

Behavior __50775000;

Behavior make__50775000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50775000 = behavior;
   behavior->owner = (Object)func0_58_84_45488900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50775600();

   return behavior;
}

Behavior __50825160;

Behavior make__50825160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50825160 = behavior;
   behavior->owner = (Object)func0_58_84_45488900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[address_47341620_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47478680_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   remaining_47478680_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   remaining_47478680_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(remaining_47478680_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,remaining_47478680_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
remaining_47478680_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[remaining_47478680_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_46864400_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   base_46864400_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   base_46864400_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(base_46864400_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,base_46864400_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
base_46864400_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[base_46864400_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47341700_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   next__data_47341700_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   next__data_47341700_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(next__data_47341700_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,next__data_47341700_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
next__data_47341700_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[next__data_47341700_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_51711860_my__interpolator_58_840_51061760_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   interpolated__value_51711860_my__interpolator_58_840_51061760_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   interpolated__value_51711860_my__interpolator_58_840_51061760_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(interpolated__value_51711860_my__interpolator_58_840_51061760_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,interpolated__value_51711860_my__interpolator_58_840_51061760_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
interpolated__value_51711860_my__interpolator_58_840_51061760_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[interpolated__value_51711860_my__interpolator_58_840_51061760_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50776700();

   return behavior;
}

Behavior __50824960;

Behavior make__50824960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50824960 = behavior;
   behavior->owner = (Object)func0_58_84_45488900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47855840_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   base_47855840_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   base_47855840_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(base_47855840_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,base_47855840_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
base_47855840_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[base_47855840_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49642120_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   next__data_49642120_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   next__data_49642120_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(next__data_49642120_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,next__data_49642120_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
next__data_49642120_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[next__data_49642120_my__lut_58_840_47587520_func0_58_84_45488900_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50776580();

   return behavior;
}

Scope makefunc0_58_84_45488900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_45488900 = scope;
   scope->owner = (Object)func0_58_840_51044640;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_49641980();
   scope->systemIs[1] = makemy__interpolator_51711720();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_46864400();
   scope->inners[1] = makenext__data_47341700();
   scope->inners[2] = makeaddress_47341620();
   scope->inners[3] = makeremaining_47478680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50776020();
   scope->behaviors[1] = make__50775640();
   scope->behaviors[2] = make__50775000();
   scope->behaviors[3] = make__50825160();
   scope->behaviors[4] = make__50824960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_51044640() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_51044640 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51208460();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_51401640();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_45488900();

   return systemT;
}