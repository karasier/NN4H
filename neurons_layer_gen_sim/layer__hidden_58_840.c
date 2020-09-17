#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer__hidden_58_840_49263940;

SignalI clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeclk_49304660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49263940;
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

SignalI rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makerst_49304620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49263940;
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

SignalI fill_49304560_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makefill_49304560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49304560_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49263940;
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

SignalI req_49304500_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makereq_49304500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49304500_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49263940;
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

SignalI _5815_49499100_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_5815_49499100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_49499100_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49263940;
   signalI->name = ":15";
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

SignalI ack__layer_49499000_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeack__layer_49499000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_49499000_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49263940;
   signalI->name = "ack_layer";
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

SignalI _5813_49498860_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_5813_49498860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_49498860_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49263940;
   signalI->name = ":13";
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

SignalI _5814_49498140_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_5814_49498140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_49498140_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49263940;
   signalI->name = ":14";
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

SignalI _5832_51393980_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_5832_51393980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_51393980_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49263940;
   signalI->name = ":32";
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

SignalI _5833_51525720_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_5833_51525720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_51525720_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_49263940;
   signalI->name = ":33";
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

Block __52059300;

Block __52058160;

Block __52058000;

void code__52058000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_53164840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,value__z0_53390360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52254660(),flag__z0_47455000_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52058000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52058000 = block;
   block->owner = (Object)__52058160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52058000;

   return block;
};

Block __52537420;

void code__52537420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_53248940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,value__z1_53580680_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52254420(),flag__z1_47454960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52537420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52537420 = block;
   block->owner = (Object)__52058160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52537420;

   return block;
};

void code__52058160() {
 code__52058000();
 code__52537420();
}

Block make__52058160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52058160 = block;
   block->owner = (Object)__52059300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52058160;

   return block;
};

Block __52058760;

void code__52058760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52254200(),flag__z0_47455000_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52253940(),flag__z1_47454960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52058760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52058760 = block;
   block->owner = (Object)__52059300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52058760;

   return block;
};

void code__52059300() {
   {
      Value cond = ack__add_52256140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52058160();
   }
   else {
  code__52058760();
   }
      }
   }
}

Block make__52059300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52059300 = block;
   block->owner = (Object)__52902360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52059300;

   return block;
};

Block __52902240;

Block __52901480;

Block __52901260;

void code__52901260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_47203840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_5832_51393980_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52253320(),ack__a0_47454940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52901260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52901260 = block;
   block->owner = (Object)__52901480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52901260;

   return block;
};

Block __53254300;

void code__53254300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_47455020_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_5833_51525720_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52252860(),ack__a1_47454920_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__53254300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53254300 = block;
   block->owner = (Object)__52901480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53254300;

   return block;
};

void code__52901480() {
 code__52901260();
 code__53254300();
}

Block make__52901480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52901480 = block;
   block->owner = (Object)__52902240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52901480;

   return block;
};

void code__52902240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_47455000_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
         src1 = flag__z1_47454960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52901480();
   }
      }
   }
}

Block make__52902240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52902240 = block;
   block->owner = (Object)__47228040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52902240;

   return block;
};

Block __47227420;

Block __47250860;

Block __47250480;

void code__47250480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52252600(),_58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47250480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47250480 = block;
   block->owner = (Object)__47250860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47250480;

   return block;
};

void code__47250860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52252720();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47250480();
   }
      }
   }
}

Block make__47250860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47250860 = block;
   block->owner = (Object)__47227420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47250860;

   return block;
};

Block __47243500;

Block __47265080;

void code__47265080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52252440(),_58129_48593480_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47265080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47265080 = block;
   block->owner = (Object)__47243500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47265080;

   return block;
};

void code__47243500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52252520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47265080();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52252360(),_58128_48593560_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47243500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47243500 = block;
   block->owner = (Object)__47227420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47243500;

   return block;
};

Block __47280020;

Block __47299680;

void code__47299680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52252100(),_58100_47862100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47299680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47299680 = block;
   block->owner = (Object)__47280020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47299680;

   return block;
};

void code__47280020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52252240();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47299680();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52251640(),_5899_47862260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47280020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47280020 = block;
   block->owner = (Object)__47227420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47280020;

   return block;
};

Block __47315700;

Block __47315440;

Block __47314540;

void code__47314540() {
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
                  src0 = _58100_47862100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52249580();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_47862100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52249240(),_5899_47862260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52249100(),_58101_48593620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47314540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47314540 = block;
   block->owner = (Object)__47315440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47314540;

   return block;
};

void code__47315440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52250680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47314540();
   }
      }
   }
}

Block make__47315440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47315440 = block;
   block->owner = (Object)__47315700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47315440;

   return block;
};

Block __47647820;

Block __47647240;

void code__47647240() {
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
                  src0 = _58129_48593480_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52305020();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_48593480_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52304740(),_58128_48593560_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52304560(),_58130_48702460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47647240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47647240 = block;
   block->owner = (Object)__47647820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47647240;

   return block;
};

void code__47647820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52305860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47647240();
   }
      }
   }
}

Block make__47647820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47647820 = block;
   block->owner = (Object)__47315700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47647820;

   return block;
};

Block __48544640;

Block __48542800;

Block __48555400;

void code__48555400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52303980(),_58197_47630720_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__48555400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48555400 = block;
   block->owner = (Object)__48542800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48555400;

   return block;
};

Block __49003540;

void code__49003540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52303640(),_58198_47863340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49003540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49003540 = block;
   block->owner = (Object)__48542800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49003540;

   return block;
};

void code__48542800() {
{
      Value value = _58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__52304080())) {
    code__48555400();
         }
         else if (value2integer(value) == value2integer(make__52303900())) {
    code__49003540();
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
                  src0 = _58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52303440();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__48542800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48542800 = block;
   block->owner = (Object)__48544640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48542800;

   return block;
};

void code__48544640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52304440();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48542800();
   }
      }
   }
}

Block make__48544640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48544640 = block;
   block->owner = (Object)__47315700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48544640;

   return block;
};

void code__47315700() {
 code__47315440();
 code__47647820();
 code__48544640();
}

Block make__47315700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47315700 = block;
   block->owner = (Object)__47227420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47315700;

   return block;
};

void code__47227420() {
 code__47250860();
 code__47243500();
 code__47280020();
   {
      Value cond = fill_49304560_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47315700();
   }
      }
   }
}

Block make__47227420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47227420 = block;
   block->owner = (Object)__49244180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47227420;

   return block;
};

Block __51441600;

void code__51441600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_49304500_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_52256180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_52256220_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51441600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51441600 = block;
   block->owner = (Object)__51440880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51441600;

   return block;
};

Block __51441900;

void code__51441900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,clk_48920860_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_52256200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,ack_48920840_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,rst_48920820_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_53390360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,z__value_49249440_func0_58_840_49052180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_53580680_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,z__value_47595600_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_47454940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
      src1 = ack__a1_47454920_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_49499000_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51441900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51441900 = block;
   block->owner = (Object)__51472860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51441900;

   return block;
};

Block __51441820;

void code__51441820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_48920780_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,ack__mac_52256180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_49418540_func0_58_840_49052180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,value__a0_47203840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_47909160_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,value__a1_47455020_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51441820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51441820 = block;
   block->owner = (Object)__51472640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51441820;

   return block;
};

Block __48905560;

Block __47331740;

void code__47331740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49356560_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,make_ref_rangeS(mem_49436780_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160,value2integer(abus__w_49356400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value),value2integer(abus__w_49356400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47331740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47331740 = block;
   block->owner = (Object)__48905560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47331740;

   return block;
};

void code__48905560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49436780_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
            idx = value2integer(abus__r_49356480_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49229400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49111840_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47331740();
   }
      }
   }
}

Block make__48905560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48905560 = block;
   block->owner = (Object)__48670560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48905560;

   return block;
};

Block __51471060;

void code__51471060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49229400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_5897_52395080_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51471060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51471060 = block;
   block->owner = (Object)__51511040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51471060;

   return block;
};

Block __51510780;

void code__51510780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_52395080_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,dbus__r_49229400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51510780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51510780 = block;
   block->owner = (Object)__51510300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51510780;

   return block;
};

Block __51509820;

void code__51509820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49111860_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_5895_52395060_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51509820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51509820 = block;
   block->owner = (Object)__51509520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51509820;

   return block;
};

Block __51509480;

