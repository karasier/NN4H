#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer__output_58_840_59510240;

SignalI clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeclk_59508200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_840_59510240;
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

SignalI rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makerst_59508180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_840_59510240;
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

SignalI fill_59508160_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makefill_59508160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_59508160_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_840_59510240;
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

SignalI req_59508140_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makereq_59508140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_59508140_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_840_59510240;
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

SignalI ack__1_59508100_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeack__1_59508100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_59508100_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_840_59510240;
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

Block __58538260;

Block __58537620;

Block __58537460;

void code__58537460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_58371580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,value__z0_58434320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60851380(),flag__z0_58611700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__58537460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58537460 = block;
   block->owner = (Object)__58537620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58537460;

   return block;
};

void code__58537620() {
 code__58537460();
}

Block make__58537620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58537620 = block;
   block->owner = (Object)__58538260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58537620;

   return block;
};

Block __58538100;

void code__58538100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60851320(),flag__z0_58611700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__58538100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58538100 = block;
   block->owner = (Object)__58538260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58538100;

   return block;
};

void code__58538260() {
   {
      Value cond = ack__add_49863120_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58537620();
   }
   else {
  code__58538100();
   }
      }
   }
}

Block make__58538260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58538260 = block;
   block->owner = (Object)__58770500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58538260;

   return block;
};

Block __58770340;

Block __58770000;

Block __58769840;

void code__58769840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a10_58611720_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,_5862_49591460______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60851080(),ack__a10_58611680_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__58769840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58769840 = block;
   block->owner = (Object)__58770000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58769840;

   return block;
};

void code__58770000() {
 code__58769840();
}

Block make__58770000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58770000 = block;
   block->owner = (Object)__58770340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58770000;

   return block;
};

void code__58770340() {
   {
      Value cond = flag__z0_58611700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58770000();
   }
      }
   }
}

Block make__58770340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58770340 = block;
   block->owner = (Object)__59039200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58770340;

   return block;
};

Block __59039020;

Block __59038800;

Block __59038440;

void code__59038440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60850880(),_58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59038440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59038440 = block;
   block->owner = (Object)__59038800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59038440;

   return block;
};

void code__59038800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60850980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59038440();
   }
      }
   }
}

Block make__59038800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59038800 = block;
   block->owner = (Object)__59039020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59038800;

   return block;
};

Block __59037980;

Block __59037660;

void code__59037660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60850660(),_58252_58611580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59037660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59037660 = block;
   block->owner = (Object)__59037980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59037660;

   return block;
};

void code__59037980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60850780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59037660();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60850600(),_58251_58611660_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59037980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59037980 = block;
   block->owner = (Object)__59039020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59037980;

   return block;
};

Block __59036860;

Block __59036680;

Block __59036300;

void code__59036300() {
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
                  src0 = _58252_58611580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60850340();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58252_58611580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60850240(),_58251_58611660_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60850180(),_58253_58707100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59036300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59036300 = block;
   block->owner = (Object)__59036680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59036300;

   return block;
};

void code__59036680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60850480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59036300();
   }
      }
   }
}

Block make__59036680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59036680 = block;
   block->owner = (Object)__59036860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59036680;

   return block;
};

Block __59241840;

Block __59241520;

Block __59241060;

void code__59241060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60874460(),_58303_58810840_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59241060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59241060 = block;
   block->owner = (Object)__59241520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59241060;

   return block;
};

void code__59241520() {
{
      Value value = _58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60874520())) {
    code__59241060();
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
                  src0 = _58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60874340();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59241520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59241520 = block;
   block->owner = (Object)__59241840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59241520;

   return block;
};

void code__59241840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60874640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59241520();
   }
      }
   }
}

Block make__59241840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59241840 = block;
   block->owner = (Object)__59036860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59241840;

   return block;
};

void code__59036860() {
 code__59036680();
 code__59241840();
}

Block make__59036860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59036860 = block;
   block->owner = (Object)__59039020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59036860;

   return block;
};

void code__59039020() {
 code__59038800();
 code__59037980();
   {
      Value cond = fill_59508160_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59036860();
   }
      }
   }
}

Block make__59039020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59039020 = block;
   block->owner = (Object)__59510560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59039020;

   return block;
};

Block __60644740;

void code__60644740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_59508140_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_49863140_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_49863180_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60644740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60644740 = block;
   block->owner = (Object)__60644500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60644740;

   return block;
};

Block __60645020;

void code__60645020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,clk_58828260_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_49863160_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,ack_58828240_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,rst_58828220_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_58434320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,z__value_52297100_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a10_58611680_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,ack__1_59508100_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60645020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60645020 = block;
   block->owner = (Object)__60638800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60645020;

   return block;
};

Block __60644960;

void code__60644960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_58828180_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,ack__mac_49863140_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_58074380_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,value__a10_58611720_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60644960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60644960 = block;
   block->owner = (Object)__60638640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60644960;

   return block;
};

Block __48563080;

Block __49575660;

void code__49575660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_53339360_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,make_ref_rangeS(mem_53695500_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220,value2integer(abus__w_53338820_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value),value2integer(abus__w_53338820_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49575660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49575660 = block;
   block->owner = (Object)__48563080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49575660;

   return block;
};

void code__48563080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_53695500_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
            idx = value2integer(abus__r_53339060_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_53115680_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_52962840_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49575660();
   }
      }
   }
}

Block make__48563080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48563080 = block;
   block->owner = (Object)__51901640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48563080;

   return block;
};

Block __60637820;

void code__60637820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_53115680_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,_58249_58093320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60637820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60637820 = block;
   block->owner = (Object)__60637660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60637820;

   return block;
};

