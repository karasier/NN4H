#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_56648760;

SignalI clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeclk_56670600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_840_56648760;
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

SignalI rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makerst_56670580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_840_56648760;
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

SignalI req_56670560_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makereq_56670560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_56670560_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_840_56648760;
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

SignalI _5859_56799780_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_5859_56799780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5859_56799780_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_840_56648760;
   signalI->name = ":59";
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

SignalI ack__layer_56799700_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack__layer_56799700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_56799700_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_840_56648760;
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

SignalI _5857_56799680_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_5857_56799680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5857_56799680_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_840_56648760;
   signalI->name = ":57";
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

SignalI _5858_56799540_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_5858_56799540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5858_56799540_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_840_56648760;
   signalI->name = ":58";
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

SignalI _58113_57072580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58113_57072580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58113_57072580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_840_56648760;
   signalI->name = ":113";
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

SignalI _58114_47004260_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58114_47004260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58114_47004260_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_840_56648760;
   signalI->name = ":114";
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

Block __55010660;

Block __55010440;

void code__55010440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62590620(),ack_55385920_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62590540(),ack__mac_55385900_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62590480(),ack__add_55385880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__55010440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55010440 = block;
   block->owner = (Object)__55010660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55010440;

   return block;
};

void code__55010660() {
   {
      Value cond = rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55010440();
   }
      }
   }
}

Block make__55010660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55010660 = block;
   block->owner = (Object)__55033260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55010660;

   return block;
};

Block __55033080;

Block __55032280;

Block __55032120;

void code__55032120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58242_56210080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,value__z0_56606380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62590240(),flag__z0_57001840_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__55032120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55032120 = block;
   block->owner = (Object)__55032280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55032120;

   return block;
};

Block __55479120;

void code__55479120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58243_56369620_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,value__z1_56683660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62590020(),flag__z1_57001820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__55479120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55479120 = block;
   block->owner = (Object)__55032280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55479120;

   return block;
};

void code__55032280() {
 code__55032120();
 code__55479120();
}

Block make__55032280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55032280 = block;
   block->owner = (Object)__55033080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55032280;

   return block;
};

Block __55032880;

void code__55032880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62589900(),flag__z0_57001840_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62589800(),flag__z1_57001820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__55032880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55032880 = block;
   block->owner = (Object)__55033080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55032880;

   return block;
};

void code__55033080() {
   {
      Value cond = ack__add_55385880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55032280();
   }
   else {
  code__55032880();
   }
      }
   }
}

Block make__55033080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55033080 = block;
   block->owner = (Object)__56008440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55033080;

   return block;
};

Block __56008300;

Block __56008020;

void code__56008020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62589640(),ack__a0_57001800_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62589520(),ack__a1_57001780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__56008020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56008020 = block;
   block->owner = (Object)__56008300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56008020;

   return block;
};

Block __56006960;

Block __56006720;

void code__56006720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_56802140_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58113_57072580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62589020(),ack__a0_57001800_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__56006720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56006720 = block;
   block->owner = (Object)__56006960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56006720;

   return block;
};

Block __56292280;

void code__56292280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_57001860_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58114_47004260_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62588840(),ack__a1_57001780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__56292280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56292280 = block;
   block->owner = (Object)__56006960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56292280;

   return block;
};

void code__56006960() {
 code__56006720();
 code__56292280();
}

Block make__56006960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56006960 = block;
   block->owner = (Object)__56008300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56006960;

   return block;
};

void code__56008300() {
   {
      Value cond = rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56008020();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_57001840_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         src1 = flag__z1_57001820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__56006960();
   }
      }
   }
}

Block make__56008300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56008300 = block;
   block->owner = (Object)__56649140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56008300;

   return block;
};

Block __62255660;

void code__62255660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_56670560_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_55385900_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_55385940_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62255660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62255660 = block;
   block->owner = (Object)__62255280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62255660;

   return block;
};

Block __62255940;

void code__62255940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,clk_57010600_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_55385920_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,ack_57010580_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,rst_57010560_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_56606380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,z__value_54136880_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_56683660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,z__value_50608720_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_57001800_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      src1 = ack__a1_57001780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_56799700_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62255940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62255940 = block;
   block->owner = (Object)__62268440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62255940;

   return block;
};

Block __62255840;

void code__62255840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_57010520_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,ack__mac_55385900_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58215_56124460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58230_56520760_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_54257340_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,value__a0_56802140_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_50913000_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,value__a1_57001860_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62255840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62255840 = block;
   block->owner = (Object)__62268260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62255840;

   return block;
};

Block __49384160;

void code__49384160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48059480_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            idx = value2integer(abus__r_50988360_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50988440_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__49384160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49384160 = block;
   block->owner = (Object)__49780520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49384160;

   return block;
};

Block __62291700;

void code__62291700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50988440_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58150_55570000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62291700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62291700 = block;
   block->owner = (Object)__62291540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62291700;

   return block;
};

Block __62291500;

void code__62291500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58150_55570000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,dbus__r_50988440_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62291500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62291500 = block;
   block->owner = (Object)__62291220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62291500;

   return block;
};

Block __62290700;

void code__62290700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50874540_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58148_55569980_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62290700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62290700 = block;
   block->owner = (Object)__62290480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62290700;

   return block;
};

Block __62290420;

void code__62290420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58148_55569980_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,trig__r_50874540_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62290420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62290420 = block;
   block->owner = (Object)__62290180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62290420;

   return block;
};

Block __62289660;

void code__62289660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50988360_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62289660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62289660 = block;
   block->owner = (Object)__62289460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62289660;

   return block;
};

Block __62289380;

void code__62289380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,abus__r_50988360_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62289380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62289380 = block;
   block->owner = (Object)__62289200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62289380;

   return block;
};

Block __47718760;

void code__47718760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51040220_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            idx = value2integer(abus__r_50309840_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50309980_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__47718760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47718760 = block;
   block->owner = (Object)__50265360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47718760;

   return block;
};

Block __62286700;

void code__62286700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50309980_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58165_56080740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62286700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62286700 = block;
   block->owner = (Object)__62286520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62286700;

   return block;
};

Block __62286460;

void code__62286460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58165_56080740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,dbus__r_50309980_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62286460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62286460 = block;
   block->owner = (Object)__62286220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62286460;

   return block;
};

Block __62285720;

void code__62285720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49778420_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58163_56080680_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62285720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62285720 = block;
   block->owner = (Object)__62285500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62285720;

   return block;
};

Block __62285460;

void code__62285460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58163_56080680_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,trig__r_49778420_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62285460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62285460 = block;
   block->owner = (Object)__62285300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62285460;

   return block;
};

Block __62284940;

void code__62284940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50309840_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62284940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62284940 = block;
   block->owner = (Object)__62284660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62284940;

   return block;
};

Block __62284600;

void code__62284600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,abus__r_50309840_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62284600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62284600 = block;
   block->owner = (Object)__62284280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62284600;

   return block;
};

Block __62307100;

void code__62307100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50558380_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58173_55679820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62307100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62307100 = block;
   block->owner = (Object)__62306900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62307100;

   return block;
};

Block __62306840;

void code__62306840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58173_55679820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,reg__0_50558380_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62306840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62306840 = block;
   block->owner = (Object)__62306660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62306840;

   return block;
};

Block __62305400;

void code__62305400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50907560_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58174_55872080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62305400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62305400 = block;
   block->owner = (Object)__62304880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62305400;

   return block;
};

Block __62304820;

void code__62304820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58174_55872080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,reg__1_50907560_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62304820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62304820 = block;
   block->owner = (Object)__62304620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62304820;

   return block;
};

Block __43781720;

Block __43814640;

Block __45172080;

void code__45172080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62514000(),_58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__45172080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45172080 = block;
   block->owner = (Object)__43814640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45172080;

   return block;
};

void code__43814640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62514160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45172080();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62513940(),_58163_56080680_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__43814640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43814640 = block;
   block->owner = (Object)__43781720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43814640;

   return block;
};

Block __45191160;

Block __45208680;