void code__51509480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_52395060_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,trig__r_49111860_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51509480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51509480 = block;
   block->owner = (Object)__51509200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51509480;

   return block;
};

Block __51508800;

void code__51508800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49356480_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_5896_52394960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51508800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51508800 = block;
   block->owner = (Object)__51508180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51508800;

   return block;
};

Block __51508020;

void code__51508020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_52394960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,abus__r_49356480_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51508020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51508020 = block;
   block->owner = (Object)__51506660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51508020;

   return block;
};

Block __51505620;

void code__51505620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49111840_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_5899_47862260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51505620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51505620 = block;
   block->owner = (Object)__51503960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51505620;

   return block;
};

Block __51503800;

void code__51503800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_47862260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,trig__w_49111840_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51503800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51503800 = block;
   block->owner = (Object)__51527620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51503800;

   return block;
};

Block __51526920;

void code__51526920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49356400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58100_47862100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51526920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51526920 = block;
   block->owner = (Object)__51526300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51526920;

   return block;
};

Block __51526260;

void code__51526260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_47862100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,abus__w_49356400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51526260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51526260 = block;
   block->owner = (Object)__51525960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51526260;

   return block;
};

Block __51524960;

void code__51524960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49356560_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58101_48593620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51524960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51524960 = block;
   block->owner = (Object)__51524200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51524960;

   return block;
};

Block __51524160;

void code__51524160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_48593620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,dbus__w_49356560_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51524160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51524160 = block;
   block->owner = (Object)__51522940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51524160;

   return block;
};

Block __47874460;

Block __49002660;

void code__49002660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49368520_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,make_ref_rangeS(mem_45680600_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160,value2integer(abus__w_49367540_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value),value2integer(abus__w_49367540_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49002660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49002660 = block;
   block->owner = (Object)__47874460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49002660;

   return block;
};

void code__47874460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_45680600_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
            idx = value2integer(abus__r_49368020_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49248220_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48949120_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49002660();
   }
      }
   }
}

Block make__47874460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47874460 = block;
   block->owner = (Object)__49385400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47874460;

   return block;
};

Block __51605520;

void code__51605520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49248220_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58126_52815460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51605520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51605520 = block;
   block->owner = (Object)__51604740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51605520;

   return block;
};

Block __51604500;

void code__51604500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_52815460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,dbus__r_49248220_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51604500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51604500 = block;
   block->owner = (Object)__51604060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51604500;

   return block;
};

Block __51602840;

void code__51602840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48949140_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58124_52815440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51602840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51602840 = block;
   block->owner = (Object)__51602140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51602840;

   return block;
};

Block __51601980;

void code__51601980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_52815440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,trig__r_48949140_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51601980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51601980 = block;
   block->owner = (Object)__51601580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51601980;

   return block;
};

Block __51633580;

void code__51633580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49368020_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58125_52815360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51633580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51633580 = block;
   block->owner = (Object)__51633000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51633580;

   return block;
};

Block __51632940;

void code__51632940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_52815360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,abus__r_49368020_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51632940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51632940 = block;
   block->owner = (Object)__51632360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51632940;

   return block;
};

Block __51631740;

void code__51631740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48949120_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58128_48593560_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51631740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51631740 = block;
   block->owner = (Object)__51631520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51631740;

   return block;
};

Block __51631480;

void code__51631480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_48593560_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,trig__w_48949120_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51631480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51631480 = block;
   block->owner = (Object)__51631180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51631480;

   return block;
};

Block __51630460;

void code__51630460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49367540_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58129_48593480_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51630460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51630460 = block;
   block->owner = (Object)__51629980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51630460;

   return block;
};

Block __51629840;

void code__51629840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_48593480_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,abus__w_49367540_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51629840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51629840 = block;
   block->owner = (Object)__51629560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51629840;

   return block;
};

Block __51629020;

void code__51629020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49368520_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58130_48702460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51629020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51629020 = block;
   block->owner = (Object)__51628460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51629020;

   return block;
};

Block __51628400;

void code__51628400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_48702460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,dbus__w_49368520_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51628400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51628400 = block;
   block->owner = (Object)__51628120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51628400;

   return block;
};

Block __51649440;

void code__51649440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48495720_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58143_52608860_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51649440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51649440 = block;
   block->owner = (Object)__51649160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51649440;

   return block;
};

Block __51648960;

void code__51648960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_52608860_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,reg__0_48495720_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51648960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51648960 = block;
   block->owner = (Object)__51648460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51648960;

   return block;
};

Block __51647560;

void code__51647560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51343740_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58144_52734100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51647560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51647560 = block;
   block->owner = (Object)__51647300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51647560;

   return block;
};

Block __51647260;

void code__51647260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_52734100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,reg__1_51343740_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51647260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51647260 = block;
   block->owner = (Object)__51646940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51647260;

   return block;
};

Block __52251700;

Block __52251540;

Block __52251200;

void code__52251200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52196560(),_58125_52815360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52251200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52251200 = block;
   block->owner = (Object)__52251540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52251200;

   return block;
};

void code__52251540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52196640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52251200();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52196460(),_58124_52815440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52251540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52251540 = block;
   block->owner = (Object)__52251700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52251540;

   return block;
};

Block __52250580;

Block __52250260;

void code__52250260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52195680(),_5896_52394960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52250260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52250260 = block;
   block->owner = (Object)__52250580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52250260;

   return block;
};

void code__52250580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52195960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52250260();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52195360(),_5895_52395060_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52250580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52250580 = block;
   block->owner = (Object)__52251700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52250580;

   return block;
};

Block __52249640;

Block __52249320;

void code__52249320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52195100(),_5814_49498140_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52249320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52249320 = block;
   block->owner = (Object)__52249640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52249320;

   return block;
};

void code__52249640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52195220();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52249320();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52194960(),_5813_49498860_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52249640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52249640 = block;
   block->owner = (Object)__52251700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52249640;

   return block;
};

Block __52585780;

Block __52585460;

Block __52585140;

Block __52584820;

void code__52584820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_49499100_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,rv_52251900_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52193900(),rvok_52251840_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52584820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52584820 = block;
   block->owner = (Object)__52585140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52584820;

   return block;
};

void code__52585140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_49498860_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52194180();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52584820();
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
                  src0 = _5814_49498140_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52193740();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_49498140_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52193600(),_5813_49498860_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52585140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52585140 = block;
   block->owner = (Object)__52585460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52585140;

   return block;
};

void code__52585460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52194320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52585140();
   }
      }
   }
}

Block make__52585460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52585460 = block;
   block->owner = (Object)__52585780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52585460;

   return block;
};

Block __52799260;

Block __52798940;

Block __52798620;

void code__52798620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_52395080_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,lv0_51787900_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52192560(),lvok0_52251880_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52798620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52798620 = block;
   block->owner = (Object)__52798940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52798620;

   return block;
};

void code__52798940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_52395060_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52193180();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52798620();
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
                  src0 = _5896_52394960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52192180();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_52394960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52191900(),_5895_52395060_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52798940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52798940 = block;
   block->owner = (Object)__52799260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52798940;

   return block;
};

void code__52799260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52193420();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52798940();
   }
      }
   }
}

Block make__52799260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52799260 = block;
   block->owner = (Object)__52585780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52799260;

   return block;
};

Block __52971900;

Block __52971420;

Block __52971260;

void code__52971260() {
}

Block make__52971260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52971260 = block;
   block->owner = (Object)__52971420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52971260;

   return block;
};

Block __47360480;

void code__47360480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_52052680_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58143_52608860_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47360480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47360480 = block;
   block->owner = (Object)__52971420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47360480;

   return block;
};

void code__52971420() {
 code__52971260();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_52052680_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
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
                              src0 = lv0_51787900_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_52251900_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52223400();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_52052680_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
 code__47360480();
}

Block make__52971420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52971420 = block;
   block->owner = (Object)__52971900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52971420;

   return block;
};

void code__52971900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52191520(),ack_52256200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52191400(),run_52251820_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
 code__52971420();
}

Block make__52971900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52971900 = block;
   block->owner = (Object)__52585780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52971900;

   return block;
};

Block __47694660;

Block __47694240;

Block __47718360;

void code__47718360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_52815460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,lv1_51916180_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52222680(),lvok1_52251860_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47718360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47718360 = block;
   block->owner = (Object)__47694240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47718360;

   return block;
};