Block __60637620;

void code__60637620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_58093320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,dbus__r_53115680_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60637620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60637620 = block;
   block->owner = (Object)__60637460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60637620;

   return block;
};

Block __60661680;

void code__60661680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_52962900_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,_58247_58093300_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60661680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60661680 = block;
   block->owner = (Object)__60661500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60661680;

   return block;
};

Block __60661440;

void code__60661440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58247_58093300_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,trig__r_52962900_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60661440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60661440 = block;
   block->owner = (Object)__60661240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60661440;

   return block;
};

Block __60660940;

void code__60660940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53339060_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,_58248_58093220_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60660940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60660940 = block;
   block->owner = (Object)__60660760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60660940;

   return block;
};

Block __60660700;

void code__60660700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58248_58093220_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,abus__r_53339060_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60660700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60660700 = block;
   block->owner = (Object)__60660480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60660700;

   return block;
};

Block __60659960;

void code__60659960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_52962840_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,_58251_58611660_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60659960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60659960 = block;
   block->owner = (Object)__60659800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60659960;

   return block;
};

Block __60659760;

void code__60659760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58251_58611660_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,trig__w_52962840_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60659760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60659760 = block;
   block->owner = (Object)__60659580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60659760;

   return block;
};

Block __60659200;

void code__60659200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_53338820_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,_58252_58611580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60659200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60659200 = block;
   block->owner = (Object)__60659040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60659200;

   return block;
};

Block __60659000;

void code__60659000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58252_58611580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,abus__w_53338820_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60659000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60659000 = block;
   block->owner = (Object)__60658840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60659000;

   return block;
};

Block __60658540;

void code__60658540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_53339360_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,_58253_58707100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60658540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60658540 = block;
   block->owner = (Object)__60658360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60658540;

   return block;
};

Block __60658320;

void code__60658320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58253_58707100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,dbus__w_53339360_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60658320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60658320 = block;
   block->owner = (Object)__60658140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60658320;

   return block;
};

Block __60656460;

void code__60656460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52360540_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,_58266_58196960_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60656460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60656460 = block;
   block->owner = (Object)__60656300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60656460;

   return block;
};

Block __60656260;

void code__60656260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_58196960_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,reg__0_52360540_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60656260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60656260 = block;
   block->owner = (Object)__60656060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60656260;

   return block;
};

Block __53394460;

Block __53393780;

Block __53393340;

void code__53393340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60857500(),_58248_58093220_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__53393340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53393340 = block;
   block->owner = (Object)__53393780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53393340;

   return block;
};

void code__53393780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60857580();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53393340();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60857440(),_58247_58093300_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__53393780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53393780 = block;
   block->owner = (Object)__53394460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53393780;

   return block;
};

Block __53392360;

Block __53391640;

void code__53391640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60857260(),_5845_49508260______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__53391640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53391640 = block;
   block->owner = (Object)__53392360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53391640;

   return block;
};

void code__53392360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60857360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53391640();
   }
      }
   }
}

Block make__53392360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53392360 = block;
   block->owner = (Object)__53394460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53392360;

   return block;
};

Block __53802760;

Block __53802140;

Block __53801280;

Block __53800740;

void code__53800740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_49399480______58_84_49218480______58_840_59831220->c_value,rv_53370940_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__53800740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53800740 = block;
   block->owner = (Object)__53801280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53800740;

   return block;
};

Block __48447200;

void code__48447200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_49508340______58_84_49218480______58_840_59831220->c_value,rv_53370940_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__48447200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48447200 = block;
   block->owner = (Object)__53801280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48447200;

   return block;
};

void code__53801280() {
{
      Value value = _5845_49508260______58_84_49218480______58_840_59831220->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60856700())) {
    code__53800740();
         }
         else if (value2integer(value) == value2integer(make__60856600())) {
    code__48447200();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60856460(),rvok_53395380_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
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
                  src0 = _5845_49508260______58_84_49218480______58_840_59831220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60856340();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_49508260______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__53801280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53801280 = block;
   block->owner = (Object)__53802140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53801280;

   return block;
};

void code__53802140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60856820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53801280();
   }
      }
   }
}

Block make__53802140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53802140 = block;
   block->owner = (Object)__53802760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53802140;

   return block;
};

Block __51397820;

Block __51397260;

Block __51396740;

void code__51396740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_58093320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,lv0_52961440_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60855960(),lvok0_53370920_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__51396740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51396740 = block;
   block->owner = (Object)__51397260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51396740;

   return block;
};

void code__51397260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58247_58093300_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60856120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51396740();
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
                  src0 = _58248_58093220_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60855820();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58248_58093220_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60855700(),_58247_58093300_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__51397260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51397260 = block;
   block->owner = (Object)__51397820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51397260;

   return block;
};

void code__51397820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60856220();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51397260();
   }
      }
   }
}

Block make__51397820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51397820 = block;
   block->owner = (Object)__53802760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51397820;

   return block;
};

Block __52511360;

Block __52550440;

Block __52550240;

void code__52550240() {
}

Block make__52550240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52550240 = block;
   block->owner = (Object)__52550440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52550240;

   return block;
};

Block __52405640;

void code__52405640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_53112220_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,_58266_58196960_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__52405640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52405640 = block;
   block->owner = (Object)__52550440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52405640;

   return block;
};

void code__52550440() {
 code__52550240();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_53112220_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
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
                              src0 = lv0_52961440_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_53370940_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60855040();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_53112220_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
 code__52405640();
}

Block make__52550440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52550440 = block;
   block->owner = (Object)__52511360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52550440;

   return block;
};