void code__45208680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62513600(),_58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__45208680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45208680 = block;
   block->owner = (Object)__45191160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45208680;

   return block;
};

void code__45191160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62513800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45208680();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62513360(),_58148_55569980_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__45191160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45191160 = block;
   block->owner = (Object)__43781720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45191160;

   return block;
};

Block __45204020;

Block __44627300;

void code__44627300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62553780(),_5858_56799540_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__44627300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44627300 = block;
   block->owner = (Object)__45204020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44627300;

   return block;
};

void code__45204020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62553880();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__44627300();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62553680(),_5857_56799680_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__45204020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45204020 = block;
   block->owner = (Object)__43781720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45204020;

   return block;
};

Block __44660140;

void code__44660140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62553140(),rvok_43785720_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62553060(),lvok0_43762060_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62553000(),wok0_43785400_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62552800(),lvok1_43786040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62552740(),wok1_43785320_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__44660140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44660140 = block;
   block->owner = (Object)__43781720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44660140;

   return block;
};

Block __47960760;

Block __47959140;

Block __47957800;

Block __47956860;

Block __47994640;

Block __47994420;

void code__47994420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5859_56799780_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,rv_43763780_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62551620(),rvok_43785720_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__47994420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47994420 = block;
   block->owner = (Object)__47994640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47994420;

   return block;
};

void code__47994640() {
 code__47994420();
}

Block make__47994640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47994640 = block;
   block->owner = (Object)__47956860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47994640;

   return block;
};

Block __47956140;

void code__47956140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value sel;
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      sel = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _5858_56799540_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                  src1 = make__62551460();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62551300();
            dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);            set_value_pos(pool_state);
         dst; });
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = _5858_56799540_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__62550840();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__62550760();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5858_56799540_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62550540(),_5857_56799680_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__47956140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47956140 = block;
   block->owner = (Object)__47956860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47956140;

   return block;
};

void code__47956860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5857_56799680_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62551820();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47994640();
   }
   else {
  code__47956140();
   }
      }
   }
}

Block make__47956860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47956860 = block;
   block->owner = (Object)__47957800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47956860;

   return block;
};

void code__47957800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62551980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47956860();
   }
      }
   }
}

Block make__47957800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47957800 = block;
   block->owner = (Object)__47959140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47957800;

   return block;
};

void code__47959140() {
 code__47957800();
}

Block make__47959140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47959140 = block;
   block->owner = (Object)__47960760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47959140;

   return block;
};

Block __49267600;

Block __49290140;

Block __49288440;

Block __49307560;

Block __49303460;

void code__49303460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58150_55570000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,lv0_50282060_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62550100(),lvok0_43762060_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__49303460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49303460 = block;
   block->owner = (Object)__49307560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49303460;

   return block;
};

void code__49307560() {
 code__49303460();
}

Block make__49307560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49307560 = block;
   block->owner = (Object)__49288440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49307560;

   return block;
};

Block __49288000;

void code__49288000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value sel;
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      sel = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                  src1 = make__62549980();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62549940();
            dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);            set_value_pos(pool_state);
         dst; });
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = _58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__62549620();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__62549540();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62549360(),_58148_55569980_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__49288000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49288000 = block;
   block->owner = (Object)__49288440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49288000;

   return block;
};

void code__49288440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58148_55569980_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62550260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49307560();
   }
   else {
  code__49288000();
   }
      }
   }
}

Block make__49288440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49288440 = block;
   block->owner = (Object)__49290140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49288440;

   return block;
};

void code__49290140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62550360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49288440();
   }
      }
   }
}

Block make__49290140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49290140 = block;
   block->owner = (Object)__49267600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49290140;

   return block;
};

void code__49267600() {
 code__49290140();
}

Block make__49267600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49267600 = block;
   block->owner = (Object)__47960760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49267600;

   return block;
};

Block __49123860;

Block __49122060;

Block __49121860;

void code__49121860() {
}

Block make__49121860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49121860 = block;
   block->owner = (Object)__49122060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49121860;

   return block;
};

Block __50874520;

void code__50874520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_50855980_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58173_55679820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62547980(),wok0_43785400_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__50874520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50874520 = block;
   block->owner = (Object)__49122060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50874520;

   return block;
};

void code__49122060() {
 code__49121860();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_50855980_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
            set_value_pos(pool_state);
         dst; });
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
                              src0 = lv0_50282060_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_43763780_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62548360();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_50855980_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
 code__50874520();
}

Block make__49122060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49122060 = block;
   block->owner = (Object)__49123860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49122060;

   return block;
};

void code__49123860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62548900(),ack_55385920_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62548780(),run_43784040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
 code__49122060();
}

Block make__49123860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49123860 = block;
   block->owner = (Object)__47960760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49123860;

   return block;
};

Block __51137040;

void code__51137040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62547540(),wok0_43785400_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62547440(),wok1_43785320_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62547360(),lvok0_43762060_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62547280(),lvok1_43786040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62547220(),rvok_43785720_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__51137040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51137040 = block;
   block->owner = (Object)__47960760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51137040;

   return block;
};

Block __51135560;

Block __51158560;

Block __51158020;

Block __51155120;

Block __51154940;

void code__51154940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58165_56080740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,lv1_50376540_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62546720(),lvok1_43786040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__51154940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51154940 = block;
   block->owner = (Object)__51155120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51154940;

   return block;
};

void code__51155120() {
 code__51154940();
}

Block make__51155120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51155120 = block;
   block->owner = (Object)__51158020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51155120;

   return block;
};

Block __51157160;

void code__51157160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value sel;
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      sel = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                  src1 = make__62546600();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62546320();
            dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);            set_value_pos(pool_state);
         dst; });
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = _58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__62578620();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__62578520();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62578400(),_58163_56080680_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__51157160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51157160 = block;
   block->owner = (Object)__51158020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51157160;

   return block;
};

void code__51158020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58163_56080680_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62546920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51155120();
   }
   else {
  code__51157160();
   }
      }
   }
}

Block make__51158020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51158020 = block;
   block->owner = (Object)__51158560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51158020;

   return block;
};

void code__51158560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62547020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51158020();
   }
      }
   }
}

Block make__51158560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51158560 = block;
   block->owner = (Object)__51135560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51158560;

   return block;
};

void code__51135560() {
 code__51158560();
}

Block make__51135560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51135560 = block;
   block->owner = (Object)__47960760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51135560;

   return block;
};

Block __54135820;

Block __54135340;

Block __54135180;

void code__54135180() {
}

Block make__54135180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54135180 = block;
   block->owner = (Object)__54135340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54135180;

   return block;
};

Block __54636600;

void code__54636600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_51022220_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58174_55872080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62576700(),wok1_43785320_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__54636600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54636600 = block;
   block->owner = (Object)__54135340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54636600;

   return block;
};

void code__54135340() {
 code__54135180();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_51022220_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
            set_value_pos(pool_state);
         dst; });
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
                              src0 = lv1_50376540_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_43763780_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62576960();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_51022220_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
 code__54636600();
}

Block make__54135340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54135340 = block;
   block->owner = (Object)__54135820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54135340;

   return block;
};

void code__54135820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62578040(),ack_55385920_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62577700(),run_43784040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
 code__54135340();
}

Block make__54135820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54135820 = block;
   block->owner = (Object)__47960760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54135820;

   return block;
};

Block __54933460;

void code__54933460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62576480(),wok0_43785400_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62576420(),wok1_43785320_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62576360(),lvok0_43762060_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62576280(),lvok1_43786040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62576220(),rvok_43785720_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__54933460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54933460 = block;
   block->owner = (Object)__47960760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54933460;

   return block;
};

void code__47960760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62552540(),run_43784040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_43785720_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47959140();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_43762060_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49267600();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0,src1,dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = lvok0_43762060_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               src1 = rvok_43785720_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_43785400_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49123860();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_43785400_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         src1 = wok1_43785320_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51137040();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_43786040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51135560();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0,src1,dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = lvok1_43786040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               src1 = rvok_43785720_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_43785320_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54135820();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_43785400_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         src1 = wok1_43785320_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54933460();
   }
      }
   }
}

