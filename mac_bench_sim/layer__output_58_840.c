#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer__output_58_840_49971080;

SignalI clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeclk_49968660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_840_49971080;
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

SignalI rst_49968620_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makerst_49968620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49968620_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_840_49971080;
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

SignalI fill_49968600_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makefill_49968600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49968600_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_840_49971080;
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

SignalI req_49968580_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makereq_49968580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49968580_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_840_49971080;
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

SignalI ack__0_49968520_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeack__0_49968520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49968520_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_840_49971080;
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

Block __46879820;

Block __46879200;

Block __46878860;

void code__46878860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58133_51401040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,value__z0_51552080_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50779860(),flag__z0_51646000_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__46878860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46878860 = block;
   block->owner = (Object)__46879200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46878860;

   return block;
};

void code__46879200() {
 code__46878860();
}

Block make__46879200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46879200 = block;
   block->owner = (Object)__46879820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46879200;

   return block;
};

Block __46879660;

void code__46879660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50779780(),flag__z0_51646000_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__46879660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46879660 = block;
   block->owner = (Object)__46879820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46879660;

   return block;
};

void code__46879820() {
   {
      Value cond = ack__add_50828720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46879200();
   }
   else {
  code__46879660();
   }
      }
   }
}

Block make__46879820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46879820 = block;
   block->owner = (Object)__47542080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46879820;

   return block;
};

Block __47541940;

Block __47541560;

Block __47541360;

void code__47541360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a00_51646020_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,_5832_44966380______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50779540(),ack__a00_51645980_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__47541360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47541360 = block;
   block->owner = (Object)__47541560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47541360;

   return block;
};

void code__47541560() {
 code__47541360();
}

Block make__47541560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47541560 = block;
   block->owner = (Object)__47541940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47541560;

   return block;
};

void code__47541940() {
   {
      Value cond = flag__z0_51646000_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47541560();
   }
      }
   }
}

Block make__47541940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47541940 = block;
   block->owner = (Object)__48089800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47541940;

   return block;
};

Block __48089620;

Block __48089340;

Block __48088880;

void code__48088880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50779280(),_58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__48088880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48088880 = block;
   block->owner = (Object)__48089340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48088880;

   return block;
};

void code__48089340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49968620_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50779400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48088880();
   }
      }
   }
}

Block make__48089340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48089340 = block;
   block->owner = (Object)__48089620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48089340;

   return block;
};

Block __48111320;

Block __48110420;

void code__48110420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50778780(),_5870_51645880_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__48110420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48110420 = block;
   block->owner = (Object)__48111320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48110420;

   return block;
};

void code__48111320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49968620_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50778900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48110420();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50778720(),_5869_51645960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__48111320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48111320 = block;
   block->owner = (Object)__48089620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48111320;

   return block;
};

Block __48109040;

Block __48108700;

Block __48108080;

void code__48108080() {
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
                  src0 = _5870_51645880_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50778340();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5870_51645880_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50778240(),_5869_51645960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50778180(),_5871_43138800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__48108080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48108080 = block;
   block->owner = (Object)__48108700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48108080;

   return block;
};

void code__48108700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49968620_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50778480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48108080();
   }
      }
   }
}

Block make__48108700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48108700 = block;
   block->owner = (Object)__48109040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48108700;

   return block;
};

Block __49759940;

Block __49759500;

Block __49758940;

void code__49758940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50777880(),_58121_45457840_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49758940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49758940 = block;
   block->owner = (Object)__49759500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49758940;

   return block;
};

void code__49759500() {
{
      Value value = _58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__50777940())) {
    code__49758940();
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
                  src0 = _58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50777560();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49759500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49759500 = block;
   block->owner = (Object)__49759940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49759500;

   return block;
};

void code__49759940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49968620_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50778080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49759500();
   }
      }
   }
}

Block make__49759940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49759940 = block;
   block->owner = (Object)__48109040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49759940;

   return block;
};

void code__48109040() {
 code__48108700();
 code__49759940();
}

Block make__48109040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48109040 = block;
   block->owner = (Object)__48089620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48109040;

   return block;
};

void code__48089620() {
 code__48089340();
 code__48111320();
   {
      Value cond = fill_49968600_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48109040();
   }
      }
   }
}

Block make__48089620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48089620 = block;
   block->owner = (Object)__49946880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48089620;

   return block;
};

Block __50399600;

void code__50399600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_51552080_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,z__value_51208460_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a00_51645980_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,ack__0_49968520_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50399600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50399600 = block;
   block->owner = (Object)__50421140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50399600;

   return block;
};

Block __50399540;

void code__50399540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_51401640_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,value__a00_51646020_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50399540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50399540 = block;
   block->owner = (Object)__50420920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50399540;

   return block;
};

Block __47922660;

Block __45647820;

void code__45647820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47659720_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,make_ref_rangeS(mem_43169380_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480,value2integer(abus__w_47659420_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value),value2integer(abus__w_47659420_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__45647820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45647820 = block;
   block->owner = (Object)__47922660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45647820;

   return block;
};

void code__47922660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_43169380_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
            idx = value2integer(abus__r_47659580_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47427300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_46880300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45647820();
   }
      }
   }
}

Block make__47922660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47922660 = block;
   block->owner = (Object)__47444160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47922660;

   return block;
};

Block __50418940;

void code__50418940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47427300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,_5867_50996380_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50418940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50418940 = block;
   block->owner = (Object)__50418480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50418940;

   return block;
};

Block __50418440;