void code__52511360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60855480(),ack_49863160_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60855420(),run_53395280_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
 code__52550440();
}

Block make__52511360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52511360 = block;
   block->owner = (Object)__53802760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52511360;

   return block;
};

void code__53802760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60856900(),run_53395280_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
 code__53802140();
 code__51397820();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53370920_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
         src1 = rvok_53395380_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52511360();
   }
      }
   }
}

Block make__53802760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53802760 = block;
   block->owner = (Object)__53394460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53802760;

   return block;
};

Block __53390320;

void code__53390320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60854800(),rvok_53395380_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60854740(),lvok0_53370920_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60854680(),av0_53112220_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__53390320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53390320 = block;
   block->owner = (Object)__53394460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53390320;

   return block;
};

void code__53394460() {
 code__53393780();
 code__53392360();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60857180(),ack_49863160_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60857120(),run_53395280_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_49863180_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
         src1 = run_53395280_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53802760();
   }
   else {
  code__53390320();
   }
      }
   }
}

Block make__53394460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53394460 = block;
   block->owner = (Object)__53112860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53394460;

   return block;
};

Block __60654180;

void code__60654180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,_58292_58300620_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60654180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60654180 = block;
   block->owner = (Object)__60654000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60654180;

   return block;
};

Block __60653960;

void code__60653960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_58300620_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60653960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60653960 = block;
   block->owner = (Object)__60653780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60653960;

   return block;
};

Block __60677960;

void code__60677960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,_58303_58810840_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60677960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60677960 = block;
   block->owner = (Object)__60677760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60677960;

   return block;
};

Block __60677720;

void code__60677720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58303_58810840_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60677720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60677720 = block;
   block->owner = (Object)__60677500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60677720;

   return block;
};

Block __60675800;

void code__60675800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_53083160_winc_58302_53083620_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,_58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60675800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60675800 = block;
   block->owner = (Object)__60675620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60675800;

   return block;
};

Block __60675560;

void code__60675560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,abus__w_53083160_winc_58302_53083620_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60675560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60675560 = block;
   block->owner = (Object)__60675360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60675560;

   return block;
};

Block __60674240;

void code__60674240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49458260_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,_58315_58371580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60674240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60674240 = block;
   block->owner = (Object)__60674040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60674240;

   return block;
};

Block __60674000;

void code__60674000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_58371580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,reg__0_49458260_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__60674000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60674000 = block;
   block->owner = (Object)__60673760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60674000;

   return block;
};

Block __52312960;

Block __52310800;

Block __52310180;

void code__52310180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_58196960_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,lv0_51849140_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60853200(),lvok0_52313140_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__52310180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52310180 = block;
   block->owner = (Object)__52310800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52310180;

   return block;
};

Block __52748660;

void code__52748660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_58300620_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,rv0_52313160_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60853020(),rvok0_52313120_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__52748660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52748660 = block;
   block->owner = (Object)__52310800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52748660;

   return block;
};

Block __53183160;

Block __53231520;

void code__53231520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_51849140_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
      src1 = rv0_52313160_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58315_58371580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__53231520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53231520 = block;
   block->owner = (Object)__53183160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53231520;

   return block;
};

void code__53183160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60852840(),run_52313100_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60852740(),ack__add_49863120_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
 code__53231520();
}

Block make__53183160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53183160 = block;
   block->owner = (Object)__52310800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53183160;

   return block;
};

void code__52310800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60853340(),run_52313100_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
 code__52310180();
 code__52748660();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52313140_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
         src1 = rvok0_52313120_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53183160();
   }
      }
   }
}

Block make__52310800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52310800 = block;
   block->owner = (Object)__52312960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52310800;

   return block;
};

Block __52311940;

void code__52311940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60852500(),lvok0_52313140_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60852440(),rvok0_52313120_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__52311940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52311940 = block;
   block->owner = (Object)__52312960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52311940;

   return block;
};

void code__52312960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60853640(),ack__add_49863120_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60853560(),run_52313100_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_49863140_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
         src1 = run_52313100_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52310800();
   }
   else {
  code__52311940();
   }
      }
   }
}

Block make__52312960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52312960 = block;
   block->owner = (Object)__49863320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52312960;

   return block;
};

Value make__60857580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60857500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60857440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60857360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60857260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60857180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60857120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60856900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60856820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60856700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60856600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60856460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60856340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60856220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60856120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60855960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60855820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60855700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60855480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60855420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60855040() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60854800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60854740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60854680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60853640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60853560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60853340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60853200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60853020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60852840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60852740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60852500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60852440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60851380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60851320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60851080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60850980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60850880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60850780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60850660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60850600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60850480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60850340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60850240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60850180() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60874640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60874520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60874460() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60874340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer__output_58_84_52968120;

SignalI req__mac_49863180_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makereq__mac_49863180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_49863180_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
   signalI->name = "req_mac";
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

SignalI ack_49863160_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeack_49863160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_49863160_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI ack__mac_49863140_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeack__mac_49863140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_49863140_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI ack__add_49863120_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeack__add_49863120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_49863120_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI _58249_58093320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI make_58249_58093320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58249_58093320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI _58247_58093300_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI make_58247_58093300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58247_58093300_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI _58248_58093220_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI make_58248_58093220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58248_58093220_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI _58266_58196960_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI make_58266_58196960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_58196960_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI _58292_58300620_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI make_58292_58300620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58292_58300620_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI _58315_58371580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI make_58315_58371580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_58371580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI value__z0_58434320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makevalue__z0_58434320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_58434320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI value__a10_58611720_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makevalue__a10_58611720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a10_58611720_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI flag__z0_58611700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeflag__z0_58611700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_58611700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI ack__a10_58611680_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeack__a10_58611680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a10_58611680_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI _58251_58611660_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI make_58251_58611660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58251_58611660_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI _58252_58611580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI make_58252_58611580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58252_58611580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI _58253_58707100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI make_58253_58707100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58253_58707100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI _58303_58810840_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI make_58303_58810840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58303_58810840_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SignalI _58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI make_58304_58810760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)layer__output_58_84_52968120;
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