Block make__47960760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47960760 = block;
   block->owner = (Object)__43781720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47960760;

   return block;
};

Block __45336880;

void code__45336880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62576140(),av0_50855980_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62576080(),av1_51022220_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__45336880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45336880 = block;
   block->owner = (Object)__43781720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45336880;

   return block;
};

void code__43781720() {
 code__43814640();
 code__45191160();
 code__45204020();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62553580(),ack_55385920_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62553440(),run_43784040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_43784040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__44660140();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_55385940_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         src1 = run_43784040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47960760();
   }
   else {
  code__45336880();
   }
      }
   }
}

Block make__43781720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43781720 = block;
   block->owner = (Object)__54932120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43781720;

   return block;
};

Block __55603660;

void code__55603660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55306800_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            idx = value2integer(abus__r_55009460_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_55009540_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__55603660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55603660 = block;
   block->owner = (Object)__56094300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55603660;

   return block;
};

Block __62301920;

void code__62301920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_55009540_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58214_56124480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62301920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62301920 = block;
   block->owner = (Object)__62301680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62301920;

   return block;
};

Block __62301620;

void code__62301620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58214_56124480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,dbus__r_55009540_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62301620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62301620 = block;
   block->owner = (Object)__62301360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62301620;

   return block;
};

Block __62301060;

void code__62301060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_54930420_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62301060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62301060 = block;
   block->owner = (Object)__62300880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62301060;

   return block;
};

Block __62300840;

void code__62300840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,trig__r_54930420_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62300840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62300840 = block;
   block->owner = (Object)__62300620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62300840;

   return block;
};

Block __62357460;

void code__62357460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55009460_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58213_56124360_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62357460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62357460 = block;
   block->owner = (Object)__62357180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62357460;

   return block;
};

Block __62357100;

void code__62357100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_56124360_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,abus__r_55009460_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62357100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62357100 = block;
   block->owner = (Object)__62356400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62357100;

   return block;
};

Block __56602060;

void code__56602060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_56403500_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            idx = value2integer(abus__r_56179800_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_56179880_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__56602060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56602060 = block;
   block->owner = (Object)__57002600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56602060;

   return block;
};

Block __62354680;

void code__62354680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_56179880_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58229_56520780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62354680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62354680 = block;
   block->owner = (Object)__62354500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62354680;

   return block;
};

Block __62354440;

void code__62354440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_56520780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,dbus__r_56179880_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62354440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62354440 = block;
   block->owner = (Object)__62354220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62354440;

   return block;
};

Block __62353740;

void code__62353740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_56092600_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62353740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62353740 = block;
   block->owner = (Object)__62353560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62353740;

   return block;
};

Block __62353500;

void code__62353500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,trig__r_56092600_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62353500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62353500 = block;
   block->owner = (Object)__62353240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62353500;

   return block;
};

Block __62352680;

void code__62352680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_56179800_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58228_56520660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62352680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62352680 = block;
   block->owner = (Object)__62352380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62352680;

   return block;
};

Block __62352340;

void code__62352340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58228_56520660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,abus__r_56179800_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62352340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62352340 = block;
   block->owner = (Object)__62352120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62352340;

   return block;
};

Block __62350180;

void code__62350180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57119000_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58242_56210080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62350180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62350180 = block;
   block->owner = (Object)__62349860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62350180;

   return block;
};

Block __62349820;

void code__62349820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58242_56210080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,reg__0_57119000_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62349820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62349820 = block;
   block->owner = (Object)__62349600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62349820;

   return block;
};

Block __62406600;

void code__62406600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_45706020_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58243_56369620_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62406600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62406600 = block;
   block->owner = (Object)__62406440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62406600;

   return block;
};

Block __62406400;

void code__62406400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58243_56369620_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,reg__1_45706020_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62406400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62406400 = block;
   block->owner = (Object)__62406240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62406400;

   return block;
};

Block __50393780;

Block __50393540;

void code__50393540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62572120(),_58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__50393540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50393540 = block;
   block->owner = (Object)__50393780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50393540;

   return block;
};

Block __50392280;

void code__50392280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62572020(),_58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__50392280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50392280 = block;
   block->owner = (Object)__50393780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50392280;

   return block;
};

Block __50413360;

Block __50412960;

void code__50412960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58173_55679820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,lv0_49702600_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62571400(),lvok0_50394040_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__50412960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50412960 = block;
   block->owner = (Object)__50413360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50412960;

   return block;
};

Block __50841700;

Block __50840100;

Block __50859680;

void code__50859680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58214_56124480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,rv0_50295160_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62570860(),_58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62570780(),rvok0_50393960_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__50859680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50859680 = block;
   block->owner = (Object)__50840100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50859680;

   return block;
};

Block __50863680;

void code__50863680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62570700(),_58213_56124360_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62570580(),_58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__50863680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50863680 = block;
   block->owner = (Object)__50840100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50863680;

   return block;
};

void code__50840100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62571140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50859680();
   }
   else {
  code__50863680();
   }
      }
   }
}

Block make__50840100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50840100 = block;
   block->owner = (Object)__50841700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50840100;

   return block;
};

void code__50841700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58215_56124460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62571240();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50840100();
   }
      }
   }
}

Block make__50841700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50841700 = block;
   block->owner = (Object)__50413360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50841700;

   return block;
};

Block __51137260;

Block __51158680;

void code__51158680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_49702600_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      src1 = rv0_50295160_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58242_56210080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__51158680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51158680 = block;
   block->owner = (Object)__51137260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51158680;

   return block;
};

void code__51137260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62594880(),run_50393920_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62594800(),ack__add_55385880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
 code__51158680();
}

Block make__51137260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51137260 = block;
   block->owner = (Object)__50413360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51137260;

   return block;
};

Block __54386860;

void code__54386860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58174_55872080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,lv1_50135640_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62594380(),lvok1_50393980_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__54386860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54386860 = block;
   block->owner = (Object)__50413360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54386860;

   return block;
};

Block __54557820;

Block __54557260;

Block __54556400;

void code__54556400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_56520780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,rv1_50394060_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62593800(),_58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62593680(),rvok1_50393940_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__54556400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54556400 = block;
   block->owner = (Object)__54557260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54556400;

   return block;
};

Block __54557100;

void code__54557100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62593600(),_58228_56520660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62593460(),_58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__54557100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54557100 = block;
   block->owner = (Object)__54557260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54557100;

   return block;
};

void code__54557260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62594040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54556400();
   }
   else {
  code__54557100();
   }
      }
   }
}

Block make__54557260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54557260 = block;
   block->owner = (Object)__54557820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54557260;

   return block;
};

void code__54557820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58230_56520760_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62594220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54557260();
   }
      }
   }
}

Block make__54557820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54557820 = block;
   block->owner = (Object)__50413360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54557820;

   return block;
};

Block __54800480;

Block __54800000;

void code__54800000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_50135640_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      src1 = rv1_50394060_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58243_56369620_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__54800000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54800000 = block;
   block->owner = (Object)__54800480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54800000;

   return block;
};

void code__54800480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62593260(),run_50393920_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62593200(),ack__add_55385880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
 code__54800000();
}

Block make__54800480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54800480 = block;
   block->owner = (Object)__50413360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54800480;

   return block;
};

void code__50413360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62571580(),run_50393920_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
 code__50412960();
 code__50841700();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_50394040_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         src1 = rvok0_50393960_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51137260();
   }
      }
   }
 code__54386860();
 code__54557820();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_50393980_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         src1 = rvok1_50393940_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54800480();
   }
      }
   }
}

Block make__50413360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50413360 = block;
   block->owner = (Object)__50393780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50413360;

   return block;
};

Block __50390560;

void code__50390560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62592920(),lvok0_50394040_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62592860(),rvok0_50393960_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62592800(),lvok1_50393980_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62592660(),rvok1_50393940_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__50390560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50390560 = block;
   block->owner = (Object)__50393780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50390560;

   return block;
};