void code__47694240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_52815440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52223040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47718360();
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
                  src0 = _58125_52815360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52222440();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_52815360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52222220(),_58124_52815440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47694240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47694240 = block;
   block->owner = (Object)__47694660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47694240;

   return block;
};

void code__47694660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52223180();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47694240();
   }
      }
   }
}

Block make__47694660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47694660 = block;
   block->owner = (Object)__52585780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47694660;

   return block;
};

Block __48625880;

Block __48624800;

Block __48624520;

void code__48624520() {
}

Block make__48624520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48624520 = block;
   block->owner = (Object)__48624800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48624520;

   return block;
};

Block __51377920;

void code__51377920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_52197320_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58144_52734100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51377920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51377920 = block;
   block->owner = (Object)__48624800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51377920;

   return block;
};

void code__48624800() {
 code__48624520();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_52197320_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
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
                              src0 = lv1_51916180_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_52251900_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52220500();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_52197320_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
 code__51377920();
}

Block make__48624800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48624800 = block;
   block->owner = (Object)__48625880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48624800;

   return block;
};

void code__48625880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52221980(),ack_52256200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52221760(),run_52251820_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
 code__48624800();
}

Block make__48625880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48625880 = block;
   block->owner = (Object)__52585780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48625880;

   return block;
};

void code__52585780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52194420(),run_52251820_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
 code__52585460();
 code__52799260();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52251880_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
         src1 = rvok_52251840_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52971900();
   }
      }
   }
 code__47694660();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_52251860_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
         src1 = rvok_52251840_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48625880();
   }
      }
   }
}

Block make__52585780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52585780 = block;
   block->owner = (Object)__52251700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52585780;

   return block;
};

Block __52305700;

void code__52305700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52220160(),rvok_52251840_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52220060(),lvok0_52251880_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52219980(),av0_52052680_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52219900(),lvok1_52251860_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52219640(),av1_52197320_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__52305700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52305700 = block;
   block->owner = (Object)__52251700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52305700;

   return block;
};

void code__52251700() {
 code__52251540();
 code__52250580();
 code__52249640();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52194860(),ack_52256200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52194800(),run_52251820_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_52256220_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
         src1 = run_52251820_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52585780();
   }
   else {
  code__52305700();
   }
      }
   }
}

Block make__52251700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52251700 = block;
   block->owner = (Object)__51507840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52251700;

   return block;
};

Block __51674800;

void code__51674800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58182_52940340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51674800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51674800 = block;
   block->owner = (Object)__51674460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51674800;

   return block;
};

Block __51674380;

void code__51674380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_52940340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51674380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51674380 = block;
   block->owner = (Object)__51674040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51674380;

   return block;
};

Block __51673280;

void code__51673280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58183_53031520_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51673280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51673280 = block;
   block->owner = (Object)__51673100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51673280;

   return block;
};

Block __51673060;

void code__51673060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_53031520_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51673060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51673060 = block;
   block->owner = (Object)__51672880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51673060;

   return block;
};

Block __51671740;

void code__51671740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58197_47630720_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51671740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51671740 = block;
   block->owner = (Object)__51671280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51671740;

   return block;
};

Block __51671180;

void code__51671180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58197_47630720_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51671180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51671180 = block;
   block->owner = (Object)__51670820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51671180;

   return block;
};

Block __51670360;

void code__51670360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58198_47863340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51670360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51670360 = block;
   block->owner = (Object)__51670060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51670360;

   return block;
};

Block __51670000;

void code__51670000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_47863340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51670000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51670000 = block;
   block->owner = (Object)__51669660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51670000;

   return block;
};

Block __51703860;

void code__51703860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_51505100_winc_58196_51505520_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51703860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51703860 = block;
   block->owner = (Object)__51703640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51703860;

   return block;
};

Block __51703580;

void code__51703580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,abus__w_51505100_winc_58196_51505520_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51703580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51703580 = block;
   block->owner = (Object)__51702920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51703580;

   return block;
};

Block __51700560;

void code__51700560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52896600_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58212_53164840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51700560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51700560 = block;
   block->owner = (Object)__51724200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51700560;

   return block;
};

Block __51723800;

void code__51723800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_53164840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,reg__0_52896600_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51723800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51723800 = block;
   block->owner = (Object)__51723100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51723800;

   return block;
};

Block __51722400;

void code__51722400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_52997300_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,_58213_53248940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51722400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51722400 = block;
   block->owner = (Object)__51722080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51722400;

   return block;
};

Block __51722020;

void code__51722020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_53248940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,reg__1_52997300_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51722020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51722020 = block;
   block->owner = (Object)__51721840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51722020;

   return block;
};

Block __47695420;

Block __47716120;

Block __47710600;

void code__47710600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_52608860_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,lv0_43160600_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52240240(),lvok0_47695820_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47710600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47710600 = block;
   block->owner = (Object)__47716120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47710600;

   return block;
};

Block __48642120;

void code__48642120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_52940340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,rv0_47498400_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52239740(),rvok0_47695740_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__48642120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48642120 = block;
   block->owner = (Object)__47716120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48642120;

   return block;
};

Block __49063880;

Block __49085480;

void code__49085480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_43160600_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
      src1 = rv0_47498400_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58212_53164840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49085480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49085480 = block;
   block->owner = (Object)__49063880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49085480;

   return block;
};

void code__49063880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52238860(),run_47695620_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52237840(),ack__add_52256140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
 code__49085480();
}

Block make__49063880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49063880 = block;
   block->owner = (Object)__47716120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49063880;

   return block;
};

Block __51326220;

void code__51326220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_52734100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,lv1_47346320_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52237100(),lvok1_47695800_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51326220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51326220 = block;
   block->owner = (Object)__47716120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51326220;

   return block;
};

Block __51477360;

void code__51477360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_53031520_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,rv1_47695840_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52236880(),rvok1_47695720_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51477360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51477360 = block;
   block->owner = (Object)__47716120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51477360;

   return block;
};

Block __51699820;

Block __51723880;

void code__51723880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_47346320_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
      src1 = rv1_47695840_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58213_53248940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__51723880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51723880 = block;
   block->owner = (Object)__51699820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51723880;

   return block;
};

void code__51699820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52236480(),run_47695620_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52236360(),ack__add_52256140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
 code__51723880();
}

Block make__51699820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51699820 = block;
   block->owner = (Object)__47716120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51699820;

   return block;
};

void code__47716120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52215880(),run_47695620_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
 code__47710600();
 code__48642120();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_47695820_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
         src1 = rvok0_47695740_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49063880();
   }
      }
   }
 code__51326220();
 code__51477360();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_47695800_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
         src1 = rvok1_47695720_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51699820();
   }
      }
   }
}

Block make__47716120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47716120 = block;
   block->owner = (Object)__47695420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47716120;

   return block;
};

Block __47694100;

void code__47694100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52235180(),lvok0_47695820_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52235040(),rvok0_47695740_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52234900(),lvok1_47695800_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52234760(),rvok1_47695720_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47694100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47694100 = block;
   block->owner = (Object)__47695420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47694100;

   return block;
};

void code__47695420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52216100(),ack__add_52256140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52216040(),run_47695620_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_52256180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
         src1 = run_47695620_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47716120();
   }
   else {
  code__47694100();
   }
      }
   }
}

Block make__47695420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47695420 = block;
   block->owner = (Object)__52256380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47695420;

   return block;
};

Value make__52196640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52196560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52196460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52195960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52195680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52195360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52195220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52195100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52194960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52194860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52194800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52194420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52194320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52194180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52193900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52193740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52193600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52193420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52193180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52192560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52192180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52191900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52191520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52191400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52223400() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52223180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52223040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52222680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52222440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52222220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52221980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52221760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52220500() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52220160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52220060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52219980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52219900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52219640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52216100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52216040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52215880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52240240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52239740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52238860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52237840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52237100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52236880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52236480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52236360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52235180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52235040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52234900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52234760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52254660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52254420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52254200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52253940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52253320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52252860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52252720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52252600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52252520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52252440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52252360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52252240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52252100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52251640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52250680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52249580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52249240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52249100() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52305860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52305020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52304740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52304560() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52304440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52304080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52303980() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52303900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52303640() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52303440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer__hidden_58_84_49095180;

