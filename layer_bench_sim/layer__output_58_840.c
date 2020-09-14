#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer__output_58_840_59579120;

SignalI clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeclk_59577080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_840_59579120;
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

SignalI rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makerst_59577060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_840_59579120;
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

SignalI fill_59577040_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makefill_59577040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_59577040_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_840_59579120;
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

SignalI req_59577020_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makereq_59577020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_59577020_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_840_59579120;
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

SignalI ack__1_59576980_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeack__1_59576980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_59576980_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_840_59579120;
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

Block __58746600;

Block __58745940;

Block __58745760;

void code__58745760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_58669340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,value__z0_58732080_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61174260(),flag__z0_58778440_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__58745760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58745760 = block;
   block->owner = (Object)__58745940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58745760;

   return block;
};

void code__58745940() {
 code__58745760();
}

Block make__58745940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58745940 = block;
   block->owner = (Object)__58746600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58745940;

   return block;
};

Block __58746440;

void code__58746440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61174200(),flag__z0_58778440_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__58746440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58746440 = block;
   block->owner = (Object)__58746600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58746440;

   return block;
};

void code__58746600() {
   {
      Value cond = ack__add_49915180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58745940();
   }
   else {
  code__58746440();
   }
      }
   }
}

Block make__58746600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58746600 = block;
   block->owner = (Object)__58921380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58746600;

   return block;
};

Block __58921260;

Block __58921000;

Block __58920780;

void code__58920780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a10_58778460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,_5862_49756620______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61174000(),ack__a10_58778420_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__58920780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58920780 = block;
   block->owner = (Object)__58921000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58920780;

   return block;
};

void code__58921000() {
 code__58920780();
}

Block make__58921000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58921000 = block;
   block->owner = (Object)__58921260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58921000;

   return block;
};

void code__58921260() {
   {
      Value cond = flag__z0_58778440_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58921000();
   }
      }
   }
}

Block make__58921260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58921260 = block;
   block->owner = (Object)__59198300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58921260;

   return block;
};

Block __59198180;

Block __59198020;

Block __59197540;

void code__59197540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61173820(),_58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__59197540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59197540 = block;
   block->owner = (Object)__59198020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59197540;

   return block;
};

void code__59198020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61173900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59197540();
   }
      }
   }
}

Block make__59198020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59198020 = block;
   block->owner = (Object)__59198180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59198020;

   return block;
};

Block __59197040;

Block __59196720;

void code__59196720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61173600(),_58252_58778320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__59196720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59196720 = block;
   block->owner = (Object)__59197040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59196720;

   return block;
};

void code__59197040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61173680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59196720();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61173540(),_58251_58778400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__59197040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59197040 = block;
   block->owner = (Object)__59198180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59197040;

   return block;
};

Block __59196040;

Block __59195880;

Block __59195440;

void code__59195440() {
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
                  src0 = _58252_58778320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61173260();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58252_58778320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61173140(),_58251_58778400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61173060(),_58253_58890180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__59195440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59195440 = block;
   block->owner = (Object)__59195880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59195440;

   return block;
};

void code__59195880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61173420();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59195440();
   }
      }
   }
}

Block make__59195880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59195880 = block;
   block->owner = (Object)__59196040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59195880;

   return block;
};

Block __59425540;

Block __59425160;

Block __59457380;

void code__59457380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61172760(),_58303_58969300_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__59457380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59457380 = block;
   block->owner = (Object)__59425160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59457380;

   return block;
};

void code__59425160() {
{
      Value value = _58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__61172820())) {
    code__59457380();
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
                  src0 = _58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61172640();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__59425160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59425160 = block;
   block->owner = (Object)__59425540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59425160;

   return block;
};

void code__59425540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61172940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59425160();
   }
      }
   }
}

Block make__59425540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59425540 = block;
   block->owner = (Object)__59196040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59425540;

   return block;
};

void code__59196040() {
 code__59195880();
 code__59425540();
}

Block make__59196040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59196040 = block;
   block->owner = (Object)__59198180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59196040;

   return block;
};

void code__59198180() {
 code__59198020();
 code__59197040();
   {
      Value cond = fill_59577040_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59196040();
   }
      }
   }
}

Block make__59198180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59198180 = block;
   block->owner = (Object)__59579440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59198180;

   return block;
};

Block __60746600;

void code__60746600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_59577020_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_49915200_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_49915240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60746600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60746600 = block;
   block->owner = (Object)__60746260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60746600;

   return block;
};

Block __60746880;

void code__60746880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,clk_58986720_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_49915220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,ack_58986700_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,rst_58986680_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_58732080_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,z__value_52317040_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a10_58778420_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,ack__1_59576980_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60746880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60746880 = block;
   block->owner = (Object)__60765280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60746880;

   return block;
};

Block __60746800;

void code__60746800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_58986640_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,ack__mac_49915200_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_58380900_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,value__a10_58778460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60746800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60746800 = block;
   block->owner = (Object)__60765100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60746800;

   return block;
};

Block __49032060;

Block __49704660;

void code__49704660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_53397980_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,make_ref_rangeS(mem_53790840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700,value2integer(abus__w_53397680_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value),value2integer(abus__w_53397680_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49704660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49704660 = block;
   block->owner = (Object)__49032060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49704660;

   return block;
};

void code__49032060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_53790840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
            idx = value2integer(abus__r_53397840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_53260260_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_53074280_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49704660();
   }
      }
   }
}

Block make__49032060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49032060 = block;
   block->owner = (Object)__52169040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49032060;

   return block;
};

Block __60764100;

