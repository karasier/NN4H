#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_49935740;

SignalI clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeclk_49953700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_840_49935740;
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

SignalI rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makerst_49953680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_840_49935740;
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

SignalI fill_49953660_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makefill_49953660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49953660_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_840_49935740;
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

SignalI req_49953640_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makereq_49953640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49953640_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_840_49935740;
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

SignalI ack__0_49953500_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeack__0_49953500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49953500_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_840_49935740;
   signalI->name = "ack_0";
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

Block __53188020;

Block __53186800;

Block __53186560;

void code__53186560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_51340680_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,value__z0_52605540_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59873720(),flag__z0_52898260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53186560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53186560 = block;
   block->owner = (Object)__53186800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53186560;

   return block;
};

Block __53519400;

void code__53519400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_52457060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,value__z1_52673180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59873580(),flag__z1_52898240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53519400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53519400 = block;
   block->owner = (Object)__53186800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53519400;

   return block;
};

void code__53186800() {
 code__53186560();
 code__53519400();
}

Block make__53186800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53186800 = block;
   block->owner = (Object)__53188020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53186800;

   return block;
};

Block __53187740;

void code__53187740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59873520(),flag__z0_52898260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59873460(),flag__z1_52898240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53187740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53187740 = block;
   block->owner = (Object)__53188020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53187740;

   return block;
};

void code__53188020() {
   {
      Value cond = ack__add_49452620_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53186800();
   }
   else {
  code__53187740();
   }
      }
   }
}

Block make__53188020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53188020 = block;
   block->owner = (Object)__54036980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53188020;

   return block;
};

Block __54036820;

Block __54035840;

Block __54035600;

void code__54035600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a00_52798440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_5832_49296920______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59873160(),ack__a00_52898220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54035600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54035600 = block;
   block->owner = (Object)__54035840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54035600;

   return block;
};

Block __54403140;

void code__54403140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a01_52898280_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_5833_49610280______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59872920(),ack__a01_52898200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54403140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54403140 = block;
   block->owner = (Object)__54035840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54403140;

   return block;
};

void code__54035840() {
 code__54035600();
 code__54403140();
}

Block make__54035840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54035840 = block;
   block->owner = (Object)__54036820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54035840;

   return block;
};

void code__54036820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_52898260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
         src1 = flag__z1_52898240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54035840();
   }
      }
   }
}

Block make__54036820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54036820 = block;
   block->owner = (Object)__54892660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54036820;

   return block;
};

Block __54892480;

Block __54892140;

Block __54890840;

void code__54890840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59872720(),_58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54890840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54890840 = block;
   block->owner = (Object)__54892140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54890840;

   return block;
};

void code__54892140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59872800();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54890840();
   }
      }
   }
}

Block make__54892140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54892140 = block;
   block->owner = (Object)__54892480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54892140;

   return block;
};

Block __54889300;

Block __54888660;

void code__54888660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59872560(),_58129_53072160_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54888660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54888660 = block;
   block->owner = (Object)__54889300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54888660;

   return block;
};

void code__54889300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59872640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54888660();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59872500(),_58128_53072240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54889300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54889300 = block;
   block->owner = (Object)__54892480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54889300;

   return block;
};

Block __54910300;

Block __54909980;

void code__54909980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59872340(),_58100_52898100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54909980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54909980 = block;
   block->owner = (Object)__54910300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54909980;

   return block;
};

void code__54910300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59872420();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54909980();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59872280(),_5899_52898180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54910300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54910300 = block;
   block->owner = (Object)__54892480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54910300;

   return block;
};

Block __54909240;

Block __54909040;

Block __54908520;

void code__54908520() {
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
                  src0 = _58100_52898100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59872020();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_52898100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59871920(),_5899_52898180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59871860(),_58101_53072260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54908520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54908520 = block;
   block->owner = (Object)__54909040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54908520;

   return block;
};

void code__54909040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59872160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54908520();
   }
      }
   }
}

Block make__54909040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54909040 = block;
   block->owner = (Object)__54909240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54909040;

   return block;
};

Block __47918380;

Block __47916520;

void code__47916520() {
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
                  src0 = _58129_53072160_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59871640();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_53072160_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59871540(),_58128_53072240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59871480(),_58130_53197240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__47916520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47916520 = block;
   block->owner = (Object)__47918380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47916520;

   return block;
};

void code__47918380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59871780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47916520();
   }
      }
   }
}

Block make__47918380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47918380 = block;
   block->owner = (Object)__54909240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47918380;

   return block;
};

Block __49263500;

Block __49262660;

Block __49259520;

void code__49259520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59871200(),_58191_53377760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__49259520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49259520 = block;
   block->owner = (Object)__49262660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49259520;

   return block;
};

Block __49689120;

void code__49689120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59871080(),_58192_53437340_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__49689120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49689120 = block;
   block->owner = (Object)__49262660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49689120;

   return block;
};

void code__49262660() {
{
      Value value = _58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__59871280())) {
    code__49259520();
         }
         else if (value2integer(value) == value2integer(make__59871180())) {
    code__49689120();
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
                  src0 = _58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59870940();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__49262660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49262660 = block;
   block->owner = (Object)__49263500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49262660;

   return block;
};

void code__49263500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59871400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49262660();
   }
      }
   }
}

Block make__49263500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49263500 = block;
   block->owner = (Object)__54909240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49263500;

   return block;
};

void code__54909240() {
 code__54909040();
 code__47918380();
 code__49263500();
}

Block make__54909240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54909240 = block;
   block->owner = (Object)__54892480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54909240;

   return block;
};

void code__54892480() {
 code__54892140();
 code__54889300();
 code__54910300();
   {
      Value cond = fill_49953660_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54909240();
   }
      }
   }
}

Block make__54892480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54892480 = block;
   block->owner = (Object)__49938060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54892480;

   return block;
};

Block __59315320;

void code__59315320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_49452660_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,ack_53453680_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,rst_53453660_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_52605540_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,z__value_53088980_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_52673180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,z__value_49435560_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a00_52898220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
      src1 = ack__a01_52898200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__0_49953500_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59315320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59315320 = block;
   block->owner = (Object)__59333660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59315320;

   return block;
};

Block __59315260;

void code__59315260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_53453620_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,ack__mac_49452640_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_53249600_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,value__a00_52798440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_49740760_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,value__a01_52898280_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59315260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59315260 = block;
   block->owner = (Object)__59333500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59315260;

   return block;
};

Block __47917280;

Block __49498880;

void code__49498880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50049020_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,make_ref_rangeS(mem_50175860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920,value2integer(abus__w_50048860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value),value2integer(abus__w_50048860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49498880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49498880 = block;
   block->owner = (Object)__47917280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49498880;

   return block;
};

void code__47917280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50175860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
            idx = value2integer(abus__r_50048940_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49984260_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49883860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49498880();
   }
      }
   }
}

Block make__47917280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47917280 = block;
   block->owner = (Object)__49868440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47917280;

   return block;
};

Block __59332780;

void code__59332780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49984260_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_5897_49636900_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59332780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59332780 = block;
   block->owner = (Object)__59332620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59332780;

   return block;
};

Block __59332580;

void code__59332580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_49636900_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,dbus__r_49984260_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59332580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59332580 = block;
   block->owner = (Object)__59332400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59332580;

   return block;
};

Block __59331980;

void code__59331980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49883880_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_5895_49636780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59331980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59331980 = block;
   block->owner = (Object)__59331760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59331980;

   return block;
};

Block __59331720;

void code__59331720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_49636780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,trig__r_49883880_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59331720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59331720 = block;
   block->owner = (Object)__59331560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59331720;

   return block;
};

Block __59331260;

void code__59331260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50048940_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_5896_49636060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59331260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59331260 = block;
   block->owner = (Object)__59331100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59331260;

   return block;
};

Block __59331060;

void code__59331060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_49636060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,abus__r_50048940_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59331060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59331060 = block;
   block->owner = (Object)__59330900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59331060;

   return block;
};

Block __59330600;

void code__59330600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49883860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_5899_52898180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59330600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59330600 = block;
   block->owner = (Object)__59330440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59330600;

   return block;
};

Block __59330380;

void code__59330380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_52898180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,trig__w_49883860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59330380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59330380 = block;
   block->owner = (Object)__59330200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59330380;

   return block;
};

