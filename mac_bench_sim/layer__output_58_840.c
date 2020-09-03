#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer__output_58_840_49944820;

SignalI clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeclk_49942380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_840_49944820;
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

SignalI rst_49942360_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makerst_49942360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49942360_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_840_49944820;
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

SignalI fill_49942340_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makefill_49942340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49942340_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_840_49944820;
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

SignalI req_49942320_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makereq_49942320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49942320_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_840_49944820;
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

SignalI ack__0_49942280_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeack__0_49942280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49942280_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_840_49944820;
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

Block __47214660;

Block __47211660;

Block __47211420;

void code__47211420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58133_51300920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,value__z0_51500920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50753460(),flag__z0_43292260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__47211420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47211420 = block;
   block->owner = (Object)__47211660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47211420;

   return block;
};

void code__47211660() {
 code__47211420();
}

Block make__47211660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47211660 = block;
   block->owner = (Object)__47214660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47211660;

   return block;
};

Block __47214340;

void code__47214340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50753400(),flag__z0_43292260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__47214340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47214340 = block;
   block->owner = (Object)__47214660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47214340;

   return block;
};

void code__47214660() {
   {
      Value cond = ack__add_50777760_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47211660();
   }
   else {
  code__47214340();
   }
      }
   }
}

Block make__47214660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47214660 = block;
   block->owner = (Object)__47543300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47214660;

   return block;
};

Block __47542940;

Block __47542140;

Block __47541080;

void code__47541080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a00_43292320_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,_5832_46994000______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50753220(),ack__a00_43288960_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__47541080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47541080 = block;
   block->owner = (Object)__47542140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47541080;

   return block;
};

void code__47542140() {
 code__47541080();
}

Block make__47542140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47542140 = block;
   block->owner = (Object)__47542940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47542140;

   return block;
};

void code__47542940() {
   {
      Value cond = flag__z0_43292260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47542140();
   }
      }
   }
}

Block make__47542940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47542940 = block;
   block->owner = (Object)__49655940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47542940;

   return block;
};

Block __49655740;

Block __49655480;

Block __49655100;

void code__49655100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50753020(),_58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49655100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49655100 = block;
   block->owner = (Object)__49655480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49655100;

   return block;
};

void code__49655480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49942360_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50753120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49655100();
   }
      }
   }
}

Block make__49655480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49655480 = block;
   block->owner = (Object)__49655740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49655480;

   return block;
};

Block __49654580;

Block __49654160;

void code__49654160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50752760(),_5870_43338600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49654160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49654160 = block;
   block->owner = (Object)__49654580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49654160;

   return block;
};

void code__49654580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49942360_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50752920();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49654160();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50752460(),_5869_43343500_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49654580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49654580 = block;
   block->owner = (Object)__49655740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49654580;

   return block;
};

Block __49653120;

Block __49652880;

Block __49652540;

void code__49652540() {
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
                  src0 = _5870_43338600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50752000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5870_43338600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50751900(),_5869_43343500_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50751780(),_5871_45494400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49652540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49652540 = block;
   block->owner = (Object)__49652880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49652540;

   return block;
};

void code__49652880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49942360_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50752280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49652540();
   }
      }
   }
}

Block make__49652880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49652880 = block;
   block->owner = (Object)__49653120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49652880;

   return block;
};

Block __49799580;

Block __49831620;

Block __49831040;

void code__49831040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50751520(),_58121_47009260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49831040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49831040 = block;
   block->owner = (Object)__49831620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49831040;

   return block;
};

void code__49831620() {
{
      Value value = _58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__50751580())) {
    code__49831040();
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
                  src0 = _58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50751380();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49831620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49831620 = block;
   block->owner = (Object)__49799580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49831620;

   return block;
};

void code__49799580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49942360_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50751700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49831620();
   }
      }
   }
}

Block make__49799580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49799580 = block;
   block->owner = (Object)__49653120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49799580;

   return block;
};

void code__49653120() {
 code__49652880();
 code__49799580();
}

Block make__49653120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49653120 = block;
   block->owner = (Object)__49655740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49653120;

   return block;
};

void code__49655740() {
 code__49655480();
 code__49654580();
   {
      Value cond = fill_49942340_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49653120();
   }
      }
   }
}

Block make__49655740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49655740 = block;
   block->owner = (Object)__49945140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49655740;

   return block;
};

Block __50520720;

void code__50520720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_51500920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,z__value_51173400_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a00_43288960_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,ack__0_49942280_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50520720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50520720 = block;
   block->owner = (Object)__50542280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50520720;

   return block;
};

Block __50520660;

void code__50520660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_51301100_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,value__a00_43292320_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50520660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50520660 = block;
   block->owner = (Object)__50542120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50520660;

   return block;
};

Block __42648900;

Block __47074360;

void code__47074360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_44886440_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,make_ref_rangeS(mem_45427380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720,value2integer(abus__w_44886100_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value),value2integer(abus__w_44886100_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47074360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47074360 = block;
   block->owner = (Object)__42648900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47074360;

   return block;
};

void code__42648900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_45427380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
            idx = value2integer(abus__r_44886300_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47475700_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_47309380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47074360();
   }
      }
   }
}

Block make__42648900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42648900 = block;
   block->owner = (Object)__47423940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42648900;

   return block;
};

Block __50540220;