void code__60764100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_53260260_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,_58249_58399280_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60764100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60764100 = block;
   block->owner = (Object)__60763900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60764100;

   return block;
};

Block __60763860;

void code__60763860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_58399280_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,dbus__r_53260260_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60763860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60763860 = block;
   block->owner = (Object)__60763700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60763860;

   return block;
};

Block __60763400;

void code__60763400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53074300_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,_58247_58399260_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60763400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60763400 = block;
   block->owner = (Object)__60763240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60763400;

   return block;
};

Block __60763200;

void code__60763200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58247_58399260_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,trig__r_53074300_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60763200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60763200 = block;
   block->owner = (Object)__60763040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60763200;

   return block;
};

Block __60762700;

void code__60762700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53397840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,_58248_58399180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60762700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60762700 = block;
   block->owner = (Object)__60762480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60762700;

   return block;
};

Block __60762440;

void code__60762440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58248_58399180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,abus__r_53397840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60762440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60762440 = block;
   block->owner = (Object)__60762280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60762440;

   return block;
};

Block __60761920;

void code__60761920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_53074280_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,_58251_58778400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60761920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60761920 = block;
   block->owner = (Object)__60761500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60761920;

   return block;
};

Block __60761460;

void code__60761460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58251_58778400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,trig__w_53074280_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60761460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60761460 = block;
   block->owner = (Object)__60761300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60761460;

   return block;
};

Block __60761000;

void code__60761000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_53397680_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,_58252_58778320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60761000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60761000 = block;
   block->owner = (Object)__60760840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60761000;

   return block;
};

Block __60760800;

void code__60760800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58252_58778320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,abus__w_53397680_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60760800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60760800 = block;
   block->owner = (Object)__60760600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60760800;

   return block;
};

Block __60760240;

void code__60760240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_53397980_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,_58253_58890180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60760240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60760240 = block;
   block->owner = (Object)__60760080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60760240;

   return block;
};

Block __60776380;

void code__60776380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58253_58890180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,dbus__w_53397980_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60776380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60776380 = block;
   block->owner = (Object)__60776220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60776380;

   return block;
};

Block __60774500;

void code__60774500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52447600_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,_58266_58478340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60774500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60774500 = block;
   block->owner = (Object)__60774340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60774500;

   return block;
};

Block __60774300;

void code__60774300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_58478340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,reg__0_52447600_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60774300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60774300 = block;
   block->owner = (Object)__60774140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60774300;

   return block;
};

Block __53590860;

Block __53589940;

Block __53588800;

void code__53588800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61024800(),_58248_58399180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__53588800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53588800 = block;
   block->owner = (Object)__53589940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53588800;

   return block;
};

void code__53589940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61024900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53588800();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61024740(),_58247_58399260_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__53589940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53589940 = block;
   block->owner = (Object)__53590860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53589940;

   return block;
};

Block __53585720;

Block __53585340;

void code__53585340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61024520(),_5845_49675680______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__53585340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53585340 = block;
   block->owner = (Object)__53585720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53585340;

   return block;
};

void code__53585720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61024600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53585340();
   }
      }
   }
}

Block make__53585720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53585720 = block;
   block->owner = (Object)__53590860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53585720;

   return block;
};

Block __53841340;

Block __53840200;

Block __53839720;

Block __53839180;

void code__53839180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_49564460______58_84_49385560______58_840_59875700->c_value,rv_53591520_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__53839180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53839180 = block;
   block->owner = (Object)__53839720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53839180;

   return block;
};

Block __47782640;

void code__47782640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_49675760______58_84_49385560______58_840_59875700->c_value,rv_53591520_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__47782640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47782640 = block;
   block->owner = (Object)__53839720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47782640;

   return block;
};

void code__53839720() {
{
      Value value = _5845_49675680______58_84_49385560______58_840_59875700->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__61024040())) {
    code__53839180();
         }
         else if (value2integer(value) == value2integer(make__61023920())) {
    code__47782640();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61023760(),rvok_53591260_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
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
                  src0 = _5845_49675680______58_84_49385560______58_840_59875700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61023580();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_49675680______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__53839720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53839720 = block;
   block->owner = (Object)__53840200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53839720;

   return block;
};

void code__53840200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61024160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53839720();
   }
      }
   }
}

Block make__53840200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53840200 = block;
   block->owner = (Object)__53841340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53840200;

   return block;
};

Block __49807260;

Block __49804200;

Block __49803480;

void code__49803480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_58399280_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,lv0_53073400_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61023200(),lvok0_53591340_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__49803480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49803480 = block;
   block->owner = (Object)__49804200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49803480;

   return block;
};

void code__49804200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58247_58399260_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61023360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49803480();
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
                  src0 = _58248_58399180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61023080();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58248_58399180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61022980(),_58247_58399260_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__49804200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49804200 = block;
   block->owner = (Object)__49807260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49804200;

   return block;
};

void code__49807260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61023460();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49804200();
   }
      }
   }
}

Block make__49807260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49807260 = block;
   block->owner = (Object)__53841340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49807260;

   return block;
};

Block __52596320;

Block __52595580;

Block __52595380;

void code__52595380() {
}

Block make__52595380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52595380 = block;
   block->owner = (Object)__52595580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52595380;

   return block;
};

Block __52286360;

void code__52286360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_53256640_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,_58266_58478340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__52286360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52286360 = block;
   block->owner = (Object)__52595580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52286360;

   return block;
};

void code__52595580() {
 code__52595380();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_53256640_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
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
                              src0 = lv0_53073400_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_53591520_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61022320();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_53256640_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
 code__52286360();
}