SignalI req__mac_52256220_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makereq__mac_52256220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_52256220_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI ack_52256200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeack_52256200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_52256200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI ack__mac_52256180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeack__mac_52256180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_52256180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI ack__add_52256140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeack__add_52256140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_52256140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI _5897_52395080_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_5897_52395080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_52395080_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI _5895_52395060_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_5895_52395060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_52395060_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI _5896_52394960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_5896_52394960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_52394960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI _58143_52608860_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58143_52608860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_52608860_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI _58144_52734100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58144_52734100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_52734100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI _58126_52815460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58126_52815460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_52815460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI _58124_52815440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58124_52815440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_52815440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI _58125_52815360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58125_52815360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_52815360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI _58182_52940340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58182_52940340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58182_52940340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
   signalI->name = ":182";
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

SignalI _58183_53031520_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58183_53031520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58183_53031520_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
   signalI->name = ":183";
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

SignalI _58212_53164840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58212_53164840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58212_53164840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
   signalI->name = ":212";
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

SignalI _58213_53248940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58213_53248940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_53248940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
   signalI->name = ":213";
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

SignalI value__z0_53390360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makevalue__z0_53390360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_53390360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI value__z1_53580680_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makevalue__z1_53580680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_53580680_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI value__a0_47203840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makevalue__a0_47203840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_47203840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
   signalI->name = "value_a0";
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

SignalI value__a1_47455020_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makevalue__a1_47455020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_47455020_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
   signalI->name = "value_a1";
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

SignalI flag__z0_47455000_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeflag__z0_47455000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_47455000_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI flag__z1_47454960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeflag__z1_47454960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_47454960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI ack__a0_47454940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeack__a0_47454940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_47454940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
   signalI->name = "ack_a0";
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

SignalI ack__a1_47454920_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeack__a1_47454920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_47454920_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
   signalI->name = "ack_a1";
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

SignalI _58197_47630720_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58197_47630720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58197_47630720_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
   signalI->name = ":197";
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

SignalI _58198_47863340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58198_47863340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_47863340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
   signalI->name = ":198";
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

SignalI _58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58199_47862320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
   signalI->name = ":199";
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

SignalI _5899_47862260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_5899_47862260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_47862260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI _58100_47862100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58100_47862100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_47862100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI _58101_48593620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58101_48593620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_48593620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI _58128_48593560_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58128_48593560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_48593560_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI _58129_48593480_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58129_48593480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_48593480_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SignalI _58130_48702460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI make_58130_48702460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_48702460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_49095180;
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

SystemI counter_48920640;

SystemI makecounter_48920640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_48920640 = systemI;
   systemI->owner = (Object)layer__hidden_58_84_49095180;
   systemI->name = "counter";
   systemI->system = counter_58_840_48899140;

   return systemI;
};

SystemI func0_49418360;

SystemI makefunc0_49418360() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_49418360 = systemI;
   systemI->owner = (Object)layer__hidden_58_84_49095180;
   systemI->name = "func0";
   systemI->system = func0_58_840_49052180;

   return systemI;
};

SystemI func1_47908920;

SystemI makefunc1_47908920() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_47908920 = systemI;
   systemI->owner = (Object)layer__hidden_58_84_49095180;
   systemI->name = "func1";
   systemI->system = func1_58_840_47267620;

   return systemI;
};

Scope channel__w0_5883_49094760;

SignalI trig__r_49111860_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI maketrig__r_49111860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49111860_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w0_5883_49094760;
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

SignalI trig__w_49111840_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI maketrig__w_49111840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49111840_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w0_5883_49094760;
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

SignalI dbus__r_49229400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makedbus__r_49229400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49229400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w0_5883_49094760;
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

SignalI dbus__w_49356560_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makedbus__w_49356560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49356560_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w0_5883_49094760;
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

SignalI abus__r_49356480_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__r_49356480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49356480_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w0_5883_49094760;
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

SignalI abus__w_49356400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__w_49356400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49356400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w0_5883_49094760;
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

SignalI mem_49436780_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makemem_49436780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49436780_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w0_5883_49094760;
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

Scope raddr_5884_49118780;

Scope makeraddr_5884_49118780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_49118780 = scope;
   scope->owner = (Object)channel__w0_5883_49094760;
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

Scope waddr_5889_49117980;

Scope makewaddr_5889_49117980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_49117980 = scope;
   scope->owner = (Object)channel__w0_5883_49094760;
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

Scope rinc_5894_49115980;

Scope makerinc_5894_49115980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_49115980 = scope;
   scope->owner = (Object)channel__w0_5883_49094760;
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

Scope winc_5898_49114220;

Scope makewinc_5898_49114220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_49114220 = scope;
   scope->owner = (Object)channel__w0_5883_49094760;
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

Scope rdec_58102_49113520;

Scope makerdec_58102_49113520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_49113520 = scope;
   scope->owner = (Object)channel__w0_5883_49094760;
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

Scope wdec_58107_49113000;

Scope makewdec_58107_49113000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_49113000 = scope;
   scope->owner = (Object)channel__w0_5883_49094760;
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

Behavior __48670560;

Behavior make__48670560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48670560 = behavior;
   behavior->owner = (Object)channel__w0_5883_49094760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_neg += 1;
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->neg = realloc(clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->neg,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_neg*sizeof(Object));
clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->neg[clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_neg-1] = (Object)behavior;
   behavior->block = make__48905560();

   return behavior;
}

Behavior __51511040;

Behavior make__51511040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51511040 = behavior;
   behavior->owner = (Object)channel__w0_5883_49094760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49229400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   dbus__r_49229400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   dbus__r_49229400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(dbus__r_49229400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,dbus__r_49229400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
dbus__r_49229400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[dbus__r_49229400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51471060();

   return behavior;
}

Behavior __51510300;

Behavior make__51510300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51510300 = behavior;
   behavior->owner = (Object)channel__w0_5883_49094760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_52395080_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _5897_52395080_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _5897_52395080_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_5897_52395080_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_5897_52395080_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_5897_52395080_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_5897_52395080_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51510780();

   return behavior;
}

Behavior __51509520;

Behavior make__51509520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51509520 = behavior;
   behavior->owner = (Object)channel__w0_5883_49094760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49111860_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   trig__r_49111860_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   trig__r_49111860_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(trig__r_49111860_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,trig__r_49111860_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
trig__r_49111860_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[trig__r_49111860_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51509820();

   return behavior;
}

Behavior __51509200;

Behavior make__51509200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51509200 = behavior;
   behavior->owner = (Object)channel__w0_5883_49094760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_52395060_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _5895_52395060_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _5895_52395060_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_5895_52395060_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_5895_52395060_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_5895_52395060_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_5895_52395060_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51509480();

   return behavior;
}

Behavior __51508180;

Behavior make__51508180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51508180 = behavior;
   behavior->owner = (Object)channel__w0_5883_49094760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49356480_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   abus__r_49356480_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   abus__r_49356480_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(abus__r_49356480_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,abus__r_49356480_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
abus__r_49356480_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[abus__r_49356480_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51508800();

   return behavior;
}

Behavior __51506660;

Behavior make__51506660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51506660 = behavior;
   behavior->owner = (Object)channel__w0_5883_49094760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_52394960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _5896_52394960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _5896_52394960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_5896_52394960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_5896_52394960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_5896_52394960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_5896_52394960_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51508020();

   return behavior;
}

Behavior __51503960;

Behavior make__51503960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51503960 = behavior;
   behavior->owner = (Object)channel__w0_5883_49094760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49111840_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   trig__w_49111840_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   trig__w_49111840_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(trig__w_49111840_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,trig__w_49111840_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
trig__w_49111840_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[trig__w_49111840_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51505620();

   return behavior;
}

Behavior __51527620;

Behavior make__51527620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51527620 = behavior;
   behavior->owner = (Object)channel__w0_5883_49094760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_47862260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _5899_47862260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _5899_47862260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_5899_47862260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_5899_47862260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_5899_47862260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_5899_47862260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51503800();

   return behavior;
}

Behavior __51526300;

Behavior make__51526300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51526300 = behavior;
   behavior->owner = (Object)channel__w0_5883_49094760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49356400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   abus__w_49356400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   abus__w_49356400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(abus__w_49356400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,abus__w_49356400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
abus__w_49356400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[abus__w_49356400_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51526920();

   return behavior;
}

Behavior __51525960;

Behavior make__51525960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51525960 = behavior;
   behavior->owner = (Object)channel__w0_5883_49094760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_47862100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58100_47862100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58100_47862100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58100_47862100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58100_47862100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58100_47862100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58100_47862100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51526260();

   return behavior;
}

