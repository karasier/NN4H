#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_54426020;

SignalI clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeclk_54423980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_840_54426020;
   signalI->name = "clk";
   signalI->type = get_type_bit();
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

SignalI rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makerst_54423960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_840_54426020;
   signalI->name = "rst";
   signalI->type = get_type_bit();
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

SignalI fill_54423940_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makefill_54423940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_54423940_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_840_54426020;
   signalI->name = "fill";
   signalI->type = get_type_bit();
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

SignalI req_54423920_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makereq_54423920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_54423920_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_840_54426020;
   signalI->name = "req";
   signalI->type = get_type_bit();
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

SignalI ack__1_54423880_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeack__1_54423880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_54423880_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_840_54426020;
   signalI->name = "ack_1";
   signalI->type = get_type_bit();
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

Block __53138440;

Block __53137120;

Block __53136840;

void code__53136840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_53487840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,value__z0_53770700_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60349100(),flag__z0_54084080_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53136840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53136840 = block;
   block->owner = (Object)__53137120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53136840;

   return block;
};

void code__53137120() {
 code__53136840();
}

Block make__53137120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53137120 = block;
   block->owner = (Object)__53138440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53137120;

   return block;
};

Block __53138040;

void code__53138040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60349040(),flag__z0_54084080_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53138040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53138040 = block;
   block->owner = (Object)__53138440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53138040;

   return block;
};

void code__53138440() {
   {
      Value cond = ack__add_52500860_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53137120();
   }
   else {
  code__53138040();
   }
      }
   }
}

Block make__53138440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53138440 = block;
   block->owner = (Object)__53686940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53138440;

   return block;
};

Block __53686720;

Block __53686200;

Block __53685920;

void code__53685920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a10_54084100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,_5862_49864840______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60348860(),ack__a10_54084060_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53685920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53685920 = block;
   block->owner = (Object)__53686200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53685920;

   return block;
};

void code__53686200() {
 code__53685920();
}

Block make__53686200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53686200 = block;
   block->owner = (Object)__53686720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53686200;

   return block;
};

void code__53686720() {
   {
      Value cond = flag__z0_54084080_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53686200();
   }
      }
   }
}

Block make__53686720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53686720 = block;
   block->owner = (Object)__54354360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53686720;

   return block;
};

Block __54354200;

Block __54353960;

Block __54394020;

void code__54394020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60348700(),_58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54394020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54394020 = block;
   block->owner = (Object)__54353960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54394020;

   return block;
};

void code__54353960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60348780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54394020();
   }
      }
   }
}

Block make__54353960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54353960 = block;
   block->owner = (Object)__54354200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54353960;

   return block;
};

Block __54392920;

Block __54392180;

void code__54392180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60348540(),_58252_54083840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54392180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54392180 = block;
   block->owner = (Object)__54392920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54392180;

   return block;
};

void code__54392920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60348620();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54392180();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60348480(),_58251_54084040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54392920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54392920 = block;
   block->owner = (Object)__54354200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54392920;

   return block;
};

Block __54388880;

Block __54388700;

Block __54387960;

void code__54387960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58252_54083840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60348220();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58252_54083840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60348080(),_58251_54084040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60348020(),_58253_54356100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54387960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54387960 = block;
   block->owner = (Object)__54388700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54387960;

   return block;
};

void code__54388700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60348360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54387960();
   }
      }
   }
}

Block make__54388700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54388700 = block;
   block->owner = (Object)__54388880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54388700;

   return block;
};

Block __54825100;

Block __54824760;

Block __54822720;

void code__54822720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60347700(),_58303_54690540_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54822720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54822720 = block;
   block->owner = (Object)__54824760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54822720;

   return block;
};

void code__54824760() {
{
      Value value = _58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60347760())) {
    code__54822720();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60347580();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54824760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54824760 = block;
   block->owner = (Object)__54825100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54824760;

   return block;
};

void code__54825100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60347920();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54824760();
   }
      }
   }
}

Block make__54825100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54825100 = block;
   block->owner = (Object)__54388880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54825100;

   return block;
};

void code__54388880() {
 code__54388700();
 code__54825100();
}

Block make__54388880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54388880 = block;
   block->owner = (Object)__54354200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54388880;

   return block;
};

void code__54354200() {
 code__54353960();
 code__54392920();
   {
      Value cond = fill_54423940_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54388880();
   }
      }
   }
}

Block make__54354200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54354200 = block;
   block->owner = (Object)__54426340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54354200;

   return block;
};

Block __60180100;

void code__60180100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_52500920_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,ack_54779240_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,rst_54779220_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_53770700_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,z__value_49820220_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a10_54084060_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,ack__1_54423880_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60180100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60180100 = block;
   block->owner = (Object)__60216280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60180100;

   return block;
};

Block __60180000;

void code__60180000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_54779140_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,ack__mac_52500900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_50061360_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,value__a10_54084100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60180000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60180000 = block;
   block->owner = (Object)__60216120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60180000;

   return block;
};

Block __53257860;

Block __53854340;

void code__53854340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50319100_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,make_ref_rangeS(mem_52477620_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920,value2integer(abus__w_50318260_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value),value2integer(abus__w_50318260_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__53854340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53854340 = block;
   block->owner = (Object)__53257860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53854340;

   return block;
};

void code__53257860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_52477620_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
            idx = value2integer(abus__r_50318480_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50158720_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49969860_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53854340();
   }
      }
   }
}

Block make__53257860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53257860 = block;
   block->owner = (Object)__54713040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53257860;

   return block;
};

Block __60215300;

void code__60215300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50158720_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,_58249_52704000_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60215300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60215300 = block;
   block->owner = (Object)__60215140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60215300;

   return block;
};