void code__50418440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_50996380_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,dbus__r_47427300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50418440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50418440 = block;
   block->owner = (Object)__50418120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50418440;

   return block;
};

Block __50417740;

void code__50417740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_46880320_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,_5865_50996360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50417740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50417740 = block;
   block->owner = (Object)__50417520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50417740;

   return block;
};

Block __50417460;

void code__50417460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5865_50996360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,trig__r_46880320_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50417460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50417460 = block;
   block->owner = (Object)__50417280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50417460;

   return block;
};

Block __50416860;

void code__50416860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47659580_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,_5866_50996280_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50416860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50416860 = block;
   block->owner = (Object)__50416520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50416860;

   return block;
};

Block __50416480;

void code__50416480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5866_50996280_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,abus__r_47659580_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50416480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50416480 = block;
   block->owner = (Object)__50416220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50416480;

   return block;
};

Block __50415860;

void code__50415860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_46880300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,_5869_51645960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50415860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50415860 = block;
   block->owner = (Object)__50415700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50415860;

   return block;
};

Block __50415660;

void code__50415660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5869_51645960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,trig__w_46880300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50415660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50415660 = block;
   block->owner = (Object)__50415460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50415660;

   return block;
};

Block __50415080;

void code__50415080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47659420_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,_5870_51645880_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50415080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50415080 = block;
   block->owner = (Object)__50414900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50415080;

   return block;
};

Block __50414860;

void code__50414860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5870_51645880_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,abus__w_47659420_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50414860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50414860 = block;
   block->owner = (Object)__50414580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50414860;

   return block;
};

Block __50414100;

void code__50414100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_47659720_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,_5871_43138800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50414100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50414100 = block;
   block->owner = (Object)__50413840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50414100;

   return block;
};

Block __50413800;

void code__50413800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5871_43138800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,dbus__w_47659720_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50413800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50413800 = block;
   block->owner = (Object)__50413580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50413800;

   return block;
};

Block __50444000;

void code__50444000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47562040_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,_5884_51163960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50444000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50444000 = block;
   block->owner = (Object)__50443840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50444000;

   return block;
};

Block __50443780;

void code__50443780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5884_51163960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,reg__0_47562040_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50443780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50443780 = block;
   block->owner = (Object)__50443580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50443780;

   return block;
};

Block __49899560;

Block __49899400;

Block __49899060;

void code__49899060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50696560(),_5866_50996280_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49899060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49899060 = block;
   block->owner = (Object)__49899400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49899060;

   return block;
};

void code__49899400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49968620_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50696640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49899060();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50696500(),_5865_50996360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49899400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49899400 = block;
   block->owner = (Object)__49899560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49899400;

   return block;
};

Block __49898440;

Block __49898120;

void code__49898120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50696300(),_5814_47773160______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49898120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49898120 = block;
   block->owner = (Object)__49898440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49898120;

   return block;
};

void code__49898440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49968620_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50696400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49898120();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50696240(),_5813_47773240______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49898440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49898440 = block;
   block->owner = (Object)__49899560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49898440;

   return block;
};

Block __50000100;

Block __49999780;

Block __49999460;

Block __49999140;

void code__49999140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_47773260______58_84_41403940______58_840_50161480->c_value,rv_49899740_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50695440(),rvok_49899700_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49999140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49999140 = block;
   block->owner = (Object)__49999460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49999140;

   return block;
};

void code__49999460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_47773240______58_84_41403940______58_840_50161480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50695720();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49999140();
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
                  src0 = _5814_47773160______58_84_41403940______58_840_50161480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50695240();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_47773160______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50695040(),_5813_47773240______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49999460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49999460 = block;
   block->owner = (Object)__49999780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49999460;

   return block;
};

void code__49999780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49968620_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50695820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49999460();
   }
      }
   }
}

Block make__49999780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49999780 = block;
   block->owner = (Object)__50000100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49999780;

   return block;
};

Block __50189020;

Block __50188700;

Block __50188380;

void code__50188380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_50996380_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,lv0_49692300_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50694660(),lvok0_49899720_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50188380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50188380 = block;
   block->owner = (Object)__50188700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50188380;

   return block;
};

void code__50188700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5865_50996360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50694840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50188380();
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
                  src0 = _5866_50996280_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50694460();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5866_50996280_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50694340(),_5865_50996360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50188700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50188700 = block;
   block->owner = (Object)__50189020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50188700;

   return block;
};

void code__50189020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49968620_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50694960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50188700();
   }
      }
   }
}

Block make__50189020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50189020 = block;
   block->owner = (Object)__50000100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50189020;

   return block;
};

Block __50419040;

Block __50418560;

Block __50418400;

void code__50418400() {
}

Block make__50418400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50418400 = block;
   block->owner = (Object)__50418560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50418400;

   return block;
};

Block __51414160;

void code__51414160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49763240_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,_5884_51163960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__51414160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51414160 = block;
   block->owner = (Object)__50418560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51414160;

   return block;
};

void code__50418560() {
 code__50418400();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_49763240_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
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
                              src0 = lv0_49692300_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49899740_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50693620();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49763240_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
 code__51414160();
}

Block make__50418560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50418560 = block;
   block->owner = (Object)__50419040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50418560;

   return block;
};

void code__50419040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50694080(),ack__mac_50828740_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50694020(),run_49899680_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
 code__50418560();
}

Block make__50419040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50419040 = block;
   block->owner = (Object)__50000100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50419040;

   return block;
};