void code__50540220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47475700_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,_5867_51027300_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50540220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50540220 = block;
   block->owner = (Object)__50539520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50540220;

   return block;
};

Block __50539420;

void code__50539420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_51027300_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,dbus__r_47475700_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50539420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50539420 = block;
   block->owner = (Object)__50539120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50539420;

   return block;
};

Block __50538780;

void code__50538780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_47309400_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,_5865_51027280_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50538780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50538780 = block;
   block->owner = (Object)__50538560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50538780;

   return block;
};

Block __50538520;

void code__50538520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5865_51027280_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,trig__r_47309400_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50538520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50538520 = block;
   block->owner = (Object)__50538360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50538520;

   return block;
};

Block __50538020;

void code__50538020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_44886300_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,_5866_51027200_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50538020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50538020 = block;
   block->owner = (Object)__50537760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50538020;

   return block;
};

Block __50537720;

void code__50537720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5866_51027200_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,abus__r_44886300_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50537720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50537720 = block;
   block->owner = (Object)__50537500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50537720;

   return block;
};

Block __50536900;

void code__50536900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_47309380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,_5869_43343500_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50536900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50536900 = block;
   block->owner = (Object)__50536740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50536900;

   return block;
};

Block __50536700;

void code__50536700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5869_43343500_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,trig__w_47309380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50536700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50536700 = block;
   block->owner = (Object)__50536500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50536700;

   return block;
};

Block __50560680;

void code__50560680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_44886100_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,_5870_43338600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50560680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50560680 = block;
   block->owner = (Object)__50560520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50560680;

   return block;
};

Block __50560480;

void code__50560480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5870_43338600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,abus__w_44886100_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50560480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50560480 = block;
   block->owner = (Object)__50560260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50560480;

   return block;
};

Block __50559780;

void code__50559780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_44886440_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,_5871_45494400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50559780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50559780 = block;
   block->owner = (Object)__50559600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50559780;

   return block;
};

Block __50559520;

void code__50559520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5871_45494400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,dbus__w_44886440_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50559520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50559520 = block;
   block->owner = (Object)__50559340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50559520;

   return block;
};

Block __50557100;

void code__50557100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47555620_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,_5884_51104800_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50557100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50557100 = block;
   block->owner = (Object)__50556940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50557100;

   return block;
};

Block __50556900;

void code__50556900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5884_51104800_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,reg__0_47555620_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50556900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50556900 = block;
   block->owner = (Object)__50556720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50556900;

   return block;
};

Block __49856840;

Block __49856680;

Block __49880880;

void code__49880880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50735840(),_5866_51027200_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49880880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49880880 = block;
   block->owner = (Object)__49856680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49880880;

   return block;
};

void code__49856680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49942360_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50735960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49880880();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50735780(),_5865_51027280_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49856680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49856680 = block;
   block->owner = (Object)__49856840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49856680;

   return block;
};

Block __49880260;

Block __49879940;

void code__49879940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50735440(),_5814_47851000______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49879940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49879940 = block;
   block->owner = (Object)__49880260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49879940;

   return block;
};

void code__49880260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49942360_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50735620();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49879940();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50735380(),_5813_47851280______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49880260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49880260 = block;
   block->owner = (Object)__49856840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49880260;

   return block;
};

Block __49973760;

Block __49973440;

Block __49973120;

Block __49972800;

void code__49972800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_47851300______58_84_44701400______58_840_50200720->c_value,rv_49857020_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50734600(),rvok_49856980_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49972800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49972800 = block;
   block->owner = (Object)__49973120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49972800;

   return block;
};

void code__49973120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_47851280______58_84_44701400______58_840_50200720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50734840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49972800();
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
                  src0 = _5814_47851000______58_84_44701400______58_840_50200720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50734420();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_47851000______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50734260(),_5813_47851280______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49973120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49973120 = block;
   block->owner = (Object)__49973440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49973120;

   return block;
};

void code__49973440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49942360_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50734960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49973120();
   }
      }
   }
}

Block make__49973440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49973440 = block;
   block->owner = (Object)__49973760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49973440;

   return block;
};

Block __50236380;

Block __50236060;

Block __50235740;

void code__50235740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_51027300_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,lv0_49715120_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50733840(),lvok0_49857000_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50235740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50235740 = block;
   block->owner = (Object)__50236060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50235740;

   return block;
};

void code__50236060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5865_51027280_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50734060();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50235740();
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
                  src0 = _5866_51027200_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50733720();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5866_51027200_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50733620(),_5865_51027280_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50236060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50236060 = block;
   block->owner = (Object)__50236380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50236060;

   return block;
};

void code__50236380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49942360_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50734160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50236060();
   }
      }
   }
}

Block make__50236380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50236380 = block;
   block->owner = (Object)__49973760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50236380;

   return block;
};

Block __50540140;

Block __50539660;

Block __50539500;

void code__50539500() {
}

Block make__50539500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50539500 = block;
   block->owner = (Object)__50539660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50539500;

   return block;
};

Block __51420520;

void code__51420520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49802460_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,_5884_51104800_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__51420520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51420520 = block;
   block->owner = (Object)__50539660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51420520;

   return block;
};

void code__50539660() {
 code__50539500();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_49802460_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
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
                              src0 = lv0_49715120_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49857020_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50757280();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49802460_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
 code__51420520();
}

Block make__50539660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50539660 = block;
   block->owner = (Object)__50540140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50539660;

   return block;
};