SystemI counter1_58828040;

SystemI makecounter1_58828040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter1_58828040 = systemI;
   systemI->owner = (Object)layer__output_58_84_52968120;
   systemI->name = "counter1";
   systemI->system = counter1_58_840_58830100;

   return systemI;
};

SystemI func10_58074240;

SystemI makefunc10_58074240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func10_58074240 = systemI;
   systemI->owner = (Object)layer__output_58_84_52968120;
   systemI->name = "func10";
   systemI->system = func10_58_840_52739400;

   return systemI;
};

Scope channel__w0_58235_52967540;

SignalI trig__r_52962900_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI maketrig__r_52962900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_52962900_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__w0_58235_52967540;
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

SignalI trig__w_52962840_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI maketrig__w_52962840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_52962840_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__w0_58235_52967540;
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

SignalI dbus__r_53115680_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makedbus__r_53115680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_53115680_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__w0_58235_52967540;
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

SignalI dbus__w_53339360_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makedbus__w_53339360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_53339360_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__w0_58235_52967540;
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

SignalI abus__r_53339060_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeabus__r_53339060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53339060_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__w0_58235_52967540;
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

SignalI abus__w_53338820_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeabus__w_53338820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53338820_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__w0_58235_52967540;
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

SignalI mem_53695500_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makemem_53695500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_53695500_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__w0_58235_52967540;
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

Scope raddr_58236_52967100;

Scope makeraddr_58236_52967100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58236_52967100 = scope;
   scope->owner = (Object)channel__w0_58235_52967540;
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

Scope waddr_58241_52966380;

Scope makewaddr_58241_52966380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58241_52966380 = scope;
   scope->owner = (Object)channel__w0_58235_52967540;
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

Scope rinc_58246_52965780;

Scope makerinc_58246_52965780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58246_52965780 = scope;
   scope->owner = (Object)channel__w0_58235_52967540;
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

Scope winc_58250_52965060;

Scope makewinc_58250_52965060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58250_52965060 = scope;
   scope->owner = (Object)channel__w0_58235_52967540;
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

Scope rdec_58254_52964300;

Scope makerdec_58254_52964300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58254_52964300 = scope;
   scope->owner = (Object)channel__w0_58235_52967540;
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

Scope wdec_58259_52963720;

Scope makewdec_58259_52963720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58259_52963720 = scope;
   scope->owner = (Object)channel__w0_58235_52967540;
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

Behavior __51901640;

Behavior make__51901640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51901640 = behavior;
   behavior->owner = (Object)channel__w0_58235_52967540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_neg += 1;
   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->neg = realloc(clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->neg,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_neg*sizeof(Object));
clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->neg[clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_neg-1] = (Object)behavior;
   behavior->block = make__48563080();

   return behavior;
}

Behavior __60637660;