Block __59329800;

void code__59329800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50048860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58100_52898100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59329800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59329800 = block;
   block->owner = (Object)__59329580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59329800;

   return block;
};

Block __59329540;

void code__59329540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_52898100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,abus__w_50048860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59329540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59329540 = block;
   block->owner = (Object)__59329380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59329540;

   return block;
};

Block __59329080;

void code__59329080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50049020_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58101_53072260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59329080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59329080 = block;
   block->owner = (Object)__59328920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59329080;

   return block;
};

Block __59328880;

void code__59328880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_53072260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,dbus__w_50049020_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59328880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59328880 = block;
   block->owner = (Object)__59328720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59328880;

   return block;
};

Block __49430940;

Block __50175700;

void code__50175700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50047240_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,make_ref_rangeS(mem_50171960_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920,value2integer(abus__w_50047020_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value),value2integer(abus__w_50047020_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50175700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50175700 = block;
   block->owner = (Object)__49430940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50175700;

   return block;
};

void code__49430940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50171960_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
            idx = value2integer(abus__r_50047160_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49984440_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49888800_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50175700();
   }
      }
   }
}

Block make__49430940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49430940 = block;
   block->owner = (Object)__49608540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49430940;

   return block;
};

Block __59327000;

void code__59327000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49984440_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58126_49800260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59327000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59327000 = block;
   block->owner = (Object)__59326840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59327000;

   return block;
};

Block __59326800;

void code__59326800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_49800260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,dbus__r_49984440_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59326800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59326800 = block;
   block->owner = (Object)__59326640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59326800;

   return block;
};

Block __59350880;

void code__59350880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49888840_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58124_49800240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59350880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59350880 = block;
   block->owner = (Object)__59350700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59350880;

   return block;
};

Block __59350640;

void code__59350640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_49800240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,trig__r_49888840_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59350640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59350640 = block;
   block->owner = (Object)__59350420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59350640;

   return block;
};

Block __59350080;

void code__59350080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50047160_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58125_49800140_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59350080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59350080 = block;
   block->owner = (Object)__59349900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59350080;

   return block;
};

Block __59349820;

void code__59349820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_49800140_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,abus__r_50047160_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59349820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59349820 = block;
   block->owner = (Object)__59349660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59349820;

   return block;
};

Block __59349360;

void code__59349360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49888800_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58128_53072240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59349360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59349360 = block;
   block->owner = (Object)__59349200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59349360;

   return block;
};

Block __59349160;

void code__59349160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_53072240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,trig__w_49888800_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59349160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59349160 = block;
   block->owner = (Object)__59349000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59349160;

   return block;
};

Block __59348680;

void code__59348680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50047020_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58129_53072160_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59348680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59348680 = block;
   block->owner = (Object)__59348500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59348680;

   return block;
};

Block __59348460;

void code__59348460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_53072160_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,abus__w_50047020_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59348460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59348460 = block;
   block->owner = (Object)__59348240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59348460;

   return block;
};

Block __59347900;

void code__59347900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50047240_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58130_53197240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59347900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59347900 = block;
   block->owner = (Object)__59347720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59347900;

   return block;
};

Block __59347640;

void code__59347640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_53197240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,dbus__w_50047240_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59347640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59347640 = block;
   block->owner = (Object)__59347480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59347640;

   return block;
};

Block __59345860;

void code__59345860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49834360_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58143_49933100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59345860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59345860 = block;
   block->owner = (Object)__59345660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59345860;

   return block;
};

Block __59345620;

void code__59345620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_49933100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,reg__0_49834360_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59345620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59345620 = block;
   block->owner = (Object)__59345400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59345620;

   return block;
};

Block __59345100;

void code__59345100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49963960_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58144_50033380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59345100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59345100 = block;
   block->owner = (Object)__59344940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59345100;

   return block;
};

Block __59344900;

void code__59344900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_50033380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,reg__1_49963960_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59344900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59344900 = block;
   block->owner = (Object)__59344740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59344900;

   return block;
};

Block __49870260;

Block __49870080;

Block __49869640;

void code__49869640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59817860(),_58125_49800140_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__49869640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49869640 = block;
   block->owner = (Object)__49870080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49869640;

   return block;
};

void code__49870080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59817940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49869640();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59817800(),_58124_49800240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__49870080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49870080 = block;
   block->owner = (Object)__49870260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49870080;

   return block;
};

Block __49868380;

Block __49867640;

void code__49867640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59817640(),_5896_49636060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__49867640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49867640 = block;
   block->owner = (Object)__49868380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49867640;

   return block;
};

void code__49868380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59817720();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49867640();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59817580(),_5895_49636780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__49868380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49868380 = block;
   block->owner = (Object)__49870260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49868380;

   return block;
};

Block __49865900;

Block __49865100;

void code__49865100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59817420(),_5814_47997440______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__49865100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49865100 = block;
   block->owner = (Object)__49865900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49865100;

   return block;
};

void code__49865900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59817500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49865100();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59817360(),_5813_47997540______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__49865900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49865900 = block;
   block->owner = (Object)__49870260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49865900;

   return block;
};

Block __50061820;

Block __50061460;

Block __50110100;

Block __50109660;

void code__50109660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_47997560______58_84_49433100______58_840_59034920->c_value,rv_49870540_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59816720(),rvok_49870480_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__50109660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50109660 = block;
   block->owner = (Object)__50110100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50109660;

   return block;
};

void code__50110100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_47997540______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59816900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50109660();
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
                  src0 = _5814_47997440______58_84_49433100______58_840_59034920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59816580();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_47997440______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59816460(),_5813_47997540______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__50110100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50110100 = block;
   block->owner = (Object)__50061460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50110100;

   return block;
};

void code__50061460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59817000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50110100();
   }
      }
   }
}

Block make__50061460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50061460 = block;
   block->owner = (Object)__50061820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50061460;

   return block;
};

Block __50300700;

Block __50300300;

Block __50299900;

void code__50299900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_49636900_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,lv0_48337120_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59816040(),lvok0_49870520_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__50299900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50299900 = block;
   block->owner = (Object)__50300300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50299900;

   return block;
};

void code__50300300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_49636780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59816240();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50299900();
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
                  src0 = _5896_49636060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59815860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_49636060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59815760(),_5895_49636780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__50300300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50300300 = block;
   block->owner = (Object)__50300700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50300300;

   return block;
};

void code__50300700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59816340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50300300();
   }
      }
   }
}

Block make__50300700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50300700 = block;
   block->owner = (Object)__50061820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50300700;

   return block;
};

Block __52493900;

Block __52493420;

Block __52493260;

void code__52493260() {
}

Block make__52493260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52493260 = block;
   block->owner = (Object)__52493420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52493260;

   return block;
};

Block __53259600;

void code__53259600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49619100_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58143_49933100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53259600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53259600 = block;
   block->owner = (Object)__52493420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53259600;

   return block;
};

void code__52493420() {
 code__52493260();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_49619100_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
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
                              src0 = lv0_48337120_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49870540_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59815200();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49619100_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
 code__53259600();
}

Block make__52493420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52493420 = block;
   block->owner = (Object)__52493900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52493420;

   return block;
};

void code__52493900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59815600(),ack_49452660_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59815540(),run_49870460_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
 code__52493420();
}

Block make__52493900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52493900 = block;
   block->owner = (Object)__50061820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52493900;

   return block;
};

Block __53474820;

Block __53474500;

Block __53474180;

void code__53474180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_49800260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,lv1_49433820_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59814740(),lvok1_49870500_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53474180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53474180 = block;
   block->owner = (Object)__53474500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53474180;

   return block;
};

void code__53474500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_49800240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59814900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53474180();
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
                  src0 = _58125_49800140_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59814620();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_49800140_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59814500(),_58124_49800240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53474500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53474500 = block;
   block->owner = (Object)__53474820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53474500;

   return block;
};

void code__53474820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59815000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53474500();
   }
      }
   }
}

Block make__53474820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53474820 = block;
   block->owner = (Object)__50061820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53474820;

   return block;
};

Block __53688460;

Block __53687980;

Block __53687820;

void code__53687820() {
}

Block make__53687820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53687820 = block;
   block->owner = (Object)__53687980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53687820;

   return block;
};

