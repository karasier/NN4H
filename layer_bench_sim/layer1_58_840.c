#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_61950180;

SignalI clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeclk_61948300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_840_61950180;
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

SignalI rst_61948260_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makerst_61948260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_61948260_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_840_61950180;
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

SignalI fill_61948240_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makefill_61948240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_61948240_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_840_61950180;
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

SignalI req_61948180_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makereq_61948180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_61948180_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_840_61950180;
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

SignalI ack__1_61948140_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeack__1_61948140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_61948140_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_840_61950180;
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

Block __61224740;

Block __61224200;

Block __61224040;

void code__61224040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_52800720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,value__z0_53123300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48070460(),flag__z0_53808400_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__61224040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61224040 = block;
   block->owner = (Object)__61224200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61224040;

   return block;
};

void code__61224200() {
 code__61224040();
}

Block make__61224200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61224200 = block;
   block->owner = (Object)__61224740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61224200;

   return block;
};

Block __61224580;

void code__61224580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48070360(),flag__z0_53808400_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__61224580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61224580 = block;
   block->owner = (Object)__61224740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61224580;

   return block;
};

void code__61224740() {
   {
      Value cond = ack__add_54908640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61224200();
   }
   else {
  code__61224580();
   }
      }
   }
}

Block make__61224740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61224740 = block;
   block->owner = (Object)__61435800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61224740;

   return block;
};

Block __61435680;

Block __61435460;

Block __61435300;

void code__61435300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a10_53808420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,_5862_50121720______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48064880(),ack__a10_53808380_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__61435300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61435300 = block;
   block->owner = (Object)__61435460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61435300;

   return block;
};

void code__61435460() {
 code__61435300();
}

Block make__61435460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61435460 = block;
   block->owner = (Object)__61435680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61435460;

   return block;
};

void code__61435680() {
   {
      Value cond = flag__z0_53808400_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61435460();
   }
      }
   }
}

Block make__61435680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61435680 = block;
   block->owner = (Object)__61580400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61435680;

   return block;
};

Block __61580280;

Block __61580080;

Block __61579700;

void code__61579700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48064140(),_58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__61579700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61579700 = block;
   block->owner = (Object)__61580080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61579700;

   return block;
};

void code__61580080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61948260_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48064560();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61579700();
   }
      }
   }
}

Block make__61580080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61580080 = block;
   block->owner = (Object)__61580280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61580080;

   return block;
};

Block __61603780;

Block __61603460;

void code__61603460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48062960(),_58252_53808240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__61603460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61603460 = block;
   block->owner = (Object)__61603780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61603460;

   return block;
};

void code__61603780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61948260_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48063320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61603460();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48086900(),_58251_53808360_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__61603780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61603780 = block;
   block->owner = (Object)__61580280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61603780;

   return block;
};

Block __61602780;

Block __61602580;

Block __61602200;

void code__61602200() {
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
                  src0 = _58252_53808240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48086320();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58252_53808240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48086040(),_58251_53808360_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48079160(),_58253_54301300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__61602200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61602200 = block;
   block->owner = (Object)__61602580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61602200;

   return block;
};

void code__61602580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61948260_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48086720();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61602200();
   }
      }
   }
}

Block make__61602580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61602580 = block;
   block->owner = (Object)__61602780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61602580;

   return block;
};

Block __61678820;

Block __61678500;

Block __61678040;

void code__61678040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48101120(),_58303_54649240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__61678040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61678040 = block;
   block->owner = (Object)__61678500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61678040;

   return block;
};

void code__61678500() {
{
      Value value = _58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__48101200())) {
    code__61678040();
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
                  src0 = _58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48100540();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__61678500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61678500 = block;
   block->owner = (Object)__61678820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61678500;

   return block;
};

void code__61678820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61948260_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48102560();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61678500();
   }
      }
   }
}

Block make__61678820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61678820 = block;
   block->owner = (Object)__61602780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61678820;

   return block;
};

void code__61602780() {
 code__61602580();
 code__61678820();
}

Block make__61602780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61602780 = block;
   block->owner = (Object)__61580280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61602780;

   return block;
};

void code__61580280() {
 code__61580080();
 code__61603780();
   {
      Value cond = fill_61948240_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61602780();
   }
      }
   }
}

Block make__61580280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61580280 = block;
   block->owner = (Object)__61950580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61580280;

   return block;
};

Block __62939320;

void code__62939320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_53123300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,z__value_60404240_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a10_53808380_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,ack__1_61948140_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62939320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62939320 = block;
   block->owner = (Object)__62977960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62939320;

   return block;
};

Block __62939220;

void code__62939220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_60661960_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,value__a10_53808420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62939220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62939220 = block;
   block->owner = (Object)__62977800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62939220;

   return block;
};

Block __52752660;

Block __53135000;

void code__53135000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48563620_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,make_ref_rangeS(mem_49408220_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920,value2integer(abus__w_48563280_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value),value2integer(abus__w_48563280_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__53135000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53135000 = block;
   block->owner = (Object)__52752660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53135000;

   return block;
};

void code__52752660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49408220_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
            idx = value2integer(abus__r_48563440_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48186300_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_47764520_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53135000();
   }
      }
   }
}

Block make__52752660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52752660 = block;
   block->owner = (Object)__53966040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52752660;

   return block;
};

Block __62977080;