void code__50393780() {
 code__50393540();
 code__50392280();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62571920(),ack__add_55385880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62571820(),run_50393920_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_55385900_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         src1 = run_50393920_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50413360();
   }
   else {
  code__50390560();
   }
      }
   }
}

Block make__50393780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50393780 = block;
   block->owner = (Object)__55320580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50393780;

   return block;
};

Value make__62518780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__62518760() {
   static unsigned long long data[] = { 9ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__62517280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__62517260() {
   static unsigned long long data[] = { 9ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__62576060() {
   static unsigned long long data[] = { 4294967287ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__62574660() {
   static unsigned long long data[] = { 9ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__62514160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62514000() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62513940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62513800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62513600() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62513360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62553880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62553780() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62553680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62553580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62553440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62553140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62553060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62553000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62552800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62552740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62552540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62551980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62551820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62551620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62551460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62551300() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62550840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62550760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62550540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62550360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62550260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62550100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62549980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62549940() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62549620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62549540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62549360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62548900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62548780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62548360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62547980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62547540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62547440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62547360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62547280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62547220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62547020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62546920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62546720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62546600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62546320() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62578620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62578520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62578400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62578040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62577700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62576960() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62576700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62576480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62576420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62576360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62576280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62576220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62576140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__62576080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__62572120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62572020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62571920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62571820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62571580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62571400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62571240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62571140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62570860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62570780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62570700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62570580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62594880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62594800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62594380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62594220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62594040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62593800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62593680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62593600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62593460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62593260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62593200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62592920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62592860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62592800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62592660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62590620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62590540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62590480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62590240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62590020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62589900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62589800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62589640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62589520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62589020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62588840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_50877760;

SignalI req__mac_55385940_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makereq__mac_55385940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_55385940_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
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

SignalI ack_55385920_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack_55385920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_55385920_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
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

SignalI ack__mac_55385900_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack__mac_55385900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_55385900_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
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

SignalI ack__add_55385880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack__add_55385880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_55385880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
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

SignalI _58150_55570000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58150_55570000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58150_55570000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":150";
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

SignalI _58148_55569980_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58148_55569980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58148_55569980_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":148";
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

SignalI _58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58149_55569880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":149";
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

SignalI _58173_55679820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58173_55679820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58173_55679820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":173";
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

SignalI _58174_55872080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58174_55872080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58174_55872080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":174";
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

SignalI _58165_56080740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58165_56080740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58165_56080740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":165";
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

SignalI _58163_56080680_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58163_56080680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58163_56080680_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":163";
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

SignalI _58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58164_56080600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":164";
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

SignalI _58214_56124480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58214_56124480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58214_56124480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":214";
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

SignalI _58215_56124460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58215_56124460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58215_56124460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":215";
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

SignalI _58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58212_56124440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":212";
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

SignalI _58213_56124360_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58213_56124360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_56124360_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":213";
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

SignalI _58242_56210080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58242_56210080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58242_56210080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":242";
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

SignalI _58243_56369620_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58243_56369620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58243_56369620_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":243";
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

SignalI _58229_56520780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58229_56520780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58229_56520780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":229";
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

SignalI _58230_56520760_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58230_56520760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58230_56520760_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":230";
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

SignalI _58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58227_56520740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":227";
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

SignalI _58228_56520660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_58228_56520660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58228_56520660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
   signalI->name = ":228";
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

SignalI value__z0_56606380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makevalue__z0_56606380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_56606380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
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

SignalI value__z1_56683660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makevalue__z1_56683660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_56683660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
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

SignalI value__a0_56802140_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makevalue__a0_56802140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_56802140_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
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

SignalI value__a1_57001860_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makevalue__a1_57001860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_57001860_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
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

SignalI flag__z0_57001840_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeflag__z0_57001840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_57001840_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
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

SignalI flag__z1_57001820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeflag__z1_57001820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_57001820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
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

SignalI ack__a0_57001800_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack__a0_57001800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_57001800_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
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

SignalI ack__a1_57001780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack__a1_57001780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_57001780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)layer0_58_84_50877760;
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

SystemI counter_57010380;

SystemI makecounter_57010380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_57010380 = systemI;
   systemI->owner = (Object)layer0_58_84_50877760;
   systemI->name = "counter";
   systemI->system = counter_58_841_57012540;

   return systemI;
};

SystemI func0_54257120;

SystemI makefunc0_54257120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_54257120 = systemI;
   systemI->owner = (Object)layer0_58_84_50877760;
   systemI->name = "func0";
   systemI->system = func0_58_841_54011460;

   return systemI;
};

SystemI func1_50911240;

SystemI makefunc1_50911240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_50911240 = systemI;
   systemI->owner = (Object)layer0_58_84_50877760;
   systemI->name = "func1";
   systemI->system = func1_58_841_50326120;

   return systemI;
};

Scope channel__w0_58141_50877380;

SignalI trig__r_50874540_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI maketrig__r_50874540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50874540_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__w0_58141_50877380;
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

SignalI dbus__r_50988440_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makedbus__r_50988440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50988440_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__w0_58141_50877380;
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

SignalI abus__r_50988360_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__r_50988360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50988360_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__w0_58141_50877380;
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

SignalI mem_48059480_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makemem_48059480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48059480_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__w0_58141_50877380;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__62518780();
         src1 = make__62518760();
         concat_value(2,0,dst,src0,src1);
         set_value_pos(pool_state);
      dst; }),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58142_50876960;

Scope makeraddr_58142_50876960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58142_50876960 = scope;
   scope->owner = (Object)channel__w0_58141_50877380;
   scope->name = "raddr:142";
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

Scope rinc_58147_50875540;

Scope makerinc_58147_50875540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58147_50875540 = scope;
   scope->owner = (Object)channel__w0_58141_50877380;
   scope->name = "rinc:147";
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

Scope rdec_58151_50874980;

Scope makerdec_58151_50874980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58151_50874980 = scope;
   scope->owner = (Object)channel__w0_58141_50877380;
   scope->name = "rdec:151";
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

Behavior __49780520;

Behavior make__49780520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49780520 = behavior;
   behavior->owner = (Object)channel__w0_58141_50877380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg += 1;
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg = realloc(clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg*sizeof(Object));
clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg[clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg-1] = (Object)behavior;
   behavior->block = make__49384160();

   return behavior;
}

Behavior __62291540;

Behavior make__62291540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62291540 = behavior;
   behavior->owner = (Object)channel__w0_58141_50877380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50988440_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   dbus__r_50988440_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   dbus__r_50988440_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(dbus__r_50988440_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,dbus__r_50988440_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
dbus__r_50988440_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[dbus__r_50988440_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62291700();

   return behavior;
}

Behavior __62291220;

Behavior make__62291220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62291220 = behavior;
   behavior->owner = (Object)channel__w0_58141_50877380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58150_55570000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58150_55570000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58150_55570000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58150_55570000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58150_55570000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58150_55570000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58150_55570000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62291500();

   return behavior;
}

Behavior __62290480;

Behavior make__62290480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62290480 = behavior;
   behavior->owner = (Object)channel__w0_58141_50877380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50874540_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   trig__r_50874540_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   trig__r_50874540_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(trig__r_50874540_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,trig__r_50874540_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
trig__r_50874540_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[trig__r_50874540_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62290700();

   return behavior;
}

Behavior __62290180;

Behavior make__62290180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62290180 = behavior;
   behavior->owner = (Object)channel__w0_58141_50877380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58148_55569980_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58148_55569980_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58148_55569980_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58148_55569980_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58148_55569980_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58148_55569980_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58148_55569980_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62290420();

   return behavior;
}

Behavior __62289460;

Behavior make__62289460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62289460 = behavior;
   behavior->owner = (Object)channel__w0_58141_50877380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50988360_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   abus__r_50988360_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   abus__r_50988360_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(abus__r_50988360_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,abus__r_50988360_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
abus__r_50988360_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[abus__r_50988360_channel__w0_58141_50877380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62289660();

   return behavior;
}

Behavior __62289200;

Behavior make__62289200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62289200 = behavior;
   behavior->owner = (Object)channel__w0_58141_50877380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58149_55569880_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62289380();

   return behavior;
}

Scope makechannel__w0_58141_50877380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58141_50877380 = scope;
   scope->owner = (Object)layer0_58_84_50877760;
   scope->name = "channel_w0:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50874540();
   scope->inners[1] = makedbus__r_50988440();
   scope->inners[2] = makeabus__r_50988360();
   scope->inners[3] = makemem_48059480();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58142_50876960();
   scope->scopes[1] = makerinc_58147_50875540();
   scope->scopes[2] = makerdec_58151_50874980();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49780520();
   scope->behaviors[1] = make__62291540();
   scope->behaviors[2] = make__62291220();
   scope->behaviors[3] = make__62290480();
   scope->behaviors[4] = make__62290180();
   scope->behaviors[5] = make__62289460();
   scope->behaviors[6] = make__62289200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58156_49780400;

SignalI trig__r_49778420_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI maketrig__r_49778420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49778420_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__w1_58156_49780400;
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

SignalI dbus__r_50309980_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makedbus__r_50309980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50309980_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__w1_58156_49780400;
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

SignalI abus__r_50309840_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__r_50309840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50309840_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__w1_58156_49780400;
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

SignalI mem_51040220_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makemem_51040220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51040220_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__w1_58156_49780400;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__62517280();
         src1 = make__62517260();
         concat_value(2,0,dst,src0,src1);
         set_value_pos(pool_state);
      dst; }),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58157_49780060;