Block __54691740;

void code__54691740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_49757120_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58144_50033380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54691740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54691740 = block;
   block->owner = (Object)__53687980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54691740;

   return block;
};

void code__53687980() {
 code__53687820();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_49757120_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
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
                              src0 = lv1_49433820_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49870540_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59813660();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_49757120_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
 code__54691740();
}

Block make__53687980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53687980 = block;
   block->owner = (Object)__53688460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53687980;

   return block;
};

void code__53688460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59814300(),ack_49452660_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59814200(),run_49870460_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
 code__53687980();
}

Block make__53688460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53688460 = block;
   block->owner = (Object)__50061820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53688460;

   return block;
};

void code__50061820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59817080(),run_49870460_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
 code__50061460();
 code__50300700();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49870520_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
         src1 = rvok_49870480_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52493900();
   }
      }
   }
 code__53474820();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49870500_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
         src1 = rvok_49870480_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53688460();
   }
      }
   }
}

Block make__50061820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50061820 = block;
   block->owner = (Object)__49870260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50061820;

   return block;
};

Block __49886600;

void code__49886600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59813440(),rvok_49870480_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59813380(),lvok0_49870520_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59813320(),av0_49619100_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59813260(),lvok1_49870500_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59813200(),av1_49757120_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__49886600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49886600 = block;
   block->owner = (Object)__49870260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49886600;

   return block;
};

void code__49870260() {
 code__49870080();
 code__49868380();
 code__49865900();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59817300(),ack_49452660_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59817240(),run_49870460_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_49953640_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
         src1 = run_49870460_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50061820();
   }
   else {
  code__49886600();
   }
      }
   }
}

Block make__49870260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49870260 = block;
   block->owner = (Object)__54890320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49870260;

   return block;
};

Block __59399980;

void code__59399980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58176_50173740_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59399980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59399980 = block;
   block->owner = (Object)__59399820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59399980;

   return block;
};

Block __59399780;

void code__59399780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58176_50173740_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59399780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59399780 = block;
   block->owner = (Object)__59399620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59399780;

   return block;
};

Block __59399220;

void code__59399220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58177_50266220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59399220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59399220 = block;
   block->owner = (Object)__59399060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59399220;

   return block;
};

Block __59399020;

void code__59399020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_50266220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59399020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59399020 = block;
   block->owner = (Object)__59398860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59399020;

   return block;
};

Block __59398520;

void code__59398520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58191_53377760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59398520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59398520 = block;
   block->owner = (Object)__59398340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59398520;

   return block;
};

Block __59398260;

void code__59398260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58191_53377760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59398260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59398260 = block;
   block->owner = (Object)__59398100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59398260;

   return block;
};

Block __59397800;

void code__59397800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58192_53437340_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59397800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59397800 = block;
   block->owner = (Object)__59397640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59397800;

   return block;
};

Block __59397600;

void code__59397600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58192_53437340_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59397600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59397600 = block;
   block->owner = (Object)__59397420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59397600;

   return block;
};

Block __59395520;

void code__59395520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_54887760_winc_58190_54888140_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59395520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59395520 = block;
   block->owner = (Object)__59395340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59395520;

   return block;
};

Block __59395280;

void code__59395280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,abus__w_54887760_winc_58190_54888140_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59395280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59395280 = block;
   block->owner = (Object)__59395060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59395280;

   return block;
};

Block __59393900;

void code__59393900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50302180_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58206_51340680_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59393900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59393900 = block;
   block->owner = (Object)__59393680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59393900;

   return block;
};

Block __59393640;

void code__59393640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_51340680_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,reg__0_50302180_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59393640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59393640 = block;
   block->owner = (Object)__59393480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59393640;

   return block;
};

Block __59393140;

void code__59393140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48696080_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,_58207_52457060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59393140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59393140 = block;
   block->owner = (Object)__59392920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59393140;

   return block;
};

Block __59392880;

void code__59392880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_52457060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,reg__1_48696080_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59392880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59392880 = block;
   block->owner = (Object)__59392720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59392880;

   return block;
};

Block __53328260;

Block __53326780;

Block __53326420;

void code__53326420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_49933100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,lv0_52899400_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59810900(),lvok0_53328460_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53326420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53326420 = block;
   block->owner = (Object)__53326780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53326420;

   return block;
};

Block __53488860;

void code__53488860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58176_50173740_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,rv0_53185620_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59810760(),rvok0_53328420_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53488860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53488860 = block;
   block->owner = (Object)__53326780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53488860;

   return block;
};

Block __53715980;

Block __53715460;

void code__53715460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_52899400_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
      src1 = rv0_53185620_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58206_51340680_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53715460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53715460 = block;
   block->owner = (Object)__53715980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53715460;

   return block;
};

void code__53715980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59810600(),run_53328380_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59810540(),ack__add_49452620_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
 code__53715460();
}

Block make__53715980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53715980 = block;
   block->owner = (Object)__53326780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53715980;

   return block;
};

Block __54361240;

void code__54361240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_50033380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,lv1_53075320_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59810220(),lvok1_53328440_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54361240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54361240 = block;
   block->owner = (Object)__53326780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54361240;

   return block;
};

Block __54696080;

void code__54696080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_50266220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,rv1_53328480_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59810060(),rvok1_53328400_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54696080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54696080 = block;
   block->owner = (Object)__53326780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54696080;

   return block;
};

Block __54891480;

Block __54890960;

void code__54890960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_53075320_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
      src1 = rv1_53328480_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58207_52457060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54890960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54890960 = block;
   block->owner = (Object)__54891480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54890960;

   return block;
};

void code__54891480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59809880(),run_53328380_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59875280(),ack__add_49452620_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
 code__54890960();
}

Block make__54891480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54891480 = block;
   block->owner = (Object)__53326780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54891480;

   return block;
};

void code__53326780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59811040(),run_53328380_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
 code__53326420();
 code__53488860();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53328460_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
         src1 = rvok0_53328420_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53715980();
   }
      }
   }
 code__54361240();
 code__54696080();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_53328440_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
         src1 = rvok1_53328400_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54891480();
   }
      }
   }
}

Block make__53326780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53326780 = block;
   block->owner = (Object)__53328260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53326780;

   return block;
};

Block __53327780;

void code__53327780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59874920(),lvok0_53328460_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59874860(),rvok0_53328420_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59874800(),lvok1_53328440_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59874740(),rvok1_53328400_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__53327780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53327780 = block;
   block->owner = (Object)__53328260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53327780;

   return block;
};

void code__53328260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59811260(),ack__add_49452620_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59811200(),run_53328380_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_49452640_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
         src1 = run_53328380_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53326780();
   }
   else {
  code__53327780();
   }
      }
   }
}

Block make__53328260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53328260 = block;
   block->owner = (Object)__49452900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53328260;

   return block;
};

Value make__59817940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59817860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59817800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59817720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59817640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59817580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59817500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59817420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59817360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59817300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59817240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59817080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59817000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59816900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59816720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59816580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59816460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59816340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59816240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59816040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59815860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59815760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59815600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59815540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59815200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59815000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59814900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59814740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59814620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59814500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59814300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59814200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59813660() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59813440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59813380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59813320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59813260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59813200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59811260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59811200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59811040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59810900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59810760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59810600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59810540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59810220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59810060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59809880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59875280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59874920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59874860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59874800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59874740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59873720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59873580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59873520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59873460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59873160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59872920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59872800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59872720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59872640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59872560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59872500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59872420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59872340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59872280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59872160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59872020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59871920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59871860() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59871780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59871640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59871540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59871480() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59871400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59871280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59871200() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59871180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59871080() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59870940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer0_58_84_49888740;

SignalI ack_49452660_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeack_49452660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_49452660_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
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

SignalI ack__mac_49452640_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeack__mac_49452640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_49452640_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
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

SignalI ack__add_49452620_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeack__add_49452620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_49452620_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
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

SignalI _5897_49636900_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_5897_49636900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_49636900_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":97";
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

SignalI _5895_49636780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_5895_49636780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_49636780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":95";
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

SignalI _5896_49636060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_5896_49636060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_49636060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":96";
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

SignalI _58126_49800260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58126_49800260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_49800260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":126";
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

SignalI _58124_49800240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58124_49800240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_49800240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":124";
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