Block __60215100;

void code__60215100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_52704000_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,dbus__r_50158720_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60215100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60215100 = block;
   block->owner = (Object)__60214940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60215100;

   return block;
};

Block __60214600;

void code__60214600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49969880_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,_58247_52703960_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60214600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60214600 = block;
   block->owner = (Object)__60214240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60214600;

   return block;
};

Block __60214200;

void code__60214200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58247_52703960_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,trig__r_49969880_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60214200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60214200 = block;
   block->owner = (Object)__60214040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60214200;

   return block;
};

Block __60213740;

void code__60213740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50318480_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,_58248_52703820_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60213740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60213740 = block;
   block->owner = (Object)__60213540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60213740;

   return block;
};

Block __60213500;

void code__60213500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58248_52703820_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,abus__r_50318480_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60213500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60213500 = block;
   block->owner = (Object)__60213280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60213500;

   return block;
};

Block __60212980;

void code__60212980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49969860_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,_58251_54084040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60212980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60212980 = block;
   block->owner = (Object)__60212820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60212980;

   return block;
};

Block __60212780;

void code__60212780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58251_54084040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,trig__w_49969860_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60212780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60212780 = block;
   block->owner = (Object)__60212620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60212780;

   return block;
};

Block __60212280;

void code__60212280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50318260_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,_58252_54083840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60212280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60212280 = block;
   block->owner = (Object)__60212060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60212280;

   return block;
};

Block __60212020;

void code__60212020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58252_54083840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,abus__w_50318260_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60212020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60212020 = block;
   block->owner = (Object)__60211860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60212020;

   return block;
};

Block __60211540;

void code__60211540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50319100_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,_58253_54356100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60211540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60211540 = block;
   block->owner = (Object)__60211360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60211540;

   return block;
};

Block __60211300;

void code__60211300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58253_54356100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,dbus__w_50319100_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60211300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60211300 = block;
   block->owner = (Object)__60252020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60211300;

   return block;
};

Block __60250380;

void code__60250380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54905480_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,_58266_52998940_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60250380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60250380 = block;
   block->owner = (Object)__60250200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60250380;

   return block;
};

Block __60250140;

void code__60250140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_52998940_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,reg__0_54905480_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60250140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60250140 = block;
   block->owner = (Object)__60249940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60250140;

   return block;
};

Block __50192060;

Block __50191660;

Block __50190880;

void code__50190880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60330620(),_58248_52703820_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__50190880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50190880 = block;
   block->owner = (Object)__50191660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50190880;

   return block;
};

void code__50191660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60330700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50190880();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60330560(),_58247_52703960_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__50191660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50191660 = block;
   block->owner = (Object)__50192060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50191660;

   return block;
};

Block __50189900;

Block __50188560;

void code__50188560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60330400(),_5845_49800640______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__50188560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50188560 = block;
   block->owner = (Object)__50189900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50188560;

   return block;
};

void code__50189900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60330480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50188560();
   }
      }
   }
}

Block make__50189900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50189900 = block;
   block->owner = (Object)__50192060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50189900;

   return block;
};

Block __51341260;

Block __51340660;

Block __51340140;

Block __48701060;

void code__48701060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_49668860______58_84_49433100______58_840_59034920->c_value,rv_50167920_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__48701060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48701060 = block;
   block->owner = (Object)__51340140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48701060;

   return block;
};

Block __52704600;

void code__52704600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_49800720______58_84_49433100______58_840_59034920->c_value,rv_50167920_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__52704600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52704600 = block;
   block->owner = (Object)__51340140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52704600;

   return block;
};

void code__51340140() {
{
      Value value = _5845_49800640______58_84_49433100______58_840_59034920->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60329820())) {
    code__48701060();
         }
         else if (value2integer(value) == value2integer(make__60329720())) {
    code__52704600();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60329580(),rvok_50167840_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _5845_49800640______58_84_49433100______58_840_59034920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60329460();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_49800640______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__51340140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51340140 = block;
   block->owner = (Object)__51340660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51340140;

   return block;
};

void code__51340660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60329940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51340140();
   }
      }
   }
}

Block make__51340660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51340660 = block;
   block->owner = (Object)__51341260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51340660;

   return block;
};

Block __53193820;

Block __53192680;

Block __53192180;

void code__53192180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_52704000_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,lv0_49736940_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60328980(),lvok0_50167860_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53192180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53192180 = block;
   block->owner = (Object)__53192680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53192180;

   return block;
};

void code__53192680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58247_52703960_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60329200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53192180();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58248_52703820_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60328860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58248_52703820_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60328760(),_58247_52703960_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53192680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53192680 = block;
   block->owner = (Object)__53193820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53192680;

   return block;
};

void code__53193820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60329300();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53192680();
   }
      }
   }
}

Block make__53193820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53193820 = block;
   block->owner = (Object)__51341260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53193820;

   return block;
};

Block __53602820;

Block __53601980;

Block __53601760;

void code__53601760() {
}

Block make__53601760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53601760 = block;
   block->owner = (Object)__53601980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53601760;

   return block;
};

Block __50012580;

void code__50012580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49985100_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,_58266_52998940_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__50012580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50012580 = block;
   block->owner = (Object)__53601980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50012580;

   return block;
};

void code__53601980() {
 code__53601760();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_49985100_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0,src1,dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = lv0_49736940_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_50167920_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60328200();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49985100_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
 code__50012580();
}

Block make__53601980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53601980 = block;
   block->owner = (Object)__53602820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53601980;

   return block;
};

void code__53602820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60328600(),ack_52500920_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60328540(),run_50192320_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
 code__53601980();
}