void code__50000100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50695900(),run_49899680_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
 code__49999780();
 code__50189020();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49899720_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
         src1 = rvok_49899700_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50419040();
   }
      }
   }
}

Block make__50000100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50000100 = block;
   block->owner = (Object)__49899560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50000100;

   return block;
};

Block __49921720;

void code__49921720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50693380(),rvok_49899700_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50693240(),lvok0_49899720_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50693180(),av0_49763240_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49921720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49921720 = block;
   block->owner = (Object)__49899560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49921720;

   return block;
};

void code__49899560() {
 code__49899400();
 code__49898440();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50696120(),ack__mac_50828740_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50696060(),run_49899680_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_49968580_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
         src1 = run_49899680_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50000100();
   }
   else {
  code__49921720();
   }
      }
   }
}

Block make__49899560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49899560 = block;
   block->owner = (Object)__51694620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49899560;

   return block;
};

Block __50441300;

void code__50441300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,_58110_51290720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50441300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50441300 = block;
   block->owner = (Object)__50441020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50441300;

   return block;
};

Block __50440980;

void code__50440980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58110_51290720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50440980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50440980 = block;
   block->owner = (Object)__50440760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50440980;

   return block;
};

Block __50440220;

void code__50440220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,_58121_45457840_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50440220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50440220 = block;
   block->owner = (Object)__50440040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50440220;

   return block;
};

Block __50439960;

void code__50439960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58121_45457840_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50439960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50439960 = block;
   block->owner = (Object)__50439800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50439960;

   return block;
};

Block __50634220;

void code__50634220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_51692060_winc_58120_51692440_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,_58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50634220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50634220 = block;
   block->owner = (Object)__50634020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50634220;

   return block;
};

Block __50633980;

void code__50633980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,abus__w_51692060_winc_58120_51692440_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50633980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50633980 = block;
   block->owner = (Object)__50633820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50633980;

   return block;
};

Block __50632280;

void code__50632280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47538180_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,_58133_51401040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50632280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50632280 = block;
   block->owner = (Object)__50632080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50632280;

   return block;
};

Block __50632000;

void code__50632000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58133_51401040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,reg__0_47538180_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50632000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50632000 = block;
   block->owner = (Object)__50631740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50632000;

   return block;
};

Block __49766260;

Block __49765060;

Block __49764740;

void code__49764740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5884_51163960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,lv0_49639960_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50781380(),lvok0_49725500_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49764740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49764740 = block;
   block->owner = (Object)__49765060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49764740;

   return block;
};

Block __49998720;

void code__49998720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58110_51290720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,rv0_49725520_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50781000(),rvok0_49725480_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49998720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49998720 = block;
   block->owner = (Object)__49765060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49998720;

   return block;
};

Block __50185080;

Block __50184600;

void code__50184600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_49639960_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
      src1 = rv0_49725520_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58133_51401040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50184600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50184600 = block;
   block->owner = (Object)__50185080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50184600;

   return block;
};

void code__50185080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50780820(),run_49725460_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50780720(),ack__add_50828720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
 code__50184600();
}

Block make__50185080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50185080 = block;
   block->owner = (Object)__49765060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50185080;

   return block;
};

void code__49765060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50781540(),run_49725460_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
 code__49764740();
 code__49998720();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49725500_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
         src1 = rvok0_49725480_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50185080();
   }
      }
   }
}

Block make__49765060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49765060 = block;
   block->owner = (Object)__49766260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49765060;

   return block;
};

Block __49765780;

void code__49765780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50780440(),lvok0_49725500_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50780380(),rvok0_49725480_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49765780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49765780 = block;
   block->owner = (Object)__49766260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49765780;

   return block;
};

void code__49766260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50781940(),ack__add_50828720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50781840(),run_49725460_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_50828740_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
         src1 = run_49725460_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49765060();
   }
   else {
  code__49765780();
   }
      }
   }
}

Block make__49766260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49766260 = block;
   block->owner = (Object)__50828880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49766260;

   return block;
};

Value make__50696640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50696560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50696500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50696400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50696300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50696240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50696120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50696060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50695900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50695820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50695720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50695440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50695240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50695040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50694960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50694840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50694660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50694460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50694340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50694080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50694020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50693620() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50693380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50693240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50693180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50781940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50781840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50781540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50781380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50781000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50780820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50780720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50780440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50780380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50779860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50779780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50779540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50779400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50779280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__50778900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50778780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50778720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50778480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50778340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50778240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50778180() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50778080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50777940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__50777880() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50777560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer__output_58_84_46843880;

SignalI ack__mac_50828740_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeack__mac_50828740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50828740_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
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

SignalI ack__add_50828720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeack__add_50828720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_50828720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
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

SignalI _5867_50996380_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI make_5867_50996380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_50996380_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
   signalI->name = ":67";
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

SignalI _5865_50996360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI make_5865_50996360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5865_50996360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
   signalI->name = ":65";
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

SignalI _5866_50996280_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI make_5866_50996280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5866_50996280_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
   signalI->name = ":66";
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

SignalI _5884_51163960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI make_5884_51163960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5884_51163960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
   signalI->name = ":84";
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

SignalI _58110_51290720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI make_58110_51290720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58110_51290720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
   signalI->name = ":110";
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

SignalI _58133_51401040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI make_58133_51401040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58133_51401040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
   signalI->name = ":133";
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

SignalI value__z0_51552080_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makevalue__z0_51552080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_51552080_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
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

SignalI value__a00_51646020_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makevalue__a00_51646020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a00_51646020_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
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