void code__62977080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48186300_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,_58249_55165980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62977080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62977080 = block;
   block->owner = (Object)__62976920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62977080;

   return block;
};

Block __62976880;

void code__62976880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_55165980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,dbus__r_48186300_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62976880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62976880 = block;
   block->owner = (Object)__62976720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62976880;

   return block;
};

Block __62976420;

void code__62976420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_47764540_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,_58247_55165900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62976420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62976420 = block;
   block->owner = (Object)__62976220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62976420;

   return block;
};

Block __62976180;

void code__62976180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58247_55165900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,trig__r_47764540_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62976180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62976180 = block;
   block->owner = (Object)__62975960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62976180;

   return block;
};

Block __62975660;

void code__62975660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48563440_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,_58248_55165500_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62975660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62975660 = block;
   block->owner = (Object)__62975500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62975660;

   return block;
};

Block __62975460;

void code__62975460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58248_55165500_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,abus__r_48563440_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62975460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62975460 = block;
   block->owner = (Object)__62975300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62975460;

   return block;
};

Block __62975000;

void code__62975000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_47764520_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,_58251_53808360_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62975000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62975000 = block;
   block->owner = (Object)__62974840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62975000;

   return block;
};

Block __62974800;

void code__62974800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58251_53808360_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,trig__w_47764520_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62974800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62974800 = block;
   block->owner = (Object)__62974640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62974800;

   return block;
};

Block __62974340;

void code__62974340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48563280_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,_58252_53808240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62974340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62974340 = block;
   block->owner = (Object)__62974140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62974340;

   return block;
};

Block __62974100;

void code__62974100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58252_53808240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,abus__w_48563280_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62974100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62974100 = block;
   block->owner = (Object)__62973880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62974100;

   return block;
};

Block __62973580;

void code__62973580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48563620_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,_58253_54301300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62973580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62973580 = block;
   block->owner = (Object)__62973420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62973580;

   return block;
};

Block __62973380;

void code__62973380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58253_54301300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,dbus__w_48563620_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62973380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62973380 = block;
   block->owner = (Object)__62973220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62973380;

   return block;
};

Block __62996140;

void code__62996140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54159040_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,_58266_49326980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62996140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62996140 = block;
   block->owner = (Object)__62995980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62996140;

   return block;
};

Block __62995940;

void code__62995940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_49326980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,reg__0_54159040_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62995940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62995940 = block;
   block->owner = (Object)__62995780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62995940;

   return block;
};

Block __55243900;

Block __55243520;

Block __55242320;

void code__55242320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47859460(),_58248_55165500_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__55242320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55242320 = block;
   block->owner = (Object)__55243520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55242320;

   return block;
};

void code__55243520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61948260_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47859780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55242320();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47858640(),_58247_55165900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__55243520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55243520 = block;
   block->owner = (Object)__55243900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55243520;

   return block;
};

Block __55241500;

Block __55241180;

void code__55241180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47912500(),_5845_50040400______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__55241180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55241180 = block;
   block->owner = (Object)__55241500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55241180;

   return block;
};

void code__55241500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61948260_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47913860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55241180();
   }
      }
   }
}

Block make__55241500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55241500 = block;
   block->owner = (Object)__55243900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55241500;

   return block;
};

Block __48153020;

Block __48176680;

Block __48175620;

Block __48174640;

void code__48174640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_49924660______58_84_49959720______58_840_62073920->c_value,rv_55244240_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__48174640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48174640 = block;
   block->owner = (Object)__48175620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48174640;

   return block;
};

Block __49409720;

void code__49409720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_50040480______58_84_49959720______58_840_62073920->c_value,rv_55244240_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__49409720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49409720 = block;
   block->owner = (Object)__48175620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49409720;

   return block;
};

void code__48175620() {
{
      Value value = _5845_50040400______58_84_49959720______58_840_62073920->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__47911320())) {
    code__48174640();
         }
         else if (value2integer(value) == value2integer(make__47910960())) {
    code__49409720();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47910480(),rvok_55244200_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
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
                  src0 = _5845_50040400______58_84_49959720______58_840_62073920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47910020();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_50040400______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__48175620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48175620 = block;
   block->owner = (Object)__48176680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48175620;

   return block;
};

void code__48176680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61948260_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47911540();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48175620();
   }
      }
   }
}

Block make__48176680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48176680 = block;
   block->owner = (Object)__48153020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48176680;

   return block;
};

Block __50072200;

Block __50071300;

Block __50070640;

void code__50070640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_55165980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,lv0_54712460_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47908480(),lvok0_55244220_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__50070640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50070640 = block;
   block->owner = (Object)__50071300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50070640;

   return block;
};

void code__50071300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58247_55165900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47908900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50070640();
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
                  src0 = _58248_55165500_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47908220();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58248_55165500_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47930460(),_58247_55165900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__50071300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50071300 = block;
   block->owner = (Object)__50072200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50071300;

   return block;
};

void code__50072200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_61948260_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47909120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50071300();
   }
      }
   }
}

Block make__50072200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50072200 = block;
   block->owner = (Object)__48153020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50072200;

   return block;
};

Block __52804640;

Block __52803640;

Block __52803420;

void code__52803420() {
}

Block make__52803420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52803420 = block;
   block->owner = (Object)__52803640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52803420;

   return block;
};

Block __54350600;

void code__54350600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_54907960_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,_58266_49326980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54350600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54350600 = block;
   block->owner = (Object)__52803640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54350600;

   return block;
};

