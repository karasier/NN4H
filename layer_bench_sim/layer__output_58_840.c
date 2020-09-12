#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer__output_58_840_58885180;

SignalI clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeclk_58907460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_840_58885180;
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

SignalI rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makerst_58907440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_840_58885180;
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

SignalI fill_58907420_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makefill_58907420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_58907420_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_840_58885180;
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

SignalI req_58907400_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makereq_58907400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_58907400_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_840_58885180;
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

SignalI ack__1_58907360_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeack__1_58907360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_58907360_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_840_58885180;
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

Block __54436100;

Block __54475440;

Block __54475200;

void code__54475200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_53280460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,value__z0_52352000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60510920(),flag__z0_49826040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__54475200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54475200 = block;
   block->owner = (Object)__54475440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54475200;

   return block;
};

void code__54475440() {
 code__54475200();
}

Block make__54475440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54475440 = block;
   block->owner = (Object)__54436100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54475440;

   return block;
};

Block __54476740;

void code__54476740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60510860(),flag__z0_49826040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__54476740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54476740 = block;
   block->owner = (Object)__54436100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54476740;

   return block;
};

void code__54436100() {
   {
      Value cond = ack__add_53649460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54475440();
   }
   else {
  code__54476740();
   }
      }
   }
}

Block make__54436100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54436100 = block;
   block->owner = (Object)__52163200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54436100;

   return block;
};

Block __52163060;

Block __52162760;

Block __52162600;

void code__52162600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a10_49826060_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,_5862_47481420______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60510620(),ack__a10_49826020_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52162600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52162600 = block;
   block->owner = (Object)__52162760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52162600;

   return block;
};

void code__52162760() {
 code__52162600();
}

Block make__52162760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52162760 = block;
   block->owner = (Object)__52163060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52162760;

   return block;
};

void code__52163060() {
   {
      Value cond = flag__z0_49826040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52162760();
   }
      }
   }
}

Block make__52163060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52163060 = block;
   block->owner = (Object)__58596540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52163060;

   return block;
};

Block __58596400;

Block __58596140;

Block __58595760;

void code__58595760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60510460(),_58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__58595760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58595760 = block;
   block->owner = (Object)__58596140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58595760;

   return block;
};

void code__58596140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60510540();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58595760();
   }
      }
   }
}

Block make__58596140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58596140 = block;
   block->owner = (Object)__58596400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58596140;

   return block;
};

Block __58595300;

Block __58594980;

void code__58594980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60510300(),_58252_49825920_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__58594980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58594980 = block;
   block->owner = (Object)__58595300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58594980;

   return block;
};

void code__58595300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60510380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58594980();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60510240(),_58251_49826000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__58595300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58595300 = block;
   block->owner = (Object)__58596400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58595300;

   return block;
};

Block __58594260;

Block __58594000;

Block __58593620;

void code__58593620() {
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
                  src0 = _58252_49825920_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60509980();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58252_49825920_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60509880(),_58251_49826000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60509820(),_58253_58563980_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__58593620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58593620 = block;
   block->owner = (Object)__58594000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58593620;

   return block;
};

void code__58594000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60510120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58593620();
   }
      }
   }
}

Block make__58594000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58594000 = block;
   block->owner = (Object)__58594260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58594000;

   return block;
};

Block __58672440;

Block __58672120;

Block __58671640;

void code__58671640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60509560(),_58303_58610340_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__58671640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58671640 = block;
   block->owner = (Object)__58672120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58671640;

   return block;
};

void code__58672120() {
{
      Value value = _58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60509620())) {
    code__58671640();
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
                  src0 = _58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60509440();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__58672120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58672120 = block;
   block->owner = (Object)__58672440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58672120;

   return block;
};

void code__58672440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60509740();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58672120();
   }
      }
   }
}

Block make__58672440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58672440 = block;
   block->owner = (Object)__58594260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58672440;

   return block;
};

void code__58594260() {
 code__58594000();
 code__58672440();
}

Block make__58594260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58594260 = block;
   block->owner = (Object)__58596400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58594260;

   return block;
};

void code__58596400() {
 code__58596140();
 code__58595300();
   {
      Value cond = fill_58907420_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58594260();
   }
      }
   }
}

Block make__58596400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58596400 = block;
   block->owner = (Object)__58885540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58596400;

   return block;
};

Block __60245480;

void code__60245480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_58907400_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_53649480_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_53649640_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60245480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60245480 = block;
   block->owner = (Object)__60245160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60245480;

   return block;
};

Block __60245720;

void code__60245720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,clk_58627760_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_53649500_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,ack_58627740_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,rst_58627720_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_52352000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,z__value_52984000_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a10_49826020_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,ack__1_58907360_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60245720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60245720 = block;
   block->owner = (Object)__60264140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60245720;

   return block;
};

Block __60245660;

void code__60245660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_58627680_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,ack__mac_53649480_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_53263580_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,value__a10_49826060_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60245660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60245660 = block;
   block->owner = (Object)__60263980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60245660;

   return block;
};

Block __48174520;

Block __49562520;

void code__49562520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_54078440_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,make_ref_rangeS(mem_54195040_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220,value2integer(abus__w_54078240_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value),value2integer(abus__w_54078240_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49562520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49562520 = block;
   block->owner = (Object)__48174520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49562520;

   return block;
};

void code__48174520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54195040_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
            idx = value2integer(abus__r_54078340_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_53797700_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_53405000_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49562520();
   }
      }
   }
}

Block make__48174520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48174520 = block;
   block->owner = (Object)__52254280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48174520;

   return block;
};

Block __60263160;