Behavior __51524200;

Behavior make__51524200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51524200 = behavior;
   behavior->owner = (Object)channel__w0_5883_49094760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49356560_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   dbus__w_49356560_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   dbus__w_49356560_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(dbus__w_49356560_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,dbus__w_49356560_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
dbus__w_49356560_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[dbus__w_49356560_channel__w0_5883_49094760_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51524960();

   return behavior;
}

Behavior __51522940;

Behavior make__51522940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51522940 = behavior;
   behavior->owner = (Object)channel__w0_5883_49094760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_48593620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58101_48593620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58101_48593620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58101_48593620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58101_48593620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58101_48593620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58101_48593620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51524160();

   return behavior;
}

Scope makechannel__w0_5883_49094760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_49094760 = scope;
   scope->owner = (Object)layer__hidden_58_84_49095180;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49111860();
   scope->inners[1] = maketrig__w_49111840();
   scope->inners[2] = makedbus__r_49229400();
   scope->inners[3] = makedbus__w_49356560();
   scope->inners[4] = makeabus__r_49356480();
   scope->inners[5] = makeabus__w_49356400();
   scope->inners[6] = makemem_49436780();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_49118780();
   scope->scopes[1] = makewaddr_5889_49117980();
   scope->scopes[2] = makerinc_5894_49115980();
   scope->scopes[3] = makewinc_5898_49114220();
   scope->scopes[4] = makerdec_58102_49113520();
   scope->scopes[5] = makewdec_58107_49113000();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48670560();
   scope->behaviors[1] = make__51511040();
   scope->behaviors[2] = make__51510300();
   scope->behaviors[3] = make__51509520();
   scope->behaviors[4] = make__51509200();
   scope->behaviors[5] = make__51508180();
   scope->behaviors[6] = make__51506660();
   scope->behaviors[7] = make__51503960();
   scope->behaviors[8] = make__51527620();
   scope->behaviors[9] = make__51526300();
   scope->behaviors[10] = make__51525960();
   scope->behaviors[11] = make__51524200();
   scope->behaviors[12] = make__51522940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_48670440;

SignalI trig__r_48949140_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI maketrig__r_48949140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48949140_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w1_58112_48670440;
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

SignalI trig__w_48949120_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI maketrig__w_48949120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48949120_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w1_58112_48670440;
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

SignalI dbus__r_49248220_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makedbus__r_49248220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49248220_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w1_58112_48670440;
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

SignalI dbus__w_49368520_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makedbus__w_49368520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49368520_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w1_58112_48670440;
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

SignalI abus__r_49368020_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__r_49368020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49368020_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w1_58112_48670440;
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

SignalI abus__w_49367540_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__w_49367540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49367540_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w1_58112_48670440;
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

SignalI mem_45680600_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makemem_45680600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_45680600_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__w1_58112_48670440;
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

Scope raddr_58113_48669540;

Scope makeraddr_58113_48669540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_48669540 = scope;
   scope->owner = (Object)channel__w1_58112_48670440;
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

Scope waddr_58118_48954440;

Scope makewaddr_58118_48954440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_48954440 = scope;
   scope->owner = (Object)channel__w1_58112_48670440;
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

Scope rinc_58123_48953440;

Scope makerinc_58123_48953440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_48953440 = scope;
   scope->owner = (Object)channel__w1_58112_48670440;
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

Scope winc_58127_48952820;

Scope makewinc_58127_48952820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_48952820 = scope;
   scope->owner = (Object)channel__w1_58112_48670440;
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

Scope rdec_58131_48951820;

Scope makerdec_58131_48951820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_48951820 = scope;
   scope->owner = (Object)channel__w1_58112_48670440;
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

Scope wdec_58136_48950500;

Scope makewdec_58136_48950500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_48950500 = scope;
   scope->owner = (Object)channel__w1_58112_48670440;
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

Behavior __49385400;

Behavior make__49385400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49385400 = behavior;
   behavior->owner = (Object)channel__w1_58112_48670440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_neg += 1;
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->neg = realloc(clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->neg,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_neg*sizeof(Object));
clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->neg[clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_neg-1] = (Object)behavior;
   behavior->block = make__47874460();

   return behavior;
}

Behavior __51604740;

Behavior make__51604740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51604740 = behavior;
   behavior->owner = (Object)channel__w1_58112_48670440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49248220_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   dbus__r_49248220_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   dbus__r_49248220_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(dbus__r_49248220_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,dbus__r_49248220_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
dbus__r_49248220_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[dbus__r_49248220_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51605520();

   return behavior;
}

Behavior __51604060;

Behavior make__51604060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51604060 = behavior;
   behavior->owner = (Object)channel__w1_58112_48670440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_52815460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58126_52815460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58126_52815460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58126_52815460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58126_52815460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58126_52815460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58126_52815460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51604500();

   return behavior;
}

Behavior __51602140;

Behavior make__51602140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51602140 = behavior;
   behavior->owner = (Object)channel__w1_58112_48670440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48949140_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   trig__r_48949140_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   trig__r_48949140_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(trig__r_48949140_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,trig__r_48949140_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
trig__r_48949140_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[trig__r_48949140_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51602840();

   return behavior;
}

Behavior __51601580;

Behavior make__51601580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51601580 = behavior;
   behavior->owner = (Object)channel__w1_58112_48670440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_52815440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58124_52815440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58124_52815440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58124_52815440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58124_52815440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58124_52815440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58124_52815440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51601980();

   return behavior;
}

Behavior __51633000;

Behavior make__51633000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51633000 = behavior;
   behavior->owner = (Object)channel__w1_58112_48670440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49368020_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   abus__r_49368020_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   abus__r_49368020_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(abus__r_49368020_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,abus__r_49368020_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
abus__r_49368020_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[abus__r_49368020_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51633580();

   return behavior;
}

Behavior __51632360;

Behavior make__51632360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51632360 = behavior;
   behavior->owner = (Object)channel__w1_58112_48670440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_52815360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58125_52815360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58125_52815360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58125_52815360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58125_52815360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58125_52815360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58125_52815360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51632940();

   return behavior;
}

Behavior __51631520;

Behavior make__51631520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51631520 = behavior;
   behavior->owner = (Object)channel__w1_58112_48670440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48949120_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   trig__w_48949120_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   trig__w_48949120_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(trig__w_48949120_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,trig__w_48949120_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
trig__w_48949120_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[trig__w_48949120_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51631740();

   return behavior;
}

Behavior __51631180;

Behavior make__51631180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51631180 = behavior;
   behavior->owner = (Object)channel__w1_58112_48670440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_48593560_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58128_48593560_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58128_48593560_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58128_48593560_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58128_48593560_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58128_48593560_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58128_48593560_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51631480();

   return behavior;
}

Behavior __51629980;

Behavior make__51629980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51629980 = behavior;
   behavior->owner = (Object)channel__w1_58112_48670440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49367540_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   abus__w_49367540_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   abus__w_49367540_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(abus__w_49367540_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,abus__w_49367540_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
abus__w_49367540_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[abus__w_49367540_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51630460();

   return behavior;
}

Behavior __51629560;

Behavior make__51629560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51629560 = behavior;
   behavior->owner = (Object)channel__w1_58112_48670440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_48593480_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58129_48593480_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58129_48593480_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58129_48593480_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58129_48593480_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58129_48593480_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58129_48593480_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51629840();

   return behavior;
}

Behavior __51628460;

Behavior make__51628460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51628460 = behavior;
   behavior->owner = (Object)channel__w1_58112_48670440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49368520_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   dbus__w_49368520_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   dbus__w_49368520_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(dbus__w_49368520_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,dbus__w_49368520_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
dbus__w_49368520_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[dbus__w_49368520_channel__w1_58112_48670440_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51629020();

   return behavior;
}

Behavior __51628120;

Behavior make__51628120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51628120 = behavior;
   behavior->owner = (Object)channel__w1_58112_48670440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_48702460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58130_48702460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58130_48702460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58130_48702460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58130_48702460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58130_48702460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58130_48702460_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51628400();

   return behavior;
}