SignalI flag__z0_51646000_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeflag__z0_51646000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_51646000_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
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

SignalI ack__a00_51645980_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeack__a00_51645980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a00_51645980_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
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

SignalI _5869_51645960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI make_5869_51645960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5869_51645960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
   signalI->name = ":69";
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

SignalI _5870_51645880_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI make_5870_51645880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5870_51645880_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
   signalI->name = ":70";
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

SignalI _5871_43138800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI make_5871_43138800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5871_43138800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
   signalI->name = ":71";
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

SignalI _58121_45457840_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI make_58121_45457840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58121_45457840_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
   signalI->name = ":121";
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

SignalI _58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI make_58122_45457620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)layer__output_58_84_46843880;
   signalI->name = ":122";
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

SystemI func0_51401500;

SystemI makefunc0_51401500() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_51401500 = systemI;
   systemI->owner = (Object)layer__output_58_84_46843880;
   systemI->name = "func0";
   systemI->system = func0_58_840_51044640;

   return systemI;
};

Scope channel__w0_5853_46843580;

SignalI trig__r_46880320_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI maketrig__r_46880320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_46880320_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__w0_5853_46843580;
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

SignalI trig__w_46880300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI maketrig__w_46880300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_46880300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__w0_5853_46843580;
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

SignalI dbus__r_47427300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makedbus__r_47427300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47427300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__w0_5853_46843580;
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

SignalI dbus__w_47659720_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makedbus__w_47659720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47659720_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__w0_5853_46843580;
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

SignalI abus__r_47659580_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeabus__r_47659580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47659580_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__w0_5853_46843580;
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

SignalI abus__w_47659420_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeabus__w_47659420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47659420_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__w0_5853_46843580;
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

SignalI mem_43169380_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makemem_43169380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_43169380_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__w0_5853_46843580;
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

Scope raddr_5854_46843280;

Scope makeraddr_5854_46843280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5854_46843280 = scope;
   scope->owner = (Object)channel__w0_5853_46843580;
   scope->name = "raddr:54";
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

Scope waddr_5859_46842720;

Scope makewaddr_5859_46842720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5859_46842720 = scope;
   scope->owner = (Object)channel__w0_5853_46843580;
   scope->name = "waddr:59";
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

Scope rinc_5864_46882600;

Scope makerinc_5864_46882600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5864_46882600 = scope;
   scope->owner = (Object)channel__w0_5853_46843580;
   scope->name = "rinc:64";
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

Scope winc_5868_46882180;

Scope makewinc_5868_46882180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5868_46882180 = scope;
   scope->owner = (Object)channel__w0_5853_46843580;
   scope->name = "winc:68";
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

Scope rdec_5872_46881620;

Scope makerdec_5872_46881620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5872_46881620 = scope;
   scope->owner = (Object)channel__w0_5853_46843580;
   scope->name = "rdec:72";
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

Scope wdec_5877_46880760;

Scope makewdec_5877_46880760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5877_46880760 = scope;
   scope->owner = (Object)channel__w0_5853_46843580;
   scope->name = "wdec:77";
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

Behavior __47444160;

Behavior make__47444160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47444160 = behavior;
   behavior->owner = (Object)channel__w0_5853_46843580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_neg += 1;
   clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->neg = realloc(clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->neg,clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_neg*sizeof(Object));
clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->neg[clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_neg-1] = (Object)behavior;
   behavior->block = make__47922660();

   return behavior;
}

Behavior __50418480;