void code__50540140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50733460(),ack__mac_50777780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50733360(),run_49856960_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
 code__50539660();
}

Block make__50540140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50540140 = block;
   block->owner = (Object)__49973760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50540140;

   return block;
};

void code__49973760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50735040(),run_49856960_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
 code__49973440();
 code__50236380();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49857000_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
         src1 = rvok_49856980_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50540140();
   }
      }
   }
}

Block make__49973760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49973760 = block;
   block->owner = (Object)__49856840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49973760;

   return block;
};

Block __49879000;

void code__49879000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50757040(),rvok_49856980_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50756920(),lvok0_49857000_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50756860(),av0_49802460_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49879000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49879000 = block;
   block->owner = (Object)__49856840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49879000;

   return block;
};

void code__49856840() {
 code__49856680();
 code__49880260();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50735300(),ack__mac_50777780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50735200(),run_49856960_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_49942320_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
         src1 = run_49856960_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49973760();
   }
   else {
  code__49879000();
   }
      }
   }
}

Block make__49856840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49856840 = block;
   block->owner = (Object)__44701600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49856840;

   return block;
};

Block __50554280;

void code__50554280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,_58110_51190580_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50554280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50554280 = block;
   block->owner = (Object)__50554060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50554280;

   return block;
};

Block __50554020;

void code__50554020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58110_51190580_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50554020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50554020 = block;
   block->owner = (Object)__50553780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50554020;

   return block;
};

Block __50553120;

void code__50553120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,_58121_47009260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50553120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50553120 = block;
   block->owner = (Object)__50552960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50553120;

   return block;
};

Block __50552900;

void code__50552900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58121_47009260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50552900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50552900 = block;
   block->owner = (Object)__50610020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50552900;

   return block;
};

Block __50607920;

void code__50607920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_44956540_winc_58120_44884980_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,_58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50607920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50607920 = block;
   block->owner = (Object)__50607680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50607920;

   return block;
};

Block __50607640;

void code__50607640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,abus__w_44956540_winc_58120_44884980_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50607640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50607640 = block;
   block->owner = (Object)__50607420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50607640;

   return block;
};

Block __50605960;

void code__50605960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47559640_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,_58133_51300920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50605960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50605960 = block;
   block->owner = (Object)__50605740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50605960;

   return block;
};

Block __50605700;

void code__50605700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58133_51300920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,reg__0_47559640_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50605700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50605700 = block;
   block->owner = (Object)__50605500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50605700;

   return block;
};

Block __49805900;

Block __49804760;

Block __49804380;

void code__49804380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5884_51104800_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,lv0_49695760_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50755100(),lvok0_49806060_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49804380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49804380 = block;
   block->owner = (Object)__49804760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49804380;

   return block;
};

Block __49972700;

void code__49972700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58110_51190580_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,rv0_49806080_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50754640(),rvok0_49806040_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49972700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49972700 = block;
   block->owner = (Object)__49804760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49972700;

   return block;
};

Block __50257160;

Block __50256680;

void code__50256680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_49695760_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
      src1 = rv0_49806080_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58133_51300920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50256680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50256680 = block;
   block->owner = (Object)__50257160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50256680;

   return block;
};

void code__50257160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50754380(),run_49806020_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50754320(),ack__add_50777760_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
 code__50256680();
}

Block make__50257160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50257160 = block;
   block->owner = (Object)__49804760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50257160;

   return block;
};

void code__49804760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50755420(),run_49806020_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
 code__49804380();
 code__49972700();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49806060_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
         src1 = rvok0_49806040_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50257160();
   }
      }
   }
}

Block make__49804760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49804760 = block;
   block->owner = (Object)__49805900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49804760;

   return block;
};

Block __49805420;

void code__49805420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50754080(),lvok0_49806060_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50754020(),rvok0_49806040_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49805420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49805420 = block;
   block->owner = (Object)__49805900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49805420;

   return block;
};

void code__49805900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50755680(),ack__add_50777760_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50755620(),run_49806020_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_50777780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
         src1 = run_49806020_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49804760();
   }
   else {
  code__49805420();
   }
      }
   }
}

Block make__49805900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49805900 = block;
   block->owner = (Object)__50777920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49805900;

   return block;
};

Value make__50735960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50735840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50735780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50735620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50735440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50735380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50735300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50735200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50735040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50734960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50734840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50734600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50734420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50734260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50734160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50734060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50733840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50733720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50733620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50733460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50733360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50757280() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50757040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50756920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50756860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50755680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50755620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50755420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50755100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50754640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50754380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50754320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50754080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50754020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50753460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50753400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50753220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50753120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50753020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__50752920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50752760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50752460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50752280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50752000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50751900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50751780() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50751700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50751580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__50751520() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50751380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer__output_58_84_47278140;

SignalI ack__mac_50777780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeack__mac_50777780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50777780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI ack__add_50777760_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeack__add_50777760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_50777760_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI _5867_51027300_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI make_5867_51027300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_51027300_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI _5865_51027280_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI make_5865_51027280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5865_51027280_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI _5866_51027200_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI make_5866_51027200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5866_51027200_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI _5884_51104800_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI make_5884_51104800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5884_51104800_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI _58110_51190580_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI make_58110_51190580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58110_51190580_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI _58133_51300920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI make_58133_51300920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58133_51300920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI value__z0_51500920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makevalue__z0_51500920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_51500920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI value__a00_43292320_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makevalue__a00_43292320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a00_43292320_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI flag__z0_43292260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeflag__z0_43292260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_43292260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI ack__a00_43288960_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeack__a00_43288960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a00_43288960_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI _5869_43343500_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI make_5869_43343500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5869_43343500_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI _5870_43338600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI make_5870_43338600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5870_43338600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI _5871_45494400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI make_5871_45494400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5871_45494400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI _58121_47009260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI make_58121_47009260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58121_47009260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SignalI _58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI make_58122_47009180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)layer__output_58_84_47278140;
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