Behavior make__60637660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60637660 = behavior;
   behavior->owner = (Object)channel__w0_58235_52967540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_53115680_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   dbus__r_53115680_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   dbus__r_53115680_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(dbus__r_53115680_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,dbus__r_53115680_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
dbus__r_53115680_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[dbus__r_53115680_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60637820();

   return behavior;
}

Behavior __60637460;

Behavior make__60637460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60637460 = behavior;
   behavior->owner = (Object)channel__w0_58235_52967540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58249_58093320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   _58249_58093320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   _58249_58093320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(_58249_58093320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,_58249_58093320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_58249_58093320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[_58249_58093320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60637620();

   return behavior;
}

Behavior __60661500;

Behavior make__60661500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60661500 = behavior;
   behavior->owner = (Object)channel__w0_58235_52967540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_52962900_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   trig__r_52962900_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   trig__r_52962900_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(trig__r_52962900_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,trig__r_52962900_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
trig__r_52962900_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[trig__r_52962900_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60661680();

   return behavior;
}

Behavior __60661240;

Behavior make__60661240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60661240 = behavior;
   behavior->owner = (Object)channel__w0_58235_52967540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58247_58093300_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   _58247_58093300_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   _58247_58093300_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(_58247_58093300_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,_58247_58093300_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_58247_58093300_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[_58247_58093300_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60661440();

   return behavior;
}

Behavior __60660760;

Behavior make__60660760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60660760 = behavior;
   behavior->owner = (Object)channel__w0_58235_52967540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53339060_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   abus__r_53339060_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   abus__r_53339060_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(abus__r_53339060_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,abus__r_53339060_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
abus__r_53339060_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[abus__r_53339060_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60660940();

   return behavior;
}

Behavior __60660480;

Behavior make__60660480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60660480 = behavior;
   behavior->owner = (Object)channel__w0_58235_52967540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58248_58093220_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   _58248_58093220_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   _58248_58093220_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(_58248_58093220_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,_58248_58093220_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_58248_58093220_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[_58248_58093220_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60660700();

   return behavior;
}

Behavior __60659800;

Behavior make__60659800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60659800 = behavior;
   behavior->owner = (Object)channel__w0_58235_52967540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_52962840_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   trig__w_52962840_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   trig__w_52962840_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(trig__w_52962840_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,trig__w_52962840_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
trig__w_52962840_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[trig__w_52962840_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60659960();

   return behavior;
}

Behavior __60659580;

Behavior make__60659580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60659580 = behavior;
   behavior->owner = (Object)channel__w0_58235_52967540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58251_58611660_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   _58251_58611660_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   _58251_58611660_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(_58251_58611660_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,_58251_58611660_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_58251_58611660_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[_58251_58611660_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60659760();

   return behavior;
}

Behavior __60659040;

Behavior make__60659040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60659040 = behavior;
   behavior->owner = (Object)channel__w0_58235_52967540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_53338820_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   abus__w_53338820_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   abus__w_53338820_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(abus__w_53338820_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,abus__w_53338820_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
abus__w_53338820_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[abus__w_53338820_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60659200();

   return behavior;
}

Behavior __60658840;

Behavior make__60658840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60658840 = behavior;
   behavior->owner = (Object)channel__w0_58235_52967540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58252_58611580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   _58252_58611580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   _58252_58611580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(_58252_58611580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,_58252_58611580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_58252_58611580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[_58252_58611580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60659000();

   return behavior;
}

Behavior __60658360;

Behavior make__60658360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60658360 = behavior;
   behavior->owner = (Object)channel__w0_58235_52967540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_53339360_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   dbus__w_53339360_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   dbus__w_53339360_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(dbus__w_53339360_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,dbus__w_53339360_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
dbus__w_53339360_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[dbus__w_53339360_channel__w0_58235_52967540_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60658540();

   return behavior;
}

Behavior __60658140;

Behavior make__60658140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60658140 = behavior;
   behavior->owner = (Object)channel__w0_58235_52967540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58253_58707100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   _58253_58707100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   _58253_58707100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(_58253_58707100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,_58253_58707100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_58253_58707100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[_58253_58707100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60658320();

   return behavior;
}

Scope makechannel__w0_58235_52967540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58235_52967540 = scope;
   scope->owner = (Object)layer__output_58_84_52968120;
   scope->name = "channel_w0:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_52962900();
   scope->inners[1] = maketrig__w_52962840();
   scope->inners[2] = makedbus__r_53115680();
   scope->inners[3] = makedbus__w_53339360();
   scope->inners[4] = makeabus__r_53339060();
   scope->inners[5] = makeabus__w_53338820();
   scope->inners[6] = makemem_53695500();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58236_52967100();
   scope->scopes[1] = makewaddr_58241_52966380();
   scope->scopes[2] = makerinc_58246_52965780();
   scope->scopes[3] = makewinc_58250_52965060();
   scope->scopes[4] = makerdec_58254_52964300();
   scope->scopes[5] = makewdec_58259_52963720();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51901640();
   scope->behaviors[1] = make__60637660();
   scope->behaviors[2] = make__60637460();
   scope->behaviors[3] = make__60661500();
   scope->behaviors[4] = make__60661240();
   scope->behaviors[5] = make__60660760();
   scope->behaviors[6] = make__60660480();
   scope->behaviors[7] = make__60659800();
   scope->behaviors[8] = make__60659580();
   scope->behaviors[9] = make__60659040();
   scope->behaviors[10] = make__60658840();
   scope->behaviors[11] = make__60658360();
   scope->behaviors[12] = make__60658140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58264_51901420;

SignalI reg__0_52360540_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makereg__0_52360540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52360540_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__accum_58264_51901420;
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

Scope anum_58265_51901020;

Scope makeanum_58265_51901020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58265_51901020 = scope;
   scope->owner = (Object)channel__accum_58264_51901420;
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

Scope raddr_58267_51900440;

Scope makeraddr_58267_51900440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58267_51900440 = scope;
   scope->owner = (Object)channel__accum_58264_51901420;
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

Scope waddr_58270_51899560;

Scope makewaddr_58270_51899560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58270_51899560 = scope;
   scope->owner = (Object)channel__accum_58264_51901420;
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

Scope rinc_58273_51898560;

SignalI abus__r_51898020_rinc_58273_51898560_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeabus__r_51898020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51898020_rinc_58273_51898560_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)rinc_58273_51898560;
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

Scope makerinc_58273_51898560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_51898560 = scope;
   scope->owner = (Object)channel__accum_58264_51901420;
   scope->name = "rinc:273";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51898020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58277_51897900;

SignalI abus__w_51896820_winc_58277_51897900_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeabus__w_51896820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51896820_winc_58277_51897900_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)winc_58277_51897900;
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

Scope makewinc_58277_51897900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58277_51897900 = scope;
   scope->owner = (Object)channel__accum_58264_51901420;
   scope->name = "winc:277";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51896820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58281_51896580;

SignalI abus__r_52068100_rdec_58281_51896580_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeabus__r_52068100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52068100_rdec_58281_51896580_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)rdec_58281_51896580;
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

Scope makerdec_58281_51896580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58281_51896580 = scope;
   scope->owner = (Object)channel__accum_58264_51901420;
   scope->name = "rdec:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52068100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58285_52067860;

SignalI abus__w_52066380_wdec_58285_52067860_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeabus__w_52066380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52066380_wdec_58285_52067860_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)wdec_58285_52067860;
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

Scope makewdec_58285_52067860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58285_52067860 = scope;
   scope->owner = (Object)channel__accum_58264_51901420;
   scope->name = "wdec:285";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52066380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60656300;

Behavior make__60656300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60656300 = behavior;
   behavior->owner = (Object)channel__accum_58264_51901420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52360540_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   reg__0_52360540_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   reg__0_52360540_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(reg__0_52360540_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,reg__0_52360540_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
reg__0_52360540_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[reg__0_52360540_channel__accum_58264_51901420_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60656460();

   return behavior;
}

Behavior __60656060;

Behavior make__60656060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60656060 = behavior;
   behavior->owner = (Object)channel__accum_58264_51901420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_58196960_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   _58266_58196960_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   _58266_58196960_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(_58266_58196960_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,_58266_58196960_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_58266_58196960_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[_58266_58196960_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60656260();

   return behavior;
}

Scope makechannel__accum_58264_51901420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58264_51901420 = scope;
   scope->owner = (Object)layer__output_58_84_52968120;
   scope->name = "channel_accum:264";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52360540();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58265_51901020();
   scope->scopes[1] = makeraddr_58267_51900440();
   scope->scopes[2] = makewaddr_58270_51899560();
   scope->scopes[3] = makerinc_58273_51898560();
   scope->scopes[4] = makewinc_58277_51897900();
   scope->scopes[5] = makerdec_58281_51896580();
   scope->scopes[6] = makewdec_58285_52067860();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60656300();
   scope->behaviors[1] = make__60656060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58289_52716880;

SignalI lv0_52961440_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makelv0_52961440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52961440_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)mac__n1_58289_52716880;
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

SignalI av0_53112220_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeav0_53112220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_53112220_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)mac__n1_58289_52716880;
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

SignalI rv_53370940_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makerv_53370940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_53370940_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)mac__n1_58289_52716880;
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

SignalI lvok0_53370920_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makelvok0_53370920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53370920_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)mac__n1_58289_52716880;
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

SignalI rvok_53395380_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makervok_53395380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_53395380_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)mac__n1_58289_52716880;
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

SignalI run_53395280_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makerun_53395280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53395280_mac__n1_58289_52716880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)mac__n1_58289_52716880;
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

Behavior __53112860;

Behavior make__53112860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53112860 = behavior;
   behavior->owner = (Object)mac__n1_58289_52716880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos += 1;
   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos = realloc(clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos*sizeof(Object));
clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos[clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos-1] = (Object)behavior;
   behavior->block = make__53394460();

   return behavior;
}

Scope makemac__n1_58289_52716880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58289_52716880 = scope;
   scope->owner = (Object)layer__output_58_84_52968120;
   scope->name = "mac_n1:289";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52961440();
   scope->inners[1] = makeav0_53112220();
   scope->inners[2] = makerv_53370940();
   scope->inners[3] = makelvok0_53370920();
   scope->inners[4] = makervok_53395380();
   scope->inners[5] = makerun_53395280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53112860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58290_53112700;

SignalI reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makereg__0_53998680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__bias_58290_53112700;
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

Scope anum_58291_53111620;

Scope makeanum_58291_53111620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58291_53111620 = scope;
   scope->owner = (Object)channel__bias_58290_53112700;
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

Scope raddr_58293_53110400;

Scope makeraddr_58293_53110400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58293_53110400 = scope;
   scope->owner = (Object)channel__bias_58290_53112700;
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

Scope waddr_58296_53109660;

Scope makewaddr_58296_53109660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58296_53109660 = scope;
   scope->owner = (Object)channel__bias_58290_53112700;
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

Scope rinc_58299_53109100;

SignalI abus__r_53083880_rinc_58299_53109100_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeabus__r_53083880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53083880_rinc_58299_53109100_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)rinc_58299_53109100;
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

Scope makerinc_58299_53109100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58299_53109100 = scope;
   scope->owner = (Object)channel__bias_58290_53112700;
   scope->name = "rinc:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53083880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58302_53083620;

SignalI abus__w_53083160_winc_58302_53083620_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeabus__w_53083160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53083160_winc_58302_53083620_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)winc_58302_53083620;
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

Behavior __60675620;

Behavior make__60675620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60675620 = behavior;
   behavior->owner = (Object)winc_58302_53083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_53083160_winc_58302_53083620_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   abus__w_53083160_winc_58302_53083620_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   abus__w_53083160_winc_58302_53083620_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(abus__w_53083160_winc_58302_53083620_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,abus__w_53083160_winc_58302_53083620_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
abus__w_53083160_winc_58302_53083620_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[abus__w_53083160_winc_58302_53083620_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60675800();

   return behavior;
}

Behavior __60675360;

Behavior make__60675360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60675360 = behavior;
   behavior->owner = (Object)winc_58302_53083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   _58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   _58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(_58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,_58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[_58304_58810760_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60675560();

   return behavior;
}

Scope makewinc_58302_53083620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58302_53083620 = scope;
   scope->owner = (Object)channel__bias_58290_53112700;
   scope->name = "winc:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53083160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60675620();
   scope->behaviors[1] = make__60675360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58305_53082580;

SignalI abus__r_53081120_rdec_58305_53082580_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeabus__r_53081120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53081120_rdec_58305_53082580_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)rdec_58305_53082580;
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

Scope makerdec_58305_53082580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58305_53082580 = scope;
   scope->owner = (Object)channel__bias_58290_53112700;
   scope->name = "rdec:305";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53081120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58309_53080760;

SignalI abus__w_53080320_wdec_58309_53080760_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeabus__w_53080320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53080320_wdec_58309_53080760_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)wdec_58309_53080760;
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

Scope makewdec_58309_53080760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58309_53080760 = scope;
   scope->owner = (Object)channel__bias_58290_53112700;
   scope->name = "wdec:309";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53080320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60654000;

Behavior make__60654000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60654000 = behavior;
   behavior->owner = (Object)channel__bias_58290_53112700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60654180();

   return behavior;
}