Behavior make__50418480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50418480 = behavior;
   behavior->owner = (Object)channel__w0_5853_46843580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47427300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   dbus__r_47427300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   dbus__r_47427300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(dbus__r_47427300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,dbus__r_47427300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
dbus__r_47427300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[dbus__r_47427300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50418940();

   return behavior;
}

Behavior __50418120;

Behavior make__50418120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50418120 = behavior;
   behavior->owner = (Object)channel__w0_5853_46843580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5867_50996380_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   _5867_50996380_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   _5867_50996380_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(_5867_50996380_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,_5867_50996380_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5867_50996380_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[_5867_50996380_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50418440();

   return behavior;
}

Behavior __50417520;

Behavior make__50417520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50417520 = behavior;
   behavior->owner = (Object)channel__w0_5853_46843580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_46880320_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   trig__r_46880320_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   trig__r_46880320_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(trig__r_46880320_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,trig__r_46880320_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
trig__r_46880320_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[trig__r_46880320_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50417740();

   return behavior;
}

Behavior __50417280;

Behavior make__50417280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50417280 = behavior;
   behavior->owner = (Object)channel__w0_5853_46843580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5865_50996360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   _5865_50996360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   _5865_50996360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(_5865_50996360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,_5865_50996360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5865_50996360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[_5865_50996360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50417460();

   return behavior;
}

Behavior __50416520;

Behavior make__50416520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50416520 = behavior;
   behavior->owner = (Object)channel__w0_5853_46843580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47659580_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   abus__r_47659580_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   abus__r_47659580_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(abus__r_47659580_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,abus__r_47659580_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
abus__r_47659580_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[abus__r_47659580_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50416860();

   return behavior;
}

Behavior __50416220;

Behavior make__50416220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50416220 = behavior;
   behavior->owner = (Object)channel__w0_5853_46843580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5866_50996280_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   _5866_50996280_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   _5866_50996280_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(_5866_50996280_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,_5866_50996280_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5866_50996280_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[_5866_50996280_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50416480();

   return behavior;
}

Behavior __50415700;

Behavior make__50415700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50415700 = behavior;
   behavior->owner = (Object)channel__w0_5853_46843580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_46880300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   trig__w_46880300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   trig__w_46880300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(trig__w_46880300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,trig__w_46880300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
trig__w_46880300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[trig__w_46880300_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50415860();

   return behavior;
}

Behavior __50415460;

Behavior make__50415460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50415460 = behavior;
   behavior->owner = (Object)channel__w0_5853_46843580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5869_51645960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   _5869_51645960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   _5869_51645960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(_5869_51645960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,_5869_51645960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5869_51645960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[_5869_51645960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50415660();

   return behavior;
}

Behavior __50414900;

Behavior make__50414900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50414900 = behavior;
   behavior->owner = (Object)channel__w0_5853_46843580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47659420_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   abus__w_47659420_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   abus__w_47659420_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(abus__w_47659420_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,abus__w_47659420_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
abus__w_47659420_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[abus__w_47659420_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50415080();

   return behavior;
}

Behavior __50414580;

Behavior make__50414580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50414580 = behavior;
   behavior->owner = (Object)channel__w0_5853_46843580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5870_51645880_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   _5870_51645880_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   _5870_51645880_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(_5870_51645880_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,_5870_51645880_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5870_51645880_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[_5870_51645880_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50414860();

   return behavior;
}

Behavior __50413840;

Behavior make__50413840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50413840 = behavior;
   behavior->owner = (Object)channel__w0_5853_46843580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_47659720_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   dbus__w_47659720_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   dbus__w_47659720_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(dbus__w_47659720_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,dbus__w_47659720_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
dbus__w_47659720_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[dbus__w_47659720_channel__w0_5853_46843580_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50414100();

   return behavior;
}

Behavior __50413580;

Behavior make__50413580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50413580 = behavior;
   behavior->owner = (Object)channel__w0_5853_46843580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5871_43138800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   _5871_43138800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   _5871_43138800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(_5871_43138800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,_5871_43138800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5871_43138800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[_5871_43138800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50413800();

   return behavior;
}

Scope makechannel__w0_5853_46843580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5853_46843580 = scope;
   scope->owner = (Object)layer__output_58_84_46843880;
   scope->name = "channel_w0:53";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_46880320();
   scope->inners[1] = maketrig__w_46880300();
   scope->inners[2] = makedbus__r_47427300();
   scope->inners[3] = makedbus__w_47659720();
   scope->inners[4] = makeabus__r_47659580();
   scope->inners[5] = makeabus__w_47659420();
   scope->inners[6] = makemem_43169380();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5854_46843280();
   scope->scopes[1] = makewaddr_5859_46842720();
   scope->scopes[2] = makerinc_5864_46882600();
   scope->scopes[3] = makewinc_5868_46882180();
   scope->scopes[4] = makerdec_5872_46881620();
   scope->scopes[5] = makewdec_5877_46880760();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47444160();
   scope->behaviors[1] = make__50418480();
   scope->behaviors[2] = make__50418120();
   scope->behaviors[3] = make__50417520();
   scope->behaviors[4] = make__50417280();
   scope->behaviors[5] = make__50416520();
   scope->behaviors[6] = make__50416220();
   scope->behaviors[7] = make__50415700();
   scope->behaviors[8] = make__50415460();
   scope->behaviors[9] = make__50414900();
   scope->behaviors[10] = make__50414580();
   scope->behaviors[11] = make__50413840();
   scope->behaviors[12] = make__50413580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_5882_47444040;

SignalI reg__0_47562040_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makereg__0_47562040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47562040_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__accum_5882_47444040;
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

Scope anum_5883_47443700;

Scope makeanum_5883_47443700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5883_47443700 = scope;
   scope->owner = (Object)channel__accum_5882_47444040;
   scope->name = "anum:83";
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

Scope raddr_5885_47443160;

Scope makeraddr_5885_47443160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5885_47443160 = scope;
   scope->owner = (Object)channel__accum_5882_47444040;
   scope->name = "raddr:85";
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

Scope waddr_5888_47442700;

Scope makewaddr_5888_47442700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5888_47442700 = scope;
   scope->owner = (Object)channel__accum_5882_47444040;
   scope->name = "waddr:88";
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

Scope rinc_5891_47442180;

SignalI abus__r_47441800_rinc_5891_47442180_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeabus__r_47441800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47441800_rinc_5891_47442180_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)rinc_5891_47442180;
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

Scope makerinc_5891_47442180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5891_47442180 = scope;
   scope->owner = (Object)channel__accum_5882_47444040;
   scope->name = "rinc:91";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47441800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5895_47441680;

SignalI abus__w_47441180_winc_5895_47441680_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeabus__w_47441180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47441180_winc_5895_47441680_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)winc_5895_47441680;
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

Scope makewinc_5895_47441680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5895_47441680 = scope;
   scope->owner = (Object)channel__accum_5882_47444040;
   scope->name = "winc:95";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47441180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5899_47441040;

SignalI abus__r_47440600_rdec_5899_47441040_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeabus__r_47440600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47440600_rdec_5899_47441040_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)rdec_5899_47441040;
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

Scope makerdec_5899_47441040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5899_47441040 = scope;
   scope->owner = (Object)channel__accum_5882_47444040;
   scope->name = "rdec:99";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47440600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58103_47440460;

SignalI abus__w_47458360_wdec_58103_47440460_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeabus__w_47458360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47458360_wdec_58103_47440460_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)wdec_58103_47440460;
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

Scope makewdec_58103_47440460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58103_47440460 = scope;
   scope->owner = (Object)channel__accum_5882_47444040;
   scope->name = "wdec:103";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47458360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50443840;

Behavior make__50443840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50443840 = behavior;
   behavior->owner = (Object)channel__accum_5882_47444040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47562040_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   reg__0_47562040_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   reg__0_47562040_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(reg__0_47562040_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,reg__0_47562040_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
reg__0_47562040_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[reg__0_47562040_channel__accum_5882_47444040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50444000();

   return behavior;
}

Behavior __50443580;

Behavior make__50443580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50443580 = behavior;
   behavior->owner = (Object)channel__accum_5882_47444040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5884_51163960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   _5884_51163960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   _5884_51163960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(_5884_51163960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,_5884_51163960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5884_51163960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[_5884_51163960_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50443780();

   return behavior;
}

Scope makechannel__accum_5882_47444040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_5882_47444040 = scope;
   scope->owner = (Object)layer__output_58_84_46843880;
   scope->name = "channel_accum:82";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47562040();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5883_47443700();
   scope->scopes[1] = makeraddr_5885_47443160();
   scope->scopes[2] = makewaddr_5888_47442700();
   scope->scopes[3] = makerinc_5891_47442180();
   scope->scopes[4] = makewinc_5895_47441680();
   scope->scopes[5] = makerdec_5899_47441040();
   scope->scopes[6] = makewdec_58103_47440460();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50443840();
   scope->behaviors[1] = make__50443580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58107_47884800;

SignalI lv0_49692300_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makelv0_49692300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49692300_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)mac__n1_58107_47884800;
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

SignalI av0_49763240_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeav0_49763240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49763240_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)mac__n1_58107_47884800;
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

SignalI rv_49899740_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makerv_49899740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49899740_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)mac__n1_58107_47884800;
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

SignalI lvok0_49899720_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makelvok0_49899720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49899720_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)mac__n1_58107_47884800;
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

SignalI rvok_49899700_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makervok_49899700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49899700_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)mac__n1_58107_47884800;
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

SignalI run_49899680_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makerun_49899680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49899680_mac__n1_58107_47884800_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)mac__n1_58107_47884800;
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

Behavior __51694620;

Behavior make__51694620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51694620 = behavior;
   behavior->owner = (Object)mac__n1_58107_47884800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos += 1;
   clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos = realloc(clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos,clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos*sizeof(Object));
clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos[clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos-1] = (Object)behavior;
   behavior->block = make__49899560();

   return behavior;
}

Scope makemac__n1_58107_47884800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58107_47884800 = scope;
   scope->owner = (Object)layer__output_58_84_46843880;
   scope->name = "mac_n1:107";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49692300();
   scope->inners[1] = makeav0_49763240();
   scope->inners[2] = makerv_49899740();
   scope->inners[3] = makelvok0_49899720();
   scope->inners[4] = makervok_49899700();
   scope->inners[5] = makerun_49899680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51694620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58108_51694500;

SignalI reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makereg__0_43238960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__bias_58108_51694500;
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

Scope anum_58109_51694200;

Scope makeanum_58109_51694200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58109_51694200 = scope;
   scope->owner = (Object)channel__bias_58108_51694500;
   scope->name = "anum:109";
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

Scope raddr_58111_51693780;

Scope makeraddr_58111_51693780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58111_51693780 = scope;
   scope->owner = (Object)channel__bias_58108_51694500;
   scope->name = "raddr:111";
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

Scope waddr_58114_51693360;

Scope makewaddr_58114_51693360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58114_51693360 = scope;
   scope->owner = (Object)channel__bias_58108_51694500;
   scope->name = "waddr:114";
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

Scope rinc_58117_51692940;

SignalI abus__r_51692560_rinc_58117_51692940_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeabus__r_51692560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51692560_rinc_58117_51692940_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)rinc_58117_51692940;
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

Scope makerinc_58117_51692940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58117_51692940 = scope;
   scope->owner = (Object)channel__bias_58108_51694500;
   scope->name = "rinc:117";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51692560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58120_51692440;

SignalI abus__w_51692060_winc_58120_51692440_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeabus__w_51692060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51692060_winc_58120_51692440_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)winc_58120_51692440;
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

Behavior __50634020;

Behavior make__50634020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50634020 = behavior;
   behavior->owner = (Object)winc_58120_51692440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_51692060_winc_58120_51692440_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   abus__w_51692060_winc_58120_51692440_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   abus__w_51692060_winc_58120_51692440_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(abus__w_51692060_winc_58120_51692440_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,abus__w_51692060_winc_58120_51692440_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
abus__w_51692060_winc_58120_51692440_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[abus__w_51692060_winc_58120_51692440_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50634220();

   return behavior;
}

Behavior __50633820;

Behavior make__50633820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50633820 = behavior;
   behavior->owner = (Object)winc_58120_51692440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   _58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   _58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(_58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,_58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[_58122_45457620_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50633980();

   return behavior;
}

Scope makewinc_58120_51692440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58120_51692440 = scope;
   scope->owner = (Object)channel__bias_58108_51694500;
   scope->name = "winc:120";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51692060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50634020();
   scope->behaviors[1] = make__50633820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58123_51691680;

SignalI abus__r_51715820_rdec_58123_51691680_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeabus__r_51715820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51715820_rdec_58123_51691680_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)rdec_58123_51691680;
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

Scope makerdec_58123_51691680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58123_51691680 = scope;
   scope->owner = (Object)channel__bias_58108_51694500;
   scope->name = "rdec:123";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51715820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58127_51715700;

SignalI abus__w_51715320_wdec_58127_51715700_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeabus__w_51715320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51715320_wdec_58127_51715700_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)wdec_58127_51715700;
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

Scope makewdec_58127_51715700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58127_51715700 = scope;
   scope->owner = (Object)channel__bias_58108_51694500;
   scope->name = "wdec:127";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51715320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50441020;

Behavior make__50441020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50441020 = behavior;
   behavior->owner = (Object)channel__bias_58108_51694500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50441300();

   return behavior;
}