Scope makechannel__w1_58112_48670440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_48670440 = scope;
   scope->owner = (Object)layer__hidden_58_84_49095180;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48949140();
   scope->inners[1] = maketrig__w_48949120();
   scope->inners[2] = makedbus__r_49248220();
   scope->inners[3] = makedbus__w_49368520();
   scope->inners[4] = makeabus__r_49368020();
   scope->inners[5] = makeabus__w_49367540();
   scope->inners[6] = makemem_45680600();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_48669540();
   scope->scopes[1] = makewaddr_58118_48954440();
   scope->scopes[2] = makerinc_58123_48953440();
   scope->scopes[3] = makewinc_58127_48952820();
   scope->scopes[4] = makerdec_58131_48951820();
   scope->scopes[5] = makewdec_58136_48950500();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49385400();
   scope->behaviors[1] = make__51604740();
   scope->behaviors[2] = make__51604060();
   scope->behaviors[3] = make__51602140();
   scope->behaviors[4] = make__51601580();
   scope->behaviors[5] = make__51633000();
   scope->behaviors[6] = make__51632360();
   scope->behaviors[7] = make__51631520();
   scope->behaviors[8] = make__51631180();
   scope->behaviors[9] = make__51629980();
   scope->behaviors[10] = make__51629560();
   scope->behaviors[11] = make__51628460();
   scope->behaviors[12] = make__51628120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_49385260;

SignalI reg__0_48495720_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makereg__0_48495720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48495720_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__accum_58141_49385260;
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

SignalI reg__1_51343740_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makereg__1_51343740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51343740_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__accum_58141_49385260;
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

Scope anum_58142_49384900;

Scope makeanum_58142_49384900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_49384900 = scope;
   scope->owner = (Object)channel__accum_58141_49385260;
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

Scope raddr_58145_49384480;

Scope makeraddr_58145_49384480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_49384480 = scope;
   scope->owner = (Object)channel__accum_58141_49385260;
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

Scope waddr_58149_49383760;

Scope makewaddr_58149_49383760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_49383760 = scope;
   scope->owner = (Object)channel__accum_58141_49385260;
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

Scope rinc_58153_49383340;

SignalI abus__r_49382920_rinc_58153_49383340_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__r_49382920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49382920_rinc_58153_49383340_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rinc_58153_49383340;
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

Scope makerinc_58153_49383340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_49383340 = scope;
   scope->owner = (Object)channel__accum_58141_49385260;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49382920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_49382740;

SignalI abus__w_49382360_winc_58158_49382740_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__w_49382360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49382360_winc_58158_49382740_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)winc_58158_49382740;
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

Scope makewinc_58158_49382740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_49382740 = scope;
   scope->owner = (Object)channel__accum_58141_49385260;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49382360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_49382240;

SignalI abus__r_49381620_rdec_58163_49382240_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__r_49381620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49381620_rdec_58163_49382240_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rdec_58163_49382240;
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

Scope makerdec_58163_49382240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_49382240 = scope;
   scope->owner = (Object)channel__accum_58141_49385260;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49381620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_49381440;

SignalI abus__w_49405600_wdec_58168_49381440_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__w_49405600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49405600_wdec_58168_49381440_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)wdec_58168_49381440;
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

Scope makewdec_58168_49381440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_49381440 = scope;
   scope->owner = (Object)channel__accum_58141_49385260;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49405600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51649160;

Behavior make__51649160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51649160 = behavior;
   behavior->owner = (Object)channel__accum_58141_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48495720_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   reg__0_48495720_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   reg__0_48495720_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(reg__0_48495720_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,reg__0_48495720_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__0_48495720_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[reg__0_48495720_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51649440();

   return behavior;
}

Behavior __51648460;

Behavior make__51648460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51648460 = behavior;
   behavior->owner = (Object)channel__accum_58141_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_52608860_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58143_52608860_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58143_52608860_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58143_52608860_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58143_52608860_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58143_52608860_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58143_52608860_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51648960();

   return behavior;
}

Behavior __51647300;

Behavior make__51647300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51647300 = behavior;
   behavior->owner = (Object)channel__accum_58141_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51343740_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   reg__1_51343740_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   reg__1_51343740_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(reg__1_51343740_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,reg__1_51343740_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__1_51343740_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[reg__1_51343740_channel__accum_58141_49385260_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51647560();

   return behavior;
}

Behavior __51646940;

Behavior make__51646940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51646940 = behavior;
   behavior->owner = (Object)channel__accum_58141_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_52734100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58144_52734100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58144_52734100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58144_52734100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58144_52734100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58144_52734100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58144_52734100_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51647260();

   return behavior;
}

Scope makechannel__accum_58141_49385260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_49385260 = scope;
   scope->owner = (Object)layer__hidden_58_84_49095180;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48495720();
   scope->inners[1] = makereg__1_51343740();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_49384900();
   scope->scopes[1] = makeraddr_58145_49384480();
   scope->scopes[2] = makewaddr_58149_49383760();
   scope->scopes[3] = makerinc_58153_49383340();
   scope->scopes[4] = makewinc_58158_49382740();
   scope->scopes[5] = makerdec_58163_49382240();
   scope->scopes[6] = makewdec_58168_49381440();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51649160();
   scope->behaviors[1] = make__51648460();
   scope->behaviors[2] = make__51647300();
   scope->behaviors[3] = make__51646940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_51668120;

SignalI lv0_51787900_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makelv0_51787900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51787900_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58173_51668120;
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

SignalI lv1_51916180_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makelv1_51916180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_51916180_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58173_51668120;
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

SignalI av0_52052680_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeav0_52052680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_52052680_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58173_51668120;
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

SignalI av1_52197320_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeav1_52197320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_52197320_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58173_51668120;
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

SignalI rv_52251900_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makerv_52251900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_52251900_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58173_51668120;
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

SignalI lvok0_52251880_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makelvok0_52251880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52251880_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58173_51668120;
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

SignalI lvok1_52251860_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makelvok1_52251860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_52251860_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58173_51668120;
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

SignalI rvok_52251840_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makervok_52251840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_52251840_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58173_51668120;
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

SignalI run_52251820_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makerun_52251820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52251820_mac__n1_58173_51668120_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)mac__n1_58173_51668120;
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

Behavior __51507840;

Behavior make__51507840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51507840 = behavior;
   behavior->owner = (Object)mac__n1_58173_51668120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos += 1;
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos = realloc(clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos*sizeof(Object));
clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos[clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos-1] = (Object)behavior;
   behavior->block = make__52251700();

   return behavior;
}

Scope makemac__n1_58173_51668120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_51668120 = scope;
   scope->owner = (Object)layer__hidden_58_84_49095180;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51787900();
   scope->inners[1] = makelv1_51916180();
   scope->inners[2] = makeav0_52052680();
   scope->inners[3] = makeav1_52197320();
   scope->inners[4] = makerv_52251900();
   scope->inners[5] = makelvok0_52251880();
   scope->inners[6] = makelvok1_52251860();
   scope->inners[7] = makervok_52251840();
   scope->inners[8] = makerun_52251820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51507840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58180_51507700;

SignalI reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makereg__0_51646780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__bias_58180_51507700;
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

SignalI reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makereg__1_51773200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__bias_58180_51507700;
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

Scope anum_58181_51507340;

Scope makeanum_58181_51507340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58181_51507340 = scope;
   scope->owner = (Object)channel__bias_58180_51507700;
   scope->name = "anum:181";
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

Scope raddr_58184_51506920;

Scope makeraddr_58184_51506920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58184_51506920 = scope;
   scope->owner = (Object)channel__bias_58180_51507700;
   scope->name = "raddr:184";
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

Scope waddr_58188_51506500;

Scope makewaddr_58188_51506500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58188_51506500 = scope;
   scope->owner = (Object)channel__bias_58180_51507700;
   scope->name = "waddr:188";
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

Scope rinc_58192_51506080;

SignalI abus__r_51505660_rinc_58192_51506080_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__r_51505660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51505660_rinc_58192_51506080_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rinc_58192_51506080;
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

Scope makerinc_58192_51506080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58192_51506080 = scope;
   scope->owner = (Object)channel__bias_58180_51507700;
   scope->name = "rinc:192";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51505660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58196_51505520;

SignalI abus__w_51505100_winc_58196_51505520_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__w_51505100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51505100_winc_58196_51505520_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)winc_58196_51505520;
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

Behavior __51703640;