Scope makeraddr_58157_49780060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58157_49780060 = scope;
   scope->owner = (Object)channel__w1_58156_49780400;
   scope->name = "raddr:157";
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

Scope rinc_58162_49779540;

Scope makerinc_58162_49779540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58162_49779540 = scope;
   scope->owner = (Object)channel__w1_58156_49780400;
   scope->name = "rinc:162";
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

Scope rdec_58166_49778960;

Scope makerdec_58166_49778960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58166_49778960 = scope;
   scope->owner = (Object)channel__w1_58156_49780400;
   scope->name = "rdec:166";
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

Behavior __50265360;

Behavior make__50265360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50265360 = behavior;
   behavior->owner = (Object)channel__w1_58156_49780400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg += 1;
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg = realloc(clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg*sizeof(Object));
clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg[clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg-1] = (Object)behavior;
   behavior->block = make__47718760();

   return behavior;
}

Behavior __62286520;

Behavior make__62286520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62286520 = behavior;
   behavior->owner = (Object)channel__w1_58156_49780400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50309980_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   dbus__r_50309980_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   dbus__r_50309980_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(dbus__r_50309980_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,dbus__r_50309980_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
dbus__r_50309980_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[dbus__r_50309980_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62286700();

   return behavior;
}

Behavior __62286220;

Behavior make__62286220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62286220 = behavior;
   behavior->owner = (Object)channel__w1_58156_49780400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58165_56080740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58165_56080740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58165_56080740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58165_56080740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58165_56080740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58165_56080740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58165_56080740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62286460();

   return behavior;
}

Behavior __62285500;

Behavior make__62285500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62285500 = behavior;
   behavior->owner = (Object)channel__w1_58156_49780400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49778420_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   trig__r_49778420_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   trig__r_49778420_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(trig__r_49778420_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,trig__r_49778420_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
trig__r_49778420_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[trig__r_49778420_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62285720();

   return behavior;
}

Behavior __62285300;

Behavior make__62285300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62285300 = behavior;
   behavior->owner = (Object)channel__w1_58156_49780400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58163_56080680_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58163_56080680_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58163_56080680_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58163_56080680_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58163_56080680_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58163_56080680_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58163_56080680_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62285460();

   return behavior;
}

Behavior __62284660;

Behavior make__62284660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62284660 = behavior;
   behavior->owner = (Object)channel__w1_58156_49780400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50309840_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   abus__r_50309840_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   abus__r_50309840_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(abus__r_50309840_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,abus__r_50309840_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
abus__r_50309840_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[abus__r_50309840_channel__w1_58156_49780400_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62284940();

   return behavior;
}

Behavior __62284280;

Behavior make__62284280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62284280 = behavior;
   behavior->owner = (Object)channel__w1_58156_49780400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58164_56080600_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62284600();

   return behavior;
}

Scope makechannel__w1_58156_49780400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58156_49780400 = scope;
   scope->owner = (Object)layer0_58_84_50877760;
   scope->name = "channel_w1:156";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49778420();
   scope->inners[1] = makedbus__r_50309980();
   scope->inners[2] = makeabus__r_50309840();
   scope->inners[3] = makemem_51040220();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58157_49780060();
   scope->scopes[1] = makerinc_58162_49779540();
   scope->scopes[2] = makerdec_58166_49778960();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50265360();
   scope->behaviors[1] = make__62286520();
   scope->behaviors[2] = make__62286220();
   scope->behaviors[3] = make__62285500();
   scope->behaviors[4] = make__62285300();
   scope->behaviors[5] = make__62284660();
   scope->behaviors[6] = make__62284280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58171_50265240;

SignalI reg__0_50558380_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makereg__0_50558380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50558380_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__accum_58171_50265240;
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

SignalI reg__1_50907560_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makereg__1_50907560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50907560_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__accum_58171_50265240;
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

Scope anum_58172_50264920;

Scope makeanum_58172_50264920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58172_50264920 = scope;
   scope->owner = (Object)channel__accum_58171_50265240;
   scope->name = "anum:172";
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

Scope raddr_58175_50264280;

Scope makeraddr_58175_50264280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58175_50264280 = scope;
   scope->owner = (Object)channel__accum_58171_50265240;
   scope->name = "raddr:175";
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

Scope waddr_58179_50263260;

Scope makewaddr_58179_50263260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58179_50263260 = scope;
   scope->owner = (Object)channel__accum_58171_50265240;
   scope->name = "waddr:179";
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

Scope rinc_58183_50262660;

SignalI abus__r_50262280_rinc_58183_50262660_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__r_50262280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50262280_rinc_58183_50262660_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)rinc_58183_50262660;
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

Scope makerinc_58183_50262660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58183_50262660 = scope;
   scope->owner = (Object)channel__accum_58171_50265240;
   scope->name = "rinc:183";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50262280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58188_50262160;

SignalI abus__w_50261480_winc_58188_50262160_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__w_50261480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50261480_winc_58188_50262160_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)winc_58188_50262160;
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

Scope makewinc_58188_50262160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58188_50262160 = scope;
   scope->owner = (Object)channel__accum_58171_50265240;
   scope->name = "winc:188";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50261480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58193_50261360;

SignalI abus__r_50260880_rdec_58193_50261360_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__r_50260880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50260880_rdec_58193_50261360_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)rdec_58193_50261360;
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

Scope makerdec_58193_50261360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58193_50261360 = scope;
   scope->owner = (Object)channel__accum_58171_50265240;
   scope->name = "rdec:193";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50260880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58198_50260760;

SignalI abus__w_50260340_wdec_58198_50260760_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__w_50260340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50260340_wdec_58198_50260760_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)wdec_58198_50260760;
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

Scope makewdec_58198_50260760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58198_50260760 = scope;
   scope->owner = (Object)channel__accum_58171_50265240;
   scope->name = "wdec:198";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50260340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __62306900;

Behavior make__62306900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62306900 = behavior;
   behavior->owner = (Object)channel__accum_58171_50265240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50558380_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   reg__0_50558380_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   reg__0_50558380_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(reg__0_50558380_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,reg__0_50558380_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
reg__0_50558380_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[reg__0_50558380_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62307100();

   return behavior;
}

Behavior __62306660;

Behavior make__62306660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62306660 = behavior;
   behavior->owner = (Object)channel__accum_58171_50265240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58173_55679820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58173_55679820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58173_55679820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58173_55679820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58173_55679820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58173_55679820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58173_55679820_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62306840();

   return behavior;
}

Behavior __62304880;