Behavior __60653780;

Behavior make__60653780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60653780 = behavior;
   behavior->owner = (Object)channel__bias_58290_53112700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58292_58300620_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   _58292_58300620_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   _58292_58300620_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(_58292_58300620_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,_58292_58300620_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_58292_58300620_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[_58292_58300620_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60653960();

   return behavior;
}

Behavior __60677760;

Behavior make__60677760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60677760 = behavior;
   behavior->owner = (Object)channel__bias_58290_53112700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[reg__0_53998680_channel__bias_58290_53112700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60677960();

   return behavior;
}

Behavior __60677500;

Behavior make__60677500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60677500 = behavior;
   behavior->owner = (Object)channel__bias_58290_53112700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58303_58810840_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   _58303_58810840_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   _58303_58810840_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(_58303_58810840_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,_58303_58810840_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_58303_58810840_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[_58303_58810840_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60677720();

   return behavior;
}

Scope makechannel__bias_58290_53112700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58290_53112700 = scope;
   scope->owner = (Object)layer__output_58_84_52968120;
   scope->name = "channel_bias:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53998680();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58291_53111620();
   scope->scopes[1] = makeraddr_58293_53110400();
   scope->scopes[2] = makewaddr_58296_53109660();
   scope->scopes[3] = makerinc_58299_53109100();
   scope->scopes[4] = makewinc_58302_53083620();
   scope->scopes[5] = makerdec_58305_53082580();
   scope->scopes[6] = makewdec_58309_53080760();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60654000();
   scope->behaviors[1] = make__60653780();
   scope->behaviors[2] = make__60677760();
   scope->behaviors[3] = make__60677500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58313_49222880;

SignalI reg__0_49458260_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makereg__0_49458260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49458260_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__z_58313_49222880;
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

Scope anum_58314_49222240;

Scope makeanum_58314_49222240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58314_49222240 = scope;
   scope->owner = (Object)channel__z_58313_49222880;
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

Scope raddr_58316_49221280;

Scope makeraddr_58316_49221280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58316_49221280 = scope;
   scope->owner = (Object)channel__z_58313_49222880;
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

Scope waddr_58319_49239760;

Scope makewaddr_58319_49239760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58319_49239760 = scope;
   scope->owner = (Object)channel__z_58313_49222880;
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

Scope rinc_58322_49238420;

SignalI abus__r_49237420_rinc_58322_49238420_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeabus__r_49237420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49237420_rinc_58322_49238420_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)rinc_58322_49238420;
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

Scope makerinc_58322_49238420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58322_49238420 = scope;
   scope->owner = (Object)channel__z_58313_49222880;
   scope->name = "rinc:322";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49237420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58325_49236820;

SignalI abus__w_49235720_winc_58325_49236820_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeabus__w_49235720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49235720_winc_58325_49236820_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)winc_58325_49236820;
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