SignalI _58125_49800140_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58125_49800140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_49800140_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":125";
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

SignalI _58143_49933100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58143_49933100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_49933100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":143";
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

SignalI _58144_50033380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58144_50033380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_50033380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":144";
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

SignalI _58176_50173740_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58176_50173740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58176_50173740_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":176";
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

SignalI _58177_50266220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58177_50266220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58177_50266220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":177";
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

SignalI _58206_51340680_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58206_51340680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58206_51340680_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":206";
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

SignalI _58207_52457060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58207_52457060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58207_52457060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":207";
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

SignalI value__z0_52605540_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makevalue__z0_52605540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_52605540_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
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

SignalI value__z1_52673180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makevalue__z1_52673180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_52673180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = "value_z1";
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

SignalI value__a00_52798440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makevalue__a00_52798440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a00_52798440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = "value_a00";
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

SignalI value__a01_52898280_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makevalue__a01_52898280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a01_52898280_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = "value_a01";
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

SignalI flag__z0_52898260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeflag__z0_52898260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_52898260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
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

SignalI flag__z1_52898240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeflag__z1_52898240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_52898240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = "flag_z1";
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

SignalI ack__a00_52898220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeack__a00_52898220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a00_52898220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = "ack_a00";
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

SignalI ack__a01_52898200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeack__a01_52898200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a01_52898200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = "ack_a01";
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

SignalI _5899_52898180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_5899_52898180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_52898180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":99";
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

SignalI _58100_52898100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58100_52898100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_52898100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":100";
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

SignalI _58101_53072260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58101_53072260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_53072260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":101";
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

SignalI _58128_53072240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58128_53072240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_53072240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":128";
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

SignalI _58129_53072160_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58129_53072160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_53072160_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":129";
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

SignalI _58130_53197240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58130_53197240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_53197240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":130";
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

SignalI _58191_53377760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58191_53377760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58191_53377760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":191";
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

SignalI _58192_53437340_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58192_53437340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58192_53437340_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":192";
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

SignalI _58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI make_58193_53437260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)layer0_58_84_49888740;
   signalI->name = ":193";
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

SystemI counter0_53453480;

SystemI makecounter0_53453480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter0_53453480 = systemI;
   systemI->owner = (Object)layer0_58_84_49888740;
   systemI->name = "counter0";
   systemI->system = counter0_58_840_53455720;

   return systemI;
};

SystemI func0_53249400;

SystemI makefunc0_53249400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_53249400 = systemI;
   systemI->owner = (Object)layer0_58_84_49888740;
   systemI->name = "func0";
   systemI->system = func0_58_841_52898760;

   return systemI;
};

SystemI func1_49740380;

SystemI makefunc1_49740380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_49740380 = systemI;
   systemI->owner = (Object)layer0_58_84_49888740;
   systemI->name = "func1";
   systemI->system = func1_58_840_48124440;

   return systemI;
};

Scope channel__w0_5883_49888380;

SignalI trig__r_49883880_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI maketrig__r_49883880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49883880_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w0_5883_49888380;
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

SignalI trig__w_49883860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI maketrig__w_49883860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49883860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w0_5883_49888380;
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

SignalI dbus__r_49984260_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makedbus__r_49984260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49984260_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w0_5883_49888380;
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

SignalI dbus__w_50049020_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makedbus__w_50049020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50049020_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w0_5883_49888380;
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

SignalI abus__r_50048940_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__r_50048940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50048940_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w0_5883_49888380;
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

SignalI abus__w_50048860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__w_50048860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50048860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w0_5883_49888380;
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

SignalI mem_50175860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makemem_50175860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50175860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w0_5883_49888380;
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

Scope raddr_5884_49888080;

Scope makeraddr_5884_49888080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_49888080 = scope;
   scope->owner = (Object)channel__w0_5883_49888380;
   scope->name = "raddr:84";
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

Scope waddr_5889_49887660;

Scope makewaddr_5889_49887660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_49887660 = scope;
   scope->owner = (Object)channel__w0_5883_49888380;
   scope->name = "waddr:89";
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

Scope rinc_5894_49887240;

Scope makerinc_5894_49887240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_49887240 = scope;
   scope->owner = (Object)channel__w0_5883_49888380;
   scope->name = "rinc:94";
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

Scope winc_5898_49886540;

Scope makewinc_5898_49886540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_49886540 = scope;
   scope->owner = (Object)channel__w0_5883_49888380;
   scope->name = "winc:98";
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

Scope rdec_58102_49884960;

Scope makerdec_58102_49884960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_49884960 = scope;
   scope->owner = (Object)channel__w0_5883_49888380;
   scope->name = "rdec:102";
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

Scope wdec_58107_49884320;

Scope makewdec_58107_49884320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_49884320 = scope;
   scope->owner = (Object)channel__w0_5883_49888380;
   scope->name = "wdec:107";
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

Behavior __49868440;

Behavior make__49868440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49868440 = behavior;
   behavior->owner = (Object)channel__w0_5883_49888380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_neg += 1;
   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->neg = realloc(clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->neg,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_neg*sizeof(Object));
clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->neg[clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_neg-1] = (Object)behavior;
   behavior->block = make__47917280();

   return behavior;
}

Behavior __59332620;

Behavior make__59332620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59332620 = behavior;
   behavior->owner = (Object)channel__w0_5883_49888380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49984260_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   dbus__r_49984260_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   dbus__r_49984260_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(dbus__r_49984260_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,dbus__r_49984260_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
dbus__r_49984260_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[dbus__r_49984260_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59332780();

   return behavior;
}

Behavior __59332400;

Behavior make__59332400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59332400 = behavior;
   behavior->owner = (Object)channel__w0_5883_49888380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_49636900_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _5897_49636900_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _5897_49636900_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_5897_49636900_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_5897_49636900_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5897_49636900_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_5897_49636900_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59332580();

   return behavior;
}

Behavior __59331760;

Behavior make__59331760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59331760 = behavior;
   behavior->owner = (Object)channel__w0_5883_49888380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49883880_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   trig__r_49883880_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   trig__r_49883880_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(trig__r_49883880_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,trig__r_49883880_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
trig__r_49883880_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[trig__r_49883880_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59331980();

   return behavior;
}

Behavior __59331560;

Behavior make__59331560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59331560 = behavior;
   behavior->owner = (Object)channel__w0_5883_49888380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_49636780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _5895_49636780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _5895_49636780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_5895_49636780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_5895_49636780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5895_49636780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_5895_49636780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59331720();

   return behavior;
}

Behavior __59331100;

Behavior make__59331100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59331100 = behavior;
   behavior->owner = (Object)channel__w0_5883_49888380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50048940_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   abus__r_50048940_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   abus__r_50048940_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(abus__r_50048940_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,abus__r_50048940_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
abus__r_50048940_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[abus__r_50048940_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59331260();

   return behavior;
}

Behavior __59330900;

Behavior make__59330900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59330900 = behavior;
   behavior->owner = (Object)channel__w0_5883_49888380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_49636060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _5896_49636060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _5896_49636060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_5896_49636060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_5896_49636060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5896_49636060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_5896_49636060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59331060();

   return behavior;
}

Behavior __59330440;

Behavior make__59330440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59330440 = behavior;
   behavior->owner = (Object)channel__w0_5883_49888380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49883860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   trig__w_49883860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   trig__w_49883860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(trig__w_49883860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,trig__w_49883860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
trig__w_49883860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[trig__w_49883860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59330600();

   return behavior;
}

Behavior __59330200;

Behavior make__59330200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59330200 = behavior;
   behavior->owner = (Object)channel__w0_5883_49888380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_52898180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _5899_52898180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _5899_52898180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_5899_52898180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_5899_52898180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5899_52898180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_5899_52898180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59330380();

   return behavior;
}

Behavior __59329580;

Behavior make__59329580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59329580 = behavior;
   behavior->owner = (Object)channel__w0_5883_49888380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50048860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   abus__w_50048860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   abus__w_50048860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(abus__w_50048860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,abus__w_50048860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
abus__w_50048860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[abus__w_50048860_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59329800();

   return behavior;
}

Behavior __59329380;

Behavior make__59329380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59329380 = behavior;
   behavior->owner = (Object)channel__w0_5883_49888380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_52898100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58100_52898100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58100_52898100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58100_52898100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58100_52898100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58100_52898100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58100_52898100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59329540();

   return behavior;
}