Block make__52595580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52595580 = block;
   block->owner = (Object)__52596320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52595580;

   return block;
};

void code__52596320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61022820(),ack_49915220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61022740(),run_53591200_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
 code__52595580();
}

Block make__52596320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52596320 = block;
   block->owner = (Object)__53841340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52596320;

   return block;
};

void code__53841340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61024240(),run_53591200_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
 code__53840200();
 code__49807260();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53591340_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
         src1 = rvok_53591260_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52596320();
   }
      }
   }
}

Block make__53841340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53841340 = block;
   block->owner = (Object)__53590860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53841340;

   return block;
};

Block __53584100;

void code__53584100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61177740(),rvok_53591260_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61177680(),lvok0_53591340_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61177620(),av0_53256640_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__53584100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53584100 = block;
   block->owner = (Object)__53590860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53584100;

   return block;
};

void code__53590860() {
 code__53589940();
 code__53585720();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61024460(),ack_49915220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61024400(),run_53591200_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_49915240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
         src1 = run_53591200_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53841340();
   }
   else {
  code__53584100();
   }
      }
   }
}

Block make__53590860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53590860 = block;
   block->owner = (Object)__53023760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53590860;

   return block;
};

Block __60772220;

void code__60772220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,_58292_58590240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60772220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60772220 = block;
   block->owner = (Object)__60772060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60772220;

   return block;
};

Block __60772020;

void code__60772020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_58590240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60772020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60772020 = block;
   block->owner = (Object)__60771860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60772020;

   return block;
};

Block __60771520;

void code__60771520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,_58303_58969300_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60771520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60771520 = block;
   block->owner = (Object)__60771300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60771520;

   return block;
};

Block __60771260;

void code__60771260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58303_58969300_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60771260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60771260 = block;
   block->owner = (Object)__60771100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60771260;

   return block;
};

Block __60769380;

void code__60769380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_53326160_winc_58302_53326560_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,_58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60769380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60769380 = block;
   block->owner = (Object)__60769160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60769380;

   return block;
};

Block __60769120;

void code__60769120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,abus__w_53326160_winc_58302_53326560_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60769120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60769120 = block;
   block->owner = (Object)__60768960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60769120;

   return block;
};

Block __60833240;

void code__60833240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49562760_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,_58315_58669340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60833240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60833240 = block;
   block->owner = (Object)__60833080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60833240;

   return block;
};

Block __60833040;

void code__60833040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_58669340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,reg__0_49562760_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60833040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60833040 = block;
   block->owner = (Object)__60832860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60833040;

   return block;
};

Block __52416500;

Block __52414740;

Block __52414040;

void code__52414040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_58478340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,lv0_52068940_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61176100(),lvok0_52417040_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__52414040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52414040 = block;
   block->owner = (Object)__52414740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52414040;

   return block;
};

Block __52877820;

void code__52877820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_58590240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,rv0_52417080_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61175940(),rvok0_52417020_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__52877820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52877820 = block;
   block->owner = (Object)__52414740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52877820;

   return block;
};

Block __53361540;

Block __53360360;

void code__53360360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_52068940_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
      src1 = rv0_52417080_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58315_58669340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__53360360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53360360 = block;
   block->owner = (Object)__53361540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53360360;

   return block;
};

void code__53361540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61175740(),run_52416940_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61175680(),ack__add_49915180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
 code__53360360();
}

Block make__53361540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53361540 = block;
   block->owner = (Object)__52414740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53361540;

   return block;
};

void code__52414740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61176280(),run_52416940_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
 code__52414040();
 code__52877820();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52417040_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
         src1 = rvok0_52417020_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53361540();
   }
      }
   }
}

Block make__52414740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52414740 = block;
   block->owner = (Object)__52416500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52414740;

   return block;
};

Block __52415700;

void code__52415700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61175440(),lvok0_52417040_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61175360(),rvok0_52417020_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__52415700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52415700 = block;
   block->owner = (Object)__52416500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52415700;

   return block;
};

void code__52416500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61176500(),ack__add_49915180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61176440(),run_52416940_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_49915200_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
         src1 = run_52416940_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52414740();
   }
   else {
  code__52415700();
   }
      }
   }
}

Block make__52416500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52416500 = block;
   block->owner = (Object)__49915380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52416500;

   return block;
};

Value make__61024900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61024800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61024740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61024600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61024520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61024460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61024400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61024240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61024160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61024040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61023920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61023760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61023580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61023460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61023360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61023200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61023080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61022980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61022820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61022740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61022320() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61177740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61177680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61177620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61176500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61176440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61176280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61176100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61175940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61175740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61175680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61175440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61175360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61174260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61174200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61174000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61173900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61173820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__61173680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61173600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61173540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61173420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61173260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61173140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61173060() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61172940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61172820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__61172760() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61172640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer__output_58_84_53022740;

SignalI req__mac_49915240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makereq__mac_49915240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_49915240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI ack_49915220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeack_49915220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_49915220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI ack__mac_49915200_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeack__mac_49915200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_49915200_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI ack__add_49915180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeack__add_49915180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_49915180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI _58249_58399280_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI make_58249_58399280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58249_58399280_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI _58247_58399260_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI make_58247_58399260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58247_58399260_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI _58248_58399180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI make_58248_58399180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58248_58399180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI _58266_58478340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI make_58266_58478340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_58478340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI _58292_58590240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI make_58292_58590240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58292_58590240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI _58315_58669340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI make_58315_58669340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_58669340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI value__z0_58732080_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makevalue__z0_58732080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_58732080_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI value__a10_58778460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makevalue__a10_58778460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a10_58778460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI flag__z0_58778440_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeflag__z0_58778440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_58778440_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI ack__a10_58778420_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeack__a10_58778420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a10_58778420_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI _58251_58778400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI make_58251_58778400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58251_58778400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI _58252_58778320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI make_58252_58778320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58252_58778320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI _58253_58890180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI make_58253_58890180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58253_58890180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI _58303_58969300_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI make_58303_58969300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58303_58969300_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SignalI _58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI make_58304_58969220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)layer__output_58_84_53022740;
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