Behavior make__62304880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62304880 = behavior;
   behavior->owner = (Object)channel__accum_58171_50265240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50907560_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   reg__1_50907560_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   reg__1_50907560_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(reg__1_50907560_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,reg__1_50907560_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
reg__1_50907560_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[reg__1_50907560_channel__accum_58171_50265240_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62305400();

   return behavior;
}

Behavior __62304620;

Behavior make__62304620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62304620 = behavior;
   behavior->owner = (Object)channel__accum_58171_50265240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58174_55872080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58174_55872080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58174_55872080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58174_55872080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58174_55872080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58174_55872080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58174_55872080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62304820();

   return behavior;
}

Scope makechannel__accum_58171_50265240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58171_50265240 = scope;
   scope->owner = (Object)layer0_58_84_50877760;
   scope->name = "channel_accum:171";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50558380();
   scope->inners[1] = makereg__1_50907560();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58172_50264920();
   scope->scopes[1] = makeraddr_58175_50264280();
   scope->scopes[2] = makewaddr_58179_50263260();
   scope->scopes[3] = makerinc_58183_50262660();
   scope->scopes[4] = makewinc_58188_50262160();
   scope->scopes[5] = makerdec_58193_50261360();
   scope->scopes[6] = makewdec_58198_50260760();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62306900();
   scope->behaviors[1] = make__62306660();
   scope->behaviors[2] = make__62304880();
   scope->behaviors[3] = make__62304620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58203_48839640;

SignalI lv0_50282060_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makelv0_50282060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_50282060_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)mac__n1_58203_48839640;
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

SignalI lv1_50376540_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makelv1_50376540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_50376540_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)mac__n1_58203_48839640;
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

SignalI av0_50855980_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeav0_50855980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_50855980_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)mac__n1_58203_48839640;
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

SignalI av1_51022220_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeav1_51022220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_51022220_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)mac__n1_58203_48839640;
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

SignalI rv_43763780_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makerv_43763780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_43763780_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)mac__n1_58203_48839640;
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

SignalI lvok0_43762060_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makelvok0_43762060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_43762060_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)mac__n1_58203_48839640;
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

SignalI lvok1_43786040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makelvok1_43786040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_43786040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)mac__n1_58203_48839640;
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

SignalI rvok_43785720_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makervok_43785720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_43785720_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)mac__n1_58203_48839640;
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

SignalI wok0_43785400_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makewok0_43785400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_43785400_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)mac__n1_58203_48839640;
   signalI->name = "wok0";
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

SignalI wok1_43785320_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makewok1_43785320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_43785320_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)mac__n1_58203_48839640;
   signalI->name = "wok1";
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

SignalI run_43784040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makerun_43784040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_43784040_mac__n1_58203_48839640_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)mac__n1_58203_48839640;
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

Behavior __54932120;

Behavior make__54932120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54932120 = behavior;
   behavior->owner = (Object)mac__n1_58203_48839640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos += 1;
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos = realloc(clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos*sizeof(Object));
clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos[clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos-1] = (Object)behavior;
   behavior->block = make__43781720();

   return behavior;
}

Scope makemac__n1_58203_48839640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58203_48839640 = scope;
   scope->owner = (Object)layer0_58_84_50877760;
   scope->name = "mac_n1:203";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_50282060();
   scope->inners[1] = makelv1_50376540();
   scope->inners[2] = makeav0_50855980();
   scope->inners[3] = makeav1_51022220();
   scope->inners[4] = makerv_43763780();
   scope->inners[5] = makelvok0_43762060();
   scope->inners[6] = makelvok1_43786040();
   scope->inners[7] = makervok_43785720();
   scope->inners[8] = makewok0_43785400();
   scope->inners[9] = makewok1_43785320();
   scope->inners[10] = makerun_43784040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54932120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58210_54932000;

SignalI trig__r_54930420_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI maketrig__r_54930420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_54930420_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__b0_58210_54932000;
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

SignalI dbus__r_55009540_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makedbus__r_55009540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_55009540_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__b0_58210_54932000;
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

SignalI abus__r_55009460_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__r_55009460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55009460_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__b0_58210_54932000;
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

SignalI mem_55306800_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makemem_55306800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55306800_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__b0_58210_54932000;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__62576060(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58211_54931700;

Scope makeraddr_58211_54931700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58211_54931700 = scope;
   scope->owner = (Object)channel__b0_58210_54932000;
   scope->name = "raddr:211";
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

Scope rinc_58216_54931280;

Scope makerinc_58216_54931280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58216_54931280 = scope;
   scope->owner = (Object)channel__b0_58210_54932000;
   scope->name = "rinc:216";
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

Scope rdec_58220_54930860;

Scope makerdec_58220_54930860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58220_54930860 = scope;
   scope->owner = (Object)channel__b0_58210_54932000;
   scope->name = "rdec:220";
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

Behavior __56094300;

Behavior make__56094300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56094300 = behavior;
   behavior->owner = (Object)channel__b0_58210_54932000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg += 1;
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg = realloc(clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg*sizeof(Object));
clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg[clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg-1] = (Object)behavior;
   behavior->block = make__55603660();

   return behavior;
}

Behavior __62301680;

Behavior make__62301680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62301680 = behavior;
   behavior->owner = (Object)channel__b0_58210_54932000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_55009540_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   dbus__r_55009540_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   dbus__r_55009540_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(dbus__r_55009540_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,dbus__r_55009540_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
dbus__r_55009540_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[dbus__r_55009540_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62301920();

   return behavior;
}

Behavior __62301360;

Behavior make__62301360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62301360 = behavior;
   behavior->owner = (Object)channel__b0_58210_54932000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58214_56124480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58214_56124480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58214_56124480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58214_56124480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58214_56124480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58214_56124480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58214_56124480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62301620();

   return behavior;
}

Behavior __62300880;

Behavior make__62300880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62300880 = behavior;
   behavior->owner = (Object)channel__b0_58210_54932000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_54930420_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   trig__r_54930420_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   trig__r_54930420_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(trig__r_54930420_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,trig__r_54930420_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
trig__r_54930420_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[trig__r_54930420_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62301060();

   return behavior;
}

Behavior __62300620;

Behavior make__62300620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62300620 = behavior;
   behavior->owner = (Object)channel__b0_58210_54932000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58212_56124440_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62300840();

   return behavior;
}

Behavior __62357180;

Behavior make__62357180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62357180 = behavior;
   behavior->owner = (Object)channel__b0_58210_54932000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55009460_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   abus__r_55009460_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   abus__r_55009460_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(abus__r_55009460_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,abus__r_55009460_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
abus__r_55009460_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[abus__r_55009460_channel__b0_58210_54932000_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62357460();

   return behavior;
}

Behavior __62356400;

Behavior make__62356400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62356400 = behavior;
   behavior->owner = (Object)channel__b0_58210_54932000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_56124360_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58213_56124360_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58213_56124360_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58213_56124360_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58213_56124360_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58213_56124360_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58213_56124360_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62357100();

   return behavior;
}

Scope makechannel__b0_58210_54932000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58210_54932000 = scope;
   scope->owner = (Object)layer0_58_84_50877760;
   scope->name = "channel_b0:210";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_54930420();
   scope->inners[1] = makedbus__r_55009540();
   scope->inners[2] = makeabus__r_55009460();
   scope->inners[3] = makemem_55306800();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58211_54931700();
   scope->scopes[1] = makerinc_58216_54931280();
   scope->scopes[2] = makerdec_58220_54930860();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56094300();
   scope->behaviors[1] = make__62301680();
   scope->behaviors[2] = make__62301360();
   scope->behaviors[3] = make__62300880();
   scope->behaviors[4] = make__62300620();
   scope->behaviors[5] = make__62357180();
   scope->behaviors[6] = make__62356400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58225_56094180;

SignalI trig__r_56092600_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI maketrig__r_56092600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_56092600_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__b1_58225_56094180;
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

SignalI dbus__r_56179880_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makedbus__r_56179880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_56179880_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__b1_58225_56094180;
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

SignalI abus__r_56179800_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__r_56179800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56179800_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__b1_58225_56094180;
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