SystemI func0_51300780;

SystemI makefunc0_51300780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_51300780 = systemI;
   systemI->owner = (Object)layer__output_58_84_47278140;
   systemI->name = "func0";
   systemI->system = func0_58_840_51042400;

   return systemI;
};

Scope channel__w0_5853_47277780;

SignalI trig__r_47309400_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI maketrig__r_47309400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47309400_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__w0_5853_47277780;
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

SignalI trig__w_47309380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI maketrig__w_47309380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_47309380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__w0_5853_47277780;
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

SignalI dbus__r_47475700_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makedbus__r_47475700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47475700_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__w0_5853_47277780;
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

SignalI dbus__w_44886440_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makedbus__w_44886440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_44886440_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__w0_5853_47277780;
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

SignalI abus__r_44886300_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeabus__r_44886300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_44886300_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__w0_5853_47277780;
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

SignalI abus__w_44886100_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeabus__w_44886100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_44886100_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__w0_5853_47277780;
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

SignalI mem_45427380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makemem_45427380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_45427380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__w0_5853_47277780;
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

Scope raddr_5854_47277480;

Scope makeraddr_5854_47277480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5854_47277480 = scope;
   scope->owner = (Object)channel__w0_5853_47277780;
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

Scope waddr_5859_47277060;

Scope makewaddr_5859_47277060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5859_47277060 = scope;
   scope->owner = (Object)channel__w0_5853_47277780;
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

Scope rinc_5864_47276620;

Scope makerinc_5864_47276620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5864_47276620 = scope;
   scope->owner = (Object)channel__w0_5853_47277780;
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

Scope winc_5868_47316080;

Scope makewinc_5868_47316080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5868_47316080 = scope;
   scope->owner = (Object)channel__w0_5853_47277780;
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

Scope rdec_5872_47310360;

Scope makerdec_5872_47310360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5872_47310360 = scope;
   scope->owner = (Object)channel__w0_5853_47277780;
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

Scope wdec_5877_47309900;

Scope makewdec_5877_47309900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5877_47309900 = scope;
   scope->owner = (Object)channel__w0_5853_47277780;
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

Behavior __47423940;

Behavior make__47423940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47423940 = behavior;
   behavior->owner = (Object)channel__w0_5853_47277780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_neg += 1;
   clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->neg = realloc(clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->neg,clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_neg*sizeof(Object));
clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->neg[clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_neg-1] = (Object)behavior;
   behavior->block = make__42648900();

   return behavior;
}

Behavior __50539520;