void code__60263160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_53797700_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,_58249_54083240_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60263160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60263160 = block;
   block->owner = (Object)__60263000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60263160;

   return block;
};

Block __60262960;

void code__60262960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_54083240_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,dbus__r_53797700_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60262960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60262960 = block;
   block->owner = (Object)__60262800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60262960;

   return block;
};

Block __60262480;

void code__60262480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53405020_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,_58247_54083220_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60262480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60262480 = block;
   block->owner = (Object)__60262300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60262480;

   return block;
};

Block __60262240;

void code__60262240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58247_54083220_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,trig__r_53405020_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60262240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60262240 = block;
   block->owner = (Object)__60262040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60262240;

   return block;
};

Block __60261740;

void code__60261740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_54078340_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,_58248_54083080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60261740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60261740 = block;
   block->owner = (Object)__60261580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60261740;

   return block;
};

Block __60261540;

void code__60261540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58248_54083080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,abus__r_54078340_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60261540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60261540 = block;
   block->owner = (Object)__60261360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60261540;

   return block;
};

Block __60260980;

void code__60260980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_53405000_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,_58251_49826000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60260980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60260980 = block;
   block->owner = (Object)__60260820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60260980;

   return block;
};

Block __60260780;

void code__60260780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58251_49826000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,trig__w_53405000_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60260780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60260780 = block;
   block->owner = (Object)__60260620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60260780;

   return block;
};

Block __60284820;

void code__60284820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_54078240_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,_58252_49825920_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60284820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60284820 = block;
   block->owner = (Object)__60284600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60284820;

   return block;
};

Block __60284560;

void code__60284560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58252_49825920_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,abus__w_54078240_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60284560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60284560 = block;
   block->owner = (Object)__60284400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60284560;

   return block;
};

Block __60284100;

void code__60284100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_54078440_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,_58253_58563980_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60284100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60284100 = block;
   block->owner = (Object)__60283940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60284100;

   return block;
};

Block __60283900;

void code__60283900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58253_58563980_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,dbus__w_54078440_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60283900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60283900 = block;
   block->owner = (Object)__60283720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60283900;

   return block;
};

Block __60282020;

void code__60282020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52441000_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,_58266_54191940_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60282020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60282020 = block;
   block->owner = (Object)__60281860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60282020;

   return block;
};

Block __60281820;

void code__60281820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_54191940_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,reg__0_52441000_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60281820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60281820 = block;
   block->owner = (Object)__60281660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60281820;

   return block;
};

Block __53509480;

Block __53509100;

Block __53508480;

void code__53508480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60492940(),_58248_54083080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__53508480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53508480 = block;
   block->owner = (Object)__53509100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53508480;

   return block;
};

void code__53509100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60493040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53508480();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60492860(),_58247_54083220_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__53509100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53509100 = block;
   block->owner = (Object)__53509480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53509100;

   return block;
};

Block __53507660;

Block __53507120;

void code__53507120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60492680(),_5845_44580100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__53507120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53507120 = block;
   block->owner = (Object)__53507660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53507120;

   return block;
};

void code__53507660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60492780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53507120();
   }
      }
   }
}

Block make__53507660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53507660 = block;
   block->owner = (Object)__53509480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53507660;

   return block;
};

Block __53938060;

Block __53937220;

Block __53936720;

Block __53960280;

void code__53960280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_49920740______58_84_49763560______58_840_59389220->c_value,rv_53509800_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__53960280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53960280 = block;
   block->owner = (Object)__53936720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53960280;

   return block;
};

Block __54270900;

void code__54270900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_44580260______58_84_49763560______58_840_59389220->c_value,rv_53509800_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__54270900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54270900 = block;
   block->owner = (Object)__53936720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54270900;

   return block;
};

void code__53936720() {
{
      Value value = _5845_44580100______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60492160())) {
    code__53960280();
         }
         else if (value2integer(value) == value2integer(make__60492060())) {
    code__54270900();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60491920(),rvok_53509720_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
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
                  src0 = _5845_44580100______58_84_49763560______58_840_59389220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60491780();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_44580100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__53936720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53936720 = block;
   block->owner = (Object)__53937220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53936720;

   return block;
};

void code__53937220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60492280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53936720();
   }
      }
   }
}

Block make__53937220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53937220 = block;
   block->owner = (Object)__53938060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53937220;

   return block;
};

Block __47485360;

Block __47520960;

Block __47519800;

void code__47519800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_54083240_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,lv0_53036900_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60491100(),lvok0_53509740_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__47519800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47519800 = block;
   block->owner = (Object)__47520960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47519800;

   return block;
};

void code__47520960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58247_54083220_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60491520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47519800();
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
                  src0 = _58248_54083080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60490980();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58248_54083080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60490860(),_58247_54083220_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__47520960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47520960 = block;
   block->owner = (Object)__47485360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47520960;

   return block;
};

void code__47485360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60491640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47520960();
   }
      }
   }
}

Block make__47485360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47485360 = block;
   block->owner = (Object)__53938060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47485360;

   return block;
};

Block __49680020;

Block __49678960;

Block __49678220;

void code__49678220() {
}

Block make__49678220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49678220 = block;
   block->owner = (Object)__49678960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49678220;

   return block;
};

Block __49360780;

void code__49360780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_53258560_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,_58266_54191940_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__49360780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49360780 = block;
   block->owner = (Object)__49678960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49360780;

   return block;
};

void code__49678960() {
 code__49678220();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_53258560_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
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
                              src0 = lv0_53036900_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_53509800_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60490080();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_53258560_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
 code__49360780();
}