Behavior __59328920;

Behavior make__59328920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59328920 = behavior;
   behavior->owner = (Object)channel__w0_5883_49888380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50049020_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   dbus__w_50049020_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   dbus__w_50049020_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(dbus__w_50049020_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,dbus__w_50049020_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
dbus__w_50049020_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[dbus__w_50049020_channel__w0_5883_49888380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59329080();

   return behavior;
}

Behavior __59328720;

Behavior make__59328720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59328720 = behavior;
   behavior->owner = (Object)channel__w0_5883_49888380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_53072260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58101_53072260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58101_53072260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58101_53072260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58101_53072260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58101_53072260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58101_53072260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59328880();

   return behavior;
}

Scope makechannel__w0_5883_49888380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_49888380 = scope;
   scope->owner = (Object)layer0_58_84_49888740;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49883880();
   scope->inners[1] = maketrig__w_49883860();
   scope->inners[2] = makedbus__r_49984260();
   scope->inners[3] = makedbus__w_50049020();
   scope->inners[4] = makeabus__r_50048940();
   scope->inners[5] = makeabus__w_50048860();
   scope->inners[6] = makemem_50175860();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_49888080();
   scope->scopes[1] = makewaddr_5889_49887660();
   scope->scopes[2] = makerinc_5894_49887240();
   scope->scopes[3] = makewinc_5898_49886540();
   scope->scopes[4] = makerdec_58102_49884960();
   scope->scopes[5] = makewdec_58107_49884320();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49868440();
   scope->behaviors[1] = make__59332620();
   scope->behaviors[2] = make__59332400();
   scope->behaviors[3] = make__59331760();
   scope->behaviors[4] = make__59331560();
   scope->behaviors[5] = make__59331100();
   scope->behaviors[6] = make__59330900();
   scope->behaviors[7] = make__59330440();
   scope->behaviors[8] = make__59330200();
   scope->behaviors[9] = make__59329580();
   scope->behaviors[10] = make__59329380();
   scope->behaviors[11] = make__59328920();
   scope->behaviors[12] = make__59328720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_49868320;

SignalI trig__r_49888840_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI maketrig__r_49888840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49888840_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w1_58112_49868320;
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

SignalI trig__w_49888800_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI maketrig__w_49888800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49888800_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w1_58112_49868320;
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

SignalI dbus__r_49984440_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makedbus__r_49984440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49984440_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w1_58112_49868320;
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

SignalI dbus__w_50047240_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makedbus__w_50047240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50047240_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w1_58112_49868320;
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

SignalI abus__r_50047160_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__r_50047160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50047160_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w1_58112_49868320;
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

SignalI abus__w_50047020_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__w_50047020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50047020_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w1_58112_49868320;
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

SignalI mem_50171960_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makemem_50171960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50171960_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__w1_58112_49868320;
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

Scope raddr_58113_49868020;

Scope makeraddr_58113_49868020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_49868020 = scope;
   scope->owner = (Object)channel__w1_58112_49868320;
   scope->name = "raddr:113";
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

Scope waddr_58118_49867500;

Scope makewaddr_58118_49867500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_49867500 = scope;
   scope->owner = (Object)channel__w1_58112_49868320;
   scope->name = "waddr:118";
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

Scope rinc_58123_49866720;

Scope makerinc_58123_49866720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_49866720 = scope;
   scope->owner = (Object)channel__w1_58112_49868320;
   scope->name = "rinc:123";
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

Scope winc_58127_49866260;

Scope makewinc_58127_49866260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_49866260 = scope;
   scope->owner = (Object)channel__w1_58112_49868320;
   scope->name = "winc:127";
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

Scope rdec_58131_49865780;

Scope makerdec_58131_49865780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_49865780 = scope;
   scope->owner = (Object)channel__w1_58112_49868320;
   scope->name = "rdec:131";
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

Scope wdec_58136_49865320;

Scope makewdec_58136_49865320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_49865320 = scope;
   scope->owner = (Object)channel__w1_58112_49868320;
   scope->name = "wdec:136";
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

Behavior __49608540;

Behavior make__49608540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49608540 = behavior;
   behavior->owner = (Object)channel__w1_58112_49868320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_neg += 1;
   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->neg = realloc(clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->neg,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_neg*sizeof(Object));
clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->neg[clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_neg-1] = (Object)behavior;
   behavior->block = make__49430940();

   return behavior;
}

Behavior __59326840;

Behavior make__59326840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59326840 = behavior;
   behavior->owner = (Object)channel__w1_58112_49868320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49984440_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   dbus__r_49984440_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   dbus__r_49984440_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(dbus__r_49984440_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,dbus__r_49984440_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
dbus__r_49984440_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[dbus__r_49984440_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59327000();

   return behavior;
}

Behavior __59326640;

Behavior make__59326640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59326640 = behavior;
   behavior->owner = (Object)channel__w1_58112_49868320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_49800260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58126_49800260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58126_49800260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58126_49800260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58126_49800260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58126_49800260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58126_49800260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59326800();

   return behavior;
}

Behavior __59350700;

Behavior make__59350700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59350700 = behavior;
   behavior->owner = (Object)channel__w1_58112_49868320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49888840_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   trig__r_49888840_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   trig__r_49888840_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(trig__r_49888840_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,trig__r_49888840_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
trig__r_49888840_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[trig__r_49888840_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59350880();

   return behavior;
}

Behavior __59350420;

Behavior make__59350420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59350420 = behavior;
   behavior->owner = (Object)channel__w1_58112_49868320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_49800240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58124_49800240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58124_49800240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58124_49800240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58124_49800240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58124_49800240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58124_49800240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59350640();

   return behavior;
}

Behavior __59349900;

Behavior make__59349900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59349900 = behavior;
   behavior->owner = (Object)channel__w1_58112_49868320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50047160_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   abus__r_50047160_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   abus__r_50047160_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(abus__r_50047160_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,abus__r_50047160_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
abus__r_50047160_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[abus__r_50047160_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59350080();

   return behavior;
}

Behavior __59349660;

Behavior make__59349660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59349660 = behavior;
   behavior->owner = (Object)channel__w1_58112_49868320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_49800140_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58125_49800140_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58125_49800140_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58125_49800140_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58125_49800140_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58125_49800140_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58125_49800140_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59349820();

   return behavior;
}

Behavior __59349200;

Behavior make__59349200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59349200 = behavior;
   behavior->owner = (Object)channel__w1_58112_49868320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49888800_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   trig__w_49888800_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   trig__w_49888800_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(trig__w_49888800_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,trig__w_49888800_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
trig__w_49888800_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[trig__w_49888800_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59349360();

   return behavior;
}

Behavior __59349000;

Behavior make__59349000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59349000 = behavior;
   behavior->owner = (Object)channel__w1_58112_49868320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_53072240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58128_53072240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58128_53072240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58128_53072240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58128_53072240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58128_53072240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58128_53072240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59349160();

   return behavior;
}

Behavior __59348500;

Behavior make__59348500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59348500 = behavior;
   behavior->owner = (Object)channel__w1_58112_49868320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50047020_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   abus__w_50047020_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   abus__w_50047020_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(abus__w_50047020_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,abus__w_50047020_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
abus__w_50047020_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[abus__w_50047020_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59348680();

   return behavior;
}

Behavior __59348240;

Behavior make__59348240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59348240 = behavior;
   behavior->owner = (Object)channel__w1_58112_49868320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_53072160_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58129_53072160_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58129_53072160_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58129_53072160_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58129_53072160_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58129_53072160_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58129_53072160_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59348460();

   return behavior;
}

Behavior __59347720;

Behavior make__59347720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59347720 = behavior;
   behavior->owner = (Object)channel__w1_58112_49868320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50047240_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   dbus__w_50047240_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   dbus__w_50047240_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(dbus__w_50047240_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,dbus__w_50047240_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
dbus__w_50047240_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[dbus__w_50047240_channel__w1_58112_49868320_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59347900();

   return behavior;
}

Behavior __59347480;

Behavior make__59347480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59347480 = behavior;
   behavior->owner = (Object)channel__w1_58112_49868320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_53197240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58130_53197240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58130_53197240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58130_53197240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58130_53197240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58130_53197240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58130_53197240_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59347640();

   return behavior;
}