Behavior make__50539520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50539520 = behavior;
   behavior->owner = (Object)channel__w0_5853_47277780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47475700_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   dbus__r_47475700_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   dbus__r_47475700_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(dbus__r_47475700_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,dbus__r_47475700_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
dbus__r_47475700_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[dbus__r_47475700_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50540220();

   return behavior;
}

Behavior __50539120;

Behavior make__50539120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50539120 = behavior;
   behavior->owner = (Object)channel__w0_5853_47277780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5867_51027300_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   _5867_51027300_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   _5867_51027300_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(_5867_51027300_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,_5867_51027300_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5867_51027300_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[_5867_51027300_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50539420();

   return behavior;
}

Behavior __50538560;

Behavior make__50538560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50538560 = behavior;
   behavior->owner = (Object)channel__w0_5853_47277780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_47309400_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   trig__r_47309400_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   trig__r_47309400_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(trig__r_47309400_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,trig__r_47309400_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
trig__r_47309400_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[trig__r_47309400_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50538780();

   return behavior;
}

Behavior __50538360;

Behavior make__50538360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50538360 = behavior;
   behavior->owner = (Object)channel__w0_5853_47277780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5865_51027280_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   _5865_51027280_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   _5865_51027280_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(_5865_51027280_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,_5865_51027280_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5865_51027280_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[_5865_51027280_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50538520();

   return behavior;
}

Behavior __50537760;

Behavior make__50537760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50537760 = behavior;
   behavior->owner = (Object)channel__w0_5853_47277780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_44886300_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   abus__r_44886300_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   abus__r_44886300_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(abus__r_44886300_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,abus__r_44886300_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
abus__r_44886300_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[abus__r_44886300_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50538020();

   return behavior;
}

Behavior __50537500;

Behavior make__50537500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50537500 = behavior;
   behavior->owner = (Object)channel__w0_5853_47277780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5866_51027200_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   _5866_51027200_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   _5866_51027200_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(_5866_51027200_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,_5866_51027200_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5866_51027200_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[_5866_51027200_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50537720();

   return behavior;
}

Behavior __50536740;

Behavior make__50536740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50536740 = behavior;
   behavior->owner = (Object)channel__w0_5853_47277780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_47309380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   trig__w_47309380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   trig__w_47309380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(trig__w_47309380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,trig__w_47309380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
trig__w_47309380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[trig__w_47309380_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50536900();

   return behavior;
}

Behavior __50536500;

Behavior make__50536500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50536500 = behavior;
   behavior->owner = (Object)channel__w0_5853_47277780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5869_43343500_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   _5869_43343500_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   _5869_43343500_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(_5869_43343500_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,_5869_43343500_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5869_43343500_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[_5869_43343500_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50536700();

   return behavior;
}

Behavior __50560520;

Behavior make__50560520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50560520 = behavior;
   behavior->owner = (Object)channel__w0_5853_47277780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_44886100_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   abus__w_44886100_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   abus__w_44886100_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(abus__w_44886100_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,abus__w_44886100_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
abus__w_44886100_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[abus__w_44886100_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50560680();

   return behavior;
}

Behavior __50560260;

Behavior make__50560260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50560260 = behavior;
   behavior->owner = (Object)channel__w0_5853_47277780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5870_43338600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   _5870_43338600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   _5870_43338600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(_5870_43338600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,_5870_43338600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5870_43338600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[_5870_43338600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50560480();

   return behavior;
}

Behavior __50559600;

Behavior make__50559600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50559600 = behavior;
   behavior->owner = (Object)channel__w0_5853_47277780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_44886440_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   dbus__w_44886440_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   dbus__w_44886440_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(dbus__w_44886440_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,dbus__w_44886440_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
dbus__w_44886440_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[dbus__w_44886440_channel__w0_5853_47277780_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50559780();

   return behavior;
}

Behavior __50559340;

Behavior make__50559340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50559340 = behavior;
   behavior->owner = (Object)channel__w0_5853_47277780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5871_45494400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   _5871_45494400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   _5871_45494400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(_5871_45494400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,_5871_45494400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5871_45494400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[_5871_45494400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50559520();

   return behavior;
}

Scope makechannel__w0_5853_47277780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5853_47277780 = scope;
   scope->owner = (Object)layer__output_58_84_47278140;
   scope->name = "channel_w0:53";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47309400();
   scope->inners[1] = maketrig__w_47309380();
   scope->inners[2] = makedbus__r_47475700();
   scope->inners[3] = makedbus__w_44886440();
   scope->inners[4] = makeabus__r_44886300();
   scope->inners[5] = makeabus__w_44886100();
   scope->inners[6] = makemem_45427380();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5854_47277480();
   scope->scopes[1] = makewaddr_5859_47277060();
   scope->scopes[2] = makerinc_5864_47276620();
   scope->scopes[3] = makewinc_5868_47316080();
   scope->scopes[4] = makerdec_5872_47310360();
   scope->scopes[5] = makewdec_5877_47309900();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47423940();
   scope->behaviors[1] = make__50539520();
   scope->behaviors[2] = make__50539120();
   scope->behaviors[3] = make__50538560();
   scope->behaviors[4] = make__50538360();
   scope->behaviors[5] = make__50537760();
   scope->behaviors[6] = make__50537500();
   scope->behaviors[7] = make__50536740();
   scope->behaviors[8] = make__50536500();
   scope->behaviors[9] = make__50560520();
   scope->behaviors[10] = make__50560260();
   scope->behaviors[11] = make__50559600();
   scope->behaviors[12] = make__50559340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_5882_47447460;

SignalI reg__0_47555620_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makereg__0_47555620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47555620_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__accum_5882_47447460;
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

Scope anum_5883_47445860;

Scope makeanum_5883_47445860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5883_47445860 = scope;
   scope->owner = (Object)channel__accum_5882_47447460;
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

Scope raddr_5885_47445440;

Scope makeraddr_5885_47445440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5885_47445440 = scope;
   scope->owner = (Object)channel__accum_5882_47447460;
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

Scope waddr_5888_47445000;

Scope makewaddr_5888_47445000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5888_47445000 = scope;
   scope->owner = (Object)channel__accum_5882_47447460;
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

Scope rinc_5891_47444260;

SignalI abus__r_47443860_rinc_5891_47444260_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeabus__r_47443860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47443860_rinc_5891_47444260_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)rinc_5891_47444260;
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

Scope makerinc_5891_47444260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5891_47444260 = scope;
   scope->owner = (Object)channel__accum_5882_47447460;
   scope->name = "rinc:91";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47443860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5895_47443720;

SignalI abus__w_47443280_winc_5895_47443720_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeabus__w_47443280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47443280_winc_5895_47443720_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)winc_5895_47443720;
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

Scope makewinc_5895_47443720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5895_47443720 = scope;
   scope->owner = (Object)channel__accum_5882_47447460;
   scope->name = "winc:95";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47443280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5899_47443160;

SignalI abus__r_47442780_rdec_5899_47443160_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeabus__r_47442780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47442780_rdec_5899_47443160_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)rdec_5899_47443160;
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

Scope makerdec_5899_47443160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5899_47443160 = scope;
   scope->owner = (Object)channel__accum_5882_47447460;
   scope->name = "rdec:99";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47442780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58103_47442640;

SignalI abus__w_47442060_wdec_58103_47442640_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeabus__w_47442060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47442060_wdec_58103_47442640_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)wdec_58103_47442640;
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

Scope makewdec_58103_47442640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58103_47442640 = scope;
   scope->owner = (Object)channel__accum_5882_47447460;
   scope->name = "wdec:103";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47442060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50556940;

Behavior make__50556940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50556940 = behavior;
   behavior->owner = (Object)channel__accum_5882_47447460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47555620_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   reg__0_47555620_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   reg__0_47555620_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(reg__0_47555620_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,reg__0_47555620_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
reg__0_47555620_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[reg__0_47555620_channel__accum_5882_47447460_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50557100();

   return behavior;
}

Behavior __50556720;

Behavior make__50556720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50556720 = behavior;
   behavior->owner = (Object)channel__accum_5882_47447460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5884_51104800_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   _5884_51104800_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   _5884_51104800_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(_5884_51104800_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,_5884_51104800_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5884_51104800_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[_5884_51104800_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50556900();

   return behavior;
}

Scope makechannel__accum_5882_47447460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_5882_47447460 = scope;
   scope->owner = (Object)layer__output_58_84_47278140;
   scope->name = "channel_accum:82";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47555620();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5883_47445860();
   scope->scopes[1] = makeraddr_5885_47445440();
   scope->scopes[2] = makewaddr_5888_47445000();
   scope->scopes[3] = makerinc_5891_47444260();
   scope->scopes[4] = makewinc_5895_47443720();
   scope->scopes[5] = makerdec_5899_47443160();
   scope->scopes[6] = makewdec_58103_47442640();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50556940();
   scope->behaviors[1] = make__50556720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58107_48538600;

SignalI lv0_49715120_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makelv0_49715120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49715120_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)mac__n1_58107_48538600;
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

SignalI av0_49802460_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeav0_49802460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49802460_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)mac__n1_58107_48538600;
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

SignalI rv_49857020_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makerv_49857020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49857020_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)mac__n1_58107_48538600;
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

SignalI lvok0_49857000_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makelvok0_49857000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49857000_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)mac__n1_58107_48538600;
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

SignalI rvok_49856980_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makervok_49856980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49856980_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)mac__n1_58107_48538600;
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

SignalI run_49856960_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makerun_49856960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49856960_mac__n1_58107_48538600_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)mac__n1_58107_48538600;
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

Behavior __44701600;

Behavior make__44701600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44701600 = behavior;
   behavior->owner = (Object)mac__n1_58107_48538600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos += 1;
   clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos = realloc(clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos,clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos*sizeof(Object));
clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos[clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos-1] = (Object)behavior;
   behavior->block = make__49856840();

   return behavior;
}

Scope makemac__n1_58107_48538600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58107_48538600 = scope;
   scope->owner = (Object)layer__output_58_84_47278140;
   scope->name = "mac_n1:107";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49715120();
   scope->inners[1] = makeav0_49802460();
   scope->inners[2] = makerv_49857020();
   scope->inners[3] = makelvok0_49857000();
   scope->inners[4] = makervok_49856980();
   scope->inners[5] = makerun_49856960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__44701600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58108_44700020;

SignalI reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makereg__0_45490520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__bias_58108_44700020;
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

Scope anum_58109_44697520;

Scope makeanum_58109_44697520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58109_44697520 = scope;
   scope->owner = (Object)channel__bias_58108_44700020;
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

Scope raddr_58111_44695800;

Scope makeraddr_58111_44695800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58111_44695800 = scope;
   scope->owner = (Object)channel__bias_58108_44700020;
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

Scope waddr_58114_44889520;

Scope makewaddr_58114_44889520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58114_44889520 = scope;
   scope->owner = (Object)channel__bias_58108_44700020;
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

Scope rinc_58117_44888420;

SignalI abus__r_44885700_rinc_58117_44888420_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeabus__r_44885700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_44885700_rinc_58117_44888420_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)rinc_58117_44888420;
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

Scope makerinc_58117_44888420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58117_44888420 = scope;
   scope->owner = (Object)channel__bias_58108_44700020;
   scope->name = "rinc:117";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_44885700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58120_44884980;

SignalI abus__w_44956540_winc_58120_44884980_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeabus__w_44956540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_44956540_winc_58120_44884980_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)winc_58120_44884980;
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

Behavior __50607680;

Behavior make__50607680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50607680 = behavior;
   behavior->owner = (Object)winc_58120_44884980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_44956540_winc_58120_44884980_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   abus__w_44956540_winc_58120_44884980_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   abus__w_44956540_winc_58120_44884980_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(abus__w_44956540_winc_58120_44884980_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,abus__w_44956540_winc_58120_44884980_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
abus__w_44956540_winc_58120_44884980_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[abus__w_44956540_winc_58120_44884980_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50607920();

   return behavior;
}

Behavior __50607420;

Behavior make__50607420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50607420 = behavior;
   behavior->owner = (Object)winc_58120_44884980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   _58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   _58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(_58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,_58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[_58122_47009180_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50607640();

   return behavior;
}

Scope makewinc_58120_44884980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58120_44884980 = scope;
   scope->owner = (Object)channel__bias_58108_44700020;
   scope->name = "winc:120";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_44956540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50607680();
   scope->behaviors[1] = make__50607420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58123_44954920;

SignalI abus__r_44908300_rdec_58123_44954920_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeabus__r_44908300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_44908300_rdec_58123_44954920_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)rdec_58123_44954920;
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

Scope makerdec_58123_44954920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58123_44954920 = scope;
   scope->owner = (Object)channel__bias_58108_44700020;
   scope->name = "rdec:123";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_44908300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58127_44907540;

SignalI abus__w_44905260_wdec_58127_44907540_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeabus__w_44905260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_44905260_wdec_58127_44907540_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)wdec_58127_44907540;
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

Scope makewdec_58127_44907540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58127_44907540 = scope;
   scope->owner = (Object)channel__bias_58108_44700020;
   scope->name = "wdec:127";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_44905260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50554060;

Behavior make__50554060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50554060 = behavior;
   behavior->owner = (Object)channel__bias_58108_44700020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50554280();

   return behavior;
}