Block make__49678960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49678960 = block;
   block->owner = (Object)__49680020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49678960;

   return block;
};

void code__49680020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60490680(),ack_53649500_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60490600(),run_53509700_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
 code__49678960();
}

Block make__49680020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49680020 = block;
   block->owner = (Object)__53938060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49680020;

   return block;
};

void code__53938060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60492360(),run_53509700_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
 code__53937220();
 code__47485360();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53509740_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
         src1 = rvok_53509720_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49680020();
   }
      }
   }
}

Block make__53938060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53938060 = block;
   block->owner = (Object)__53509480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53938060;

   return block;
};

Block __53505760;

void code__53505760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60489900(),rvok_53509720_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60489840(),lvok0_53509740_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60489780(),av0_53258560_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__53505760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53505760 = block;
   block->owner = (Object)__53509480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53505760;

   return block;
};

void code__53509480() {
 code__53509100();
 code__53507660();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60492580(),ack_53649500_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60492520(),run_53509700_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_53649640_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
         src1 = run_53509700_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53938060();
   }
   else {
  code__53505760();
   }
      }
   }
}

Block make__53509480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53509480 = block;
   block->owner = (Object)__51912800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53509480;

   return block;
};

Block __60279740;

void code__60279740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,_58292_54357100_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60279740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60279740 = block;
   block->owner = (Object)__60279580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60279740;

   return block;
};

Block __60279540;

void code__60279540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_54357100_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60279540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60279540 = block;
   block->owner = (Object)__60279360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60279540;

   return block;
};

Block __60278980;

void code__60278980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,_58303_58610340_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60278980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60278980 = block;
   block->owner = (Object)__60278820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60278980;

   return block;
};

Block __60278780;

void code__60278780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58303_58610340_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60278780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60278780 = block;
   block->owner = (Object)__60278580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60278780;

   return block;
};

Block __60276840;

void code__60276840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50392280_winc_58302_50392800_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,_58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60276840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60276840 = block;
   block->owner = (Object)__60366740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60276840;

   return block;
};

Block __60366700;

void code__60366700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,abus__w_50392280_winc_58302_50392800_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60366700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60366700 = block;
   block->owner = (Object)__60366520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60366700;

   return block;
};

Block __60365340;

void code__60365340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_43286340_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,_58315_53280460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60365340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60365340 = block;
   block->owner = (Object)__60365180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60365340;

   return block;
};

Block __60365140;

void code__60365140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_53280460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,reg__0_43286340_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60365140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60365140 = block;
   block->owner = (Object)__60364940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60365140;

   return block;
};

Block __49627460;

Block __49648420;

Block __49647160;

void code__49647160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_54191940_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,lv0_49151100_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60512740(),lvok0_49630320_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__49647160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49647160 = block;
   block->owner = (Object)__49648420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49647160;

   return block;
};

Block __52103480;

void code__52103480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_54357100_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,rv0_49630380_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60512600(),rvok0_49630240_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52103480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52103480 = block;
   block->owner = (Object)__49648420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52103480;

   return block;
};

Block __52537360;

Block __52535400;

void code__52535400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_49151100_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
      src1 = rv0_49630380_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58315_53280460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52535400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52535400 = block;
   block->owner = (Object)__52537360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52535400;

   return block;
};

void code__52537360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60512440(),run_49629160_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60512380(),ack__add_53649460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
 code__52535400();
}

Block make__52537360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52537360 = block;
   block->owner = (Object)__49648420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52537360;

   return block;
};

void code__49648420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60512940(),run_49629160_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
 code__49647160();
 code__52103480();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49630320_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
         src1 = rvok0_49630240_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52537360();
   }
      }
   }
}

Block make__49648420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49648420 = block;
   block->owner = (Object)__49627460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49648420;

   return block;
};

Block __49650340;

void code__49650340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60512140(),lvok0_49630320_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60512080(),rvok0_49630240_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__49650340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49650340 = block;
   block->owner = (Object)__49627460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49650340;

   return block;
};

void code__49627460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60513200(),ack__add_53649460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60513120(),run_49629160_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_53649480_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
         src1 = run_49629160_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49648420();
   }
   else {
  code__49650340();
   }
      }
   }
}

Block make__49627460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49627460 = block;
   block->owner = (Object)__53650000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49627460;

   return block;
};

Value make__60493040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60492940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60492860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60492780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60492680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60492580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60492520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60492360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60492280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60492160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60492060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60491920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60491780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60491640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60491520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60491100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60490980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60490860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60490680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60490600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60490080() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60489900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60489840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60489780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60513200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60513120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60512940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60512740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60512600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60512440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60512380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60512140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60512080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60510920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60510860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60510620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60510540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60510460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60510380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60510300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60510240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60510120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60509980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60509880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60509820() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60509740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60509620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60509560() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60509440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer__output_58_84_53410380;

SignalI req__mac_53649640_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makereq__mac_53649640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_53649640_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI ack_53649500_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeack_53649500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53649500_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI ack__mac_53649480_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeack__mac_53649480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53649480_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI ack__add_53649460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeack__add_53649460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_53649460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI _58249_54083240_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI make_58249_54083240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58249_54083240_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI _58247_54083220_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI make_58247_54083220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58247_54083220_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI _58248_54083080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI make_58248_54083080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58248_54083080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI _58266_54191940_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI make_58266_54191940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_54191940_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI _58292_54357100_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI make_58292_54357100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58292_54357100_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI _58315_53280460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI make_58315_53280460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_53280460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI value__z0_52352000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makevalue__z0_52352000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_52352000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI value__a10_49826060_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makevalue__a10_49826060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a10_49826060_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI flag__z0_49826040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeflag__z0_49826040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_49826040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI ack__a10_49826020_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeack__a10_49826020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a10_49826020_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI _58251_49826000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI make_58251_49826000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58251_49826000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI _58252_49825920_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI make_58252_49825920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58252_49825920_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI _58253_58563980_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI make_58253_58563980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58253_58563980_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI _58303_58610340_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI make_58303_58610340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58303_58610340_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SignalI _58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI make_58304_58610260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__output_58_84_53410380;
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