SystemI counter1_58986500;

SystemI makecounter1_58986500() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter1_58986500 = systemI;
   systemI->owner = (Object)layer__output_58_84_53022740;
   systemI->name = "counter1";
   systemI->system = counter1_58_840_58988560;

   return systemI;
};

SystemI func10_58380760;

SystemI makefunc10_58380760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func10_58380760 = systemI;
   systemI->owner = (Object)layer__output_58_84_53022740;
   systemI->name = "func10";
   systemI->system = func10_58_840_51767980;

   return systemI;
};

Scope channel__w0_58235_53022320;

SignalI trig__r_53074300_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI maketrig__r_53074300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53074300_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__w0_58235_53022320;
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

SignalI trig__w_53074280_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI maketrig__w_53074280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_53074280_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__w0_58235_53022320;
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

SignalI dbus__r_53260260_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makedbus__r_53260260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_53260260_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__w0_58235_53022320;
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

SignalI dbus__w_53397980_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makedbus__w_53397980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_53397980_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__w0_58235_53022320;
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

SignalI abus__r_53397840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeabus__r_53397840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53397840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__w0_58235_53022320;
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

SignalI abus__w_53397680_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeabus__w_53397680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53397680_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__w0_58235_53022320;
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

SignalI mem_53790840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makemem_53790840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_53790840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__w0_58235_53022320;
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

Scope raddr_58236_53021400;

Scope makeraddr_58236_53021400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58236_53021400 = scope;
   scope->owner = (Object)channel__w0_58235_53022320;
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

Scope waddr_58241_53020320;

Scope makewaddr_58241_53020320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58241_53020320 = scope;
   scope->owner = (Object)channel__w0_58235_53022320;
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

Scope rinc_58246_53019800;

Scope makerinc_58246_53019800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58246_53019800 = scope;
   scope->owner = (Object)channel__w0_58235_53022320;
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

Scope winc_58250_53019240;

Scope makewinc_58250_53019240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58250_53019240 = scope;
   scope->owner = (Object)channel__w0_58235_53022320;
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

Scope rdec_58254_53075700;

Scope makerdec_58254_53075700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58254_53075700 = scope;
   scope->owner = (Object)channel__w0_58235_53022320;
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

Scope wdec_58259_53074940;

Scope makewdec_58259_53074940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58259_53074940 = scope;
   scope->owner = (Object)channel__w0_58235_53022320;
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

Behavior __52169040;

Behavior make__52169040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52169040 = behavior;
   behavior->owner = (Object)channel__w0_58235_53022320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_neg += 1;
   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->neg = realloc(clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->neg,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_neg*sizeof(Object));
clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->neg[clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_neg-1] = (Object)behavior;
   behavior->block = make__49032060();

   return behavior;
}

Behavior __60763900;