Scope makechannel__w1_58112_49868320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_49868320 = scope;
   scope->owner = (Object)layer0_58_84_49888740;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49888840();
   scope->inners[1] = maketrig__w_49888800();
   scope->inners[2] = makedbus__r_49984440();
   scope->inners[3] = makedbus__w_50047240();
   scope->inners[4] = makeabus__r_50047160();
   scope->inners[5] = makeabus__w_50047020();
   scope->inners[6] = makemem_50171960();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_49868020();
   scope->scopes[1] = makewaddr_58118_49867500();
   scope->scopes[2] = makerinc_58123_49866720();
   scope->scopes[3] = makewinc_58127_49866260();
   scope->scopes[4] = makerdec_58131_49865780();
   scope->scopes[5] = makewdec_58136_49865320();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49608540();
   scope->behaviors[1] = make__59326840();
   scope->behaviors[2] = make__59326640();
   scope->behaviors[3] = make__59350700();
   scope->behaviors[4] = make__59350420();
   scope->behaviors[5] = make__59349900();
   scope->behaviors[6] = make__59349660();
   scope->behaviors[7] = make__59349200();
   scope->behaviors[8] = make__59349000();
   scope->behaviors[9] = make__59348500();
   scope->behaviors[10] = make__59348240();
   scope->behaviors[11] = make__59347720();
   scope->behaviors[12] = make__59347480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_49608360;

SignalI reg__0_49834360_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makereg__0_49834360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49834360_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__accum_58141_49608360;
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

SignalI reg__1_49963960_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makereg__1_49963960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49963960_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__accum_58141_49608360;
   signalI->name = "reg_1";
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

Scope anum_58142_49608020;

Scope makeanum_58142_49608020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_49608020 = scope;
   scope->owner = (Object)channel__accum_58141_49608360;
   scope->name = "anum:142";
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

Scope raddr_58145_49607440;

Scope makeraddr_58145_49607440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_49607440 = scope;
   scope->owner = (Object)channel__accum_58141_49608360;
   scope->name = "raddr:145";
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

Scope waddr_58149_49606880;

Scope makewaddr_58149_49606880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_49606880 = scope;
   scope->owner = (Object)channel__accum_58141_49608360;
   scope->name = "waddr:149";
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

Scope rinc_58153_49606400;

SignalI abus__r_49605960_rinc_58153_49606400_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__r_49605960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49605960_rinc_58153_49606400_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rinc_58153_49606400;
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

Scope makerinc_58153_49606400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_49606400 = scope;
   scope->owner = (Object)channel__accum_58141_49608360;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49605960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_49605840;

SignalI abus__w_49605320_winc_58158_49605840_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__w_49605320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49605320_winc_58158_49605840_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)winc_58158_49605840;
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

Scope makewinc_58158_49605840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_49605840 = scope;
   scope->owner = (Object)channel__accum_58141_49608360;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49605320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_49605000;

SignalI abus__r_49604520_rdec_58163_49605000_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__r_49604520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49604520_rdec_58163_49605000_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rdec_58163_49605000;
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

Scope makerdec_58163_49605000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_49605000 = scope;
   scope->owner = (Object)channel__accum_58141_49608360;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49604520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_49604340;

SignalI abus__w_49603700_wdec_58168_49604340_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__w_49603700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49603700_wdec_58168_49604340_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)wdec_58168_49604340;
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

Scope makewdec_58168_49604340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_49604340 = scope;
   scope->owner = (Object)channel__accum_58141_49608360;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49603700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59345660;

Behavior make__59345660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59345660 = behavior;
   behavior->owner = (Object)channel__accum_58141_49608360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49834360_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   reg__0_49834360_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   reg__0_49834360_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(reg__0_49834360_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,reg__0_49834360_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__0_49834360_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[reg__0_49834360_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59345860();

   return behavior;
}

Behavior __59345400;

Behavior make__59345400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59345400 = behavior;
   behavior->owner = (Object)channel__accum_58141_49608360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_49933100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58143_49933100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58143_49933100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58143_49933100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58143_49933100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58143_49933100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58143_49933100_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59345620();

   return behavior;
}

Behavior __59344940;

Behavior make__59344940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59344940 = behavior;
   behavior->owner = (Object)channel__accum_58141_49608360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49963960_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   reg__1_49963960_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   reg__1_49963960_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(reg__1_49963960_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,reg__1_49963960_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__1_49963960_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[reg__1_49963960_channel__accum_58141_49608360_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59345100();

   return behavior;
}

Behavior __59344740;

Behavior make__59344740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59344740 = behavior;
   behavior->owner = (Object)channel__accum_58141_49608360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_50033380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58144_50033380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58144_50033380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58144_50033380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58144_50033380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58144_50033380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58144_50033380_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59344900();

   return behavior;
}

Scope makechannel__accum_58141_49608360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_49608360 = scope;
   scope->owner = (Object)layer0_58_84_49888740;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49834360();
   scope->inners[1] = makereg__1_49963960();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_49608020();
   scope->scopes[1] = makeraddr_58145_49607440();
   scope->scopes[2] = makewaddr_58149_49606880();
   scope->scopes[3] = makerinc_58153_49606400();
   scope->scopes[4] = makewinc_58158_49605840();
   scope->scopes[5] = makerdec_58163_49605000();
   scope->scopes[6] = makewdec_58168_49604340();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59345660();
   scope->behaviors[1] = make__59345400();
   scope->behaviors[2] = make__59344940();
   scope->behaviors[3] = make__59344740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_48001960;

SignalI lv0_48337120_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makelv0_48337120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_48337120_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48001960;
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

SignalI lv1_49433820_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makelv1_49433820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_49433820_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48001960;
   signalI->name = "lv1";
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

SignalI av0_49619100_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeav0_49619100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49619100_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48001960;
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

SignalI av1_49757120_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeav1_49757120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_49757120_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48001960;
   signalI->name = "av1";
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

SignalI rv_49870540_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makerv_49870540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49870540_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48001960;
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

SignalI lvok0_49870520_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makelvok0_49870520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49870520_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48001960;
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

SignalI lvok1_49870500_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makelvok1_49870500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49870500_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48001960;
   signalI->name = "lvok1";
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

SignalI rvok_49870480_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makervok_49870480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49870480_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48001960;
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

SignalI run_49870460_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makerun_49870460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49870460_mac__n1_58173_48001960_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)mac__n1_58173_48001960;
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

Behavior __54890320;

Behavior make__54890320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54890320 = behavior;
   behavior->owner = (Object)mac__n1_58173_48001960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos += 1;
   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos = realloc(clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos[clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__49870260();

   return behavior;
}

Scope makemac__n1_58173_48001960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_48001960 = scope;
   scope->owner = (Object)layer0_58_84_49888740;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_48337120();
   scope->inners[1] = makelv1_49433820();
   scope->inners[2] = makeav0_49619100();
   scope->inners[3] = makeav1_49757120();
   scope->inners[4] = makerv_49870540();
   scope->inners[5] = makelvok0_49870520();
   scope->inners[6] = makelvok1_49870500();
   scope->inners[7] = makervok_49870480();
   scope->inners[8] = makerun_49870460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54890320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58174_54890200;

SignalI reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makereg__0_45793060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__bias_58174_54890200;
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

SignalI reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makereg__1_47899660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__bias_58174_54890200;
   signalI->name = "reg_1";
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

Scope anum_58175_54889900;

Scope makeanum_58175_54889900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58175_54889900 = scope;
   scope->owner = (Object)channel__bias_58174_54890200;
   scope->name = "anum:175";
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

Scope raddr_58178_54889480;

Scope makeraddr_58178_54889480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58178_54889480 = scope;
   scope->owner = (Object)channel__bias_58174_54890200;
   scope->name = "raddr:178";
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

Scope waddr_58182_54889060;

Scope makewaddr_58182_54889060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58182_54889060 = scope;
   scope->owner = (Object)channel__bias_58174_54890200;
   scope->name = "waddr:182";
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

Scope rinc_58186_54888640;

SignalI abus__r_54888260_rinc_58186_54888640_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__r_54888260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54888260_rinc_58186_54888640_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rinc_58186_54888640;
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

Scope makerinc_58186_54888640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58186_54888640 = scope;
   scope->owner = (Object)channel__bias_58174_54890200;
   scope->name = "rinc:186";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54888260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58190_54888140;

SignalI abus__w_54887760_winc_58190_54888140_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__w_54887760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54887760_winc_58190_54888140_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)winc_58190_54888140;
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