Block make__53602820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53602820 = block;
   block->owner = (Object)__51341260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53602820;

   return block;
};

void code__51341260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60330060(),run_50192320_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
 code__51340660();
 code__53193820();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_50167860_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
         src1 = rvok_50167840_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53602820();
   }
      }
   }
}

Block make__51341260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51341260 = block;
   block->owner = (Object)__50192060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51341260;

   return block;
};

Block __50185520;

void code__50185520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60327980(),rvok_50167840_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60327920(),lvok0_50167860_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60327800(),av0_49985100_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__50185520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50185520 = block;
   block->owner = (Object)__50192060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50185520;

   return block;
};

void code__50192060() {
 code__50191660();
 code__50189900();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60330320(),ack_52500920_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60330260(),run_50192320_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_54423920_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
         src1 = run_50192320_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51341260();
   }
   else {
  code__50185520();
   }
      }
   }
}

Block make__50192060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50192060 = block;
   block->owner = (Object)__52866740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50192060;

   return block;
};

Block __60248060;

void code__60248060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,_58292_53258780_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60248060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60248060 = block;
   block->owner = (Object)__60247860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60248060;

   return block;
};

Block __60247820;

void code__60247820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_53258780_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60247820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60247820 = block;
   block->owner = (Object)__60247660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60247820;

   return block;
};

Block __60247360;

void code__60247360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,_58303_54690540_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60247360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60247360 = block;
   block->owner = (Object)__60247200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60247360;

   return block;
};

Block __60247160;

void code__60247160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58303_54690540_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60247160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60247160 = block;
   block->owner = (Object)__60247000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60247160;

   return block;
};

Block __60245220;

void code__60245220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_52902840_winc_58302_52903580_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,_58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60245220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60245220 = block;
   block->owner = (Object)__60245060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60245220;

   return block;
};

Block __60245020;

void code__60245020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,abus__w_52902840_winc_58302_52903580_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60245020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60245020 = block;
   block->owner = (Object)__60244860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60245020;

   return block;
};

Block __60268080;

void code__60268080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51345320_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,_58315_53487840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60268080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60268080 = block;
   block->owner = (Object)__60267920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60268080;

   return block;
};

Block __60267880;

void code__60267880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_53487840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,reg__0_51345320_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__60267880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60267880 = block;
   block->owner = (Object)__60267720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60267880;

   return block;
};

Block __54088760;

Block __54085880;

Block __54085540;

void code__54085540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_52998940_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,lv0_53620920_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60326180(),lvok0_54088920_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54085540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54085540 = block;
   block->owner = (Object)__54085880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54085540;

   return block;
};

Block __43897060;

void code__43897060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_53258780_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,rv0_54088940_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60326040(),rvok0_54088900_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__43897060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43897060 = block;
   block->owner = (Object)__54085880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43897060;

   return block;
};

Block __49587040;

Block __49610660;

void code__49610660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_53620920_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
      src1 = rv0_54088940_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58315_53487840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__49610660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49610660 = block;
   block->owner = (Object)__49587040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49610660;

   return block;
};

void code__49587040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60350420(),run_54088880_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60350340(),ack__add_52500860_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
 code__49610660();
}

Block make__49587040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49587040 = block;
   block->owner = (Object)__54085880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49587040;

   return block;
};

void code__54085880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60326320(),run_54088880_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
 code__54085540();
 code__43897060();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_54088920_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
         src1 = rvok0_54088900_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49587040();
   }
      }
   }
}

Block make__54085880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54085880 = block;
   block->owner = (Object)__54088760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54085880;

   return block;
};

Block __54087720;

void code__54087720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60350020(),lvok0_54088920_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60349960(),rvok0_54088900_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54087720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54087720 = block;
   block->owner = (Object)__54088760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54087720;

   return block;
};

void code__54088760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60326540(),ack__add_52500860_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60326480(),run_54088880_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_52500900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
         src1 = run_54088880_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54085880();
   }
   else {
  code__54087720();
   }
      }
   }
}

Block make__54088760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54088760 = block;
   block->owner = (Object)__52501220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54088760;

   return block;
};

Value make__60330700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60330620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60330560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60330480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60330400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60330320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60330260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60330060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60329940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60329820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60329720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60329580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60329460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60329300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60329200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60328980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60328860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60328760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60328600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60328540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60328200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60327980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60327920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60327800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60326540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60326480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60326320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60326180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60326040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60350420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60350340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60350020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60349960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60349100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60349040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60348860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60348780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60348700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60348620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60348540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60348480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60348360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60348220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60348080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60348020() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60347920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60347760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60347700() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60347580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer1_58_84_49952460;

SignalI ack_52500920_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeack_52500920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_52500920_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = "ack";
   signalI->type = get_type_bit();
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

SignalI ack__mac_52500900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeack__mac_52500900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_52500900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = "ack_mac";
   signalI->type = get_type_bit();
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

SignalI ack__add_52500860_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeack__add_52500860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_52500860_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = "ack_add";
   signalI->type = get_type_bit();
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

SignalI _58249_52704000_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI make_58249_52704000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58249_52704000_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = ":249";
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

SignalI _58247_52703960_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI make_58247_52703960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58247_52703960_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = ":247";
   signalI->type = get_type_bit();
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

SignalI _58248_52703820_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI make_58248_52703820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58248_52703820_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = ":248";
   signalI->type = get_type_vector(get_type_bit(),1);
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

SignalI _58266_52998940_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI make_58266_52998940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_52998940_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = ":266";
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

SignalI _58292_53258780_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI make_58292_53258780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58292_53258780_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = ":292";
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

SignalI _58315_53487840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI make_58315_53487840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_53487840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = ":315";
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