void code__52803640() {
 code__52803420();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_54907960_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
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
                              src0 = lv0_54712460_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_55244240_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47926160();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_54907960_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
 code__54350600();
}

Block make__52803640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52803640 = block;
   block->owner = (Object)__52804640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52803640;

   return block;
};

void code__52804640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47927400(),ack__mac_54908720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47926900(),run_55244160_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
 code__52803640();
}

Block make__52804640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52804640 = block;
   block->owner = (Object)__48153020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52804640;

   return block;
};

void code__48153020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47911640(),run_55244160_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
 code__48176680();
 code__50072200();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_55244220_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
         src1 = rvok_55244200_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52804640();
   }
      }
   }
}

Block make__48153020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48153020 = block;
   block->owner = (Object)__55243900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48153020;

   return block;
};

Block __55239380;

void code__55239380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47925760(),rvok_55244200_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47925520(),lvok0_55244220_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47925360(),av0_54907960_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__55239380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55239380 = block;
   block->owner = (Object)__55243900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55239380;

   return block;
};

void code__55243900() {
 code__55243520();
 code__55241500();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47912180(),ack__mac_54908720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47911880(),run_55244160_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_61948180_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
         src1 = run_55244160_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48153020();
   }
   else {
  code__55239380();
   }
      }
   }
}

Block make__55243900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55243900 = block;
   block->owner = (Object)__54665260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55243900;

   return block;
};

Block __62993960;

void code__62993960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,_58292_49995420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62993960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62993960 = block;
   block->owner = (Object)__62993800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62993960;

   return block;
};

Block __62993760;

void code__62993760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_49995420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62993760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62993760 = block;
   block->owner = (Object)__62993600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62993760;

   return block;
};

Block __62993300;

void code__62993300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,_58303_54649240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62993300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62993300 = block;
   block->owner = (Object)__62993140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62993300;

   return block;
};

Block __62993100;

void code__62993100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58303_54649240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62993100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62993100 = block;
   block->owner = (Object)__62992940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62993100;

   return block;
};

Block __62991260;

void code__62991260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_54685520_winc_58302_54686020_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,_58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62991260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62991260 = block;
   block->owner = (Object)__62991100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62991260;

   return block;
};

Block __62991060;

void code__62991060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,abus__w_54685520_winc_58302_54686020_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62991060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62991060 = block;
   block->owner = (Object)__62990900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62991060;

   return block;
};

Block __62989680;

void code__62989680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49878260_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,_58315_52800720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62989680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62989680 = block;
   block->owner = (Object)__62989520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62989680;

   return block;
};

Block __62989480;

void code__62989480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_52800720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,reg__0_49878260_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62989480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62989480 = block;
   block->owner = (Object)__62989320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62989480;

   return block;
};

Block __53022700;

Block __53020820;

Block __53020160;

void code__53020160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_49326980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,lv0_52870020_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48000700(),lvok0_53023040_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__53020160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53020160 = block;
   block->owner = (Object)__53020820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53020160;

   return block;
};

Block __53357400;

void code__53357400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_49995420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,rv0_53023080_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48020540(),rvok0_53023020_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__53357400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53357400 = block;
   block->owner = (Object)__53020820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53357400;

   return block;
};

Block __54022240;

Block __54021560;

void code__54021560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_52870020_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
      src1 = rv0_53023080_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58315_52800720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__54021560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54021560 = block;
   block->owner = (Object)__54022240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54021560;

   return block;
};

void code__54022240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48020160(),run_53023000_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48020040(),ack__add_54908640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
 code__54021560();
}

Block make__54022240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54022240 = block;
   block->owner = (Object)__53020820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54022240;

   return block;
};

void code__53020820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48001420(),run_53023000_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
 code__53020160();
 code__53357400();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53023040_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
         src1 = rvok0_53023020_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54022240();
   }
      }
   }
}

Block make__53020820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53020820 = block;
   block->owner = (Object)__53022700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53020820;

   return block;
};

Block __53021680;

void code__53021680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48018600(),lvok0_53023040_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48018000(),rvok0_53023020_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__53021680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53021680 = block;
   block->owner = (Object)__53022700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53021680;

   return block;
};

void code__53022700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47985020(),ack__add_54908640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47984560(),run_53023000_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_54908720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
         src1 = run_53023000_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53020820();
   }
   else {
  code__53021680();
   }
      }
   }
}

Block make__53022700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53022700 = block;
   block->owner = (Object)__54909000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53022700;

   return block;
};

Value make__47859780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47859460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47858640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47913860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47912500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47912180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47911880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47911640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47911540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47911320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47910960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47910480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47910020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47909120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47908900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47908480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47908220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47930460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47927400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47926900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47926160() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47925760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47925520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47925360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47985020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47984560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48001420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48000700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48020540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48020160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48020040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48018600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48018000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48070460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48070360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48064880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48064560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48064140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__48063320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48062960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48086900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48086720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48086320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48086040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48079160() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48102560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48101200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__48101120() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48100540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer1_58_84_45842480;