Behavior __59395340;

Behavior make__59395340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59395340 = behavior;
   behavior->owner = (Object)winc_58190_54888140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_54887760_winc_58190_54888140_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   abus__w_54887760_winc_58190_54888140_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   abus__w_54887760_winc_58190_54888140_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(abus__w_54887760_winc_58190_54888140_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,abus__w_54887760_winc_58190_54888140_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
abus__w_54887760_winc_58190_54888140_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[abus__w_54887760_winc_58190_54888140_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59395520();

   return behavior;
}

Behavior __59395060;

Behavior make__59395060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59395060 = behavior;
   behavior->owner = (Object)winc_58190_54888140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58193_53437260_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59395280();

   return behavior;
}

Scope makewinc_58190_54888140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58190_54888140 = scope;
   scope->owner = (Object)channel__bias_58174_54890200;
   scope->name = "winc:190";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54887760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59395340();
   scope->behaviors[1] = make__59395060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58194_54887380;

SignalI abus__r_54887000_rdec_58194_54887380_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__r_54887000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54887000_rdec_58194_54887380_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rdec_58194_54887380;
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

Scope makerdec_58194_54887380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58194_54887380 = scope;
   scope->owner = (Object)channel__bias_58174_54890200;
   scope->name = "rdec:194";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54887000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58199_54886880;

SignalI abus__w_54886500_wdec_58199_54886880_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__w_54886500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54886500_wdec_58199_54886880_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)wdec_58199_54886880;
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

Scope makewdec_58199_54886880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58199_54886880 = scope;
   scope->owner = (Object)channel__bias_58174_54890200;
   scope->name = "wdec:199";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54886500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59399820;

Behavior make__59399820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59399820 = behavior;
   behavior->owner = (Object)channel__bias_58174_54890200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59399980();

   return behavior;
}

Behavior __59399620;

Behavior make__59399620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59399620 = behavior;
   behavior->owner = (Object)channel__bias_58174_54890200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58176_50173740_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58176_50173740_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58176_50173740_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58176_50173740_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58176_50173740_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58176_50173740_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58176_50173740_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59399780();

   return behavior;
}

Behavior __59399060;

Behavior make__59399060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59399060 = behavior;
   behavior->owner = (Object)channel__bias_58174_54890200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59399220();

   return behavior;
}

Behavior __59398860;

Behavior make__59398860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59398860 = behavior;
   behavior->owner = (Object)channel__bias_58174_54890200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58177_50266220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58177_50266220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58177_50266220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58177_50266220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58177_50266220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58177_50266220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58177_50266220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59399020();

   return behavior;
}

Behavior __59398340;

Behavior make__59398340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59398340 = behavior;
   behavior->owner = (Object)channel__bias_58174_54890200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[reg__0_45793060_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59398520();

   return behavior;
}

Behavior __59398100;

Behavior make__59398100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59398100 = behavior;
   behavior->owner = (Object)channel__bias_58174_54890200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58191_53377760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58191_53377760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58191_53377760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58191_53377760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58191_53377760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58191_53377760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58191_53377760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59398260();

   return behavior;
}

Behavior __59397640;

Behavior make__59397640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59397640 = behavior;
   behavior->owner = (Object)channel__bias_58174_54890200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[reg__1_47899660_channel__bias_58174_54890200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59397800();

   return behavior;
}

Behavior __59397420;

Behavior make__59397420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59397420 = behavior;
   behavior->owner = (Object)channel__bias_58174_54890200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58192_53437340_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58192_53437340_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58192_53437340_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58192_53437340_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58192_53437340_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58192_53437340_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58192_53437340_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59397600();

   return behavior;
}

Scope makechannel__bias_58174_54890200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58174_54890200 = scope;
   scope->owner = (Object)layer0_58_84_49888740;
   scope->name = "channel_bias:174";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_45793060();
   scope->inners[1] = makereg__1_47899660();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58175_54889900();
   scope->scopes[1] = makeraddr_58178_54889480();
   scope->scopes[2] = makewaddr_58182_54889060();
   scope->scopes[3] = makerinc_58186_54888640();
   scope->scopes[4] = makewinc_58190_54888140();
   scope->scopes[5] = makerdec_58194_54887380();
   scope->scopes[6] = makewdec_58199_54886880();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59399820();
   scope->behaviors[1] = make__59399620();
   scope->behaviors[2] = make__59399060();
   scope->behaviors[3] = make__59398860();
   scope->behaviors[4] = make__59398340();
   scope->behaviors[5] = make__59398100();
   scope->behaviors[6] = make__59397640();
   scope->behaviors[7] = make__59397420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58204_50187420;

SignalI reg__0_50302180_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makereg__0_50302180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50302180_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__z_58204_50187420;
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

SignalI reg__1_48696080_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makereg__1_48696080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_48696080_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__z_58204_50187420;
   signalI->name = "reg_1";
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

Scope anum_58205_50187060;

Scope makeanum_58205_50187060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58205_50187060 = scope;
   scope->owner = (Object)channel__z_58204_50187420;
   scope->name = "anum:205";
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

Scope raddr_58208_50186560;

Scope makeraddr_58208_50186560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58208_50186560 = scope;
   scope->owner = (Object)channel__z_58204_50187420;
   scope->name = "raddr:208";
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

Scope waddr_58212_50185980;

Scope makewaddr_58212_50185980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58212_50185980 = scope;
   scope->owner = (Object)channel__z_58204_50187420;
   scope->name = "waddr:212";
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

Scope rinc_58216_50185400;

SignalI abus__r_50184860_rinc_58216_50185400_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__r_50184860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50184860_rinc_58216_50185400_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rinc_58216_50185400;
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

Scope makerinc_58216_50185400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58216_50185400 = scope;
   scope->owner = (Object)channel__z_58204_50187420;
   scope->name = "rinc:216";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50184860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58220_50184700;

SignalI abus__w_50207120_winc_58220_50184700_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__w_50207120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50207120_winc_58220_50184700_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)winc_58220_50184700;
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

Scope makewinc_58220_50184700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58220_50184700 = scope;
   scope->owner = (Object)channel__z_58204_50187420;
   scope->name = "winc:220";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50207120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58224_50206340;

SignalI abus__r_50205540_rdec_58224_50206340_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__r_50205540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50205540_rdec_58224_50206340_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rdec_58224_50206340;
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

Scope makerdec_58224_50206340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58224_50206340 = scope;
   scope->owner = (Object)channel__z_58204_50187420;
   scope->name = "rdec:224";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50205540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58229_50205400;

SignalI abus__w_50204940_wdec_58229_50205400_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makeabus__w_50204940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50204940_wdec_58229_50205400_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)wdec_58229_50205400;
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

Scope makewdec_58229_50205400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58229_50205400 = scope;
   scope->owner = (Object)channel__z_58204_50187420;
   scope->name = "wdec:229";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50204940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59393680;

Behavior make__59393680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59393680 = behavior;
   behavior->owner = (Object)channel__z_58204_50187420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50302180_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   reg__0_50302180_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   reg__0_50302180_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(reg__0_50302180_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,reg__0_50302180_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__0_50302180_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[reg__0_50302180_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59393900();

   return behavior;
}

Behavior __59393480;

Behavior make__59393480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59393480 = behavior;
   behavior->owner = (Object)channel__z_58204_50187420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58206_51340680_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58206_51340680_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58206_51340680_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58206_51340680_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58206_51340680_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58206_51340680_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58206_51340680_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59393640();

   return behavior;
}

Behavior __59392920;