Behavior __50440760;

Behavior make__50440760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50440760 = behavior;
   behavior->owner = (Object)channel__bias_58108_51694500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58110_51290720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   _58110_51290720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   _58110_51290720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(_58110_51290720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,_58110_51290720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_58110_51290720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[_58110_51290720_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50440980();

   return behavior;
}

Behavior __50440040;

Behavior make__50440040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50440040 = behavior;
   behavior->owner = (Object)channel__bias_58108_51694500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[reg__0_43238960_channel__bias_58108_51694500_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50440220();

   return behavior;
}

Behavior __50439800;

Behavior make__50439800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50439800 = behavior;
   behavior->owner = (Object)channel__bias_58108_51694500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58121_45457840_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   _58121_45457840_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   _58121_45457840_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(_58121_45457840_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,_58121_45457840_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_58121_45457840_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[_58121_45457840_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50439960();

   return behavior;
}

Scope makechannel__bias_58108_51694500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58108_51694500 = scope;
   scope->owner = (Object)layer__output_58_84_46843880;
   scope->name = "channel_bias:108";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_43238960();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58109_51694200();
   scope->scopes[1] = makeraddr_58111_51693780();
   scope->scopes[2] = makewaddr_58114_51693360();
   scope->scopes[3] = makerinc_58117_51692940();
   scope->scopes[4] = makewinc_58120_51692440();
   scope->scopes[5] = makerdec_58123_51691680();
   scope->scopes[6] = makewdec_58127_51715700();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50441020();
   scope->behaviors[1] = make__50440760();
   scope->behaviors[2] = make__50440040();
   scope->behaviors[3] = make__50439800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58131_47424360;

SignalI reg__0_47538180_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makereg__0_47538180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47538180_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__z_58131_47424360;
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

Scope anum_58132_47423960;

Scope makeanum_58132_47423960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58132_47423960 = scope;
   scope->owner = (Object)channel__z_58131_47424360;
   scope->name = "anum:132";
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

Scope raddr_58134_47423520;

Scope makeraddr_58134_47423520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58134_47423520 = scope;
   scope->owner = (Object)channel__z_58131_47424360;
   scope->name = "raddr:134";
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

Scope waddr_58137_47447520;

Scope makewaddr_58137_47447520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58137_47447520 = scope;
   scope->owner = (Object)channel__z_58131_47424360;
   scope->name = "waddr:137";
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

Scope rinc_58140_47447040;

SignalI abus__r_47446620_rinc_58140_47447040_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeabus__r_47446620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47446620_rinc_58140_47447040_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)rinc_58140_47447040;
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

Scope makerinc_58140_47447040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58140_47447040 = scope;
   scope->owner = (Object)channel__z_58131_47424360;
   scope->name = "rinc:140";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47446620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58143_47446420;

SignalI abus__w_47445940_winc_58143_47446420_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeabus__w_47445940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47445940_winc_58143_47446420_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)winc_58143_47446420;
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