SystemI counter1_58627540;

SystemI makecounter1_58627540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter1_58627540 = systemI;
   systemI->owner = (Object)layer__output_58_84_53410380;
   systemI->name = "counter1";
   systemI->system = counter1_58_840_58629600;

   return systemI;
};

SystemI func0_53263420;

SystemI makefunc0_53263420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_53263420 = systemI;
   systemI->owner = (Object)layer__output_58_84_53410380;
   systemI->name = "func0";
   systemI->system = func0_58_8400_52622700;

   return systemI;
};

Scope channel__w0_58235_53409380;

SignalI trig__r_53405020_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI maketrig__r_53405020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53405020_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w0_58235_53409380;
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

SignalI trig__w_53405000_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI maketrig__w_53405000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_53405000_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w0_58235_53409380;
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

SignalI dbus__r_53797700_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makedbus__r_53797700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_53797700_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w0_58235_53409380;
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

SignalI dbus__w_54078440_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makedbus__w_54078440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_54078440_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w0_58235_53409380;
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

SignalI abus__r_54078340_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeabus__r_54078340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54078340_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w0_58235_53409380;
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

SignalI abus__w_54078240_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeabus__w_54078240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54078240_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w0_58235_53409380;
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

SignalI mem_54195040_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makemem_54195040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54195040_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w0_58235_53409380;
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

Scope raddr_58236_53408960;

Scope makeraddr_58236_53408960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58236_53408960 = scope;
   scope->owner = (Object)channel__w0_58235_53409380;
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

Scope waddr_58241_53408360;

Scope makewaddr_58241_53408360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58241_53408360 = scope;
   scope->owner = (Object)channel__w0_58235_53409380;
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

Scope rinc_58246_53407700;

Scope makerinc_58246_53407700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58246_53407700 = scope;
   scope->owner = (Object)channel__w0_58235_53409380;
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

Scope winc_58250_53407120;

Scope makewinc_58250_53407120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58250_53407120 = scope;
   scope->owner = (Object)channel__w0_58235_53409380;
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

Scope rdec_58254_53406280;

Scope makerdec_58254_53406280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58254_53406280 = scope;
   scope->owner = (Object)channel__w0_58235_53409380;
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

Scope wdec_58259_53405720;

Scope makewdec_58259_53405720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58259_53405720 = scope;
   scope->owner = (Object)channel__w0_58235_53409380;
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

Behavior __52254280;

Behavior make__52254280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52254280 = behavior;
   behavior->owner = (Object)channel__w0_58235_53409380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_neg += 1;
   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->neg = realloc(clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->neg,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_neg*sizeof(Object));
clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->neg[clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_neg-1] = (Object)behavior;
   behavior->block = make__48174520();

   return behavior;
}

Behavior __60263000;