Behavior __50553780;

Behavior make__50553780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50553780 = behavior;
   behavior->owner = (Object)channel__bias_58108_44700020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58110_51190580_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   _58110_51190580_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   _58110_51190580_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(_58110_51190580_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,_58110_51190580_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_58110_51190580_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[_58110_51190580_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50554020();

   return behavior;
}

Behavior __50552960;

Behavior make__50552960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50552960 = behavior;
   behavior->owner = (Object)channel__bias_58108_44700020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[reg__0_45490520_channel__bias_58108_44700020_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50553120();

   return behavior;
}

Behavior __50610020;

Behavior make__50610020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50610020 = behavior;
   behavior->owner = (Object)channel__bias_58108_44700020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58121_47009260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   _58121_47009260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   _58121_47009260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(_58121_47009260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,_58121_47009260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_58121_47009260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[_58121_47009260_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50552900();

   return behavior;
}

Scope makechannel__bias_58108_44700020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58108_44700020 = scope;
   scope->owner = (Object)layer__output_58_84_47278140;
   scope->name = "channel_bias:108";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_45490520();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58109_44697520();
   scope->scopes[1] = makeraddr_58111_44695800();
   scope->scopes[2] = makewaddr_58114_44889520();
   scope->scopes[3] = makerinc_58117_44888420();
   scope->scopes[4] = makewinc_58120_44884980();
   scope->scopes[5] = makerdec_58123_44954920();
   scope->scopes[6] = makewdec_58127_44907540();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50554060();
   scope->behaviors[1] = make__50553780();
   scope->behaviors[2] = make__50552960();
   scope->behaviors[3] = make__50610020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58131_47431240;

SignalI reg__0_47559640_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makereg__0_47559640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47559640_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__z_58131_47431240;
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

Scope anum_58132_47430880;

Scope makeanum_58132_47430880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58132_47430880 = scope;
   scope->owner = (Object)channel__z_58131_47431240;
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

Scope raddr_58134_47430440;

Scope makeraddr_58134_47430440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58134_47430440 = scope;
   scope->owner = (Object)channel__z_58131_47431240;
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

Scope waddr_58137_47429800;

Scope makewaddr_58137_47429800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58137_47429800 = scope;
   scope->owner = (Object)channel__z_58131_47431240;
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

Scope rinc_58140_47429040;

SignalI abus__r_47428540_rinc_58140_47429040_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeabus__r_47428540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47428540_rinc_58140_47429040_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)rinc_58140_47429040;
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

Scope makerinc_58140_47429040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58140_47429040 = scope;
   scope->owner = (Object)channel__z_58131_47431240;
   scope->name = "rinc:140";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47428540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58143_47428320;

SignalI abus__w_47427860_winc_58143_47428320_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeabus__w_47427860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47427860_winc_58143_47428320_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)winc_58143_47428320;
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