Scope makewinc_58143_47446420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58143_47446420 = scope;
   scope->owner = (Object)channel__z_58131_47424360;
   scope->name = "winc:143";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47445940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58146_47445800;

SignalI abus__r_47445080_rdec_58146_47445800_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeabus__r_47445080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47445080_rdec_58146_47445800_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)rdec_58146_47445800;
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

Scope makerdec_58146_47445800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58146_47445800 = scope;
   scope->owner = (Object)channel__z_58131_47424360;
   scope->name = "rdec:146";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47445080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58150_47444940;

SignalI abus__w_47444280_wdec_58150_47444940_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makeabus__w_47444280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47444280_wdec_58150_47444940_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)wdec_58150_47444940;
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

Scope makewdec_58150_47444940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58150_47444940 = scope;
   scope->owner = (Object)channel__z_58131_47424360;
   scope->name = "wdec:150";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47444280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50632080;

Behavior make__50632080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50632080 = behavior;
   behavior->owner = (Object)channel__z_58131_47424360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47538180_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   reg__0_47538180_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   reg__0_47538180_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(reg__0_47538180_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,reg__0_47538180_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
reg__0_47538180_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[reg__0_47538180_channel__z_58131_47424360_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50632280();

   return behavior;
}

Behavior __50631740;

Behavior make__50631740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50631740 = behavior;
   behavior->owner = (Object)channel__z_58131_47424360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58133_51401040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   _58133_51401040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   _58133_51401040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(_58133_51401040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,_58133_51401040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_58133_51401040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[_58133_51401040_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50632000();

   return behavior;
}

Scope makechannel__z_58131_47424360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58131_47424360 = scope;
   scope->owner = (Object)layer__output_58_84_46843880;
   scope->name = "channel_z:131";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47538180();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58132_47423960();
   scope->scopes[1] = makeraddr_58134_47423520();
   scope->scopes[2] = makewaddr_58137_47447520();
   scope->scopes[3] = makerinc_58140_47447040();
   scope->scopes[4] = makewinc_58143_47446420();
   scope->scopes[5] = makerdec_58146_47445800();
   scope->scopes[6] = makewdec_58150_47444940();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50632080();
   scope->behaviors[1] = make__50631740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58154_47915120;

SignalI lv0_49639960_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makelv0_49639960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49639960_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)add__n_58154_47915120;
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

SignalI rv0_49725520_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makerv0_49725520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_49725520_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)add__n_58154_47915120;
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