SignalI mem_56403500_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makemem_56403500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_56403500_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__b1_58225_56094180;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__62574660(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58226_56093880;

Scope makeraddr_58226_56093880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58226_56093880 = scope;
   scope->owner = (Object)channel__b1_58225_56094180;
   scope->name = "raddr:226";
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

Scope rinc_58231_56093460;

Scope makerinc_58231_56093460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58231_56093460 = scope;
   scope->owner = (Object)channel__b1_58225_56094180;
   scope->name = "rinc:231";
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

Scope rdec_58235_56093040;

Scope makerdec_58235_56093040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58235_56093040 = scope;
   scope->owner = (Object)channel__b1_58225_56094180;
   scope->name = "rdec:235";
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

Behavior __57002600;

Behavior make__57002600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57002600 = behavior;
   behavior->owner = (Object)channel__b1_58225_56094180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg += 1;
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg = realloc(clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg*sizeof(Object));
clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg[clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg-1] = (Object)behavior;
   behavior->block = make__56602060();

   return behavior;
}

Behavior __62354500;

Behavior make__62354500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62354500 = behavior;
   behavior->owner = (Object)channel__b1_58225_56094180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_56179880_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   dbus__r_56179880_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   dbus__r_56179880_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(dbus__r_56179880_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,dbus__r_56179880_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
dbus__r_56179880_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[dbus__r_56179880_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62354680();

   return behavior;
}

Behavior __62354220;

Behavior make__62354220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62354220 = behavior;
   behavior->owner = (Object)channel__b1_58225_56094180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58229_56520780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58229_56520780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58229_56520780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58229_56520780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58229_56520780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58229_56520780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58229_56520780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62354440();

   return behavior;
}

Behavior __62353560;

Behavior make__62353560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62353560 = behavior;
   behavior->owner = (Object)channel__b1_58225_56094180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_56092600_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   trig__r_56092600_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   trig__r_56092600_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(trig__r_56092600_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,trig__r_56092600_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
trig__r_56092600_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[trig__r_56092600_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62353740();

   return behavior;
}

Behavior __62353240;

Behavior make__62353240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62353240 = behavior;
   behavior->owner = (Object)channel__b1_58225_56094180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58227_56520740_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62353500();

   return behavior;
}

Behavior __62352380;

Behavior make__62352380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62352380 = behavior;
   behavior->owner = (Object)channel__b1_58225_56094180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_56179800_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   abus__r_56179800_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   abus__r_56179800_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(abus__r_56179800_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,abus__r_56179800_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
abus__r_56179800_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[abus__r_56179800_channel__b1_58225_56094180_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62352680();

   return behavior;
}

Behavior __62352120;

Behavior make__62352120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62352120 = behavior;
   behavior->owner = (Object)channel__b1_58225_56094180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58228_56520660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58228_56520660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58228_56520660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58228_56520660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58228_56520660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58228_56520660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58228_56520660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62352340();

   return behavior;
}

Scope makechannel__b1_58225_56094180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58225_56094180 = scope;
   scope->owner = (Object)layer0_58_84_50877760;
   scope->name = "channel_b1:225";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_56092600();
   scope->inners[1] = makedbus__r_56179880();
   scope->inners[2] = makeabus__r_56179800();
   scope->inners[3] = makemem_56403500();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58226_56093880();
   scope->scopes[1] = makerinc_58231_56093460();
   scope->scopes[2] = makerdec_58235_56093040();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57002600();
   scope->behaviors[1] = make__62354500();
   scope->behaviors[2] = make__62354220();
   scope->behaviors[3] = make__62353560();
   scope->behaviors[4] = make__62353240();
   scope->behaviors[5] = make__62352380();
   scope->behaviors[6] = make__62352120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58240_57002480;

SignalI reg__0_57119000_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makereg__0_57119000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_57119000_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__z_58240_57002480;
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

SignalI reg__1_45706020_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makereg__1_45706020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_45706020_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__z_58240_57002480;
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

Scope anum_58241_57002180;

Scope makeanum_58241_57002180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58241_57002180 = scope;
   scope->owner = (Object)channel__z_58240_57002480;
   scope->name = "anum:241";
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

Scope raddr_58244_57001760;

Scope makeraddr_58244_57001760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58244_57001760 = scope;
   scope->owner = (Object)channel__z_58240_57002480;
   scope->name = "raddr:244";
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

Scope waddr_58248_57001340;

Scope makewaddr_58248_57001340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58248_57001340 = scope;
   scope->owner = (Object)channel__z_58240_57002480;
   scope->name = "waddr:248";
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

Scope rinc_58252_57000920;

SignalI abus__r_57000540_rinc_58252_57000920_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__r_57000540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57000540_rinc_58252_57000920_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)rinc_58252_57000920;
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

Scope makerinc_58252_57000920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58252_57000920 = scope;
   scope->owner = (Object)channel__z_58240_57002480;
   scope->name = "rinc:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57000540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58256_57000420;

SignalI abus__w_57000040_winc_58256_57000420_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__w_57000040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57000040_winc_58256_57000420_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)winc_58256_57000420;
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

Scope makewinc_58256_57000420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58256_57000420 = scope;
   scope->owner = (Object)channel__z_58240_57002480;
   scope->name = "winc:256";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57000040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58260_57016280;

SignalI abus__r_57015900_rdec_58260_57016280_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__r_57015900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57015900_rdec_58260_57016280_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)rdec_58260_57016280;
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

Scope makerdec_58260_57016280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58260_57016280 = scope;
   scope->owner = (Object)channel__z_58240_57002480;
   scope->name = "rdec:260";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57015900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58265_57015780;

SignalI abus__w_57015400_wdec_58265_57015780_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__w_57015400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57015400_wdec_58265_57015780_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)wdec_58265_57015780;
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

Scope makewdec_58265_57015780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58265_57015780 = scope;
   scope->owner = (Object)channel__z_58240_57002480;
   scope->name = "wdec:265";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57015400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __62349860;

Behavior make__62349860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62349860 = behavior;
   behavior->owner = (Object)channel__z_58240_57002480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57119000_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   reg__0_57119000_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   reg__0_57119000_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(reg__0_57119000_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,reg__0_57119000_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
reg__0_57119000_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[reg__0_57119000_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62350180();

   return behavior;
}

Behavior __62349600;

Behavior make__62349600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62349600 = behavior;
   behavior->owner = (Object)channel__z_58240_57002480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58242_56210080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58242_56210080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58242_56210080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58242_56210080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58242_56210080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58242_56210080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58242_56210080_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62349820();

   return behavior;
}

Behavior __62406440;

Behavior make__62406440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62406440 = behavior;
   behavior->owner = (Object)channel__z_58240_57002480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_45706020_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   reg__1_45706020_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   reg__1_45706020_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(reg__1_45706020_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,reg__1_45706020_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
reg__1_45706020_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[reg__1_45706020_channel__z_58240_57002480_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62406600();

   return behavior;
}

Behavior __62406240;

Behavior make__62406240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62406240 = behavior;
   behavior->owner = (Object)channel__z_58240_57002480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58243_56369620_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58243_56369620_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58243_56369620_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58243_56369620_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58243_56369620_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58243_56369620_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58243_56369620_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62406400();

   return behavior;
}

Scope makechannel__z_58240_57002480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58240_57002480 = scope;
   scope->owner = (Object)layer0_58_84_50877760;
   scope->name = "channel_z:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_57119000();
   scope->inners[1] = makereg__1_45706020();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58241_57002180();
   scope->scopes[1] = makeraddr_58244_57001760();
   scope->scopes[2] = makewaddr_58248_57001340();
   scope->scopes[3] = makerinc_58252_57000920();
   scope->scopes[4] = makewinc_58256_57000420();
   scope->scopes[5] = makerdec_58260_57016280();
   scope->scopes[6] = makewdec_58265_57015780();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62349860();
   scope->behaviors[1] = make__62349600();
   scope->behaviors[2] = make__62406440();
   scope->behaviors[3] = make__62406240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58270_49474060;