SignalI ack__mac_54908720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeack__mac_54908720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_54908720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI ack__add_54908640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeack__add_54908640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_54908640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI _58249_55165980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI make_58249_55165980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58249_55165980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI _58247_55165900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI make_58247_55165900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58247_55165900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI _58248_55165500_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI make_58248_55165500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58248_55165500_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI _58266_49326980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI make_58266_49326980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_49326980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI _58292_49995420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI make_58292_49995420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58292_49995420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI _58315_52800720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI make_58315_52800720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_52800720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI value__z0_53123300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makevalue__z0_53123300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_53123300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI value__a10_53808420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makevalue__a10_53808420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a10_53808420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI flag__z0_53808400_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeflag__z0_53808400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_53808400_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI ack__a10_53808380_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeack__a10_53808380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a10_53808380_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI _58251_53808360_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI make_58251_53808360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58251_53808360_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI _58252_53808240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI make_58252_53808240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58252_53808240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI _58253_54301300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI make_58253_54301300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58253_54301300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI _58303_54649240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI make_58303_54649240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58303_54649240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SignalI _58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI make_58304_54649140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)layer1_58_84_45842480;
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

SystemI func0_60686120;

SystemI makefunc0_60686120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_60686120 = systemI;
   systemI->owner = (Object)layer1_58_84_45842480;
   systemI->name = "func0";
   systemI->system = func0_58_8400_60197620;

   return systemI;
};

Scope channel__w0_58235_45864100;

SignalI trig__r_47764540_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI maketrig__r_47764540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47764540_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w0_58235_45864100;
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

SignalI trig__w_47764520_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI maketrig__w_47764520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_47764520_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w0_58235_45864100;
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

SignalI dbus__r_48186300_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makedbus__r_48186300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48186300_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w0_58235_45864100;
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

SignalI dbus__w_48563620_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makedbus__w_48563620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48563620_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w0_58235_45864100;
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

SignalI abus__r_48563440_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeabus__r_48563440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48563440_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w0_58235_45864100;
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

SignalI abus__w_48563280_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeabus__w_48563280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48563280_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w0_58235_45864100;
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

SignalI mem_49408220_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makemem_49408220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49408220_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__w0_58235_45864100;
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

Scope raddr_58236_45900560;

Scope makeraddr_58236_45900560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58236_45900560 = scope;
   scope->owner = (Object)channel__w0_58235_45864100;
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

Scope waddr_58241_46147240;

Scope makewaddr_58241_46147240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58241_46147240 = scope;
   scope->owner = (Object)channel__w0_58235_45864100;
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

Scope rinc_58246_46235820;

Scope makerinc_58246_46235820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58246_46235820 = scope;
   scope->owner = (Object)channel__w0_58235_45864100;
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

Scope winc_58250_46281680;

Scope makewinc_58250_46281680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58250_46281680 = scope;
   scope->owner = (Object)channel__w0_58235_45864100;
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

Scope rdec_58254_46381600;

Scope makerdec_58254_46381600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58254_46381600 = scope;
   scope->owner = (Object)channel__w0_58235_45864100;
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

Scope wdec_58259_47766520;

Scope makewdec_58259_47766520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58259_47766520 = scope;
   scope->owner = (Object)channel__w0_58235_45864100;
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

Behavior __53966040;

Behavior make__53966040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53966040 = behavior;
   behavior->owner = (Object)channel__w0_58235_45864100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_neg += 1;
   clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->neg = realloc(clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->neg,clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_neg*sizeof(Object));
clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->neg[clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_neg-1] = (Object)behavior;
   behavior->block = make__52752660();

   return behavior;
}

Behavior __62976920;