SignalI lvok0_49725500_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makelvok0_49725500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49725500_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)add__n_58154_47915120;
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

SignalI rvok0_49725480_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makervok0_49725480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49725480_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)add__n_58154_47915120;
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

SignalI run_49725460_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480;

SignalI makerun_49725460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49725460_add__n_58154_47915120_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)add__n_58154_47915120;
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

Behavior __50828880;

Behavior make__50828880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50828880 = behavior;
   behavior->owner = (Object)add__n_58154_47915120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos += 1;
   clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos = realloc(clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos,clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos*sizeof(Object));
clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos[clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos-1] = (Object)behavior;
   behavior->block = make__49766260();

   return behavior;
}

Scope makeadd__n_58154_47915120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58154_47915120 = scope;
   scope->owner = (Object)layer__output_58_84_46843880;
   scope->name = "add_n:154";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49639960();
   scope->inners[1] = makerv0_49725520();
   scope->inners[2] = makelvok0_49725500();
   scope->inners[3] = makervok0_49725480();
   scope->inners[4] = makerun_49725460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50828880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47542080;

Behavior make__47542080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47542080 = behavior;
   behavior->owner = (Object)layer__output_58_84_46843880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos += 1;
   clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos = realloc(clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos,clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos*sizeof(Object));
clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos[clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos-1] = (Object)behavior;
   behavior->block = make__46879820();

   return behavior;
}

Behavior __48089800;

Behavior make__48089800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48089800 = behavior;
   behavior->owner = (Object)layer__output_58_84_46843880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos += 1;
   clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos = realloc(clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos,clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos*sizeof(Object));
clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos[clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos-1] = (Object)behavior;
   behavior->block = make__47541940();

   return behavior;
}

Behavior __49946880;

Behavior make__49946880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49946880 = behavior;
   behavior->owner = (Object)layer__output_58_84_46843880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos += 1;
   clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos = realloc(clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos,clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos*sizeof(Object));
clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->pos[clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_pos-1] = (Object)behavior;
   behavior->block = make__48089620();

   return behavior;
}

Behavior __50421140;

Behavior make__50421140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50421140 = behavior;
   behavior->owner = (Object)layer__output_58_84_46843880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,value__z0_51552080_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   value__z0_51552080_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   value__z0_51552080_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(value__z0_51552080_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,value__z0_51552080_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
value__z0_51552080_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[value__z0_51552080_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__a00_51645980_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   ack__a00_51645980_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   ack__a00_51645980_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(ack__a00_51645980_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,ack__a00_51645980_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
ack__a00_51645980_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[ack__a00_51645980_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50399600();

   return behavior;
}

Behavior __50420920;

Behavior make__50420920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50420920 = behavior;
   behavior->owner = (Object)layer__output_58_84_46843880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_51401640_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   a_51401640_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   a_51401640_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(a_51401640_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,a_51401640_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
a_51401640_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[a_51401640_func0_58_840_51044640_layer__output_58_84_46843880_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50399540();

   return behavior;
}

Scope makelayer__output_58_84_46843880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer__output_58_84_46843880 = scope;
   scope->owner = (Object)layer__output_58_840_49971080;
   scope->name = "layer_output:T";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makefunc0_51401500();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__mac_50828740();
   scope->inners[1] = makeack__add_50828720();
   scope->inners[2] = make_5867_50996380();
   scope->inners[3] = make_5865_50996360();
   scope->inners[4] = make_5866_50996280();
   scope->inners[5] = make_5884_51163960();
   scope->inners[6] = make_58110_51290720();
   scope->inners[7] = make_58133_51401040();
   scope->inners[8] = makevalue__z0_51552080();
   scope->inners[9] = makevalue__a00_51646020();
   scope->inners[10] = makeflag__z0_51646000();
   scope->inners[11] = makeack__a00_51645980();
   scope->inners[12] = make_5869_51645960();
   scope->inners[13] = make_5870_51645880();
   scope->inners[14] = make_5871_43138800();
   scope->inners[15] = make_58121_45457840();
   scope->inners[16] = make_58122_45457620();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5853_46843580();
   scope->scopes[1] = makechannel__accum_5882_47444040();
   scope->scopes[2] = makemac__n1_58107_47884800();
   scope->scopes[3] = makechannel__bias_58108_51694500();
   scope->scopes[4] = makechannel__z_58131_47424360();
   scope->scopes[5] = makeadd__n_58154_47915120();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47542080();
   scope->behaviors[1] = make__48089800();
   scope->behaviors[2] = make__49946880();
   scope->behaviors[3] = make__50421140();
   scope->behaviors[4] = make__50420920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer__output_58_840_49971080() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer__output_58_840_49971080 = systemT;
systemT->owner = NULL;
   systemT->name = "layer_output:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_49968660();
   systemT->inputs[1] = makerst_49968620();
   systemT->inputs[2] = makefill_49968600();
   systemT->inputs[3] = makereq_49968580();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__0_49968520();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer__output_58_84_46843880();

   return systemT;
}