SignalI lv0_49702600_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makelv0_49702600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49702600_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)add__n_58270_49474060;
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

SignalI lv1_50135640_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makelv1_50135640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_50135640_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)add__n_58270_49474060;
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

SignalI rv0_50295160_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makerv0_50295160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_50295160_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)add__n_58270_49474060;
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

SignalI rv1_50394060_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makerv1_50394060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_50394060_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)add__n_58270_49474060;
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

SignalI lvok0_50394040_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makelvok0_50394040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_50394040_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)add__n_58270_49474060;
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

SignalI lvok1_50393980_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makelvok1_50393980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_50393980_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)add__n_58270_49474060;
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

SignalI rvok0_50393960_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makervok0_50393960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_50393960_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)add__n_58270_49474060;
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

SignalI rvok1_50393940_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makervok1_50393940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_50393940_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)add__n_58270_49474060;
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

SignalI run_50393920_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makerun_50393920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_50393920_add__n_58270_49474060_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)add__n_58270_49474060;
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

Behavior __55320580;

Behavior make__55320580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55320580 = behavior;
   behavior->owner = (Object)add__n_58270_49474060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos += 1;
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos = realloc(clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos*sizeof(Object));
clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos[clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos-1] = (Object)behavior;
   behavior->block = make__50393780();

   return behavior;
}

Scope makeadd__n_58270_49474060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58270_49474060 = scope;
   scope->owner = (Object)layer0_58_84_50877760;
   scope->name = "add_n:270";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49702600();
   scope->inners[1] = makelv1_50135640();
   scope->inners[2] = makerv0_50295160();
   scope->inners[3] = makerv1_50394060();
   scope->inners[4] = makelvok0_50394040();
   scope->inners[5] = makelvok1_50393980();
   scope->inners[6] = makervok0_50393960();
   scope->inners[7] = makervok1_50393940();
   scope->inners[8] = makerun_50393920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55320580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __55033260;

Behavior make__55033260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55033260 = behavior;
   behavior->owner = (Object)layer0_58_84_50877760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos += 1;
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos = realloc(clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos*sizeof(Object));
clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos[clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos-1] = (Object)behavior;
   behavior->block = make__55010660();

   return behavior;
}

Behavior __56008440;

Behavior make__56008440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56008440 = behavior;
   behavior->owner = (Object)layer0_58_84_50877760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos += 1;
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos = realloc(clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos*sizeof(Object));
clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos[clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos-1] = (Object)behavior;
   behavior->block = make__55033080();

   return behavior;
}

Behavior __56649140;

Behavior make__56649140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56649140 = behavior;
   behavior->owner = (Object)layer0_58_84_50877760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos += 1;
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos = realloc(clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos*sizeof(Object));
clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos[clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos-1] = (Object)behavior;
   behavior->block = make__56008300();

   return behavior;
}

Behavior __62255280;

Behavior make__62255280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62255280 = behavior;
   behavior->owner = (Object)layer0_58_84_50877760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_56670560_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   req_56670560_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   req_56670560_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(req_56670560_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,req_56670560_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
req_56670560_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[req_56670560_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_55385900_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   ack__mac_55385900_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   ack__mac_55385900_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(ack__mac_55385900_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,ack__mac_55385900_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
ack__mac_55385900_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[ack__mac_55385900_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62255660();

   return behavior;
}

Behavior __62268440;

Behavior make__62268440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62268440 = behavior;
   behavior->owner = (Object)layer0_58_84_50877760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_55385920_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   ack_55385920_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   ack_55385920_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(ack_55385920_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,ack_55385920_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
ack_55385920_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[ack_55385920_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_56606380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   value__z0_56606380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   value__z0_56606380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(value__z0_56606380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,value__z0_56606380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
value__z0_56606380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[value__z0_56606380_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_56683660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   value__z1_56683660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   value__z1_56683660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(value__z1_56683660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,value__z1_56683660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
value__z1_56683660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[value__z1_56683660_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_57001800_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   ack__a0_57001800_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   ack__a0_57001800_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(ack__a0_57001800_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,ack__a0_57001800_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
ack__a0_57001800_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[ack__a0_57001800_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_57001780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   ack__a1_57001780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   ack__a1_57001780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(ack__a1_57001780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,ack__a1_57001780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
ack__a1_57001780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[ack__a1_57001780_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62255940();

   return behavior;
}

Behavior __62268260;

Behavior make__62268260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62268260 = behavior;
   behavior->owner = (Object)layer0_58_84_50877760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_57010520_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   ack__mac_57010520_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   ack__mac_57010520_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(ack__mac_57010520_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,ack__mac_57010520_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
ack__mac_57010520_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[ack__mac_57010520_counter_58_841_57012540_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_54257340_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   a_54257340_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   a_54257340_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(a_54257340_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,a_54257340_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
a_54257340_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[a_54257340_func0_58_841_54011460_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_50913000_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   a_50913000_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   a_50913000_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(a_50913000_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,a_50913000_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
a_50913000_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[a_50913000_func1_58_841_50326120_layer0_58_84_50877760_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62255840();

   return behavior;
}

Scope makelayer0_58_84_50877760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_50877760 = scope;
   scope->owner = (Object)layer0_58_840_56648760;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_57010380();
   scope->systemIs[1] = makefunc0_54257120();
   scope->systemIs[2] = makefunc1_50911240();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_55385940();
   scope->inners[1] = makeack_55385920();
   scope->inners[2] = makeack__mac_55385900();
   scope->inners[3] = makeack__add_55385880();
   scope->inners[4] = make_58150_55570000();
   scope->inners[5] = make_58148_55569980();
   scope->inners[6] = make_58149_55569880();
   scope->inners[7] = make_58173_55679820();
   scope->inners[8] = make_58174_55872080();
   scope->inners[9] = make_58165_56080740();
   scope->inners[10] = make_58163_56080680();
   scope->inners[11] = make_58164_56080600();
   scope->inners[12] = make_58214_56124480();
   scope->inners[13] = make_58215_56124460();
   scope->inners[14] = make_58212_56124440();
   scope->inners[15] = make_58213_56124360();
   scope->inners[16] = make_58242_56210080();
   scope->inners[17] = make_58243_56369620();
   scope->inners[18] = make_58229_56520780();
   scope->inners[19] = make_58230_56520760();
   scope->inners[20] = make_58227_56520740();
   scope->inners[21] = make_58228_56520660();
   scope->inners[22] = makevalue__z0_56606380();
   scope->inners[23] = makevalue__z1_56683660();
   scope->inners[24] = makevalue__a0_56802140();
   scope->inners[25] = makevalue__a1_57001860();
   scope->inners[26] = makeflag__z0_57001840();
   scope->inners[27] = makeflag__z1_57001820();
   scope->inners[28] = makeack__a0_57001800();
   scope->inners[29] = makeack__a1_57001780();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58141_50877380();
   scope->scopes[1] = makechannel__w1_58156_49780400();
   scope->scopes[2] = makechannel__accum_58171_50265240();
   scope->scopes[3] = makemac__n1_58203_48839640();
   scope->scopes[4] = makechannel__b0_58210_54932000();
   scope->scopes[5] = makechannel__b1_58225_56094180();
   scope->scopes[6] = makechannel__z_58240_57002480();
   scope->scopes[7] = makeadd__n_58270_49474060();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55033260();
   scope->behaviors[1] = make__56008440();
   scope->behaviors[2] = make__56649140();
   scope->behaviors[3] = make__62255280();
   scope->behaviors[4] = make__62268440();
   scope->behaviors[5] = make__62268260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_56648760() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_56648760 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_56670600();
   systemT->inputs[1] = makerst_56670580();
   systemT->inputs[2] = makereq_56670560();
   systemT->inputs[3] = make_5859_56799780();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_56799700();
   systemT->outputs[1] = make_5857_56799680();
   systemT->outputs[2] = make_5858_56799540();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58113_57072580();
   systemT->inouts[1] = make_58114_47004260();

   systemT->scope = makelayer0_58_84_50877760();

   return systemT;
}