Behavior make__62976920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62976920 = behavior;
   behavior->owner = (Object)channel__w0_58235_45864100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48186300_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   dbus__r_48186300_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   dbus__r_48186300_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(dbus__r_48186300_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,dbus__r_48186300_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
dbus__r_48186300_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[dbus__r_48186300_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62977080();

   return behavior;
}

Behavior __62976720;

Behavior make__62976720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62976720 = behavior;
   behavior->owner = (Object)channel__w0_58235_45864100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58249_55165980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   _58249_55165980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   _58249_55165980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(_58249_55165980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,_58249_55165980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58249_55165980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[_58249_55165980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62976880();

   return behavior;
}

Behavior __62976220;

Behavior make__62976220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62976220 = behavior;
   behavior->owner = (Object)channel__w0_58235_45864100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_47764540_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   trig__r_47764540_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   trig__r_47764540_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(trig__r_47764540_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,trig__r_47764540_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
trig__r_47764540_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[trig__r_47764540_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62976420();

   return behavior;
}

Behavior __62975960;

Behavior make__62975960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62975960 = behavior;
   behavior->owner = (Object)channel__w0_58235_45864100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58247_55165900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   _58247_55165900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   _58247_55165900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(_58247_55165900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,_58247_55165900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58247_55165900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[_58247_55165900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62976180();

   return behavior;
}

Behavior __62975500;

Behavior make__62975500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62975500 = behavior;
   behavior->owner = (Object)channel__w0_58235_45864100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48563440_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   abus__r_48563440_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   abus__r_48563440_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(abus__r_48563440_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,abus__r_48563440_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
abus__r_48563440_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[abus__r_48563440_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62975660();

   return behavior;
}

Behavior __62975300;

Behavior make__62975300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62975300 = behavior;
   behavior->owner = (Object)channel__w0_58235_45864100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58248_55165500_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   _58248_55165500_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   _58248_55165500_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(_58248_55165500_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,_58248_55165500_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58248_55165500_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[_58248_55165500_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62975460();

   return behavior;
}

Behavior __62974840;

Behavior make__62974840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62974840 = behavior;
   behavior->owner = (Object)channel__w0_58235_45864100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_47764520_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   trig__w_47764520_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   trig__w_47764520_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(trig__w_47764520_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,trig__w_47764520_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
trig__w_47764520_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[trig__w_47764520_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62975000();

   return behavior;
}

Behavior __62974640;

Behavior make__62974640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62974640 = behavior;
   behavior->owner = (Object)channel__w0_58235_45864100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58251_53808360_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   _58251_53808360_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   _58251_53808360_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(_58251_53808360_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,_58251_53808360_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58251_53808360_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[_58251_53808360_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62974800();

   return behavior;
}

Behavior __62974140;

Behavior make__62974140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62974140 = behavior;
   behavior->owner = (Object)channel__w0_58235_45864100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48563280_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   abus__w_48563280_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   abus__w_48563280_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(abus__w_48563280_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,abus__w_48563280_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
abus__w_48563280_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[abus__w_48563280_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62974340();

   return behavior;
}

Behavior __62973880;

Behavior make__62973880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62973880 = behavior;
   behavior->owner = (Object)channel__w0_58235_45864100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58252_53808240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   _58252_53808240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   _58252_53808240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(_58252_53808240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,_58252_53808240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58252_53808240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[_58252_53808240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62974100();

   return behavior;
}

Behavior __62973420;

Behavior make__62973420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62973420 = behavior;
   behavior->owner = (Object)channel__w0_58235_45864100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48563620_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   dbus__w_48563620_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   dbus__w_48563620_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(dbus__w_48563620_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,dbus__w_48563620_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
dbus__w_48563620_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[dbus__w_48563620_channel__w0_58235_45864100_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62973580();

   return behavior;
}

Behavior __62973220;

Behavior make__62973220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62973220 = behavior;
   behavior->owner = (Object)channel__w0_58235_45864100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58253_54301300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   _58253_54301300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   _58253_54301300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(_58253_54301300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,_58253_54301300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58253_54301300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[_58253_54301300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62973380();

   return behavior;
}

Scope makechannel__w0_58235_45864100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58235_45864100 = scope;
   scope->owner = (Object)layer1_58_84_45842480;
   scope->name = "channel_w0:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47764540();
   scope->inners[1] = maketrig__w_47764520();
   scope->inners[2] = makedbus__r_48186300();
   scope->inners[3] = makedbus__w_48563620();
   scope->inners[4] = makeabus__r_48563440();
   scope->inners[5] = makeabus__w_48563280();
   scope->inners[6] = makemem_49408220();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58236_45900560();
   scope->scopes[1] = makewaddr_58241_46147240();
   scope->scopes[2] = makerinc_58246_46235820();
   scope->scopes[3] = makewinc_58250_46281680();
   scope->scopes[4] = makerdec_58254_46381600();
   scope->scopes[5] = makewdec_58259_47766520();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53966040();
   scope->behaviors[1] = make__62976920();
   scope->behaviors[2] = make__62976720();
   scope->behaviors[3] = make__62976220();
   scope->behaviors[4] = make__62975960();
   scope->behaviors[5] = make__62975500();
   scope->behaviors[6] = make__62975300();
   scope->behaviors[7] = make__62974840();
   scope->behaviors[8] = make__62974640();
   scope->behaviors[9] = make__62974140();
   scope->behaviors[10] = make__62973880();
   scope->behaviors[11] = make__62973420();
   scope->behaviors[12] = make__62973220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58264_53965900;

SignalI reg__0_54159040_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makereg__0_54159040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_54159040_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__accum_58264_53965900;
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

Scope anum_58265_53965420;

Scope makeanum_58265_53965420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58265_53965420 = scope;
   scope->owner = (Object)channel__accum_58264_53965900;
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

Scope raddr_58267_53964640;

Scope makeraddr_58267_53964640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58267_53964640 = scope;
   scope->owner = (Object)channel__accum_58264_53965900;
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

Scope waddr_58270_53963720;

Scope makewaddr_58270_53963720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58270_53963720 = scope;
   scope->owner = (Object)channel__accum_58264_53965900;
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

Scope rinc_58273_53963220;

SignalI abus__r_53962720_rinc_58273_53963220_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeabus__r_53962720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53962720_rinc_58273_53963220_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rinc_58273_53963220;
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

Scope makerinc_58273_53963220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_53963220 = scope;
   scope->owner = (Object)channel__accum_58264_53965900;
   scope->name = "rinc:273";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53962720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58277_53962600;

SignalI abus__w_53961880_winc_58277_53962600_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeabus__w_53961880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53961880_winc_58277_53962600_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)winc_58277_53962600;
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

Scope makewinc_58277_53962600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58277_53962600 = scope;
   scope->owner = (Object)channel__accum_58264_53965900;
   scope->name = "winc:277";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53961880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58281_53961400;

SignalI abus__r_53960920_rdec_58281_53961400_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeabus__r_53960920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53960920_rdec_58281_53961400_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rdec_58281_53961400;
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

Scope makerdec_58281_53961400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58281_53961400 = scope;
   scope->owner = (Object)channel__accum_58264_53965900;
   scope->name = "rdec:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53960920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58285_53960760;

SignalI abus__w_53993040_wdec_58285_53960760_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeabus__w_53993040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53993040_wdec_58285_53960760_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)wdec_58285_53960760;
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

Scope makewdec_58285_53960760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58285_53960760 = scope;
   scope->owner = (Object)channel__accum_58264_53965900;
   scope->name = "wdec:285";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53993040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __62995980;

Behavior make__62995980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62995980 = behavior;
   behavior->owner = (Object)channel__accum_58264_53965900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54159040_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   reg__0_54159040_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   reg__0_54159040_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(reg__0_54159040_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,reg__0_54159040_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__0_54159040_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[reg__0_54159040_channel__accum_58264_53965900_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62996140();

   return behavior;
}

Behavior __62995780;

Behavior make__62995780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62995780 = behavior;
   behavior->owner = (Object)channel__accum_58264_53965900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_49326980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   _58266_49326980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   _58266_49326980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(_58266_49326980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,_58266_49326980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58266_49326980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[_58266_49326980_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62995940();

   return behavior;
}

Scope makechannel__accum_58264_53965900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58264_53965900 = scope;
   scope->owner = (Object)layer1_58_84_45842480;
   scope->name = "channel_accum:264";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_54159040();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58265_53965420();
   scope->scopes[1] = makeraddr_58267_53964640();
   scope->scopes[2] = makewaddr_58270_53963720();
   scope->scopes[3] = makerinc_58273_53963220();
   scope->scopes[4] = makewinc_58277_53962600();
   scope->scopes[5] = makerdec_58281_53961400();
   scope->scopes[6] = makewdec_58285_53960760();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62995980();
   scope->behaviors[1] = make__62995780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58289_54570860;

SignalI lv0_54712460_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makelv0_54712460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_54712460_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58289_54570860;
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

SignalI av0_54907960_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeav0_54907960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_54907960_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58289_54570860;
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

SignalI rv_55244240_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makerv_55244240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_55244240_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58289_54570860;
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

SignalI lvok0_55244220_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makelvok0_55244220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_55244220_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58289_54570860;
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

SignalI rvok_55244200_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makervok_55244200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_55244200_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58289_54570860;
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

SignalI run_55244160_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makerun_55244160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_55244160_mac__n1_58289_54570860_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)mac__n1_58289_54570860;
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

Behavior __54665260;

Behavior make__54665260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54665260 = behavior;
   behavior->owner = (Object)mac__n1_58289_54570860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos += 1;
   clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos = realloc(clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos,clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos*sizeof(Object));
clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos[clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos-1] = (Object)behavior;
   behavior->block = make__55243900();

   return behavior;
}

Scope makemac__n1_58289_54570860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58289_54570860 = scope;
   scope->owner = (Object)layer1_58_84_45842480;
   scope->name = "mac_n1:289";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_54712460();
   scope->inners[1] = makeav0_54907960();
   scope->inners[2] = makerv_55244240();
   scope->inners[3] = makelvok0_55244220();
   scope->inners[4] = makervok_55244200();
   scope->inners[5] = makerun_55244160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54665260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58290_54689640;

SignalI reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makereg__0_54909640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__bias_58290_54689640;
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

Scope anum_58291_54689000;

Scope makeanum_58291_54689000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58291_54689000 = scope;
   scope->owner = (Object)channel__bias_58290_54689640;
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

Scope raddr_58293_54688480;

Scope makeraddr_58293_54688480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58293_54688480 = scope;
   scope->owner = (Object)channel__bias_58290_54689640;
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

Scope waddr_58296_54687540;

Scope makewaddr_58296_54687540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58296_54687540 = scope;
   scope->owner = (Object)channel__bias_58290_54689640;
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

Scope rinc_58299_54686900;

SignalI abus__r_54686140_rinc_58299_54686900_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeabus__r_54686140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54686140_rinc_58299_54686900_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rinc_58299_54686900;
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

Scope makerinc_58299_54686900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58299_54686900 = scope;
   scope->owner = (Object)channel__bias_58290_54689640;
   scope->name = "rinc:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54686140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58302_54686020;

SignalI abus__w_54685520_winc_58302_54686020_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeabus__w_54685520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54685520_winc_58302_54686020_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)winc_58302_54686020;
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

Behavior __62991100;

Behavior make__62991100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62991100 = behavior;
   behavior->owner = (Object)winc_58302_54686020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_54685520_winc_58302_54686020_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   abus__w_54685520_winc_58302_54686020_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   abus__w_54685520_winc_58302_54686020_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(abus__w_54685520_winc_58302_54686020_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,abus__w_54685520_winc_58302_54686020_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
abus__w_54685520_winc_58302_54686020_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[abus__w_54685520_winc_58302_54686020_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62991260();

   return behavior;
}

Behavior __62990900;

Behavior make__62990900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62990900 = behavior;
   behavior->owner = (Object)winc_58302_54686020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   _58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   _58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(_58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,_58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[_58304_54649140_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62991060();

   return behavior;
}

Scope makewinc_58302_54686020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58302_54686020 = scope;
   scope->owner = (Object)channel__bias_58290_54689640;
   scope->name = "winc:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54685520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62991100();
   scope->behaviors[1] = make__62990900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58305_54684680;

SignalI abus__r_54684040_rdec_58305_54684680_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeabus__r_54684040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54684040_rdec_58305_54684680_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rdec_58305_54684680;
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

Scope makerdec_58305_54684680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58305_54684680 = scope;
   scope->owner = (Object)channel__bias_58290_54689640;
   scope->name = "rdec:305";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54684040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58309_54683860;

SignalI abus__w_54683340_wdec_58309_54683860_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeabus__w_54683340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54683340_wdec_58309_54683860_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)wdec_58309_54683860;
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

Scope makewdec_58309_54683860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58309_54683860 = scope;
   scope->owner = (Object)channel__bias_58290_54689640;
   scope->name = "wdec:309";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54683340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __62993800;

Behavior make__62993800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62993800 = behavior;
   behavior->owner = (Object)channel__bias_58290_54689640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62993960();

   return behavior;
}

Behavior __62993600;

Behavior make__62993600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62993600 = behavior;
   behavior->owner = (Object)channel__bias_58290_54689640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58292_49995420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   _58292_49995420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   _58292_49995420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(_58292_49995420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,_58292_49995420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58292_49995420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[_58292_49995420_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62993760();

   return behavior;
}

Behavior __62993140;

Behavior make__62993140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62993140 = behavior;
   behavior->owner = (Object)channel__bias_58290_54689640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[reg__0_54909640_channel__bias_58290_54689640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62993300();

   return behavior;
}

Behavior __62992940;

Behavior make__62992940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62992940 = behavior;
   behavior->owner = (Object)channel__bias_58290_54689640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58303_54649240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   _58303_54649240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   _58303_54649240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(_58303_54649240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,_58303_54649240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58303_54649240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[_58303_54649240_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62993100();

   return behavior;
}

Scope makechannel__bias_58290_54689640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58290_54689640 = scope;
   scope->owner = (Object)layer1_58_84_45842480;
   scope->name = "channel_bias:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_54909640();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58291_54689000();
   scope->scopes[1] = makeraddr_58293_54688480();
   scope->scopes[2] = makewaddr_58296_54687540();
   scope->scopes[3] = makerinc_58299_54686900();
   scope->scopes[4] = makewinc_58302_54686020();
   scope->scopes[5] = makerdec_58305_54684680();
   scope->scopes[6] = makewdec_58309_54683860();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62993800();
   scope->behaviors[1] = make__62993600();
   scope->behaviors[2] = make__62993140();
   scope->behaviors[3] = make__62992940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58313_49424840;

SignalI reg__0_49878260_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makereg__0_49878260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49878260_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__z_58313_49424840;
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

Scope anum_58314_49424420;

Scope makeanum_58314_49424420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58314_49424420 = scope;
   scope->owner = (Object)channel__z_58313_49424840;
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

Scope raddr_58316_49423620;

Scope makeraddr_58316_49423620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58316_49423620 = scope;
   scope->owner = (Object)channel__z_58313_49424840;
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

Scope waddr_58319_49446700;

Scope makewaddr_58319_49446700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58319_49446700 = scope;
   scope->owner = (Object)channel__z_58313_49424840;
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

Scope rinc_58322_49445520;

SignalI abus__r_49444780_rinc_58322_49445520_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeabus__r_49444780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49444780_rinc_58322_49445520_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rinc_58322_49445520;
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

Scope makerinc_58322_49445520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58322_49445520 = scope;
   scope->owner = (Object)channel__z_58313_49424840;
   scope->name = "rinc:322";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49444780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58325_49444660;

SignalI abus__w_49443060_winc_58325_49444660_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeabus__w_49443060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49443060_winc_58325_49444660_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)winc_58325_49444660;
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

Scope makewinc_58325_49444660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58325_49444660 = scope;
   scope->owner = (Object)channel__z_58313_49424840;
   scope->name = "winc:325";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49443060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58328_49442620;

SignalI abus__r_49441680_rdec_58328_49442620_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeabus__r_49441680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49441680_rdec_58328_49442620_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rdec_58328_49442620;
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

Scope makerdec_58328_49442620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58328_49442620 = scope;
   scope->owner = (Object)channel__z_58313_49424840;
   scope->name = "rdec:328";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49441680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58332_49441320;

SignalI abus__w_49440560_wdec_58332_49441320_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makeabus__w_49440560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49440560_wdec_58332_49441320_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)wdec_58332_49441320;
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

Scope makewdec_58332_49441320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58332_49441320 = scope;
   scope->owner = (Object)channel__z_58313_49424840;
   scope->name = "wdec:332";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49440560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __62989520;

Behavior make__62989520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62989520 = behavior;
   behavior->owner = (Object)channel__z_58313_49424840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49878260_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   reg__0_49878260_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   reg__0_49878260_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(reg__0_49878260_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,reg__0_49878260_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__0_49878260_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[reg__0_49878260_channel__z_58313_49424840_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62989680();

   return behavior;
}

Behavior __62989320;

Behavior make__62989320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62989320 = behavior;
   behavior->owner = (Object)channel__z_58313_49424840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_52800720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   _58315_52800720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   _58315_52800720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(_58315_52800720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,_58315_52800720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_58315_52800720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[_58315_52800720_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62989480();

   return behavior;
}

Scope makechannel__z_58313_49424840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58313_49424840 = scope;
   scope->owner = (Object)layer1_58_84_45842480;
   scope->name = "channel_z:313";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49878260();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58314_49424420();
   scope->scopes[1] = makeraddr_58316_49423620();
   scope->scopes[2] = makewaddr_58319_49446700();
   scope->scopes[3] = makerinc_58322_49445520();
   scope->scopes[4] = makewinc_58325_49444660();
   scope->scopes[5] = makerdec_58328_49442620();
   scope->scopes[6] = makewdec_58332_49441320();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62989520();
   scope->behaviors[1] = make__62989320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58336_50707640;

SignalI lv0_52870020_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makelv0_52870020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52870020_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)add__n_58336_50707640;
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

SignalI rv0_53023080_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makerv0_53023080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_53023080_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)add__n_58336_50707640;
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

SignalI lvok0_53023040_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makelvok0_53023040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53023040_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)add__n_58336_50707640;
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

SignalI rvok0_53023020_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makervok0_53023020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_53023020_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)add__n_58336_50707640;
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

SignalI run_53023000_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920;

SignalI makerun_53023000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53023000_add__n_58336_50707640_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)add__n_58336_50707640;
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

Behavior __54909000;

Behavior make__54909000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54909000 = behavior;
   behavior->owner = (Object)add__n_58336_50707640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos += 1;
   clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos = realloc(clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos,clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos*sizeof(Object));
clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos[clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos-1] = (Object)behavior;
   behavior->block = make__53022700();

   return behavior;
}

Scope makeadd__n_58336_50707640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58336_50707640 = scope;
   scope->owner = (Object)layer1_58_84_45842480;
   scope->name = "add_n:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52870020();
   scope->inners[1] = makerv0_53023080();
   scope->inners[2] = makelvok0_53023040();
   scope->inners[3] = makervok0_53023020();
   scope->inners[4] = makerun_53023000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54909000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61435800;

Behavior make__61435800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61435800 = behavior;
   behavior->owner = (Object)layer1_58_84_45842480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos += 1;
   clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos = realloc(clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos,clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos*sizeof(Object));
clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos[clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos-1] = (Object)behavior;
   behavior->block = make__61224740();

   return behavior;
}

Behavior __61580400;

Behavior make__61580400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61580400 = behavior;
   behavior->owner = (Object)layer1_58_84_45842480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos += 1;
   clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos = realloc(clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos,clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos*sizeof(Object));
clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos[clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos-1] = (Object)behavior;
   behavior->block = make__61435680();

   return behavior;
}

Behavior __61950580;

Behavior make__61950580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61950580 = behavior;
   behavior->owner = (Object)layer1_58_84_45842480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos += 1;
   clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos = realloc(clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos,clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos*sizeof(Object));
clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->pos[clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_pos-1] = (Object)behavior;
   behavior->block = make__61580280();

   return behavior;
}

Behavior __62977960;

Behavior make__62977960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62977960 = behavior;
   behavior->owner = (Object)layer1_58_84_45842480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,value__z0_53123300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   value__z0_53123300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   value__z0_53123300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(value__z0_53123300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,value__z0_53123300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
value__z0_53123300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[value__z0_53123300_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__a10_53808380_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   ack__a10_53808380_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   ack__a10_53808380_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(ack__a10_53808380_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,ack__a10_53808380_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
ack__a10_53808380_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[ack__a10_53808380_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62939320();

   return behavior;
}

Behavior __62977800;

Behavior make__62977800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62977800 = behavior;
   behavior->owner = (Object)layer1_58_84_45842480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_60661960_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   a_60661960_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   a_60661960_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(a_60661960_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,a_60661960_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
a_60661960_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[a_60661960_func0_58_8400_60197620_layer1_58_84_45842480_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62939220();

   return behavior;
}

Scope makelayer1_58_84_45842480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_45842480 = scope;
   scope->owner = (Object)layer1_58_840_61950180;
   scope->name = "layer1:T";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makefunc0_60686120();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__mac_54908720();
   scope->inners[1] = makeack__add_54908640();
   scope->inners[2] = make_58249_55165980();
   scope->inners[3] = make_58247_55165900();
   scope->inners[4] = make_58248_55165500();
   scope->inners[5] = make_58266_49326980();
   scope->inners[6] = make_58292_49995420();
   scope->inners[7] = make_58315_52800720();
   scope->inners[8] = makevalue__z0_53123300();
   scope->inners[9] = makevalue__a10_53808420();
   scope->inners[10] = makeflag__z0_53808400();
   scope->inners[11] = makeack__a10_53808380();
   scope->inners[12] = make_58251_53808360();
   scope->inners[13] = make_58252_53808240();
   scope->inners[14] = make_58253_54301300();
   scope->inners[15] = make_58303_54649240();
   scope->inners[16] = make_58304_54649140();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58235_45864100();
   scope->scopes[1] = makechannel__accum_58264_53965900();
   scope->scopes[2] = makemac__n1_58289_54570860();
   scope->scopes[3] = makechannel__bias_58290_54689640();
   scope->scopes[4] = makechannel__z_58313_49424840();
   scope->scopes[5] = makeadd__n_58336_50707640();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61435800();
   scope->behaviors[1] = make__61580400();
   scope->behaviors[2] = make__61950580();
   scope->behaviors[3] = make__62977960();
   scope->behaviors[4] = make__62977800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_61950180() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_61950180 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_61948300();
   systemT->inputs[1] = makerst_61948260();
   systemT->inputs[2] = makefill_61948240();
   systemT->inputs[3] = makereq_61948180();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__1_61948140();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer1_58_84_45842480();

   return systemT;
}