Behavior make__59392920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59392920 = behavior;
   behavior->owner = (Object)channel__z_58204_50187420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48696080_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   reg__1_48696080_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   reg__1_48696080_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(reg__1_48696080_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,reg__1_48696080_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__1_48696080_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[reg__1_48696080_channel__z_58204_50187420_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59393140();

   return behavior;
}

Behavior __59392720;

Behavior make__59392720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59392720 = behavior;
   behavior->owner = (Object)channel__z_58204_50187420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58207_52457060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   _58207_52457060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   _58207_52457060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(_58207_52457060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,_58207_52457060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_58207_52457060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[_58207_52457060_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59392880();

   return behavior;
}

Scope makechannel__z_58204_50187420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58204_50187420 = scope;
   scope->owner = (Object)layer0_58_84_49888740;
   scope->name = "channel_z:204";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50302180();
   scope->inners[1] = makereg__1_48696080();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58205_50187060();
   scope->scopes[1] = makeraddr_58208_50186560();
   scope->scopes[2] = makewaddr_58212_50185980();
   scope->scopes[3] = makerinc_58216_50185400();
   scope->scopes[4] = makewinc_58220_50184700();
   scope->scopes[5] = makerdec_58224_50206340();
   scope->scopes[6] = makewdec_58229_50205400();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59393680();
   scope->behaviors[1] = make__59393480();
   scope->behaviors[2] = make__59392920();
   scope->behaviors[3] = make__59392720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58234_52797780;

SignalI lv0_52899400_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makelv0_52899400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52899400_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)add__n_58234_52797780;
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

SignalI lv1_53075320_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makelv1_53075320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_53075320_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)add__n_58234_52797780;
   signalI->name = "lv1";
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

SignalI rv0_53185620_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makerv0_53185620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_53185620_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)add__n_58234_52797780;
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

SignalI rv1_53328480_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makerv1_53328480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_53328480_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)add__n_58234_52797780;
   signalI->name = "rv1";
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

SignalI lvok0_53328460_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makelvok0_53328460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53328460_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)add__n_58234_52797780;
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

SignalI lvok1_53328440_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makelvok1_53328440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_53328440_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)add__n_58234_52797780;
   signalI->name = "lvok1";
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

SignalI rvok0_53328420_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makervok0_53328420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_53328420_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)add__n_58234_52797780;
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

SignalI rvok1_53328400_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makervok1_53328400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_53328400_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)add__n_58234_52797780;
   signalI->name = "rvok1";
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

SignalI run_53328380_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920;

SignalI makerun_53328380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53328380_add__n_58234_52797780_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)add__n_58234_52797780;
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

Behavior __49452900;

Behavior make__49452900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49452900 = behavior;
   behavior->owner = (Object)add__n_58234_52797780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos += 1;
   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos = realloc(clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos[clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__53328260();

   return behavior;
}

Scope makeadd__n_58234_52797780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58234_52797780 = scope;
   scope->owner = (Object)layer0_58_84_49888740;
   scope->name = "add_n:234";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52899400();
   scope->inners[1] = makelv1_53075320();
   scope->inners[2] = makerv0_53185620();
   scope->inners[3] = makerv1_53328480();
   scope->inners[4] = makelvok0_53328460();
   scope->inners[5] = makelvok1_53328440();
   scope->inners[6] = makervok0_53328420();
   scope->inners[7] = makervok1_53328400();
   scope->inners[8] = makerun_53328380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49452900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54036980;

Behavior make__54036980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54036980 = behavior;
   behavior->owner = (Object)layer0_58_84_49888740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos += 1;
   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos = realloc(clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos[clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__53188020();

   return behavior;
}

Behavior __54892660;

Behavior make__54892660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54892660 = behavior;
   behavior->owner = (Object)layer0_58_84_49888740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos += 1;
   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos = realloc(clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos[clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__54036820();

   return behavior;
}

Behavior __49938060;

Behavior make__49938060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49938060 = behavior;
   behavior->owner = (Object)layer0_58_84_49888740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos += 1;
   clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos = realloc(clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->pos[clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__54892480();

   return behavior;
}

Behavior __59333660;

Behavior make__59333660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59333660 = behavior;
   behavior->owner = (Object)layer0_58_84_49888740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack_49452660_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   ack_49452660_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   ack_49452660_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(ack_49452660_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,ack_49452660_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
ack_49452660_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[ack_49452660_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,value__z0_52605540_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   value__z0_52605540_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   value__z0_52605540_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(value__z0_52605540_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,value__z0_52605540_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
value__z0_52605540_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[value__z0_52605540_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z1_52673180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   value__z1_52673180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   value__z1_52673180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(value__z1_52673180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,value__z1_52673180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
value__z1_52673180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[value__z1_52673180_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a00_52898220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   ack__a00_52898220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   ack__a00_52898220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(ack__a00_52898220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,ack__a00_52898220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
ack__a00_52898220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[ack__a00_52898220_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a01_52898200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   ack__a01_52898200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   ack__a01_52898200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(ack__a01_52898200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,ack__a01_52898200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
ack__a01_52898200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[ack__a01_52898200_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59315320();

   return behavior;
}

Behavior __59333500;

Behavior make__59333500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59333500 = behavior;
   behavior->owner = (Object)layer0_58_84_49888740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_53453620_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   ack__mac_53453620_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   ack__mac_53453620_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(ack__mac_53453620_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,ack__mac_53453620_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
ack__mac_53453620_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[ack__mac_53453620_counter0_58_840_53455720_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_53249600_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   a_53249600_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   a_53249600_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(a_53249600_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,a_53249600_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
a_53249600_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[a_53249600_func0_58_841_52898760_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_49740760_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   a_49740760_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   a_49740760_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(a_49740760_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,a_49740760_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
a_49740760_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[a_49740760_func1_58_840_48124440_layer0_58_84_49888740_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59315260();

   return behavior;
}

Scope makelayer0_58_84_49888740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_49888740 = scope;
   scope->owner = (Object)layer0_58_840_49935740;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter0_53453480();
   scope->systemIs[1] = makefunc0_53249400();
   scope->systemIs[2] = makefunc1_49740380();
   scope->num_inners = 32;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack_49452660();
   scope->inners[1] = makeack__mac_49452640();
   scope->inners[2] = makeack__add_49452620();
   scope->inners[3] = make_5897_49636900();
   scope->inners[4] = make_5895_49636780();
   scope->inners[5] = make_5896_49636060();
   scope->inners[6] = make_58126_49800260();
   scope->inners[7] = make_58124_49800240();
   scope->inners[8] = make_58125_49800140();
   scope->inners[9] = make_58143_49933100();
   scope->inners[10] = make_58144_50033380();
   scope->inners[11] = make_58176_50173740();
   scope->inners[12] = make_58177_50266220();
   scope->inners[13] = make_58206_51340680();
   scope->inners[14] = make_58207_52457060();
   scope->inners[15] = makevalue__z0_52605540();
   scope->inners[16] = makevalue__z1_52673180();
   scope->inners[17] = makevalue__a00_52798440();
   scope->inners[18] = makevalue__a01_52898280();
   scope->inners[19] = makeflag__z0_52898260();
   scope->inners[20] = makeflag__z1_52898240();
   scope->inners[21] = makeack__a00_52898220();
   scope->inners[22] = makeack__a01_52898200();
   scope->inners[23] = make_5899_52898180();
   scope->inners[24] = make_58100_52898100();
   scope->inners[25] = make_58101_53072260();
   scope->inners[26] = make_58128_53072240();
   scope->inners[27] = make_58129_53072160();
   scope->inners[28] = make_58130_53197240();
   scope->inners[29] = make_58191_53377760();
   scope->inners[30] = make_58192_53437340();
   scope->inners[31] = make_58193_53437260();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_49888380();
   scope->scopes[1] = makechannel__w1_58112_49868320();
   scope->scopes[2] = makechannel__accum_58141_49608360();
   scope->scopes[3] = makemac__n1_58173_48001960();
   scope->scopes[4] = makechannel__bias_58174_54890200();
   scope->scopes[5] = makechannel__z_58204_50187420();
   scope->scopes[6] = makeadd__n_58234_52797780();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54036980();
   scope->behaviors[1] = make__54892660();
   scope->behaviors[2] = make__49938060();
   scope->behaviors[3] = make__59333660();
   scope->behaviors[4] = make__59333500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_49935740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_49935740 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_49953700();
   systemT->inputs[1] = makerst_49953680();
   systemT->inputs[2] = makefill_49953660();
   systemT->inputs[3] = makereq_49953640();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__0_49953500();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer0_58_84_49888740();

   return systemT;
}