Scope makewinc_58325_49236820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58325_49236820 = scope;
   scope->owner = (Object)channel__z_58313_49222880;
   scope->name = "winc:325";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49235720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58328_49235400;

SignalI abus__r_49234360_rdec_58328_49235400_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeabus__r_49234360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49234360_rdec_58328_49235400_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)rdec_58328_49235400;
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

Scope makerdec_58328_49235400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58328_49235400 = scope;
   scope->owner = (Object)channel__z_58313_49222880;
   scope->name = "rdec:328";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49234360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58332_49234040;

SignalI abus__w_49255840_wdec_58332_49234040_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makeabus__w_49255840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49255840_wdec_58332_49234040_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)wdec_58332_49234040;
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

Scope makewdec_58332_49234040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58332_49234040 = scope;
   scope->owner = (Object)channel__z_58313_49222880;
   scope->name = "wdec:332";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49255840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60674040;

Behavior make__60674040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60674040 = behavior;
   behavior->owner = (Object)channel__z_58313_49222880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49458260_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   reg__0_49458260_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   reg__0_49458260_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(reg__0_49458260_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,reg__0_49458260_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
reg__0_49458260_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[reg__0_49458260_channel__z_58313_49222880_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60674240();

   return behavior;
}

Behavior __60673760;

Behavior make__60673760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60673760 = behavior;
   behavior->owner = (Object)channel__z_58313_49222880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_58371580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   _58315_58371580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   _58315_58371580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(_58315_58371580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,_58315_58371580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_58315_58371580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[_58315_58371580_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60674000();

   return behavior;
}

Scope makechannel__z_58313_49222880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58313_49222880 = scope;
   scope->owner = (Object)layer__output_58_84_52968120;
   scope->name = "channel_z:313";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49458260();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58314_49222240();
   scope->scopes[1] = makeraddr_58316_49221280();
   scope->scopes[2] = makewaddr_58319_49239760();
   scope->scopes[3] = makerinc_58322_49238420();
   scope->scopes[4] = makewinc_58325_49236820();
   scope->scopes[5] = makerdec_58328_49235400();
   scope->scopes[6] = makewdec_58332_49234040();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60674040();
   scope->behaviors[1] = make__60673760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58336_51606700;

SignalI lv0_51849140_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makelv0_51849140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51849140_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)add__n_58336_51606700;
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

SignalI rv0_52313160_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makerv0_52313160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_52313160_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)add__n_58336_51606700;
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

SignalI lvok0_52313140_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makelvok0_52313140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52313140_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)add__n_58336_51606700;
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

SignalI rvok0_52313120_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makervok0_52313120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_52313120_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)add__n_58336_51606700;
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

SignalI run_52313100_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220;

SignalI makerun_52313100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52313100_add__n_58336_51606700_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)add__n_58336_51606700;
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

Behavior __49863320;