Behavior make__60763900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60763900 = behavior;
   behavior->owner = (Object)channel__w0_58235_53022320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_53260260_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   dbus__r_53260260_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   dbus__r_53260260_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(dbus__r_53260260_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,dbus__r_53260260_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
dbus__r_53260260_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[dbus__r_53260260_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60764100();

   return behavior;
}

Behavior __60763700;

Behavior make__60763700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60763700 = behavior;
   behavior->owner = (Object)channel__w0_58235_53022320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58249_58399280_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   _58249_58399280_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   _58249_58399280_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(_58249_58399280_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,_58249_58399280_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_58249_58399280_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[_58249_58399280_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60763860();

   return behavior;
}

Behavior __60763240;

Behavior make__60763240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60763240 = behavior;
   behavior->owner = (Object)channel__w0_58235_53022320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53074300_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   trig__r_53074300_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   trig__r_53074300_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(trig__r_53074300_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,trig__r_53074300_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
trig__r_53074300_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[trig__r_53074300_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60763400();

   return behavior;
}

Behavior __60763040;

Behavior make__60763040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60763040 = behavior;
   behavior->owner = (Object)channel__w0_58235_53022320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58247_58399260_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   _58247_58399260_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   _58247_58399260_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(_58247_58399260_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,_58247_58399260_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_58247_58399260_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[_58247_58399260_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60763200();

   return behavior;
}

Behavior __60762480;

Behavior make__60762480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60762480 = behavior;
   behavior->owner = (Object)channel__w0_58235_53022320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53397840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   abus__r_53397840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   abus__r_53397840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(abus__r_53397840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,abus__r_53397840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
abus__r_53397840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[abus__r_53397840_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60762700();

   return behavior;
}

Behavior __60762280;

Behavior make__60762280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60762280 = behavior;
   behavior->owner = (Object)channel__w0_58235_53022320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58248_58399180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   _58248_58399180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   _58248_58399180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(_58248_58399180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,_58248_58399180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_58248_58399180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[_58248_58399180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60762440();

   return behavior;
}

Behavior __60761500;

Behavior make__60761500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60761500 = behavior;
   behavior->owner = (Object)channel__w0_58235_53022320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_53074280_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   trig__w_53074280_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   trig__w_53074280_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(trig__w_53074280_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,trig__w_53074280_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
trig__w_53074280_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[trig__w_53074280_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60761920();

   return behavior;
}

Behavior __60761300;

Behavior make__60761300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60761300 = behavior;
   behavior->owner = (Object)channel__w0_58235_53022320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58251_58778400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   _58251_58778400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   _58251_58778400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(_58251_58778400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,_58251_58778400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_58251_58778400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[_58251_58778400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60761460();

   return behavior;
}

Behavior __60760840;

Behavior make__60760840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60760840 = behavior;
   behavior->owner = (Object)channel__w0_58235_53022320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_53397680_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   abus__w_53397680_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   abus__w_53397680_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(abus__w_53397680_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,abus__w_53397680_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
abus__w_53397680_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[abus__w_53397680_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60761000();

   return behavior;
}

Behavior __60760600;

Behavior make__60760600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60760600 = behavior;
   behavior->owner = (Object)channel__w0_58235_53022320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58252_58778320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   _58252_58778320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   _58252_58778320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(_58252_58778320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,_58252_58778320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_58252_58778320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[_58252_58778320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60760800();

   return behavior;
}

Behavior __60760080;

Behavior make__60760080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60760080 = behavior;
   behavior->owner = (Object)channel__w0_58235_53022320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_53397980_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   dbus__w_53397980_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   dbus__w_53397980_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(dbus__w_53397980_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,dbus__w_53397980_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
dbus__w_53397980_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[dbus__w_53397980_channel__w0_58235_53022320_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60760240();

   return behavior;
}

Behavior __60776220;

Behavior make__60776220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60776220 = behavior;
   behavior->owner = (Object)channel__w0_58235_53022320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58253_58890180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   _58253_58890180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   _58253_58890180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(_58253_58890180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,_58253_58890180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_58253_58890180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[_58253_58890180_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60776380();

   return behavior;
}

Scope makechannel__w0_58235_53022320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58235_53022320 = scope;
   scope->owner = (Object)layer__output_58_84_53022740;
   scope->name = "channel_w0:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53074300();
   scope->inners[1] = maketrig__w_53074280();
   scope->inners[2] = makedbus__r_53260260();
   scope->inners[3] = makedbus__w_53397980();
   scope->inners[4] = makeabus__r_53397840();
   scope->inners[5] = makeabus__w_53397680();
   scope->inners[6] = makemem_53790840();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58236_53021400();
   scope->scopes[1] = makewaddr_58241_53020320();
   scope->scopes[2] = makerinc_58246_53019800();
   scope->scopes[3] = makewinc_58250_53019240();
   scope->scopes[4] = makerdec_58254_53075700();
   scope->scopes[5] = makewdec_58259_53074940();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52169040();
   scope->behaviors[1] = make__60763900();
   scope->behaviors[2] = make__60763700();
   scope->behaviors[3] = make__60763240();
   scope->behaviors[4] = make__60763040();
   scope->behaviors[5] = make__60762480();
   scope->behaviors[6] = make__60762280();
   scope->behaviors[7] = make__60761500();
   scope->behaviors[8] = make__60761300();
   scope->behaviors[9] = make__60760840();
   scope->behaviors[10] = make__60760600();
   scope->behaviors[11] = make__60760080();
   scope->behaviors[12] = make__60776220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58264_52168800;

SignalI reg__0_52447600_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makereg__0_52447600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52447600_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__accum_58264_52168800;
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

Scope anum_58265_52168260;

Scope makeanum_58265_52168260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58265_52168260 = scope;
   scope->owner = (Object)channel__accum_58264_52168800;
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

Scope raddr_58267_52167480;

Scope makeraddr_58267_52167480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58267_52167480 = scope;
   scope->owner = (Object)channel__accum_58264_52168800;
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

Scope waddr_58270_52166820;

Scope makewaddr_58270_52166820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58270_52166820 = scope;
   scope->owner = (Object)channel__accum_58264_52168800;
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

Scope rinc_58273_52207140;

SignalI abus__r_52206260_rinc_58273_52207140_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeabus__r_52206260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52206260_rinc_58273_52207140_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)rinc_58273_52207140;
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

Scope makerinc_58273_52207140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_52207140 = scope;
   scope->owner = (Object)channel__accum_58264_52168800;
   scope->name = "rinc:273";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52206260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58277_52206080;

SignalI abus__w_52205480_winc_58277_52206080_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeabus__w_52205480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52205480_winc_58277_52206080_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)winc_58277_52206080;
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

Scope makewinc_58277_52206080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58277_52206080 = scope;
   scope->owner = (Object)channel__accum_58264_52168800;
   scope->name = "winc:277";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52205480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58281_52205340;

SignalI abus__r_52204640_rdec_58281_52205340_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeabus__r_52204640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52204640_rdec_58281_52205340_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)rdec_58281_52205340;
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

Scope makerdec_58281_52205340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58281_52205340 = scope;
   scope->owner = (Object)channel__accum_58264_52168800;
   scope->name = "rdec:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52204640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58285_52204400;

SignalI abus__w_52203420_wdec_58285_52204400_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeabus__w_52203420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52203420_wdec_58285_52204400_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)wdec_58285_52204400;
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

Scope makewdec_58285_52204400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58285_52204400 = scope;
   scope->owner = (Object)channel__accum_58264_52168800;
   scope->name = "wdec:285";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52203420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60774340;

Behavior make__60774340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60774340 = behavior;
   behavior->owner = (Object)channel__accum_58264_52168800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52447600_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   reg__0_52447600_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   reg__0_52447600_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(reg__0_52447600_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,reg__0_52447600_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
reg__0_52447600_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[reg__0_52447600_channel__accum_58264_52168800_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60774500();

   return behavior;
}

Behavior __60774140;

Behavior make__60774140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60774140 = behavior;
   behavior->owner = (Object)channel__accum_58264_52168800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_58478340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   _58266_58478340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   _58266_58478340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(_58266_58478340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,_58266_58478340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_58266_58478340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[_58266_58478340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60774300();

   return behavior;
}

Scope makechannel__accum_58264_52168800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58264_52168800 = scope;
   scope->owner = (Object)layer__output_58_84_53022740;
   scope->name = "channel_accum:264";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52447600();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58265_52168260();
   scope->scopes[1] = makeraddr_58267_52167480();
   scope->scopes[2] = makewaddr_58270_52166820();
   scope->scopes[3] = makerinc_58273_52207140();
   scope->scopes[4] = makewinc_58277_52206080();
   scope->scopes[5] = makerdec_58281_52205340();
   scope->scopes[6] = makewdec_58285_52204400();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60774340();
   scope->behaviors[1] = make__60774140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58289_52844900;

SignalI lv0_53073400_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makelv0_53073400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_53073400_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)mac__n1_58289_52844900;
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

SignalI av0_53256640_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeav0_53256640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_53256640_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)mac__n1_58289_52844900;
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

SignalI rv_53591520_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makerv_53591520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_53591520_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)mac__n1_58289_52844900;
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

SignalI lvok0_53591340_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makelvok0_53591340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53591340_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)mac__n1_58289_52844900;
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

SignalI rvok_53591260_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makervok_53591260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_53591260_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)mac__n1_58289_52844900;
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

SignalI run_53591200_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makerun_53591200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53591200_mac__n1_58289_52844900_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)mac__n1_58289_52844900;
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

Behavior __53023760;

Behavior make__53023760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53023760 = behavior;
   behavior->owner = (Object)mac__n1_58289_52844900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos += 1;
   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos = realloc(clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos*sizeof(Object));
clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos[clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos-1] = (Object)behavior;
   behavior->block = make__53590860();

   return behavior;
}

Scope makemac__n1_58289_52844900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58289_52844900 = scope;
   scope->owner = (Object)layer__output_58_84_53022740;
   scope->name = "mac_n1:289";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_53073400();
   scope->inners[1] = makeav0_53256640();
   scope->inners[2] = makerv_53591520();
   scope->inners[3] = makelvok0_53591340();
   scope->inners[4] = makervok_53591260();
   scope->inners[5] = makerun_53591200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53023760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58290_53023400;

SignalI reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makereg__0_53760080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__bias_58290_53023400;
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

Scope anum_58291_53021440;

Scope makeanum_58291_53021440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58291_53021440 = scope;
   scope->owner = (Object)channel__bias_58290_53023400;
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

Scope raddr_58293_53019960;

Scope makeraddr_58293_53019960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58293_53019960 = scope;
   scope->owner = (Object)channel__bias_58290_53023400;
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

Scope waddr_58296_53018820;

Scope makewaddr_58296_53018820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58296_53018820 = scope;
   scope->owner = (Object)channel__bias_58290_53023400;
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

Scope rinc_58299_53327580;

SignalI abus__r_53326780_rinc_58299_53327580_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeabus__r_53326780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53326780_rinc_58299_53327580_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)rinc_58299_53327580;
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

Scope makerinc_58299_53327580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58299_53327580 = scope;
   scope->owner = (Object)channel__bias_58290_53023400;
   scope->name = "rinc:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53326780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58302_53326560;

SignalI abus__w_53326160_winc_58302_53326560_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeabus__w_53326160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53326160_winc_58302_53326560_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)winc_58302_53326560;
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

Behavior __60769160;

Behavior make__60769160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60769160 = behavior;
   behavior->owner = (Object)winc_58302_53326560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_53326160_winc_58302_53326560_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   abus__w_53326160_winc_58302_53326560_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   abus__w_53326160_winc_58302_53326560_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(abus__w_53326160_winc_58302_53326560_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,abus__w_53326160_winc_58302_53326560_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
abus__w_53326160_winc_58302_53326560_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[abus__w_53326160_winc_58302_53326560_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60769380();

   return behavior;
}

Behavior __60768960;

Behavior make__60768960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60768960 = behavior;
   behavior->owner = (Object)winc_58302_53326560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   _58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   _58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(_58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,_58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[_58304_58969220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60769120();

   return behavior;
}

Scope makewinc_58302_53326560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58302_53326560 = scope;
   scope->owner = (Object)channel__bias_58290_53023400;
   scope->name = "winc:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53326160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60769160();
   scope->behaviors[1] = make__60768960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58305_53325460;

SignalI abus__r_53324500_rdec_58305_53325460_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeabus__r_53324500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53324500_rdec_58305_53325460_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)rdec_58305_53325460;
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

Scope makerdec_58305_53325460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58305_53325460 = scope;
   scope->owner = (Object)channel__bias_58290_53023400;
   scope->name = "rdec:305";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53324500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58309_53324320;

SignalI abus__w_53323780_wdec_58309_53324320_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeabus__w_53323780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53323780_wdec_58309_53324320_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)wdec_58309_53324320;
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

Scope makewdec_58309_53324320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58309_53324320 = scope;
   scope->owner = (Object)channel__bias_58290_53023400;
   scope->name = "wdec:309";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53323780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60772060;

Behavior make__60772060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60772060 = behavior;
   behavior->owner = (Object)channel__bias_58290_53023400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60772220();

   return behavior;
}