Scope makewinc_58143_47428320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58143_47428320 = scope;
   scope->owner = (Object)channel__z_58131_47431240;
   scope->name = "winc:143";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47427860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58146_47427720;

SignalI abus__r_47426720_rdec_58146_47427720_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeabus__r_47426720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47426720_rdec_58146_47427720_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)rdec_58146_47427720;
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

Scope makerdec_58146_47427720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58146_47427720 = scope;
   scope->owner = (Object)channel__z_58131_47431240;
   scope->name = "rdec:146";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47426720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58150_47426160;

SignalI abus__w_47425360_wdec_58150_47426160_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makeabus__w_47425360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47425360_wdec_58150_47426160_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)wdec_58150_47426160;
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

Scope makewdec_58150_47426160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58150_47426160 = scope;
   scope->owner = (Object)channel__z_58131_47431240;
   scope->name = "wdec:150";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47425360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50605740;

Behavior make__50605740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50605740 = behavior;
   behavior->owner = (Object)channel__z_58131_47431240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47559640_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   reg__0_47559640_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   reg__0_47559640_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(reg__0_47559640_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,reg__0_47559640_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
reg__0_47559640_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[reg__0_47559640_channel__z_58131_47431240_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50605960();

   return behavior;
}

Behavior __50605500;

Behavior make__50605500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50605500 = behavior;
   behavior->owner = (Object)channel__z_58131_47431240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58133_51300920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   _58133_51300920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   _58133_51300920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(_58133_51300920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,_58133_51300920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_58133_51300920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[_58133_51300920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50605700();

   return behavior;
}

Scope makechannel__z_58131_47431240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58131_47431240 = scope;
   scope->owner = (Object)layer__output_58_84_47278140;
   scope->name = "channel_z:131";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47559640();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58132_47430880();
   scope->scopes[1] = makeraddr_58134_47430440();
   scope->scopes[2] = makewaddr_58137_47429800();
   scope->scopes[3] = makerinc_58140_47429040();
   scope->scopes[4] = makewinc_58143_47428320();
   scope->scopes[5] = makerdec_58146_47427720();
   scope->scopes[6] = makewdec_58150_47426160();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50605740();
   scope->behaviors[1] = make__50605500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58154_48545620;

SignalI lv0_49695760_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makelv0_49695760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49695760_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)add__n_58154_48545620;
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

SignalI rv0_49806080_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makerv0_49806080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_49806080_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)add__n_58154_48545620;
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