Behavior make__51703640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51703640 = behavior;
   behavior->owner = (Object)winc_58196_51505520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_51505100_winc_58196_51505520_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   abus__w_51505100_winc_58196_51505520_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   abus__w_51505100_winc_58196_51505520_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(abus__w_51505100_winc_58196_51505520_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,abus__w_51505100_winc_58196_51505520_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
abus__w_51505100_winc_58196_51505520_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[abus__w_51505100_winc_58196_51505520_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51703860();

   return behavior;
}

Behavior __51702920;

Behavior make__51702920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51702920 = behavior;
   behavior->owner = (Object)winc_58196_51505520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58199_47862320_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51703580();

   return behavior;
}

Scope makewinc_58196_51505520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58196_51505520 = scope;
   scope->owner = (Object)channel__bias_58180_51507700;
   scope->name = "winc:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51505100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51703640();
   scope->behaviors[1] = make__51702920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58200_51504720;

SignalI abus__r_51504340_rdec_58200_51504720_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__r_51504340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51504340_rdec_58200_51504720_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rdec_58200_51504720;
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

Scope makerdec_58200_51504720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58200_51504720 = scope;
   scope->owner = (Object)channel__bias_58180_51507700;
   scope->name = "rdec:200";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51504340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58205_51504220;

SignalI abus__w_51503840_wdec_58205_51504220_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__w_51503840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51503840_wdec_58205_51504220_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)wdec_58205_51504220;
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

Scope makewdec_58205_51504220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58205_51504220 = scope;
   scope->owner = (Object)channel__bias_58180_51507700;
   scope->name = "wdec:205";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51503840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51674460;

Behavior make__51674460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51674460 = behavior;
   behavior->owner = (Object)channel__bias_58180_51507700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51674800();

   return behavior;
}

Behavior __51674040;

Behavior make__51674040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51674040 = behavior;
   behavior->owner = (Object)channel__bias_58180_51507700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58182_52940340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58182_52940340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58182_52940340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58182_52940340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58182_52940340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58182_52940340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58182_52940340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51674380();

   return behavior;
}

Behavior __51673100;

Behavior make__51673100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51673100 = behavior;
   behavior->owner = (Object)channel__bias_58180_51507700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51673280();

   return behavior;
}

Behavior __51672880;

Behavior make__51672880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51672880 = behavior;
   behavior->owner = (Object)channel__bias_58180_51507700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58183_53031520_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58183_53031520_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58183_53031520_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58183_53031520_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58183_53031520_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58183_53031520_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58183_53031520_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51673060();

   return behavior;
}

Behavior __51671280;

Behavior make__51671280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51671280 = behavior;
   behavior->owner = (Object)channel__bias_58180_51507700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[reg__0_51646780_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51671740();

   return behavior;
}

Behavior __51670820;

Behavior make__51670820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51670820 = behavior;
   behavior->owner = (Object)channel__bias_58180_51507700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58197_47630720_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58197_47630720_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58197_47630720_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58197_47630720_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58197_47630720_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58197_47630720_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58197_47630720_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51671180();

   return behavior;
}

Behavior __51670060;

Behavior make__51670060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51670060 = behavior;
   behavior->owner = (Object)channel__bias_58180_51507700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[reg__1_51773200_channel__bias_58180_51507700_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51670360();

   return behavior;
}

Behavior __51669660;

Behavior make__51669660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51669660 = behavior;
   behavior->owner = (Object)channel__bias_58180_51507700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_47863340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58198_47863340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58198_47863340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58198_47863340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58198_47863340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58198_47863340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58198_47863340_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51670000();

   return behavior;
}

Scope makechannel__bias_58180_51507700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58180_51507700 = scope;
   scope->owner = (Object)layer__hidden_58_84_49095180;
   scope->name = "channel_bias:180";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51646780();
   scope->inners[1] = makereg__1_51773200();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58181_51507340();
   scope->scopes[1] = makeraddr_58184_51506920();
   scope->scopes[2] = makewaddr_58188_51506500();
   scope->scopes[3] = makerinc_58192_51506080();
   scope->scopes[4] = makewinc_58196_51505520();
   scope->scopes[5] = makerdec_58200_51504720();
   scope->scopes[6] = makewdec_58205_51504220();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51674460();
   scope->behaviors[1] = make__51674040();
   scope->behaviors[2] = make__51673100();
   scope->behaviors[3] = make__51672880();
   scope->behaviors[4] = make__51671280();
   scope->behaviors[5] = make__51670820();
   scope->behaviors[6] = make__51670060();
   scope->behaviors[7] = make__51669660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58210_52798200;

SignalI reg__0_52896600_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makereg__0_52896600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52896600_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__z_58210_52798200;
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

SignalI reg__1_52997300_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makereg__1_52997300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_52997300_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__z_58210_52798200;
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

Scope anum_58211_52797900;

Scope makeanum_58211_52797900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58211_52797900 = scope;
   scope->owner = (Object)channel__z_58210_52798200;
   scope->name = "anum:211";
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

Scope raddr_58214_52797480;

Scope makeraddr_58214_52797480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58214_52797480 = scope;
   scope->owner = (Object)channel__z_58210_52798200;
   scope->name = "raddr:214";
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

Scope waddr_58218_52821580;

Scope makewaddr_58218_52821580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58218_52821580 = scope;
   scope->owner = (Object)channel__z_58210_52798200;
   scope->name = "waddr:218";
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

Scope rinc_58222_52821160;

SignalI abus__r_52820680_rinc_58222_52821160_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__r_52820680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52820680_rinc_58222_52821160_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rinc_58222_52821160;
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

Scope makerinc_58222_52821160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58222_52821160 = scope;
   scope->owner = (Object)channel__z_58210_52798200;
   scope->name = "rinc:222";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52820680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58226_52820560;

SignalI abus__w_52820180_winc_58226_52820560_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__w_52820180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52820180_winc_58226_52820560_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)winc_58226_52820560;
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

Scope makewinc_58226_52820560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58226_52820560 = scope;
   scope->owner = (Object)channel__z_58210_52798200;
   scope->name = "winc:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52820180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58230_52820060;

SignalI abus__r_52819680_rdec_58230_52820060_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__r_52819680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52819680_rdec_58230_52820060_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rdec_58230_52820060;
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

Scope makerdec_58230_52820060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58230_52820060 = scope;
   scope->owner = (Object)channel__z_58210_52798200;
   scope->name = "rdec:230";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52819680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58235_52819560;

SignalI abus__w_52819180_wdec_58235_52819560_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makeabus__w_52819180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52819180_wdec_58235_52819560_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)wdec_58235_52819560;
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

Scope makewdec_58235_52819560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58235_52819560 = scope;
   scope->owner = (Object)channel__z_58210_52798200;
   scope->name = "wdec:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52819180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51724200;

Behavior make__51724200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51724200 = behavior;
   behavior->owner = (Object)channel__z_58210_52798200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52896600_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   reg__0_52896600_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   reg__0_52896600_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(reg__0_52896600_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,reg__0_52896600_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__0_52896600_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[reg__0_52896600_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51700560();

   return behavior;
}

Behavior __51723100;

Behavior make__51723100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51723100 = behavior;
   behavior->owner = (Object)channel__z_58210_52798200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58212_53164840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58212_53164840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58212_53164840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58212_53164840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58212_53164840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58212_53164840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58212_53164840_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51723800();

   return behavior;
}

Behavior __51722080;

Behavior make__51722080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51722080 = behavior;
   behavior->owner = (Object)channel__z_58210_52798200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_52997300_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   reg__1_52997300_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   reg__1_52997300_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(reg__1_52997300_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,reg__1_52997300_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__1_52997300_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[reg__1_52997300_channel__z_58210_52798200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51722400();

   return behavior;
}

Behavior __51721840;

Behavior make__51721840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51721840 = behavior;
   behavior->owner = (Object)channel__z_58210_52798200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_53248940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _58213_53248940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _58213_53248940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_58213_53248940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_58213_53248940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_58213_53248940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_58213_53248940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51722020();

   return behavior;
}

Scope makechannel__z_58210_52798200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58210_52798200 = scope;
   scope->owner = (Object)layer__hidden_58_84_49095180;
   scope->name = "channel_z:210";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52896600();
   scope->inners[1] = makereg__1_52997300();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58211_52797900();
   scope->scopes[1] = makeraddr_58214_52797480();
   scope->scopes[2] = makewaddr_58218_52821580();
   scope->scopes[3] = makerinc_58222_52821160();
   scope->scopes[4] = makewinc_58226_52820560();
   scope->scopes[5] = makerdec_58230_52820060();
   scope->scopes[6] = makewdec_58235_52819560();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51724200();
   scope->behaviors[1] = make__51723100();
   scope->behaviors[2] = make__51722080();
   scope->behaviors[3] = make__51721840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58240_53413800;