Behavior __60771860;

Behavior make__60771860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60771860 = behavior;
   behavior->owner = (Object)channel__bias_58290_53023400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58292_58590240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   _58292_58590240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   _58292_58590240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(_58292_58590240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,_58292_58590240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_58292_58590240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[_58292_58590240_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60772020();

   return behavior;
}

Behavior __60771300;

Behavior make__60771300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60771300 = behavior;
   behavior->owner = (Object)channel__bias_58290_53023400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[reg__0_53760080_channel__bias_58290_53023400_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60771520();

   return behavior;
}

Behavior __60771100;

Behavior make__60771100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60771100 = behavior;
   behavior->owner = (Object)channel__bias_58290_53023400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58303_58969300_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   _58303_58969300_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   _58303_58969300_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(_58303_58969300_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,_58303_58969300_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_58303_58969300_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[_58303_58969300_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60771260();

   return behavior;
}

Scope makechannel__bias_58290_53023400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58290_53023400 = scope;
   scope->owner = (Object)layer__output_58_84_53022740;
   scope->name = "channel_bias:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53760080();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58291_53021440();
   scope->scopes[1] = makeraddr_58293_53019960();
   scope->scopes[2] = makewaddr_58296_53018820();
   scope->scopes[3] = makerinc_58299_53327580();
   scope->scopes[4] = makewinc_58302_53326560();
   scope->scopes[5] = makerdec_58305_53325460();
   scope->scopes[6] = makewdec_58309_53324320();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60772060();
   scope->behaviors[1] = make__60771860();
   scope->behaviors[2] = make__60771300();
   scope->behaviors[3] = make__60771100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58313_48882360;

SignalI reg__0_49562760_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makereg__0_49562760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49562760_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__z_58313_48882360;
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

Scope anum_58314_48905660;

Scope makeanum_58314_48905660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58314_48905660 = scope;
   scope->owner = (Object)channel__z_58313_48882360;
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

Scope raddr_58316_48904760;

Scope makeraddr_58316_48904760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58316_48904760 = scope;
   scope->owner = (Object)channel__z_58313_48882360;
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

Scope waddr_58319_48903260;

Scope makewaddr_58319_48903260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58319_48903260 = scope;
   scope->owner = (Object)channel__z_58313_48882360;
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

Scope rinc_58322_48901500;

SignalI abus__r_48899000_rinc_58322_48901500_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeabus__r_48899000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48899000_rinc_58322_48901500_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)rinc_58322_48901500;
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

Scope makerinc_58322_48901500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58322_48901500 = scope;
   scope->owner = (Object)channel__z_58313_48882360;
   scope->name = "rinc:322";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48899000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58325_48898640;

SignalI abus__w_49371220_winc_58325_48898640_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeabus__w_49371220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49371220_winc_58325_48898640_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)winc_58325_48898640;
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