SignalI value__z0_53770700_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makevalue__z0_53770700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_53770700_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = "value_z0";
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

SignalI value__a10_54084100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makevalue__a10_54084100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a10_54084100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = "value_a10";
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

SignalI flag__z0_54084080_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeflag__z0_54084080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_54084080_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = "flag_z0";
   signalI->type = get_type_bit();
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

SignalI ack__a10_54084060_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeack__a10_54084060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a10_54084060_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = "ack_a10";
   signalI->type = get_type_bit();
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

SignalI _58251_54084040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI make_58251_54084040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58251_54084040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = ":251";
   signalI->type = get_type_bit();
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

SignalI _58252_54083840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI make_58252_54083840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58252_54083840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = ":252";
   signalI->type = get_type_vector(get_type_bit(),1);
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

SignalI _58253_54356100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI make_58253_54356100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58253_54356100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = ":253";
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

SignalI _58303_54690540_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI make_58303_54690540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58303_54690540_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = ":303";
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

SignalI _58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI make_58304_54690460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer1_58_84_49952460;
   signalI->name = ":304";
   signalI->type = get_type_vector(get_type_bit(),2);
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

SystemI counter1_54778920;

SystemI makecounter1_54778920() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter1_54778920 = systemI;
   systemI->owner = (Object)layer1_58_84_49952460;
   systemI->name = "counter1";
   systemI->system = counter1_58_840_54758160;

   return systemI;
};

SystemI func0_50109560;

SystemI makefunc0_50109560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_50109560 = systemI;
   systemI->owner = (Object)layer1_58_84_49952460;
   systemI->name = "func0";
   systemI->system = func0_58_8400_49278760;

   return systemI;
};

Scope channel__w0_58235_49952040;

SignalI trig__r_49969880_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI maketrig__r_49969880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49969880_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w0_58235_49952040;
   signalI->name = "trig_r";
   signalI->type = get_type_bit();
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

SignalI trig__w_49969860_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI maketrig__w_49969860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49969860_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w0_58235_49952040;
   signalI->name = "trig_w";
   signalI->type = get_type_bit();
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

SignalI dbus__r_50158720_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makedbus__r_50158720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50158720_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w0_58235_49952040;
   signalI->name = "dbus_r";
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

SignalI dbus__w_50319100_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makedbus__w_50319100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50319100_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w0_58235_49952040;
   signalI->name = "dbus_w";
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

SignalI abus__r_50318480_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeabus__r_50318480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50318480_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w0_58235_49952040;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
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

SignalI abus__w_50318260_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeabus__w_50318260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50318260_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w0_58235_49952040;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
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

SignalI mem_52477620_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makemem_52477620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_52477620_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w0_58235_49952040;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
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

Scope raddr_58236_49951500;

Scope makeraddr_58236_49951500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58236_49951500 = scope;
   scope->owner = (Object)channel__w0_58235_49952040;
   scope->name = "raddr:236";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope waddr_58241_49950360;

Scope makewaddr_58241_49950360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58241_49950360 = scope;
   scope->owner = (Object)channel__w0_58235_49952040;
   scope->name = "waddr:241";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_58246_49949380;

Scope makerinc_58246_49949380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58246_49949380 = scope;
   scope->owner = (Object)channel__w0_58235_49952040;
   scope->name = "rinc:246";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58250_49948840;

Scope makewinc_58250_49948840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58250_49948840 = scope;
   scope->owner = (Object)channel__w0_58235_49952040;
   scope->name = "winc:250";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58254_49971080;

Scope makerdec_58254_49971080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58254_49971080 = scope;
   scope->owner = (Object)channel__w0_58235_49952040;
   scope->name = "rdec:254";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58259_49970600;

Scope makewdec_58259_49970600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58259_49970600 = scope;
   scope->owner = (Object)channel__w0_58235_49952040;
   scope->name = "wdec:259";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54713040;

Behavior make__54713040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54713040 = behavior;
   behavior->owner = (Object)channel__w0_58235_49952040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_neg += 1;
   clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->neg = realloc(clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->neg,clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_neg*sizeof(Object));
clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->neg[clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_neg-1] = (Object)behavior;
   behavior->block = make__53257860();

   return behavior;
}

Behavior __60215140;