SignalI lv0_43160600_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makelv0_43160600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_43160600_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)add__n_58240_53413800;
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

SignalI lv1_47346320_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makelv1_47346320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47346320_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)add__n_58240_53413800;
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

SignalI rv0_47498400_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makerv0_47498400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_47498400_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)add__n_58240_53413800;
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

SignalI rv1_47695840_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makerv1_47695840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_47695840_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)add__n_58240_53413800;
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

SignalI lvok0_47695820_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makelvok0_47695820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_47695820_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)add__n_58240_53413800;
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

SignalI lvok1_47695800_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makelvok1_47695800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_47695800_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)add__n_58240_53413800;
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

SignalI rvok0_47695740_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makervok0_47695740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_47695740_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)add__n_58240_53413800;
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

SignalI rvok1_47695720_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makervok1_47695720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_47695720_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)add__n_58240_53413800;
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

SignalI run_47695620_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160;

SignalI makerun_47695620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_47695620_add__n_58240_53413800_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)add__n_58240_53413800;
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

Behavior __52256380;

Behavior make__52256380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52256380 = behavior;
   behavior->owner = (Object)add__n_58240_53413800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos += 1;
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos = realloc(clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos*sizeof(Object));
clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos[clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos-1] = (Object)behavior;
   behavior->block = make__47695420();

   return behavior;
}

Scope makeadd__n_58240_53413800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58240_53413800 = scope;
   scope->owner = (Object)layer__hidden_58_84_49095180;
   scope->name = "add_n:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_43160600();
   scope->inners[1] = makelv1_47346320();
   scope->inners[2] = makerv0_47498400();
   scope->inners[3] = makerv1_47695840();
   scope->inners[4] = makelvok0_47695820();
   scope->inners[5] = makelvok1_47695800();
   scope->inners[6] = makervok0_47695740();
   scope->inners[7] = makervok1_47695720();
   scope->inners[8] = makerun_47695620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52256380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52902360;

Behavior make__52902360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52902360 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_49095180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos += 1;
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos = realloc(clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos*sizeof(Object));
clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos[clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos-1] = (Object)behavior;
   behavior->block = make__52059300();

   return behavior;
}

Behavior __47228040;

Behavior make__47228040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47228040 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_49095180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos += 1;
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos = realloc(clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos*sizeof(Object));
clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos[clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos-1] = (Object)behavior;
   behavior->block = make__52902240();

   return behavior;
}

Behavior __49244180;

Behavior make__49244180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49244180 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_49095180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos += 1;
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos = realloc(clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos*sizeof(Object));
clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->pos[clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_pos-1] = (Object)behavior;
   behavior->block = make__47227420();

   return behavior;
}

Behavior __51440880;

Behavior make__51440880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51440880 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_49095180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_49304500_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   req_49304500_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   req_49304500_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(req_49304500_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,req_49304500_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
req_49304500_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[req_49304500_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_52256180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   ack__mac_52256180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   ack__mac_52256180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(ack__mac_52256180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,ack__mac_52256180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
ack__mac_52256180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[ack__mac_52256180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51441600();

   return behavior;
}

Behavior __51472860;

Behavior make__51472860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51472860 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_49095180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_52256200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   ack_52256200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   ack_52256200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(ack_52256200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,ack_52256200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
ack_52256200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[ack_52256200_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_53390360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   value__z0_53390360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   value__z0_53390360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(value__z0_53390360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,value__z0_53390360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
value__z0_53390360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[value__z0_53390360_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_53580680_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   value__z1_53580680_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   value__z1_53580680_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(value__z1_53580680_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,value__z1_53580680_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
value__z1_53580680_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[value__z1_53580680_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_47454940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   ack__a0_47454940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   ack__a0_47454940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(ack__a0_47454940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,ack__a0_47454940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
ack__a0_47454940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[ack__a0_47454940_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_47454920_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   ack__a1_47454920_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   ack__a1_47454920_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(ack__a1_47454920_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,ack__a1_47454920_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
ack__a1_47454920_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[ack__a1_47454920_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51441900();

   return behavior;
}

Behavior __51472640;

Behavior make__51472640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51472640 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_49095180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_48920780_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   ack__mac_48920780_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   ack__mac_48920780_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(ack__mac_48920780_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,ack__mac_48920780_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
ack__mac_48920780_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[ack__mac_48920780_counter_58_840_48899140_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_49418540_func0_58_840_49052180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   a_49418540_func0_58_840_49052180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   a_49418540_func0_58_840_49052180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(a_49418540_func0_58_840_49052180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,a_49418540_func0_58_840_49052180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
a_49418540_func0_58_840_49052180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[a_49418540_func0_58_840_49052180_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_47909160_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   a_47909160_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   a_47909160_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(a_47909160_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,a_47909160_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
a_47909160_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[a_47909160_func1_58_840_47267620_layer__hidden_58_84_49095180_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__51441820();

   return behavior;
}

Scope makelayer__hidden_58_84_49095180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer__hidden_58_84_49095180 = scope;
   scope->owner = (Object)layer__hidden_58_840_49263940;
   scope->name = "layer_hidden:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_48920640();
   scope->systemIs[1] = makefunc0_49418360();
   scope->systemIs[2] = makefunc1_47908920();
   scope->num_inners = 33;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_52256220();
   scope->inners[1] = makeack_52256200();
   scope->inners[2] = makeack__mac_52256180();
   scope->inners[3] = makeack__add_52256140();
   scope->inners[4] = make_5897_52395080();
   scope->inners[5] = make_5895_52395060();
   scope->inners[6] = make_5896_52394960();
   scope->inners[7] = make_58143_52608860();
   scope->inners[8] = make_58144_52734100();
   scope->inners[9] = make_58126_52815460();
   scope->inners[10] = make_58124_52815440();
   scope->inners[11] = make_58125_52815360();
   scope->inners[12] = make_58182_52940340();
   scope->inners[13] = make_58183_53031520();
   scope->inners[14] = make_58212_53164840();
   scope->inners[15] = make_58213_53248940();
   scope->inners[16] = makevalue__z0_53390360();
   scope->inners[17] = makevalue__z1_53580680();
   scope->inners[18] = makevalue__a0_47203840();
   scope->inners[19] = makevalue__a1_47455020();
   scope->inners[20] = makeflag__z0_47455000();
   scope->inners[21] = makeflag__z1_47454960();
   scope->inners[22] = makeack__a0_47454940();
   scope->inners[23] = makeack__a1_47454920();
   scope->inners[24] = make_58197_47630720();
   scope->inners[25] = make_58198_47863340();
   scope->inners[26] = make_58199_47862320();
   scope->inners[27] = make_5899_47862260();
   scope->inners[28] = make_58100_47862100();
   scope->inners[29] = make_58101_48593620();
   scope->inners[30] = make_58128_48593560();
   scope->inners[31] = make_58129_48593480();
   scope->inners[32] = make_58130_48702460();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_49094760();
   scope->scopes[1] = makechannel__w1_58112_48670440();
   scope->scopes[2] = makechannel__accum_58141_49385260();
   scope->scopes[3] = makemac__n1_58173_51668120();
   scope->scopes[4] = makechannel__bias_58180_51507700();
   scope->scopes[5] = makechannel__z_58210_52798200();
   scope->scopes[6] = makeadd__n_58240_53413800();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52902360();
   scope->behaviors[1] = make__47228040();
   scope->behaviors[2] = make__49244180();
   scope->behaviors[3] = make__51440880();
   scope->behaviors[4] = make__51472860();
   scope->behaviors[5] = make__51472640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer__hidden_58_840_49263940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer__hidden_58_840_49263940 = systemT;
systemT->owner = NULL;
   systemT->name = "layer_hidden:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_49304660();
   systemT->inputs[1] = makerst_49304620();
   systemT->inputs[2] = makefill_49304560();
   systemT->inputs[3] = makereq_49304500();
   systemT->inputs[4] = make_5815_49499100();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_49499000();
   systemT->outputs[1] = make_5813_49498860();
   systemT->outputs[2] = make_5814_49498140();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5832_51393980();
   systemT->inouts[1] = make_5833_51525720();

   systemT->scope = makelayer__hidden_58_84_49095180();

   return systemT;
}