Scope makewinc_58325_48898640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58325_48898640 = scope;
   scope->owner = (Object)channel__z_58313_48882360;
   scope->name = "winc:325";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49371220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58328_49370140;

SignalI abus__r_49368460_rdec_58328_49370140_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeabus__r_49368460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49368460_rdec_58328_49370140_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)rdec_58328_49370140;
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

Scope makerdec_58328_49370140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58328_49370140 = scope;
   scope->owner = (Object)channel__z_58313_48882360;
   scope->name = "rdec:328";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49368460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58332_49367880;

SignalI abus__w_49366320_wdec_58332_49367880_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makeabus__w_49366320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49366320_wdec_58332_49367880_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)wdec_58332_49367880;
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

Scope makewdec_58332_49367880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58332_49367880 = scope;
   scope->owner = (Object)channel__z_58313_48882360;
   scope->name = "wdec:332";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49366320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60833080;

Behavior make__60833080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60833080 = behavior;
   behavior->owner = (Object)channel__z_58313_48882360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49562760_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   reg__0_49562760_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   reg__0_49562760_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(reg__0_49562760_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,reg__0_49562760_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
reg__0_49562760_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[reg__0_49562760_channel__z_58313_48882360_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60833240();

   return behavior;
}

Behavior __60832860;

Behavior make__60832860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60832860 = behavior;
   behavior->owner = (Object)channel__z_58313_48882360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_58669340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   _58315_58669340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   _58315_58669340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(_58315_58669340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,_58315_58669340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_58315_58669340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[_58315_58669340_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60833040();

   return behavior;
}

Scope makechannel__z_58313_48882360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58313_48882360 = scope;
   scope->owner = (Object)layer__output_58_84_53022740;
   scope->name = "channel_z:313";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49562760();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58314_48905660();
   scope->scopes[1] = makeraddr_58316_48904760();
   scope->scopes[2] = makewaddr_58319_48903260();
   scope->scopes[3] = makerinc_58322_48901500();
   scope->scopes[4] = makewinc_58325_48898640();
   scope->scopes[5] = makerdec_58328_49370140();
   scope->scopes[6] = makewdec_58332_49367880();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60833080();
   scope->behaviors[1] = make__60832860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58336_51719460;

SignalI lv0_52068940_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makelv0_52068940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52068940_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)add__n_58336_51719460;
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

SignalI rv0_52417080_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makerv0_52417080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_52417080_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)add__n_58336_51719460;
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

SignalI lvok0_52417040_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makelvok0_52417040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52417040_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)add__n_58336_51719460;
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

SignalI rvok0_52417020_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makervok0_52417020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_52417020_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)add__n_58336_51719460;
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

SignalI run_52416940_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700;

SignalI makerun_52416940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52416940_add__n_58336_51719460_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)add__n_58336_51719460;
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

Behavior __49915380;