Behavior make__60263000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60263000 = behavior;
   behavior->owner = (Object)channel__w0_58235_53409380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_53797700_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   dbus__r_53797700_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   dbus__r_53797700_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(dbus__r_53797700_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,dbus__r_53797700_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
dbus__r_53797700_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[dbus__r_53797700_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60263160();

   return behavior;
}

Behavior __60262800;

Behavior make__60262800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60262800 = behavior;
   behavior->owner = (Object)channel__w0_58235_53409380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58249_54083240_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   _58249_54083240_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   _58249_54083240_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(_58249_54083240_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,_58249_54083240_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58249_54083240_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[_58249_54083240_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60262960();

   return behavior;
}

Behavior __60262300;

Behavior make__60262300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60262300 = behavior;
   behavior->owner = (Object)channel__w0_58235_53409380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53405020_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   trig__r_53405020_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   trig__r_53405020_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(trig__r_53405020_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,trig__r_53405020_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
trig__r_53405020_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[trig__r_53405020_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60262480();

   return behavior;
}

Behavior __60262040;

Behavior make__60262040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60262040 = behavior;
   behavior->owner = (Object)channel__w0_58235_53409380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58247_54083220_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   _58247_54083220_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   _58247_54083220_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(_58247_54083220_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,_58247_54083220_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58247_54083220_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[_58247_54083220_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60262240();

   return behavior;
}

Behavior __60261580;

Behavior make__60261580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60261580 = behavior;
   behavior->owner = (Object)channel__w0_58235_53409380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_54078340_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   abus__r_54078340_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   abus__r_54078340_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(abus__r_54078340_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,abus__r_54078340_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
abus__r_54078340_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[abus__r_54078340_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60261740();

   return behavior;
}

Behavior __60261360;

Behavior make__60261360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60261360 = behavior;
   behavior->owner = (Object)channel__w0_58235_53409380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58248_54083080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   _58248_54083080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   _58248_54083080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(_58248_54083080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,_58248_54083080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58248_54083080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[_58248_54083080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60261540();

   return behavior;
}

Behavior __60260820;

Behavior make__60260820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60260820 = behavior;
   behavior->owner = (Object)channel__w0_58235_53409380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_53405000_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   trig__w_53405000_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   trig__w_53405000_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(trig__w_53405000_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,trig__w_53405000_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
trig__w_53405000_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[trig__w_53405000_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60260980();

   return behavior;
}

Behavior __60260620;

Behavior make__60260620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60260620 = behavior;
   behavior->owner = (Object)channel__w0_58235_53409380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58251_49826000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   _58251_49826000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   _58251_49826000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(_58251_49826000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,_58251_49826000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58251_49826000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[_58251_49826000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60260780();

   return behavior;
}

Behavior __60284600;

Behavior make__60284600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60284600 = behavior;
   behavior->owner = (Object)channel__w0_58235_53409380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_54078240_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   abus__w_54078240_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   abus__w_54078240_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(abus__w_54078240_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,abus__w_54078240_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
abus__w_54078240_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[abus__w_54078240_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60284820();

   return behavior;
}

Behavior __60284400;

Behavior make__60284400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60284400 = behavior;
   behavior->owner = (Object)channel__w0_58235_53409380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58252_49825920_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   _58252_49825920_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   _58252_49825920_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(_58252_49825920_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,_58252_49825920_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58252_49825920_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[_58252_49825920_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60284560();

   return behavior;
}

Behavior __60283940;

Behavior make__60283940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60283940 = behavior;
   behavior->owner = (Object)channel__w0_58235_53409380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_54078440_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   dbus__w_54078440_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   dbus__w_54078440_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(dbus__w_54078440_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,dbus__w_54078440_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
dbus__w_54078440_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[dbus__w_54078440_channel__w0_58235_53409380_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60284100();

   return behavior;
}

Behavior __60283720;

Behavior make__60283720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60283720 = behavior;
   behavior->owner = (Object)channel__w0_58235_53409380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58253_58563980_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   _58253_58563980_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   _58253_58563980_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(_58253_58563980_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,_58253_58563980_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58253_58563980_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[_58253_58563980_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60283900();

   return behavior;
}

Scope makechannel__w0_58235_53409380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58235_53409380 = scope;
   scope->owner = (Object)layer__output_58_84_53410380;
   scope->name = "channel_w0:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53405020();
   scope->inners[1] = maketrig__w_53405000();
   scope->inners[2] = makedbus__r_53797700();
   scope->inners[3] = makedbus__w_54078440();
   scope->inners[4] = makeabus__r_54078340();
   scope->inners[5] = makeabus__w_54078240();
   scope->inners[6] = makemem_54195040();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58236_53408960();
   scope->scopes[1] = makewaddr_58241_53408360();
   scope->scopes[2] = makerinc_58246_53407700();
   scope->scopes[3] = makewinc_58250_53407120();
   scope->scopes[4] = makerdec_58254_53406280();
   scope->scopes[5] = makewdec_58259_53405720();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52254280();
   scope->behaviors[1] = make__60263000();
   scope->behaviors[2] = make__60262800();
   scope->behaviors[3] = make__60262300();
   scope->behaviors[4] = make__60262040();
   scope->behaviors[5] = make__60261580();
   scope->behaviors[6] = make__60261360();
   scope->behaviors[7] = make__60260820();
   scope->behaviors[8] = make__60260620();
   scope->behaviors[9] = make__60284600();
   scope->behaviors[10] = make__60284400();
   scope->behaviors[11] = make__60283940();
   scope->behaviors[12] = make__60283720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58264_52254140;

SignalI reg__0_52441000_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makereg__0_52441000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52441000_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__accum_58264_52254140;
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

Scope anum_58265_52253700;

Scope makeanum_58265_52253700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58265_52253700 = scope;
   scope->owner = (Object)channel__accum_58264_52254140;
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

Scope raddr_58267_52253140;

Scope makeraddr_58267_52253140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58267_52253140 = scope;
   scope->owner = (Object)channel__accum_58264_52254140;
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

Scope waddr_58270_52251560;

Scope makewaddr_58270_52251560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58270_52251560 = scope;
   scope->owner = (Object)channel__accum_58264_52254140;
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

Scope rinc_58273_52250620;

SignalI abus__r_52249660_rinc_58273_52250620_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeabus__r_52249660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52249660_rinc_58273_52250620_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rinc_58273_52250620;
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

Scope makerinc_58273_52250620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_52250620 = scope;
   scope->owner = (Object)channel__accum_58264_52254140;
   scope->name = "rinc:273";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52249660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58277_52249360;

SignalI abus__w_52305360_winc_58277_52249360_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeabus__w_52305360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52305360_winc_58277_52249360_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)winc_58277_52249360;
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

Scope makewinc_58277_52249360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58277_52249360 = scope;
   scope->owner = (Object)channel__accum_58264_52254140;
   scope->name = "winc:277";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52305360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58281_52304160;

SignalI abus__r_52302260_rdec_58281_52304160_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeabus__r_52302260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52302260_rdec_58281_52304160_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rdec_58281_52304160;
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

Scope makerdec_58281_52304160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58281_52304160 = scope;
   scope->owner = (Object)channel__accum_58264_52254140;
   scope->name = "rdec:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52302260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58285_52301700;

SignalI abus__w_52301100_wdec_58285_52301700_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeabus__w_52301100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52301100_wdec_58285_52301700_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)wdec_58285_52301700;
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

Scope makewdec_58285_52301700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58285_52301700 = scope;
   scope->owner = (Object)channel__accum_58264_52254140;
   scope->name = "wdec:285";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52301100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60281860;

Behavior make__60281860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60281860 = behavior;
   behavior->owner = (Object)channel__accum_58264_52254140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52441000_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   reg__0_52441000_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   reg__0_52441000_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(reg__0_52441000_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,reg__0_52441000_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__0_52441000_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[reg__0_52441000_channel__accum_58264_52254140_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60282020();

   return behavior;
}

Behavior __60281660;

Behavior make__60281660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60281660 = behavior;
   behavior->owner = (Object)channel__accum_58264_52254140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_54191940_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   _58266_54191940_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   _58266_54191940_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(_58266_54191940_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,_58266_54191940_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58266_54191940_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[_58266_54191940_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60281820();

   return behavior;
}

Scope makechannel__accum_58264_52254140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58264_52254140 = scope;
   scope->owner = (Object)layer__output_58_84_53410380;
   scope->name = "channel_accum:264";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52441000();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58265_52253700();
   scope->scopes[1] = makeraddr_58267_52253140();
   scope->scopes[2] = makewaddr_58270_52251560();
   scope->scopes[3] = makerinc_58273_52250620();
   scope->scopes[4] = makewinc_58277_52249360();
   scope->scopes[5] = makerdec_58281_52304160();
   scope->scopes[6] = makewdec_58285_52301700();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60281860();
   scope->behaviors[1] = make__60281660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58289_52818040;

SignalI lv0_53036900_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makelv0_53036900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_53036900_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58289_52818040;
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

SignalI av0_53258560_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeav0_53258560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_53258560_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58289_52818040;
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

SignalI rv_53509800_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makerv_53509800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_53509800_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58289_52818040;
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

SignalI lvok0_53509740_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makelvok0_53509740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53509740_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58289_52818040;
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

SignalI rvok_53509720_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makervok_53509720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_53509720_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58289_52818040;
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

SignalI run_53509700_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makerun_53509700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53509700_mac__n1_58289_52818040_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58289_52818040;
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

Behavior __51912800;

Behavior make__51912800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51912800 = behavior;
   behavior->owner = (Object)mac__n1_58289_52818040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos += 1;
   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos = realloc(clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos*sizeof(Object));
clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos[clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos-1] = (Object)behavior;
   behavior->block = make__53509480();

   return behavior;
}

Scope makemac__n1_58289_52818040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58289_52818040 = scope;
   scope->owner = (Object)layer__output_58_84_53410380;
   scope->name = "mac_n1:289";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_53036900();
   scope->inners[1] = makeav0_53258560();
   scope->inners[2] = makerv_53509800();
   scope->inners[3] = makelvok0_53509740();
   scope->inners[4] = makervok_53509720();
   scope->inners[5] = makerun_53509700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51912800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58290_50397080;

SignalI reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makereg__0_52477420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__bias_58290_50397080;
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

Scope anum_58291_50396540;

Scope makeanum_58291_50396540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58291_50396540 = scope;
   scope->owner = (Object)channel__bias_58290_50397080;
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

Scope raddr_58293_50395360;

Scope makeraddr_58293_50395360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58293_50395360 = scope;
   scope->owner = (Object)channel__bias_58290_50397080;
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

Scope waddr_58296_50394800;

Scope makewaddr_58296_50394800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58296_50394800 = scope;
   scope->owner = (Object)channel__bias_58290_50397080;
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

Scope rinc_58299_50394120;

SignalI abus__r_50392920_rinc_58299_50394120_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeabus__r_50392920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50392920_rinc_58299_50394120_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rinc_58299_50394120;
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

Scope makerinc_58299_50394120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58299_50394120 = scope;
   scope->owner = (Object)channel__bias_58290_50397080;
   scope->name = "rinc:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50392920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58302_50392800;

SignalI abus__w_50392280_winc_58302_50392800_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeabus__w_50392280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50392280_winc_58302_50392800_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)winc_58302_50392800;
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

Behavior __60366740;

Behavior make__60366740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60366740 = behavior;
   behavior->owner = (Object)winc_58302_50392800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50392280_winc_58302_50392800_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   abus__w_50392280_winc_58302_50392800_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   abus__w_50392280_winc_58302_50392800_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(abus__w_50392280_winc_58302_50392800_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,abus__w_50392280_winc_58302_50392800_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
abus__w_50392280_winc_58302_50392800_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[abus__w_50392280_winc_58302_50392800_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60276840();

   return behavior;
}

Behavior __60366520;

Behavior make__60366520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60366520 = behavior;
   behavior->owner = (Object)winc_58302_50392800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   _58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   _58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(_58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,_58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[_58304_58610260_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60366700();

   return behavior;
}

Scope makewinc_58302_50392800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58302_50392800 = scope;
   scope->owner = (Object)channel__bias_58290_50397080;
   scope->name = "winc:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50392280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60366740();
   scope->behaviors[1] = make__60366520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58305_50391580;

SignalI abus__r_50390940_rdec_58305_50391580_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeabus__r_50390940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50390940_rdec_58305_50391580_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rdec_58305_50391580;
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

Scope makerdec_58305_50391580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58305_50391580 = scope;
   scope->owner = (Object)channel__bias_58290_50397080;
   scope->name = "rdec:305";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50390940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58309_50390680;

SignalI abus__w_50389980_wdec_58309_50390680_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeabus__w_50389980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50389980_wdec_58309_50390680_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)wdec_58309_50390680;
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

Scope makewdec_58309_50390680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58309_50390680 = scope;
   scope->owner = (Object)channel__bias_58290_50397080;
   scope->name = "wdec:309";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50389980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60279580;

Behavior make__60279580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60279580 = behavior;
   behavior->owner = (Object)channel__bias_58290_50397080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60279740();

   return behavior;
}

Behavior __60279360;

Behavior make__60279360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60279360 = behavior;
   behavior->owner = (Object)channel__bias_58290_50397080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58292_54357100_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   _58292_54357100_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   _58292_54357100_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(_58292_54357100_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,_58292_54357100_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58292_54357100_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[_58292_54357100_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60279540();

   return behavior;
}

Behavior __60278820;

Behavior make__60278820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60278820 = behavior;
   behavior->owner = (Object)channel__bias_58290_50397080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[reg__0_52477420_channel__bias_58290_50397080_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60278980();

   return behavior;
}

Behavior __60278580;

Behavior make__60278580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60278580 = behavior;
   behavior->owner = (Object)channel__bias_58290_50397080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58303_58610340_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   _58303_58610340_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   _58303_58610340_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(_58303_58610340_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,_58303_58610340_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58303_58610340_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[_58303_58610340_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60278780();

   return behavior;
}

Scope makechannel__bias_58290_50397080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58290_50397080 = scope;
   scope->owner = (Object)layer__output_58_84_53410380;
   scope->name = "channel_bias:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52477420();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58291_50396540();
   scope->scopes[1] = makeraddr_58293_50395360();
   scope->scopes[2] = makewaddr_58296_50394800();
   scope->scopes[3] = makerinc_58299_50394120();
   scope->scopes[4] = makewinc_58302_50392800();
   scope->scopes[5] = makerdec_58305_50391580();
   scope->scopes[6] = makewdec_58309_50390680();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60279580();
   scope->behaviors[1] = make__60279360();
   scope->behaviors[2] = make__60278820();
   scope->behaviors[3] = make__60278580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58313_54389900;

SignalI reg__0_43286340_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makereg__0_43286340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_43286340_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__z_58313_54389900;
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

Scope anum_58314_54389280;

Scope makeanum_58314_54389280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58314_54389280 = scope;
   scope->owner = (Object)channel__z_58313_54389900;
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

Scope raddr_58316_54388420;

Scope makeraddr_58316_54388420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58316_54388420 = scope;
   scope->owner = (Object)channel__z_58313_54389900;
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

Scope waddr_58319_54387420;

Scope makewaddr_58319_54387420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58319_54387420 = scope;
   scope->owner = (Object)channel__z_58313_54389900;
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

Scope rinc_58322_54386700;

SignalI abus__r_54344800_rinc_58322_54386700_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeabus__r_54344800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54344800_rinc_58322_54386700_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rinc_58322_54386700;
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

Scope makerinc_58322_54386700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58322_54386700 = scope;
   scope->owner = (Object)channel__z_58313_54389900;
   scope->name = "rinc:322";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54344800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58325_54344680;

SignalI abus__w_54344260_winc_58325_54344680_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeabus__w_54344260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54344260_winc_58325_54344680_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)winc_58325_54344680;
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

Scope makewinc_58325_54344680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58325_54344680 = scope;
   scope->owner = (Object)channel__z_58313_54389900;
   scope->name = "winc:325";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54344260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58328_54344080;

SignalI abus__r_54343560_rdec_58328_54344080_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeabus__r_54343560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54343560_rdec_58328_54344080_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rdec_58328_54344080;
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

Scope makerdec_58328_54344080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58328_54344080 = scope;
   scope->owner = (Object)channel__z_58313_54389900;
   scope->name = "rdec:328";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54343560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58332_54343220;

SignalI abus__w_54342120_wdec_58332_54343220_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makeabus__w_54342120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54342120_wdec_58332_54343220_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)wdec_58332_54343220;
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

Scope makewdec_58332_54343220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58332_54343220 = scope;
   scope->owner = (Object)channel__z_58313_54389900;
   scope->name = "wdec:332";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54342120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60365180;

Behavior make__60365180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60365180 = behavior;
   behavior->owner = (Object)channel__z_58313_54389900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_43286340_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   reg__0_43286340_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   reg__0_43286340_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(reg__0_43286340_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,reg__0_43286340_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__0_43286340_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[reg__0_43286340_channel__z_58313_54389900_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60365340();

   return behavior;
}

Behavior __60364940;

Behavior make__60364940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60364940 = behavior;
   behavior->owner = (Object)channel__z_58313_54389900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_53280460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   _58315_53280460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   _58315_53280460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(_58315_53280460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,_58315_53280460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58315_53280460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[_58315_53280460_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60365140();

   return behavior;
}

Scope makechannel__z_58313_54389900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58313_54389900 = scope;
   scope->owner = (Object)layer__output_58_84_53410380;
   scope->name = "channel_z:313";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_43286340();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58314_54389280();
   scope->scopes[1] = makeraddr_58316_54388420();
   scope->scopes[2] = makewaddr_58319_54387420();
   scope->scopes[3] = makerinc_58322_54386700();
   scope->scopes[4] = makewinc_58325_54344680();
   scope->scopes[5] = makerdec_58328_54344080();
   scope->scopes[6] = makewdec_58332_54343220();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60365180();
   scope->behaviors[1] = make__60364940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58336_49281120;

SignalI lv0_49151100_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makelv0_49151100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49151100_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)add__n_58336_49281120;
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

SignalI rv0_49630380_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makerv0_49630380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_49630380_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)add__n_58336_49281120;
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

SignalI lvok0_49630320_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makelvok0_49630320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49630320_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)add__n_58336_49281120;
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

SignalI rvok0_49630240_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makervok0_49630240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49630240_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)add__n_58336_49281120;
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

SignalI run_49629160_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220;

SignalI makerun_49629160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49629160_add__n_58336_49281120_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)add__n_58336_49281120;
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

Behavior __53650000;

Behavior make__53650000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53650000 = behavior;
   behavior->owner = (Object)add__n_58336_49281120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos += 1;
   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos = realloc(clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos*sizeof(Object));
clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos[clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos-1] = (Object)behavior;
   behavior->block = make__49627460();

   return behavior;
}

Scope makeadd__n_58336_49281120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58336_49281120 = scope;
   scope->owner = (Object)layer__output_58_84_53410380;
   scope->name = "add_n:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49151100();
   scope->inners[1] = makerv0_49630380();
   scope->inners[2] = makelvok0_49630320();
   scope->inners[3] = makervok0_49630240();
   scope->inners[4] = makerun_49629160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53650000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52163200;

Behavior make__52163200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52163200 = behavior;
   behavior->owner = (Object)layer__output_58_84_53410380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos += 1;
   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos = realloc(clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos*sizeof(Object));
clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos[clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos-1] = (Object)behavior;
   behavior->block = make__54436100();

   return behavior;
}

Behavior __58596540;

Behavior make__58596540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58596540 = behavior;
   behavior->owner = (Object)layer__output_58_84_53410380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos += 1;
   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos = realloc(clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos*sizeof(Object));
clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos[clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos-1] = (Object)behavior;
   behavior->block = make__52163060();

   return behavior;
}

Behavior __58885540;

Behavior make__58885540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58885540 = behavior;
   behavior->owner = (Object)layer__output_58_84_53410380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos += 1;
   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos = realloc(clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos*sizeof(Object));
clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->pos[clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_pos-1] = (Object)behavior;
   behavior->block = make__58596400();

   return behavior;
}

Behavior __60245160;

Behavior make__60245160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60245160 = behavior;
   behavior->owner = (Object)layer__output_58_84_53410380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_58907400_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   req_58907400_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   req_58907400_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(req_58907400_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,req_58907400_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
req_58907400_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[req_58907400_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_53649480_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   ack__mac_53649480_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   ack__mac_53649480_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(ack__mac_53649480_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,ack__mac_53649480_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
ack__mac_53649480_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[ack__mac_53649480_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60245480();

   return behavior;
}

Behavior __60264140;

Behavior make__60264140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60264140 = behavior;
   behavior->owner = (Object)layer__output_58_84_53410380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_53649500_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   ack_53649500_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   ack_53649500_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(ack_53649500_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,ack_53649500_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
ack_53649500_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[ack_53649500_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_52352000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   value__z0_52352000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   value__z0_52352000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(value__z0_52352000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,value__z0_52352000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
value__z0_52352000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[value__z0_52352000_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a10_49826020_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   ack__a10_49826020_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   ack__a10_49826020_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(ack__a10_49826020_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,ack__a10_49826020_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
ack__a10_49826020_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[ack__a10_49826020_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60245720();

   return behavior;
}

Behavior __60263980;

Behavior make__60263980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60263980 = behavior;
   behavior->owner = (Object)layer__output_58_84_53410380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_58627680_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   ack__mac_58627680_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   ack__mac_58627680_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(ack__mac_58627680_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,ack__mac_58627680_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
ack__mac_58627680_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[ack__mac_58627680_counter1_58_840_58629600_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_53263580_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   a_53263580_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   a_53263580_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(a_53263580_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,a_53263580_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
a_53263580_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[a_53263580_func0_58_8400_52622700_layer__output_58_84_53410380_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60245660();

   return behavior;
}

Scope makelayer__output_58_84_53410380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer__output_58_84_53410380 = scope;
   scope->owner = (Object)layer__output_58_840_58885180;
   scope->name = "layer_output:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter1_58627540();
   scope->systemIs[1] = makefunc0_53263420();
   scope->num_inners = 19;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_53649640();
   scope->inners[1] = makeack_53649500();
   scope->inners[2] = makeack__mac_53649480();
   scope->inners[3] = makeack__add_53649460();
   scope->inners[4] = make_58249_54083240();
   scope->inners[5] = make_58247_54083220();
   scope->inners[6] = make_58248_54083080();
   scope->inners[7] = make_58266_54191940();
   scope->inners[8] = make_58292_54357100();
   scope->inners[9] = make_58315_53280460();
   scope->inners[10] = makevalue__z0_52352000();
   scope->inners[11] = makevalue__a10_49826060();
   scope->inners[12] = makeflag__z0_49826040();
   scope->inners[13] = makeack__a10_49826020();
   scope->inners[14] = make_58251_49826000();
   scope->inners[15] = make_58252_49825920();
   scope->inners[16] = make_58253_58563980();
   scope->inners[17] = make_58303_58610340();
   scope->inners[18] = make_58304_58610260();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58235_53409380();
   scope->scopes[1] = makechannel__accum_58264_52254140();
   scope->scopes[2] = makemac__n1_58289_52818040();
   scope->scopes[3] = makechannel__bias_58290_50397080();
   scope->scopes[4] = makechannel__z_58313_54389900();
   scope->scopes[5] = makeadd__n_58336_49281120();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52163200();
   scope->behaviors[1] = make__58596540();
   scope->behaviors[2] = make__58885540();
   scope->behaviors[3] = make__60245160();
   scope->behaviors[4] = make__60264140();
   scope->behaviors[5] = make__60263980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer__output_58_840_58885180() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer__output_58_840_58885180 = systemT;
systemT->owner = NULL;
   systemT->name = "layer_output:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58907460();
   systemT->inputs[1] = makerst_58907440();
   systemT->inputs[2] = makefill_58907420();
   systemT->inputs[3] = makereq_58907400();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__1_58907360();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer__output_58_84_53410380();

   return systemT;
}