SignalI lvok0_49806060_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makelvok0_49806060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49806060_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)add__n_58154_48545620;
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

SignalI rvok0_49806040_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makervok0_49806040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49806040_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)add__n_58154_48545620;
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

SignalI run_49806020_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720;

SignalI makerun_49806020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49806020_add__n_58154_48545620_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)add__n_58154_48545620;
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

Behavior __50777920;

Behavior make__50777920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50777920 = behavior;
   behavior->owner = (Object)add__n_58154_48545620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos += 1;
   clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos = realloc(clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos,clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos*sizeof(Object));
clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos[clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos-1] = (Object)behavior;
   behavior->block = make__49805900();

   return behavior;
}

Scope makeadd__n_58154_48545620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58154_48545620 = scope;
   scope->owner = (Object)layer__output_58_84_47278140;
   scope->name = "add_n:154";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49695760();
   scope->inners[1] = makerv0_49806080();
   scope->inners[2] = makelvok0_49806060();
   scope->inners[3] = makervok0_49806040();
   scope->inners[4] = makerun_49806020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50777920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47543300;

Behavior make__47543300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47543300 = behavior;
   behavior->owner = (Object)layer__output_58_84_47278140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos += 1;
   clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos = realloc(clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos,clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos*sizeof(Object));
clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos[clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos-1] = (Object)behavior;
   behavior->block = make__47214660();

   return behavior;
}

Behavior __49655940;

Behavior make__49655940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49655940 = behavior;
   behavior->owner = (Object)layer__output_58_84_47278140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos += 1;
   clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos = realloc(clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos,clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos*sizeof(Object));
clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos[clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos-1] = (Object)behavior;
   behavior->block = make__47542940();

   return behavior;
}

Behavior __49945140;

Behavior make__49945140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49945140 = behavior;
   behavior->owner = (Object)layer__output_58_84_47278140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos += 1;
   clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos = realloc(clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos,clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos*sizeof(Object));
clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->pos[clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_pos-1] = (Object)behavior;
   behavior->block = make__49655740();

   return behavior;
}

Behavior __50542280;

Behavior make__50542280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50542280 = behavior;
   behavior->owner = (Object)layer__output_58_84_47278140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,value__z0_51500920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   value__z0_51500920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   value__z0_51500920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(value__z0_51500920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,value__z0_51500920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
value__z0_51500920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[value__z0_51500920_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__a00_43288960_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   ack__a00_43288960_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   ack__a00_43288960_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(ack__a00_43288960_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,ack__a00_43288960_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
ack__a00_43288960_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[ack__a00_43288960_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50520720();

   return behavior;
}

Behavior __50542120;

Behavior make__50542120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50542120 = behavior;
   behavior->owner = (Object)layer__output_58_84_47278140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_51301100_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   a_51301100_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   a_51301100_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(a_51301100_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,a_51301100_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
a_51301100_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[a_51301100_func0_58_840_51042400_layer__output_58_84_47278140_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50520660();

   return behavior;
}

Scope makelayer__output_58_84_47278140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer__output_58_84_47278140 = scope;
   scope->owner = (Object)layer__output_58_840_49944820;
   scope->name = "layer_output:T";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makefunc0_51300780();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__mac_50777780();
   scope->inners[1] = makeack__add_50777760();
   scope->inners[2] = make_5867_51027300();
   scope->inners[3] = make_5865_51027280();
   scope->inners[4] = make_5866_51027200();
   scope->inners[5] = make_5884_51104800();
   scope->inners[6] = make_58110_51190580();
   scope->inners[7] = make_58133_51300920();
   scope->inners[8] = makevalue__z0_51500920();
   scope->inners[9] = makevalue__a00_43292320();
   scope->inners[10] = makeflag__z0_43292260();
   scope->inners[11] = makeack__a00_43288960();
   scope->inners[12] = make_5869_43343500();
   scope->inners[13] = make_5870_43338600();
   scope->inners[14] = make_5871_45494400();
   scope->inners[15] = make_58121_47009260();
   scope->inners[16] = make_58122_47009180();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5853_47277780();
   scope->scopes[1] = makechannel__accum_5882_47447460();
   scope->scopes[2] = makemac__n1_58107_48538600();
   scope->scopes[3] = makechannel__bias_58108_44700020();
   scope->scopes[4] = makechannel__z_58131_47431240();
   scope->scopes[5] = makeadd__n_58154_48545620();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47543300();
   scope->behaviors[1] = make__49655940();
   scope->behaviors[2] = make__49945140();
   scope->behaviors[3] = make__50542280();
   scope->behaviors[4] = make__50542120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer__output_58_840_49944820() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer__output_58_840_49944820 = systemT;
systemT->owner = NULL;
   systemT->name = "layer_output:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_49942380();
   systemT->inputs[1] = makerst_49942360();
   systemT->inputs[2] = makefill_49942340();
   systemT->inputs[3] = makereq_49942320();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__0_49942280();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer__output_58_84_47278140();

   return systemT;
}