Behavior make__60215140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60215140 = behavior;
   behavior->owner = (Object)channel__w0_58235_49952040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50158720_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   dbus__r_50158720_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   dbus__r_50158720_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(dbus__r_50158720_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,dbus__r_50158720_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
dbus__r_50158720_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[dbus__r_50158720_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60215300();

   return behavior;
}

Behavior __60214940;

Behavior make__60214940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60214940 = behavior;
   behavior->owner = (Object)channel__w0_58235_49952040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58249_52704000_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   _58249_52704000_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   _58249_52704000_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(_58249_52704000_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,_58249_52704000_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58249_52704000_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[_58249_52704000_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60215100();

   return behavior;
}

Behavior __60214240;

Behavior make__60214240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60214240 = behavior;
   behavior->owner = (Object)channel__w0_58235_49952040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49969880_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   trig__r_49969880_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   trig__r_49969880_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(trig__r_49969880_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,trig__r_49969880_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
trig__r_49969880_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[trig__r_49969880_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60214600();

   return behavior;
}

Behavior __60214040;

Behavior make__60214040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60214040 = behavior;
   behavior->owner = (Object)channel__w0_58235_49952040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58247_52703960_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   _58247_52703960_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   _58247_52703960_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(_58247_52703960_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,_58247_52703960_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58247_52703960_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[_58247_52703960_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60214200();

   return behavior;
}

Behavior __60213540;

Behavior make__60213540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60213540 = behavior;
   behavior->owner = (Object)channel__w0_58235_49952040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50318480_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   abus__r_50318480_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   abus__r_50318480_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(abus__r_50318480_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,abus__r_50318480_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
abus__r_50318480_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[abus__r_50318480_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60213740();

   return behavior;
}

Behavior __60213280;

Behavior make__60213280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60213280 = behavior;
   behavior->owner = (Object)channel__w0_58235_49952040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58248_52703820_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   _58248_52703820_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   _58248_52703820_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(_58248_52703820_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,_58248_52703820_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58248_52703820_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[_58248_52703820_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60213500();

   return behavior;
}

Behavior __60212820;

Behavior make__60212820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60212820 = behavior;
   behavior->owner = (Object)channel__w0_58235_49952040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49969860_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   trig__w_49969860_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   trig__w_49969860_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(trig__w_49969860_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,trig__w_49969860_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
trig__w_49969860_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[trig__w_49969860_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60212980();

   return behavior;
}

Behavior __60212620;

Behavior make__60212620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60212620 = behavior;
   behavior->owner = (Object)channel__w0_58235_49952040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58251_54084040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   _58251_54084040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   _58251_54084040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(_58251_54084040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,_58251_54084040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58251_54084040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[_58251_54084040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60212780();

   return behavior;
}

Behavior __60212060;

Behavior make__60212060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60212060 = behavior;
   behavior->owner = (Object)channel__w0_58235_49952040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50318260_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   abus__w_50318260_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   abus__w_50318260_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(abus__w_50318260_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,abus__w_50318260_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
abus__w_50318260_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[abus__w_50318260_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60212280();

   return behavior;
}

Behavior __60211860;

Behavior make__60211860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60211860 = behavior;
   behavior->owner = (Object)channel__w0_58235_49952040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58252_54083840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   _58252_54083840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   _58252_54083840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(_58252_54083840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,_58252_54083840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58252_54083840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[_58252_54083840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60212020();

   return behavior;
}

Behavior __60211360;

Behavior make__60211360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60211360 = behavior;
   behavior->owner = (Object)channel__w0_58235_49952040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50319100_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   dbus__w_50319100_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   dbus__w_50319100_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(dbus__w_50319100_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,dbus__w_50319100_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
dbus__w_50319100_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[dbus__w_50319100_channel__w0_58235_49952040_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60211540();

   return behavior;
}

Behavior __60252020;

Behavior make__60252020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60252020 = behavior;
   behavior->owner = (Object)channel__w0_58235_49952040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58253_54356100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   _58253_54356100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   _58253_54356100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(_58253_54356100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,_58253_54356100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58253_54356100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[_58253_54356100_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60211300();

   return behavior;
}

Scope makechannel__w0_58235_49952040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58235_49952040 = scope;
   scope->owner = (Object)layer1_58_84_49952460;
   scope->name = "channel_w0:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49969880();
   scope->inners[1] = maketrig__w_49969860();
   scope->inners[2] = makedbus__r_50158720();
   scope->inners[3] = makedbus__w_50319100();
   scope->inners[4] = makeabus__r_50318480();
   scope->inners[5] = makeabus__w_50318260();
   scope->inners[6] = makemem_52477620();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58236_49951500();
   scope->scopes[1] = makewaddr_58241_49950360();
   scope->scopes[2] = makerinc_58246_49949380();
   scope->scopes[3] = makewinc_58250_49948840();
   scope->scopes[4] = makerdec_58254_49971080();
   scope->scopes[5] = makewdec_58259_49970600();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54713040();
   scope->behaviors[1] = make__60215140();
   scope->behaviors[2] = make__60214940();
   scope->behaviors[3] = make__60214240();
   scope->behaviors[4] = make__60214040();
   scope->behaviors[5] = make__60213540();
   scope->behaviors[6] = make__60213280();
   scope->behaviors[7] = make__60212820();
   scope->behaviors[8] = make__60212620();
   scope->behaviors[9] = make__60212060();
   scope->behaviors[10] = make__60211860();
   scope->behaviors[11] = make__60211360();
   scope->behaviors[12] = make__60252020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58264_54712880;

SignalI reg__0_54905480_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makereg__0_54905480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_54905480_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__accum_58264_54712880;
   signalI->name = "reg_0";
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

Scope anum_58265_54712240;

Scope makeanum_58265_54712240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58265_54712240 = scope;
   scope->owner = (Object)channel__accum_58264_54712880;
   scope->name = "anum:265";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58267_54711600;

Scope makeraddr_58267_54711600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58267_54711600 = scope;
   scope->owner = (Object)channel__accum_58264_54712880;
   scope->name = "raddr:267";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope waddr_58270_54711080;

Scope makewaddr_58270_54711080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58270_54711080 = scope;
   scope->owner = (Object)channel__accum_58264_54712880;
   scope->name = "waddr:270";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_58273_54710340;

SignalI abus__r_54709520_rinc_58273_54710340_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeabus__r_54709520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54709520_rinc_58273_54710340_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rinc_58273_54710340;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makerinc_58273_54710340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_54710340 = scope;
   scope->owner = (Object)channel__accum_58264_54712880;
   scope->name = "rinc:273";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54709520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58277_54709300;

SignalI abus__w_54708600_winc_58277_54709300_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeabus__w_54708600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54708600_winc_58277_54709300_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)winc_58277_54709300;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makewinc_58277_54709300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58277_54709300 = scope;
   scope->owner = (Object)channel__accum_58264_54712880;
   scope->name = "winc:277";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54708600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58281_54708460;

SignalI abus__r_54707960_rdec_58281_54708460_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeabus__r_54707960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54707960_rdec_58281_54708460_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rdec_58281_54708460;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makerdec_58281_54708460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58281_54708460 = scope;
   scope->owner = (Object)channel__accum_58264_54712880;
   scope->name = "rdec:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54707960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58285_54707740;

SignalI abus__w_54706780_wdec_58285_54707740_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeabus__w_54706780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54706780_wdec_58285_54707740_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)wdec_58285_54707740;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makewdec_58285_54707740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58285_54707740 = scope;
   scope->owner = (Object)channel__accum_58264_54712880;
   scope->name = "wdec:285";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54706780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60250200;

Behavior make__60250200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60250200 = behavior;
   behavior->owner = (Object)channel__accum_58264_54712880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54905480_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   reg__0_54905480_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   reg__0_54905480_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(reg__0_54905480_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,reg__0_54905480_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__0_54905480_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[reg__0_54905480_channel__accum_58264_54712880_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60250380();

   return behavior;
}

Behavior __60249940;

Behavior make__60249940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60249940 = behavior;
   behavior->owner = (Object)channel__accum_58264_54712880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_52998940_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   _58266_52998940_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   _58266_52998940_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(_58266_52998940_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,_58266_52998940_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58266_52998940_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[_58266_52998940_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60250140();

   return behavior;
}

Scope makechannel__accum_58264_54712880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58264_54712880 = scope;
   scope->owner = (Object)layer1_58_84_49952460;
   scope->name = "channel_accum:264";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_54905480();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58265_54712240();
   scope->scopes[1] = makeraddr_58267_54711600();
   scope->scopes[2] = makewaddr_58270_54711080();
   scope->scopes[3] = makerinc_58273_54710340();
   scope->scopes[4] = makewinc_58277_54709300();
   scope->scopes[5] = makerdec_58281_54708460();
   scope->scopes[6] = makewdec_58285_54707740();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60250200();
   scope->behaviors[1] = make__60249940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58289_49296900;

SignalI lv0_49736940_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makelv0_49736940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49736940_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58289_49296900;
   signalI->name = "lv0";
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

SignalI av0_49985100_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeav0_49985100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49985100_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58289_49296900;
   signalI->name = "av0";
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

SignalI rv_50167920_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makerv_50167920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_50167920_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58289_49296900;
   signalI->name = "rv";
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

SignalI lvok0_50167860_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makelvok0_50167860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_50167860_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58289_49296900;
   signalI->name = "lvok0";
   signalI->type = get_type_bit();
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

SignalI rvok_50167840_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makervok_50167840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_50167840_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58289_49296900;
   signalI->name = "rvok";
   signalI->type = get_type_bit();
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

SignalI run_50192320_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makerun_50192320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_50192320_mac__n1_58289_49296900_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58289_49296900;
   signalI->name = "run";
   signalI->type = get_type_bit();
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

Behavior __52866740;

Behavior make__52866740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52866740 = behavior;
   behavior->owner = (Object)mac__n1_58289_49296900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos += 1;
   clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos = realloc(clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos,clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos[clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__50192060();

   return behavior;
}

Scope makemac__n1_58289_49296900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58289_49296900 = scope;
   scope->owner = (Object)layer1_58_84_49952460;
   scope->name = "mac_n1:289";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49736940();
   scope->inners[1] = makeav0_49985100();
   scope->inners[2] = makerv_50167920();
   scope->inners[3] = makelvok0_50167860();
   scope->inners[4] = makervok_50167840();
   scope->inners[5] = makerun_50192320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52866740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58290_52866480;

SignalI reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makereg__0_53424220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__bias_58290_52866480;
   signalI->name = "reg_0";
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

Scope anum_58291_52865920;

Scope makeanum_58291_52865920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58291_52865920 = scope;
   scope->owner = (Object)channel__bias_58290_52866480;
   scope->name = "anum:291";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58293_52865160;

Scope makeraddr_58293_52865160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58293_52865160 = scope;
   scope->owner = (Object)channel__bias_58290_52866480;
   scope->name = "raddr:293";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope waddr_58296_52864720;

Scope makewaddr_58296_52864720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58296_52864720 = scope;
   scope->owner = (Object)channel__bias_58290_52866480;
   scope->name = "waddr:296";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_58299_52863780;

SignalI abus__r_52903720_rinc_58299_52863780_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeabus__r_52903720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52903720_rinc_58299_52863780_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rinc_58299_52863780;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makerinc_58299_52863780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58299_52863780 = scope;
   scope->owner = (Object)channel__bias_58290_52866480;
   scope->name = "rinc:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52903720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58302_52903580;

SignalI abus__w_52902840_winc_58302_52903580_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeabus__w_52902840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52902840_winc_58302_52903580_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)winc_58302_52903580;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Behavior __60245060;

Behavior make__60245060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60245060 = behavior;
   behavior->owner = (Object)winc_58302_52903580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_52902840_winc_58302_52903580_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   abus__w_52902840_winc_58302_52903580_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   abus__w_52902840_winc_58302_52903580_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(abus__w_52902840_winc_58302_52903580_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,abus__w_52902840_winc_58302_52903580_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
abus__w_52902840_winc_58302_52903580_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[abus__w_52902840_winc_58302_52903580_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60245220();

   return behavior;
}

Behavior __60244860;

Behavior make__60244860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60244860 = behavior;
   behavior->owner = (Object)winc_58302_52903580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   _58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   _58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(_58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,_58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[_58304_54690460_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60245020();

   return behavior;
}

Scope makewinc_58302_52903580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58302_52903580 = scope;
   scope->owner = (Object)channel__bias_58290_52866480;
   scope->name = "winc:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52902840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60245060();
   scope->behaviors[1] = make__60244860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58305_52902320;

SignalI abus__r_52901520_rdec_58305_52902320_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeabus__r_52901520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52901520_rdec_58305_52902320_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rdec_58305_52902320;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makerdec_58305_52902320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58305_52902320 = scope;
   scope->owner = (Object)channel__bias_58290_52866480;
   scope->name = "rdec:305";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52901520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58309_52901300;

SignalI abus__w_52900480_wdec_58309_52901300_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeabus__w_52900480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52900480_wdec_58309_52901300_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)wdec_58309_52901300;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makewdec_58309_52901300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58309_52901300 = scope;
   scope->owner = (Object)channel__bias_58290_52866480;
   scope->name = "wdec:309";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52900480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60247860;

Behavior make__60247860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60247860 = behavior;
   behavior->owner = (Object)channel__bias_58290_52866480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60248060();

   return behavior;
}

Behavior __60247660;

Behavior make__60247660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60247660 = behavior;
   behavior->owner = (Object)channel__bias_58290_52866480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58292_53258780_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   _58292_53258780_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   _58292_53258780_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(_58292_53258780_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,_58292_53258780_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58292_53258780_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[_58292_53258780_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60247820();

   return behavior;
}

Behavior __60247200;

Behavior make__60247200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60247200 = behavior;
   behavior->owner = (Object)channel__bias_58290_52866480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[reg__0_53424220_channel__bias_58290_52866480_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60247360();

   return behavior;
}

Behavior __60247000;

Behavior make__60247000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60247000 = behavior;
   behavior->owner = (Object)channel__bias_58290_52866480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58303_54690540_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   _58303_54690540_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   _58303_54690540_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(_58303_54690540_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,_58303_54690540_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58303_54690540_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[_58303_54690540_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60247160();

   return behavior;
}

Scope makechannel__bias_58290_52866480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58290_52866480 = scope;
   scope->owner = (Object)layer1_58_84_49952460;
   scope->name = "channel_bias:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53424220();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58291_52865920();
   scope->scopes[1] = makeraddr_58293_52865160();
   scope->scopes[2] = makewaddr_58296_52864720();
   scope->scopes[3] = makerinc_58299_52863780();
   scope->scopes[4] = makewinc_58302_52903580();
   scope->scopes[5] = makerdec_58305_52902320();
   scope->scopes[6] = makewdec_58309_52901300();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60247860();
   scope->behaviors[1] = make__60247660();
   scope->behaviors[2] = make__60247200();
   scope->behaviors[3] = make__60247000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58313_49448520;

SignalI reg__0_51345320_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makereg__0_51345320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51345320_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__z_58313_49448520;
   signalI->name = "reg_0";
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

Scope anum_58314_49839920;

Scope makeanum_58314_49839920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58314_49839920 = scope;
   scope->owner = (Object)channel__z_58313_49448520;
   scope->name = "anum:314";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58316_49839120;

Scope makeraddr_58316_49839120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58316_49839120 = scope;
   scope->owner = (Object)channel__z_58313_49448520;
   scope->name = "raddr:316";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope waddr_58319_49838180;

Scope makewaddr_58319_49838180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58319_49838180 = scope;
   scope->owner = (Object)channel__z_58313_49448520;
   scope->name = "waddr:319";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_58322_49837000;

SignalI abus__r_49836220_rinc_58322_49837000_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeabus__r_49836220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49836220_rinc_58322_49837000_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rinc_58322_49837000;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makerinc_58322_49837000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58322_49837000 = scope;
   scope->owner = (Object)channel__z_58313_49448520;
   scope->name = "rinc:322";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49836220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58325_49836060;

SignalI abus__w_49835080_winc_58325_49836060_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeabus__w_49835080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49835080_winc_58325_49836060_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)winc_58325_49836060;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makewinc_58325_49836060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58325_49836060 = scope;
   scope->owner = (Object)channel__z_58313_49448520;
   scope->name = "winc:325";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49835080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58328_49834900;

SignalI abus__r_49833600_rdec_58328_49834900_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeabus__r_49833600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49833600_rdec_58328_49834900_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rdec_58328_49834900;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makerdec_58328_49834900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58328_49834900 = scope;
   scope->owner = (Object)channel__z_58313_49448520;
   scope->name = "rdec:328";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49833600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58332_49833220;

SignalI abus__w_49805620_wdec_58332_49833220_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makeabus__w_49805620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49805620_wdec_58332_49833220_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)wdec_58332_49833220;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
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

Scope makewdec_58332_49833220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58332_49833220 = scope;
   scope->owner = (Object)channel__z_58313_49448520;
   scope->name = "wdec:332";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49805620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60267920;

Behavior make__60267920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60267920 = behavior;
   behavior->owner = (Object)channel__z_58313_49448520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51345320_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   reg__0_51345320_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   reg__0_51345320_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(reg__0_51345320_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,reg__0_51345320_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__0_51345320_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[reg__0_51345320_channel__z_58313_49448520_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60268080();

   return behavior;
}

Behavior __60267720;

Behavior make__60267720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60267720 = behavior;
   behavior->owner = (Object)channel__z_58313_49448520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_53487840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   _58315_53487840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   _58315_53487840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(_58315_53487840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,_58315_53487840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58315_53487840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[_58315_53487840_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60267880();

   return behavior;
}

Scope makechannel__z_58313_49448520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58313_49448520 = scope;
   scope->owner = (Object)layer1_58_84_49952460;
   scope->name = "channel_z:313";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51345320();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58314_49839920();
   scope->scopes[1] = makeraddr_58316_49839120();
   scope->scopes[2] = makewaddr_58319_49838180();
   scope->scopes[3] = makerinc_58322_49837000();
   scope->scopes[4] = makewinc_58325_49836060();
   scope->scopes[5] = makerdec_58328_49834900();
   scope->scopes[6] = makewdec_58332_49833220();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60267920();
   scope->behaviors[1] = make__60267720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58336_53001360;

SignalI lv0_53620920_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makelv0_53620920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_53620920_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)add__n_58336_53001360;
   signalI->name = "lv0";
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

SignalI rv0_54088940_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makerv0_54088940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_54088940_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)add__n_58336_53001360;
   signalI->name = "rv0";
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

SignalI lvok0_54088920_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makelvok0_54088920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_54088920_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)add__n_58336_53001360;
   signalI->name = "lvok0";
   signalI->type = get_type_bit();
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

SignalI rvok0_54088900_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makervok0_54088900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_54088900_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)add__n_58336_53001360;
   signalI->name = "rvok0";
   signalI->type = get_type_bit();
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

SignalI run_54088880_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920;

SignalI makerun_54088880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_54088880_add__n_58336_53001360_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)add__n_58336_53001360;
   signalI->name = "run";
   signalI->type = get_type_bit();
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

Behavior __52501220;

Behavior make__52501220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52501220 = behavior;
   behavior->owner = (Object)add__n_58336_53001360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos += 1;
   clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos = realloc(clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos,clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos[clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__54088760();

   return behavior;
}

Scope makeadd__n_58336_53001360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58336_53001360 = scope;
   scope->owner = (Object)layer1_58_84_49952460;
   scope->name = "add_n:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_53620920();
   scope->inners[1] = makerv0_54088940();
   scope->inners[2] = makelvok0_54088920();
   scope->inners[3] = makervok0_54088900();
   scope->inners[4] = makerun_54088880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52501220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53686940;

Behavior make__53686940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53686940 = behavior;
   behavior->owner = (Object)layer1_58_84_49952460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos += 1;
   clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos = realloc(clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos,clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos[clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__53138440();

   return behavior;
}

Behavior __54354360;

Behavior make__54354360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54354360 = behavior;
   behavior->owner = (Object)layer1_58_84_49952460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos += 1;
   clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos = realloc(clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos,clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos[clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__53686720();

   return behavior;
}

Behavior __54426340;

Behavior make__54426340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54426340 = behavior;
   behavior->owner = (Object)layer1_58_84_49952460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos += 1;
   clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos = realloc(clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos,clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->pos[clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__54354200();

   return behavior;
}

Behavior __60216280;

Behavior make__60216280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60216280 = behavior;
   behavior->owner = (Object)layer1_58_84_49952460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack_52500920_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   ack_52500920_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   ack_52500920_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(ack_52500920_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,ack_52500920_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
ack_52500920_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[ack_52500920_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,value__z0_53770700_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   value__z0_53770700_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   value__z0_53770700_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(value__z0_53770700_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,value__z0_53770700_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
value__z0_53770700_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[value__z0_53770700_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__a10_54084060_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   ack__a10_54084060_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   ack__a10_54084060_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(ack__a10_54084060_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,ack__a10_54084060_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
ack__a10_54084060_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[ack__a10_54084060_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60180100();

   return behavior;
}

Behavior __60216120;

Behavior make__60216120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60216120 = behavior;
   behavior->owner = (Object)layer1_58_84_49952460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_54779140_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   ack__mac_54779140_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   ack__mac_54779140_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(ack__mac_54779140_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,ack__mac_54779140_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
ack__mac_54779140_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[ack__mac_54779140_counter1_58_840_54758160_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_50061360_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   a_50061360_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   a_50061360_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(a_50061360_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,a_50061360_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
a_50061360_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[a_50061360_func0_58_8400_49278760_layer1_58_84_49952460_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__60180000();

   return behavior;
}

Scope makelayer1_58_84_49952460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_49952460 = scope;
   scope->owner = (Object)layer1_58_840_54426020;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter1_54778920();
   scope->systemIs[1] = makefunc0_50109560();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack_52500920();
   scope->inners[1] = makeack__mac_52500900();
   scope->inners[2] = makeack__add_52500860();
   scope->inners[3] = make_58249_52704000();
   scope->inners[4] = make_58247_52703960();
   scope->inners[5] = make_58248_52703820();
   scope->inners[6] = make_58266_52998940();
   scope->inners[7] = make_58292_53258780();
   scope->inners[8] = make_58315_53487840();
   scope->inners[9] = makevalue__z0_53770700();
   scope->inners[10] = makevalue__a10_54084100();
   scope->inners[11] = makeflag__z0_54084080();
   scope->inners[12] = makeack__a10_54084060();
   scope->inners[13] = make_58251_54084040();
   scope->inners[14] = make_58252_54083840();
   scope->inners[15] = make_58253_54356100();
   scope->inners[16] = make_58303_54690540();
   scope->inners[17] = make_58304_54690460();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58235_49952040();
   scope->scopes[1] = makechannel__accum_58264_54712880();
   scope->scopes[2] = makemac__n1_58289_49296900();
   scope->scopes[3] = makechannel__bias_58290_52866480();
   scope->scopes[4] = makechannel__z_58313_49448520();
   scope->scopes[5] = makeadd__n_58336_53001360();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53686940();
   scope->behaviors[1] = make__54354360();
   scope->behaviors[2] = make__54426340();
   scope->behaviors[3] = make__60216280();
   scope->behaviors[4] = make__60216120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_54426020() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_54426020 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_54423980();
   systemT->inputs[1] = makerst_54423960();
   systemT->inputs[2] = makefill_54423940();
   systemT->inputs[3] = makereq_54423920();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__1_54423880();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer1_58_84_49952460();

   return systemT;
}