Behavior make__49863320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49863320 = behavior;
   behavior->owner = (Object)add__n_58336_51606700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos += 1;
   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos = realloc(clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos*sizeof(Object));
clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos[clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos-1] = (Object)behavior;
   behavior->block = make__52312960();

   return behavior;
}

Scope makeadd__n_58336_51606700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58336_51606700 = scope;
   scope->owner = (Object)layer__output_58_84_52968120;
   scope->name = "add_n:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51849140();
   scope->inners[1] = makerv0_52313160();
   scope->inners[2] = makelvok0_52313140();
   scope->inners[3] = makervok0_52313120();
   scope->inners[4] = makerun_52313100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49863320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58770500;

Behavior make__58770500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58770500 = behavior;
   behavior->owner = (Object)layer__output_58_84_52968120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos += 1;
   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos = realloc(clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos*sizeof(Object));
clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos[clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos-1] = (Object)behavior;
   behavior->block = make__58538260();

   return behavior;
}

Behavior __59039200;

Behavior make__59039200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59039200 = behavior;
   behavior->owner = (Object)layer__output_58_84_52968120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos += 1;
   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos = realloc(clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos*sizeof(Object));
clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos[clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos-1] = (Object)behavior;
   behavior->block = make__58770340();

   return behavior;
}

Behavior __59510560;

Behavior make__59510560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59510560 = behavior;
   behavior->owner = (Object)layer__output_58_84_52968120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos += 1;
   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos = realloc(clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos*sizeof(Object));
clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->pos[clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_pos-1] = (Object)behavior;
   behavior->block = make__59039020();

   return behavior;
}

Behavior __60644500;

Behavior make__60644500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60644500 = behavior;
   behavior->owner = (Object)layer__output_58_84_52968120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_59508140_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   req_59508140_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   req_59508140_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(req_59508140_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,req_59508140_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
req_59508140_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[req_59508140_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_49863140_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   ack__mac_49863140_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   ack__mac_49863140_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(ack__mac_49863140_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,ack__mac_49863140_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
ack__mac_49863140_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[ack__mac_49863140_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60644740();

   return behavior;
}

Behavior __60638800;

Behavior make__60638800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60638800 = behavior;
   behavior->owner = (Object)layer__output_58_84_52968120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_49863160_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   ack_49863160_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   ack_49863160_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(ack_49863160_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,ack_49863160_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
ack_49863160_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[ack_49863160_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_58434320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   value__z0_58434320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   value__z0_58434320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(value__z0_58434320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,value__z0_58434320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
value__z0_58434320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[value__z0_58434320_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a10_58611680_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   ack__a10_58611680_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   ack__a10_58611680_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(ack__a10_58611680_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,ack__a10_58611680_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
ack__a10_58611680_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[ack__a10_58611680_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60645020();

   return behavior;
}

Behavior __60638640;

Behavior make__60638640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60638640 = behavior;
   behavior->owner = (Object)layer__output_58_84_52968120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_58828180_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   ack__mac_58828180_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   ack__mac_58828180_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(ack__mac_58828180_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,ack__mac_58828180_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
ack__mac_58828180_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[ack__mac_58828180_counter1_58_840_58830100_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_58074380_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   a_58074380_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   a_58074380_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(a_58074380_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,a_58074380_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
a_58074380_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[a_58074380_func10_58_840_52739400_layer__output_58_84_52968120_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__60644960();

   return behavior;
}

Scope makelayer__output_58_84_52968120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer__output_58_84_52968120 = scope;
   scope->owner = (Object)layer__output_58_840_59510240;
   scope->name = "layer_output:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter1_58828040();
   scope->systemIs[1] = makefunc10_58074240();
   scope->num_inners = 19;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_49863180();
   scope->inners[1] = makeack_49863160();
   scope->inners[2] = makeack__mac_49863140();
   scope->inners[3] = makeack__add_49863120();
   scope->inners[4] = make_58249_58093320();
   scope->inners[5] = make_58247_58093300();
   scope->inners[6] = make_58248_58093220();
   scope->inners[7] = make_58266_58196960();
   scope->inners[8] = make_58292_58300620();
   scope->inners[9] = make_58315_58371580();
   scope->inners[10] = makevalue__z0_58434320();
   scope->inners[11] = makevalue__a10_58611720();
   scope->inners[12] = makeflag__z0_58611700();
   scope->inners[13] = makeack__a10_58611680();
   scope->inners[14] = make_58251_58611660();
   scope->inners[15] = make_58252_58611580();
   scope->inners[16] = make_58253_58707100();
   scope->inners[17] = make_58303_58810840();
   scope->inners[18] = make_58304_58810760();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58235_52967540();
   scope->scopes[1] = makechannel__accum_58264_51901420();
   scope->scopes[2] = makemac__n1_58289_52716880();
   scope->scopes[3] = makechannel__bias_58290_53112700();
   scope->scopes[4] = makechannel__z_58313_49222880();
   scope->scopes[5] = makeadd__n_58336_51606700();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58770500();
   scope->behaviors[1] = make__59039200();
   scope->behaviors[2] = make__59510560();
   scope->behaviors[3] = make__60644500();
   scope->behaviors[4] = make__60638800();
   scope->behaviors[5] = make__60638640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer__output_58_840_59510240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer__output_58_840_59510240 = systemT;
systemT->owner = NULL;
   systemT->name = "layer_output:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59508200();
   systemT->inputs[1] = makerst_59508180();
   systemT->inputs[2] = makefill_59508160();
   systemT->inputs[3] = makereq_59508140();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__1_59508100();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer__output_58_84_52968120();

   return systemT;
}