Behavior make__49915380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49915380 = behavior;
   behavior->owner = (Object)add__n_58336_51719460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos += 1;
   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos = realloc(clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos*sizeof(Object));
clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos[clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos-1] = (Object)behavior;
   behavior->block = make__52416500();

   return behavior;
}

Scope makeadd__n_58336_51719460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58336_51719460 = scope;
   scope->owner = (Object)layer__output_58_84_53022740;
   scope->name = "add_n:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52068940();
   scope->inners[1] = makerv0_52417080();
   scope->inners[2] = makelvok0_52417040();
   scope->inners[3] = makervok0_52417020();
   scope->inners[4] = makerun_52416940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49915380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58921380;

Behavior make__58921380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58921380 = behavior;
   behavior->owner = (Object)layer__output_58_84_53022740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos += 1;
   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos = realloc(clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos*sizeof(Object));
clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos[clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos-1] = (Object)behavior;
   behavior->block = make__58746600();

   return behavior;
}

Behavior __59198300;

Behavior make__59198300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59198300 = behavior;
   behavior->owner = (Object)layer__output_58_84_53022740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos += 1;
   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos = realloc(clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos*sizeof(Object));
clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos[clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos-1] = (Object)behavior;
   behavior->block = make__58921260();

   return behavior;
}

Behavior __59579440;

Behavior make__59579440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59579440 = behavior;
   behavior->owner = (Object)layer__output_58_84_53022740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos += 1;
   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos = realloc(clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos*sizeof(Object));
clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->pos[clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_pos-1] = (Object)behavior;
   behavior->block = make__59198180();

   return behavior;
}

Behavior __60746260;

Behavior make__60746260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60746260 = behavior;
   behavior->owner = (Object)layer__output_58_84_53022740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_59577020_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   req_59577020_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   req_59577020_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(req_59577020_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,req_59577020_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
req_59577020_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[req_59577020_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_49915200_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   ack__mac_49915200_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   ack__mac_49915200_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(ack__mac_49915200_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,ack__mac_49915200_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
ack__mac_49915200_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[ack__mac_49915200_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60746600();

   return behavior;
}

Behavior __60765280;

Behavior make__60765280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60765280 = behavior;
   behavior->owner = (Object)layer__output_58_84_53022740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_49915220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   ack_49915220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   ack_49915220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(ack_49915220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,ack_49915220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
ack_49915220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[ack_49915220_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_58732080_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   value__z0_58732080_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   value__z0_58732080_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(value__z0_58732080_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,value__z0_58732080_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
value__z0_58732080_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[value__z0_58732080_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a10_58778420_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   ack__a10_58778420_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   ack__a10_58778420_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(ack__a10_58778420_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,ack__a10_58778420_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
ack__a10_58778420_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[ack__a10_58778420_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60746880();

   return behavior;
}

Behavior __60765100;

Behavior make__60765100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60765100 = behavior;
   behavior->owner = (Object)layer__output_58_84_53022740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_58986640_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   ack__mac_58986640_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   ack__mac_58986640_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(ack__mac_58986640_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,ack__mac_58986640_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
ack__mac_58986640_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[ack__mac_58986640_counter1_58_840_58988560_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_58380900_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   a_58380900_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   a_58380900_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(a_58380900_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,a_58380900_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
a_58380900_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[a_58380900_func10_58_840_51767980_layer__output_58_84_53022740_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60746800();

   return behavior;
}

Scope makelayer__output_58_84_53022740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer__output_58_84_53022740 = scope;
   scope->owner = (Object)layer__output_58_840_59579120;
   scope->name = "layer_output:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter1_58986500();
   scope->systemIs[1] = makefunc10_58380760();
   scope->num_inners = 19;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_49915240();
   scope->inners[1] = makeack_49915220();
   scope->inners[2] = makeack__mac_49915200();
   scope->inners[3] = makeack__add_49915180();
   scope->inners[4] = make_58249_58399280();
   scope->inners[5] = make_58247_58399260();
   scope->inners[6] = make_58248_58399180();
   scope->inners[7] = make_58266_58478340();
   scope->inners[8] = make_58292_58590240();
   scope->inners[9] = make_58315_58669340();
   scope->inners[10] = makevalue__z0_58732080();
   scope->inners[11] = makevalue__a10_58778460();
   scope->inners[12] = makeflag__z0_58778440();
   scope->inners[13] = makeack__a10_58778420();
   scope->inners[14] = make_58251_58778400();
   scope->inners[15] = make_58252_58778320();
   scope->inners[16] = make_58253_58890180();
   scope->inners[17] = make_58303_58969300();
   scope->inners[18] = make_58304_58969220();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58235_53022320();
   scope->scopes[1] = makechannel__accum_58264_52168800();
   scope->scopes[2] = makemac__n1_58289_52844900();
   scope->scopes[3] = makechannel__bias_58290_53023400();
   scope->scopes[4] = makechannel__z_58313_48882360();
   scope->scopes[5] = makeadd__n_58336_51719460();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58921380();
   scope->behaviors[1] = make__59198300();
   scope->behaviors[2] = make__59579440();
   scope->behaviors[3] = make__60746260();
   scope->behaviors[4] = make__60765280();
   scope->behaviors[5] = make__60765100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer__output_58_840_59579120() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer__output_58_840_59579120 = systemT;
systemT->owner = NULL;
   systemT->name = "layer_output:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59577080();
   systemT->inputs[1] = makerst_59577060();
   systemT->inputs[2] = makefill_59577040();
   systemT->inputs[3] = makereq_59577020();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__1_59576980();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer__output_58_84_53022740();

   return systemT;
}