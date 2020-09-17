#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer__output_58_840_49346740;

SignalI clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeclk_49344480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_840_49346740;
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

SignalI rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makerst_49344460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_840_49346740;
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

SignalI fill_49344440_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makefill_49344440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49344440_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_840_49346740;
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

SignalI req_49344420_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makereq_49344420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49344420_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_840_49346740;
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

SignalI ack__1_49344380_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeack__1_49344380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49344380_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_840_49346740;
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

Block __53297760;

Block __53321180;

Block __53320860;

void code__53320860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_53519280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,value__z0_53736680_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60288280(),flag__z0_54219180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53320860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53320860 = block;
   block->owner = (Object)__53321180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53320860;

   return block;
};

void code__53321180() {
 code__53320860();
}

Block make__53321180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53321180 = block;
   block->owner = (Object)__53297760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53321180;

   return block;
};

Block __53321660;

void code__53321660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60288220(),flag__z0_54219180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53321660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53321660 = block;
   block->owner = (Object)__53297760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53321660;

   return block;
};

void code__53297760() {
   {
      Value cond = ack__add_52581400_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53321180();
   }
   else {
  code__53321660();
   }
      }
   }
}

Block make__53297760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53297760 = block;
   block->owner = (Object)__54172620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53297760;

   return block;
};

Block __54172440;

Block __54171900;

Block __54171500;

void code__54171500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a10_54219200_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,_5862_49667980______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60288040(),ack__a10_54219140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__54171500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54171500 = block;
   block->owner = (Object)__54171900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54171500;

   return block;
};

void code__54171900() {
 code__54171500();
}

Block make__54171900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54171900 = block;
   block->owner = (Object)__54172440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54171900;

   return block;
};

void code__54172440() {
   {
      Value cond = flag__z0_54219180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54171900();
   }
      }
   }
}

Block make__54172440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54172440 = block;
   block->owner = (Object)__52170920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54172440;

   return block;
};

Block __52170800;

Block __52170640;

Block __52170320;

void code__52170320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60287880(),_58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__52170320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52170320 = block;
   block->owner = (Object)__52170640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52170320;

   return block;
};

void code__52170640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60287960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52170320();
   }
      }
   }
}

Block make__52170640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52170640 = block;
   block->owner = (Object)__52170800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52170640;

   return block;
};

Block __52169860;

Block __52169500;

void code__52169500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60287720(),_58252_54219020_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__52169500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52169500 = block;
   block->owner = (Object)__52169860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52169500;

   return block;
};

void code__52169860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60287800();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52169500();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60287660(),_58251_54219120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__52169860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52169860 = block;
   block->owner = (Object)__52170800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52169860;

   return block;
};

Block __52168660;

Block __52168500;

Block __52168180;

void code__52168180() {
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
                  src0 = _58252_54219020_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60287360();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58252_54219020_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60287220(),_58251_54219120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60287160(),_58253_54446360_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__52168180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52168180 = block;
   block->owner = (Object)__52168500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52168180;

   return block;
};

void code__52168500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60287540();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52168180();
   }
      }
   }
}

Block make__52168500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52168500 = block;
   block->owner = (Object)__52168660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52168500;

   return block;
};

Block __52804060;

Block __52803700;

Block __52803140;

void code__52803140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60286780(),_58303_53152160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__52803140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52803140 = block;
   block->owner = (Object)__52803700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52803140;

   return block;
};

void code__52803700() {
{
      Value value = _58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60286840())) {
    code__52803140();
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
                  src0 = _58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60286660();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__52803700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52803700 = block;
   block->owner = (Object)__52804060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52803700;

   return block;
};

void code__52804060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60287000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52803700();
   }
      }
   }
}

Block make__52804060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52804060 = block;
   block->owner = (Object)__52168660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52804060;

   return block;
};

void code__52168660() {
 code__52168500();
 code__52804060();
}

Block make__52168660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52168660 = block;
   block->owner = (Object)__52170800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52168660;

   return block;
};

void code__52170800() {
 code__52170640();
 code__52169860();
   {
      Value cond = fill_49344440_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52168660();
   }
      }
   }
}

Block make__52170800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52170800 = block;
   block->owner = (Object)__49347060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52170800;

   return block;
};

Block __59949120;

void code__59949120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_49344420_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_52581420_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_52581500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59949120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59949120 = block;
   block->owner = (Object)__59973400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59949120;

   return block;
};

Block __59949340;

void code__59949340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,clk_52620720_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_52581440_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,ack_52620700_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,rst_52620680_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_53736680_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,z__value_50109760_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a10_54219140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,ack__1_49344380_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59949340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59949340 = block;
   block->owner = (Object)__59967840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59949340;

   return block;
};

Block __59949280;

void code__59949280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_52620640_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,ack__mac_52581420_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_52156360_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,value__a10_54219200_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59949280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59949280 = block;
   block->owner = (Object)__59967660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59949280;

   return block;
};

Block __53178340;

Block __53823500;

void code__53823500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_52006320_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,make_ref_rangeS(mem_52274660_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160,value2integer(abus__w_52006080_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value),value2integer(abus__w_52006080_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__53823500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53823500 = block;
   block->owner = (Object)__53178340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53823500;

   return block;
};

void code__53178340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_52274660_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
            idx = value2integer(abus__r_52006180_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51877240_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49914560_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53823500();
   }
      }
   }
}

Block make__53178340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53178340 = block;
   block->owner = (Object)__54576900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53178340;

   return block;
};

Block __59966780;

void code__59966780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51877240_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,_58249_52766320_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59966780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59966780 = block;
   block->owner = (Object)__59966620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59966780;

   return block;
};

Block __59966580;

void code__59966580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_52766320_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,dbus__r_51877240_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59966580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59966580 = block;
   block->owner = (Object)__59966420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59966580;

   return block;
};

Block __59966120;

void code__59966120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49914580_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,_58247_52766260_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59966120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59966120 = block;
   block->owner = (Object)__59965960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59966120;

   return block;
};

Block __59965920;

void code__59965920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58247_52766260_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,trig__r_49914580_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59965920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59965920 = block;
   block->owner = (Object)__59965760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59965920;

   return block;
};

Block __60039080;

void code__60039080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_52006180_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,_58248_52766140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60039080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60039080 = block;
   block->owner = (Object)__60038880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60039080;

   return block;
};

Block __60038840;

void code__60038840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58248_52766140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,abus__r_52006180_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60038840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60038840 = block;
   block->owner = (Object)__60038640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60038840;

   return block;
};

Block __60038280;

void code__60038280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49914560_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,_58251_54219120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60038280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60038280 = block;
   block->owner = (Object)__60038120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60038280;

   return block;
};

Block __60038080;

void code__60038080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58251_54219120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,trig__w_49914560_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60038080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60038080 = block;
   block->owner = (Object)__60037920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60038080;

   return block;
};

Block __60037620;

void code__60037620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_52006080_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,_58252_54219020_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60037620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60037620 = block;
   block->owner = (Object)__60037460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60037620;

   return block;
};

Block __60037420;

void code__60037420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58252_54219020_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,abus__w_52006080_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60037420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60037420 = block;
   block->owner = (Object)__60037260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60037420;

   return block;
};

Block __60036900;

void code__60036900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_52006320_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,_58253_54446360_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60036900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60036900 = block;
   block->owner = (Object)__60036680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60036900;

   return block;
};

Block __60036620;

void code__60036620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58253_54446360_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,dbus__w_52006320_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60036620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60036620 = block;
   block->owner = (Object)__60036440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60036620;

   return block;
};

Block __60034840;

void code__60034840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47724820_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,_58266_52995640_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60034840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60034840 = block;
   block->owner = (Object)__60034440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60034840;

   return block;
};

Block __60034300;

void code__60034300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_52995640_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,reg__0_47724820_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60034300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60034300 = block;
   block->owner = (Object)__60034140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60034300;

   return block;
};

Block __50124160;

Block __50123860;

Block __50123320;

void code__50123320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60261720(),_58248_52766140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__50123320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50123320 = block;
   block->owner = (Object)__50123860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50123320;

   return block;
};

void code__50123860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60261800();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50123320();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60261660(),_58247_52766260_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__50123860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50123860 = block;
   block->owner = (Object)__50124160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50123860;

   return block;
};

Block __50122500;

Block __50121980;

void code__50121980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60261500(),_5845_49585860______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__50121980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50121980 = block;
   block->owner = (Object)__50122500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50121980;

   return block;
};

void code__50122500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60261580();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50121980();
   }
      }
   }
}

Block make__50122500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50122500 = block;
   block->owner = (Object)__50124160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50122500;

   return block;
};

Block __52184660;

Block __52184160;

Block __52183640;

Block __52207400;

void code__52207400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_49504200______58_84_49209420______58_840_59103160->c_value,rv_50124540_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__52207400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52207400 = block;
   block->owner = (Object)__52183640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52207400;

   return block;
};

Block __52732740;

void code__52732740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_49561740______58_84_49209420______58_840_59103160->c_value,rv_50124540_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__52732740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52732740 = block;
   block->owner = (Object)__52183640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52732740;

   return block;
};

void code__52183640() {
{
      Value value = _5845_49585860______58_84_49209420______58_840_59103160->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60260980())) {
    code__52207400();
         }
         else if (value2integer(value) == value2integer(make__60260780())) {
    code__52732740();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60260620(),rvok_50124440_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
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
                  src0 = _5845_49585860______58_84_49209420______58_840_59103160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60260460();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_49585860______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__52183640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52183640 = block;
   block->owner = (Object)__52184160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52183640;

   return block;
};

void code__52184160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60261120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52183640();
   }
      }
   }
}

Block make__52184160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52184160 = block;
   block->owner = (Object)__52184660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52184160;

   return block;
};

Block __53147340;

Block __53146800;

Block __53146300;

void code__53146300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_52766320_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,lv0_49769720_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60292820(),lvok0_50124480_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53146300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53146300 = block;
   block->owner = (Object)__53146800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53146300;

   return block;
};

void code__53146800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58247_52766260_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60292980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53146300();
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
                  src0 = _58248_52766140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60292700();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58248_52766140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60292600(),_58247_52766260_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__53146800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53146800 = block;
   block->owner = (Object)__53147340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53146800;

   return block;
};

void code__53147340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60293080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53146800();
   }
      }
   }
}

Block make__53147340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53147340 = block;
   block->owner = (Object)__52184660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53147340;

   return block;
};

Block __53622320;

Block __53621360;

Block __53620760;

void code__53620760() {
}

Block make__53620760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53620760 = block;
   block->owner = (Object)__53621360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53620760;

   return block;
};

Block __52008180;

void code__52008180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49966040_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,_58266_52995640_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__52008180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52008180 = block;
   block->owner = (Object)__53621360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52008180;

   return block;
};

void code__53621360() {
 code__53620760();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_49966040_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
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
                              src0 = lv0_49769720_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_50124540_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60292040();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49966040_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
 code__52008180();
}

Block make__53621360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53621360 = block;
   block->owner = (Object)__53622320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53621360;

   return block;
};

void code__53622320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60292440(),ack_52581440_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60292380(),run_50124420_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
 code__53621360();
}

Block make__53622320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53622320 = block;
   block->owner = (Object)__52184660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53622320;

   return block;
};

void code__52184660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60261220(),run_50124420_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
 code__52184160();
 code__53147340();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_50124480_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
         src1 = rvok_50124440_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53622320();
   }
      }
   }
}

Block make__52184660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52184660 = block;
   block->owner = (Object)__50124160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52184660;

   return block;
};

Block __50120340;

void code__50120340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60291860(),rvok_50124440_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60291800(),lvok0_50124480_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60291720(),av0_49966040_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__50120340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50120340 = block;
   block->owner = (Object)__50124160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50120340;

   return block;
};

void code__50124160() {
 code__50123860();
 code__50122500();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60261440(),ack_52581440_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60261380(),run_50124420_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_52581500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
         src1 = run_50124420_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52184660();
   }
   else {
  code__50120340();
   }
      }
   }
}

Block make__50124160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50124160 = block;
   block->owner = (Object)__53072440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50124160;

   return block;
};

Block __60032340;

void code__60032340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,_58292_53266900_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60032340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60032340 = block;
   block->owner = (Object)__60031920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60032340;

   return block;
};

Block __60031880;

void code__60031880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_53266900_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60031880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60031880 = block;
   block->owner = (Object)__60031720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60031880;

   return block;
};

Block __60031420;

void code__60031420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,_58303_53152160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60031420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60031420 = block;
   block->owner = (Object)__60031260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60031420;

   return block;
};

Block __60031220;

void code__60031220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58303_53152160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60031220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60031220 = block;
   block->owner = (Object)__60031060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60031220;

   return block;
};

Block __60053820;

void code__60053820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_53067820_winc_58302_53068400_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,_58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60053820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60053820 = block;
   block->owner = (Object)__60053660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60053820;

   return block;
};

Block __60053620;

void code__60053620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,abus__w_53067820_winc_58302_53068400_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60053620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60053620 = block;
   block->owner = (Object)__60053460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60053620;

   return block;
};

Block __60052140;

void code__60052140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52581860_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,_58315_53519280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60052140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60052140 = block;
   block->owner = (Object)__60051980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60052140;

   return block;
};

Block __60051940;

void code__60051940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_53519280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,reg__0_52581860_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__60051940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60051940 = block;
   block->owner = (Object)__60051780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60051940;

   return block;
};

Block __54444420;

Block __54418000;

Block __54417300;

void code__54417300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_52995640_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,lv0_53639380_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60290160(),lvok0_54444620_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__54417300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54417300 = block;
   block->owner = (Object)__54418000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54417300;

   return block;
};

Block __48186760;

void code__48186760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_53266900_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,rv0_54444640_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60290020(),rvok0_54444600_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__48186760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48186760 = block;
   block->owner = (Object)__54418000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48186760;

   return block;
};

Block __49659920;

Block __49683000;

void code__49683000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_53639380_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
      src1 = rv0_54444640_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58315_53519280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49683000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49683000 = block;
   block->owner = (Object)__49659920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49683000;

   return block;
};

void code__49659920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60289860(),run_54444560_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60289800(),ack__add_52581400_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
 code__49683000();
}

Block make__49659920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49659920 = block;
   block->owner = (Object)__54418000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49659920;

   return block;
};

void code__54418000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60290300(),run_54444560_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
 code__54417300();
 code__48186760();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_54444620_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
         src1 = rvok0_54444600_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49659920();
   }
      }
   }
}

Block make__54418000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54418000 = block;
   block->owner = (Object)__54444420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54418000;

   return block;
};

Block __54418840;

void code__54418840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60289540(),lvok0_54444620_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60289440(),rvok0_54444600_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__54418840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54418840 = block;
   block->owner = (Object)__54444420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54418840;

   return block;
};

void code__54444420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60290520(),ack__add_52581400_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60290460(),run_54444560_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_52581420_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
         src1 = run_54444560_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54418000();
   }
   else {
  code__54418840();
   }
      }
   }
}

Block make__54444420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54444420 = block;
   block->owner = (Object)__52581980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54444420;

   return block;
};

Value make__60261800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60261720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60261660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60261580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60261500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60261440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60261380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60261220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60261120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60260980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60260780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60260620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60260460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60293080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60292980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60292820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60292700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60292600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60292440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60292380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60292040() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60291860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60291800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60291720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60290520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60290460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60290300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60290160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60290020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60289860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60289800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60289540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60289440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60288280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60288220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60288040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60287960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60287880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60287800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60287720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60287660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60287540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60287360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60287220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60287160() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60287000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60286840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60286780() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60286660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer__output_58_84_49897620;

SignalI req__mac_52581500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makereq__mac_52581500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_52581500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI ack_52581440_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeack_52581440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_52581440_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI ack__mac_52581420_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeack__mac_52581420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_52581420_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI ack__add_52581400_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeack__add_52581400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_52581400_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI _58249_52766320_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI make_58249_52766320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58249_52766320_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI _58247_52766260_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI make_58247_52766260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58247_52766260_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI _58248_52766140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI make_58248_52766140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58248_52766140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI _58266_52995640_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI make_58266_52995640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_52995640_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI _58292_53266900_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI make_58292_53266900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58292_53266900_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI _58315_53519280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI make_58315_53519280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_53519280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI value__z0_53736680_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makevalue__z0_53736680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_53736680_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI value__a10_54219200_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makevalue__a10_54219200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a10_54219200_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI flag__z0_54219180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeflag__z0_54219180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_54219180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI ack__a10_54219140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeack__a10_54219140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a10_54219140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI _58251_54219120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI make_58251_54219120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58251_54219120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI _58252_54219020_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI make_58252_54219020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58252_54219020_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI _58253_54446360_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI make_58253_54446360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58253_54446360_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI _58303_53152160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI make_58303_53152160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58303_53152160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SignalI _58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI make_58304_53152080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)layer__output_58_84_49897620;
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

SystemI counter1_52620500;

SystemI makecounter1_52620500() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter1_52620500 = systemI;
   systemI->owner = (Object)layer__output_58_84_49897620;
   systemI->name = "counter1";
   systemI->system = counter1_58_840_52622560;

   return systemI;
};

SystemI func10_52156120;

SystemI makefunc10_52156120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func10_52156120 = systemI;
   systemI->owner = (Object)layer__output_58_84_49897620;
   systemI->name = "func10";
   systemI->system = func10_58_840_49804500;

   return systemI;
};

Scope channel__w0_58235_49921280;

SignalI trig__r_49914580_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI maketrig__r_49914580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49914580_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w0_58235_49921280;
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

SignalI trig__w_49914560_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI maketrig__w_49914560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49914560_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w0_58235_49921280;
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

SignalI dbus__r_51877240_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makedbus__r_51877240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51877240_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w0_58235_49921280;
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

SignalI dbus__w_52006320_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makedbus__w_52006320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_52006320_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w0_58235_49921280;
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

SignalI abus__r_52006180_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeabus__r_52006180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52006180_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w0_58235_49921280;
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

SignalI abus__w_52006080_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeabus__w_52006080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52006080_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w0_58235_49921280;
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

SignalI mem_52274660_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makemem_52274660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_52274660_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__w0_58235_49921280;
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

Scope raddr_58236_49920500;

Scope makeraddr_58236_49920500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58236_49920500 = scope;
   scope->owner = (Object)channel__w0_58235_49921280;
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

Scope waddr_58241_49919740;

Scope makewaddr_58241_49919740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58241_49919740 = scope;
   scope->owner = (Object)channel__w0_58235_49921280;
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

Scope rinc_58246_49918700;

Scope makerinc_58246_49918700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58246_49918700 = scope;
   scope->owner = (Object)channel__w0_58235_49921280;
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

Scope winc_58250_49917500;

Scope makewinc_58250_49917500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58250_49917500 = scope;
   scope->owner = (Object)channel__w0_58235_49921280;
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

Scope rdec_58254_49916580;

Scope makerdec_58254_49916580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58254_49916580 = scope;
   scope->owner = (Object)channel__w0_58235_49921280;
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

Scope wdec_58259_49915800;

Scope makewdec_58259_49915800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58259_49915800 = scope;
   scope->owner = (Object)channel__w0_58235_49921280;
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

Behavior __54576900;

Behavior make__54576900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54576900 = behavior;
   behavior->owner = (Object)channel__w0_58235_49921280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_neg += 1;
   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->neg = realloc(clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->neg,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_neg*sizeof(Object));
clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->neg[clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_neg-1] = (Object)behavior;
   behavior->block = make__53178340();

   return behavior;
}

Behavior __59966620;

Behavior make__59966620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59966620 = behavior;
   behavior->owner = (Object)channel__w0_58235_49921280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51877240_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   dbus__r_51877240_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   dbus__r_51877240_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(dbus__r_51877240_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,dbus__r_51877240_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
dbus__r_51877240_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[dbus__r_51877240_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59966780();

   return behavior;
}

Behavior __59966420;

Behavior make__59966420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59966420 = behavior;
   behavior->owner = (Object)channel__w0_58235_49921280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58249_52766320_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   _58249_52766320_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   _58249_52766320_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(_58249_52766320_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,_58249_52766320_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58249_52766320_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[_58249_52766320_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59966580();

   return behavior;
}

Behavior __59965960;

Behavior make__59965960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59965960 = behavior;
   behavior->owner = (Object)channel__w0_58235_49921280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49914580_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   trig__r_49914580_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   trig__r_49914580_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(trig__r_49914580_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,trig__r_49914580_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
trig__r_49914580_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[trig__r_49914580_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59966120();

   return behavior;
}

Behavior __59965760;

Behavior make__59965760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59965760 = behavior;
   behavior->owner = (Object)channel__w0_58235_49921280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58247_52766260_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   _58247_52766260_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   _58247_52766260_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(_58247_52766260_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,_58247_52766260_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58247_52766260_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[_58247_52766260_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59965920();

   return behavior;
}

Behavior __60038880;

Behavior make__60038880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60038880 = behavior;
   behavior->owner = (Object)channel__w0_58235_49921280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_52006180_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   abus__r_52006180_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   abus__r_52006180_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(abus__r_52006180_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,abus__r_52006180_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
abus__r_52006180_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[abus__r_52006180_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60039080();

   return behavior;
}

Behavior __60038640;

Behavior make__60038640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60038640 = behavior;
   behavior->owner = (Object)channel__w0_58235_49921280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58248_52766140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   _58248_52766140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   _58248_52766140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(_58248_52766140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,_58248_52766140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58248_52766140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[_58248_52766140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60038840();

   return behavior;
}

Behavior __60038120;

Behavior make__60038120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60038120 = behavior;
   behavior->owner = (Object)channel__w0_58235_49921280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49914560_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   trig__w_49914560_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   trig__w_49914560_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(trig__w_49914560_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,trig__w_49914560_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
trig__w_49914560_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[trig__w_49914560_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60038280();

   return behavior;
}

Behavior __60037920;

Behavior make__60037920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60037920 = behavior;
   behavior->owner = (Object)channel__w0_58235_49921280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58251_54219120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   _58251_54219120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   _58251_54219120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(_58251_54219120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,_58251_54219120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58251_54219120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[_58251_54219120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60038080();

   return behavior;
}

Behavior __60037460;

Behavior make__60037460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60037460 = behavior;
   behavior->owner = (Object)channel__w0_58235_49921280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_52006080_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   abus__w_52006080_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   abus__w_52006080_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(abus__w_52006080_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,abus__w_52006080_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
abus__w_52006080_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[abus__w_52006080_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60037620();

   return behavior;
}

Behavior __60037260;

Behavior make__60037260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60037260 = behavior;
   behavior->owner = (Object)channel__w0_58235_49921280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58252_54219020_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   _58252_54219020_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   _58252_54219020_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(_58252_54219020_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,_58252_54219020_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58252_54219020_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[_58252_54219020_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60037420();

   return behavior;
}

Behavior __60036680;

Behavior make__60036680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60036680 = behavior;
   behavior->owner = (Object)channel__w0_58235_49921280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_52006320_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   dbus__w_52006320_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   dbus__w_52006320_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(dbus__w_52006320_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,dbus__w_52006320_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
dbus__w_52006320_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[dbus__w_52006320_channel__w0_58235_49921280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60036900();

   return behavior;
}

Behavior __60036440;

Behavior make__60036440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60036440 = behavior;
   behavior->owner = (Object)channel__w0_58235_49921280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58253_54446360_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   _58253_54446360_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   _58253_54446360_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(_58253_54446360_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,_58253_54446360_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58253_54446360_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[_58253_54446360_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60036620();

   return behavior;
}

Scope makechannel__w0_58235_49921280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58235_49921280 = scope;
   scope->owner = (Object)layer__output_58_84_49897620;
   scope->name = "channel_w0:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49914580();
   scope->inners[1] = maketrig__w_49914560();
   scope->inners[2] = makedbus__r_51877240();
   scope->inners[3] = makedbus__w_52006320();
   scope->inners[4] = makeabus__r_52006180();
   scope->inners[5] = makeabus__w_52006080();
   scope->inners[6] = makemem_52274660();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58236_49920500();
   scope->scopes[1] = makewaddr_58241_49919740();
   scope->scopes[2] = makerinc_58246_49918700();
   scope->scopes[3] = makewinc_58250_49917500();
   scope->scopes[4] = makerdec_58254_49916580();
   scope->scopes[5] = makewdec_58259_49915800();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54576900();
   scope->behaviors[1] = make__59966620();
   scope->behaviors[2] = make__59966420();
   scope->behaviors[3] = make__59965960();
   scope->behaviors[4] = make__59965760();
   scope->behaviors[5] = make__60038880();
   scope->behaviors[6] = make__60038640();
   scope->behaviors[7] = make__60038120();
   scope->behaviors[8] = make__60037920();
   scope->behaviors[9] = make__60037460();
   scope->behaviors[10] = make__60037260();
   scope->behaviors[11] = make__60036680();
   scope->behaviors[12] = make__60036440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58264_54576720;

SignalI reg__0_47724820_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makereg__0_47724820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47724820_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__accum_58264_54576720;
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

Scope anum_58265_54576240;

Scope makeanum_58265_54576240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58265_54576240 = scope;
   scope->owner = (Object)channel__accum_58264_54576720;
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

Scope raddr_58267_54599200;

Scope makeraddr_58267_54599200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58267_54599200 = scope;
   scope->owner = (Object)channel__accum_58264_54576720;
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

Scope waddr_58270_54598560;

Scope makewaddr_58270_54598560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58270_54598560 = scope;
   scope->owner = (Object)channel__accum_58264_54576720;
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

Scope rinc_58273_54598040;

SignalI abus__r_54597300_rinc_58273_54598040_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeabus__r_54597300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54597300_rinc_58273_54598040_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rinc_58273_54598040;
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

Scope makerinc_58273_54598040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_54598040 = scope;
   scope->owner = (Object)channel__accum_58264_54576720;
   scope->name = "rinc:273";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54597300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58277_54597040;

SignalI abus__w_54596180_winc_58277_54597040_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeabus__w_54596180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54596180_winc_58277_54597040_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)winc_58277_54597040;
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

Scope makewinc_58277_54597040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58277_54597040 = scope;
   scope->owner = (Object)channel__accum_58264_54576720;
   scope->name = "winc:277";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54596180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58281_54596060;

SignalI abus__r_54595640_rdec_58281_54596060_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeabus__r_54595640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54595640_rdec_58281_54596060_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rdec_58281_54596060;
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

Scope makerdec_58281_54596060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58281_54596060 = scope;
   scope->owner = (Object)channel__accum_58264_54576720;
   scope->name = "rdec:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54595640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58285_54595380;

SignalI abus__w_54594100_wdec_58285_54595380_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeabus__w_54594100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54594100_wdec_58285_54595380_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)wdec_58285_54595380;
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

Scope makewdec_58285_54595380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58285_54595380 = scope;
   scope->owner = (Object)channel__accum_58264_54576720;
   scope->name = "wdec:285";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54594100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60034440;

Behavior make__60034440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60034440 = behavior;
   behavior->owner = (Object)channel__accum_58264_54576720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47724820_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   reg__0_47724820_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   reg__0_47724820_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(reg__0_47724820_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,reg__0_47724820_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__0_47724820_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[reg__0_47724820_channel__accum_58264_54576720_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60034840();

   return behavior;
}

Behavior __60034140;

Behavior make__60034140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60034140 = behavior;
   behavior->owner = (Object)channel__accum_58264_54576720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_52995640_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   _58266_52995640_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   _58266_52995640_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(_58266_52995640_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,_58266_52995640_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58266_52995640_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[_58266_52995640_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60034300();

   return behavior;
}

Scope makechannel__accum_58264_54576720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58264_54576720 = scope;
   scope->owner = (Object)layer__output_58_84_49897620;
   scope->name = "channel_accum:264";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47724820();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58265_54576240();
   scope->scopes[1] = makeraddr_58267_54599200();
   scope->scopes[2] = makewaddr_58270_54598560();
   scope->scopes[3] = makerinc_58273_54598040();
   scope->scopes[4] = makewinc_58277_54597040();
   scope->scopes[5] = makerdec_58281_54596060();
   scope->scopes[6] = makewdec_58285_54595380();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60034440();
   scope->behaviors[1] = make__60034140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58289_49530180;

SignalI lv0_49769720_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makelv0_49769720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49769720_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58289_49530180;
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

SignalI av0_49966040_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeav0_49966040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49966040_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58289_49530180;
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

SignalI rv_50124540_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makerv_50124540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_50124540_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58289_49530180;
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

SignalI lvok0_50124480_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makelvok0_50124480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_50124480_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58289_49530180;
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

SignalI rvok_50124440_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makervok_50124440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_50124440_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58289_49530180;
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

SignalI run_50124420_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makerun_50124420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_50124420_mac__n1_58289_49530180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)mac__n1_58289_49530180;
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

Behavior __53072440;

Behavior make__53072440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53072440 = behavior;
   behavior->owner = (Object)mac__n1_58289_49530180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos += 1;
   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos = realloc(clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos*sizeof(Object));
clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos[clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos-1] = (Object)behavior;
   behavior->block = make__50124160();

   return behavior;
}

Scope makemac__n1_58289_49530180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58289_49530180 = scope;
   scope->owner = (Object)layer__output_58_84_49897620;
   scope->name = "mac_n1:289";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49769720();
   scope->inners[1] = makeav0_49966040();
   scope->inners[2] = makerv_50124540();
   scope->inners[3] = makelvok0_50124480();
   scope->inners[4] = makervok_50124440();
   scope->inners[5] = makerun_50124420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53072440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58290_53072180;

SignalI reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makereg__0_53670420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__bias_58290_53072180;
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

Scope anum_58291_53071500;

Scope makeanum_58291_53071500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58291_53071500 = scope;
   scope->owner = (Object)channel__bias_58290_53072180;
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

Scope raddr_58293_53070880;

Scope makeraddr_58293_53070880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58293_53070880 = scope;
   scope->owner = (Object)channel__bias_58290_53072180;
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

Scope waddr_58296_53070280;

Scope makewaddr_58296_53070280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58296_53070280 = scope;
   scope->owner = (Object)channel__bias_58290_53072180;
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

Scope rinc_58299_53069140;

SignalI abus__r_53068580_rinc_58299_53069140_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeabus__r_53068580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53068580_rinc_58299_53069140_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rinc_58299_53069140;
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

Scope makerinc_58299_53069140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58299_53069140 = scope;
   scope->owner = (Object)channel__bias_58290_53072180;
   scope->name = "rinc:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53068580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58302_53068400;

SignalI abus__w_53067820_winc_58302_53068400_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeabus__w_53067820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53067820_winc_58302_53068400_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)winc_58302_53068400;
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

Behavior __60053660;

Behavior make__60053660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60053660 = behavior;
   behavior->owner = (Object)winc_58302_53068400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_53067820_winc_58302_53068400_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   abus__w_53067820_winc_58302_53068400_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   abus__w_53067820_winc_58302_53068400_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(abus__w_53067820_winc_58302_53068400_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,abus__w_53067820_winc_58302_53068400_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
abus__w_53067820_winc_58302_53068400_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[abus__w_53067820_winc_58302_53068400_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60053820();

   return behavior;
}

Behavior __60053460;

Behavior make__60053460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60053460 = behavior;
   behavior->owner = (Object)winc_58302_53068400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   _58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   _58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(_58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,_58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[_58304_53152080_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60053620();

   return behavior;
}

Scope makewinc_58302_53068400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58302_53068400 = scope;
   scope->owner = (Object)channel__bias_58290_53072180;
   scope->name = "winc:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53067820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60053660();
   scope->behaviors[1] = make__60053460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58305_53148320;

SignalI abus__r_53146620_rdec_58305_53148320_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeabus__r_53146620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53146620_rdec_58305_53148320_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rdec_58305_53148320;
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

Scope makerdec_58305_53148320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58305_53148320 = scope;
   scope->owner = (Object)channel__bias_58290_53072180;
   scope->name = "rdec:305";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53146620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58309_53146160;

SignalI abus__w_53145220_wdec_58309_53146160_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeabus__w_53145220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53145220_wdec_58309_53146160_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)wdec_58309_53146160;
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

Scope makewdec_58309_53146160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58309_53146160 = scope;
   scope->owner = (Object)channel__bias_58290_53072180;
   scope->name = "wdec:309";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53145220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60031920;

Behavior make__60031920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60031920 = behavior;
   behavior->owner = (Object)channel__bias_58290_53072180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60032340();

   return behavior;
}

Behavior __60031720;

Behavior make__60031720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60031720 = behavior;
   behavior->owner = (Object)channel__bias_58290_53072180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58292_53266900_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   _58292_53266900_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   _58292_53266900_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(_58292_53266900_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,_58292_53266900_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58292_53266900_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[_58292_53266900_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60031880();

   return behavior;
}

Behavior __60031260;

Behavior make__60031260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60031260 = behavior;
   behavior->owner = (Object)channel__bias_58290_53072180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[reg__0_53670420_channel__bias_58290_53072180_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60031420();

   return behavior;
}

Behavior __60031060;

Behavior make__60031060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60031060 = behavior;
   behavior->owner = (Object)channel__bias_58290_53072180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58303_53152160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   _58303_53152160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   _58303_53152160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(_58303_53152160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,_58303_53152160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58303_53152160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[_58303_53152160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60031220();

   return behavior;
}

Scope makechannel__bias_58290_53072180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58290_53072180 = scope;
   scope->owner = (Object)layer__output_58_84_49897620;
   scope->name = "channel_bias:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53670420();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58291_53071500();
   scope->scopes[1] = makeraddr_58293_53070880();
   scope->scopes[2] = makewaddr_58296_53070280();
   scope->scopes[3] = makerinc_58299_53069140();
   scope->scopes[4] = makewinc_58302_53068400();
   scope->scopes[5] = makerdec_58305_53148320();
   scope->scopes[6] = makewdec_58309_53146160();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60031920();
   scope->behaviors[1] = make__60031720();
   scope->behaviors[2] = make__60031260();
   scope->behaviors[3] = make__60031060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58313_50103120;

SignalI reg__0_52581860_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makereg__0_52581860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52581860_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__z_58313_50103120;
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

Scope anum_58314_50102540;

Scope makeanum_58314_50102540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58314_50102540 = scope;
   scope->owner = (Object)channel__z_58313_50103120;
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

Scope raddr_58316_50076400;

Scope makeraddr_58316_50076400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58316_50076400 = scope;
   scope->owner = (Object)channel__z_58313_50103120;
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

Scope waddr_58319_50075660;

Scope makewaddr_58319_50075660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58319_50075660 = scope;
   scope->owner = (Object)channel__z_58313_50103120;
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

Scope rinc_58322_50074500;

SignalI abus__r_50073300_rinc_58322_50074500_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeabus__r_50073300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50073300_rinc_58322_50074500_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rinc_58322_50074500;
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

Scope makerinc_58322_50074500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58322_50074500 = scope;
   scope->owner = (Object)channel__z_58313_50103120;
   scope->name = "rinc:322";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50073300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58325_50072580;

SignalI abus__w_50071920_winc_58325_50072580_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeabus__w_50071920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50071920_winc_58325_50072580_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)winc_58325_50072580;
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

Scope makewinc_58325_50072580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58325_50072580 = scope;
   scope->owner = (Object)channel__z_58313_50103120;
   scope->name = "winc:325";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50071920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58328_50071660;

SignalI abus__r_50071160_rdec_58328_50071660_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeabus__r_50071160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50071160_rdec_58328_50071660_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rdec_58328_50071660;
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

Scope makerdec_58328_50071660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58328_50071660 = scope;
   scope->owner = (Object)channel__z_58313_50103120;
   scope->name = "rdec:328";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50071160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58332_50070980;

SignalI abus__w_50069940_wdec_58332_50070980_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makeabus__w_50069940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50069940_wdec_58332_50070980_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)wdec_58332_50070980;
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

Scope makewdec_58332_50070980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58332_50070980 = scope;
   scope->owner = (Object)channel__z_58313_50103120;
   scope->name = "wdec:332";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50069940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60051980;

Behavior make__60051980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60051980 = behavior;
   behavior->owner = (Object)channel__z_58313_50103120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52581860_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   reg__0_52581860_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   reg__0_52581860_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(reg__0_52581860_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,reg__0_52581860_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__0_52581860_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[reg__0_52581860_channel__z_58313_50103120_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60052140();

   return behavior;
}

Behavior __60051780;

Behavior make__60051780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60051780 = behavior;
   behavior->owner = (Object)channel__z_58313_50103120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_53519280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   _58315_53519280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   _58315_53519280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(_58315_53519280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,_58315_53519280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_58315_53519280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[_58315_53519280_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__60051940();

   return behavior;
}

Scope makechannel__z_58313_50103120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58313_50103120 = scope;
   scope->owner = (Object)layer__output_58_84_49897620;
   scope->name = "channel_z:313";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52581860();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58314_50102540();
   scope->scopes[1] = makeraddr_58316_50076400();
   scope->scopes[2] = makewaddr_58319_50075660();
   scope->scopes[3] = makerinc_58322_50074500();
   scope->scopes[4] = makewinc_58325_50072580();
   scope->scopes[5] = makerdec_58328_50071660();
   scope->scopes[6] = makewdec_58332_50070980();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60051980();
   scope->behaviors[1] = make__60051780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58336_53319160;

SignalI lv0_53639380_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makelv0_53639380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_53639380_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)add__n_58336_53319160;
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

SignalI rv0_54444640_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makerv0_54444640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_54444640_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)add__n_58336_53319160;
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

SignalI lvok0_54444620_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makelvok0_54444620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_54444620_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)add__n_58336_53319160;
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

SignalI rvok0_54444600_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makervok0_54444600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_54444600_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)add__n_58336_53319160;
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

SignalI run_54444560_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160;

SignalI makerun_54444560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_54444560_add__n_58336_53319160_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)add__n_58336_53319160;
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

Behavior __52581980;

Behavior make__52581980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52581980 = behavior;
   behavior->owner = (Object)add__n_58336_53319160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos += 1;
   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos = realloc(clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos*sizeof(Object));
clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos[clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos-1] = (Object)behavior;
   behavior->block = make__54444420();

   return behavior;
}

Scope makeadd__n_58336_53319160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58336_53319160 = scope;
   scope->owner = (Object)layer__output_58_84_49897620;
   scope->name = "add_n:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_53639380();
   scope->inners[1] = makerv0_54444640();
   scope->inners[2] = makelvok0_54444620();
   scope->inners[3] = makervok0_54444600();
   scope->inners[4] = makerun_54444560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52581980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54172620;

Behavior make__54172620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54172620 = behavior;
   behavior->owner = (Object)layer__output_58_84_49897620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos += 1;
   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos = realloc(clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos*sizeof(Object));
clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos[clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos-1] = (Object)behavior;
   behavior->block = make__53297760();

   return behavior;
}

Behavior __52170920;

Behavior make__52170920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52170920 = behavior;
   behavior->owner = (Object)layer__output_58_84_49897620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos += 1;
   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos = realloc(clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos*sizeof(Object));
clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos[clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos-1] = (Object)behavior;
   behavior->block = make__54172440();

   return behavior;
}

Behavior __49347060;

Behavior make__49347060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49347060 = behavior;
   behavior->owner = (Object)layer__output_58_84_49897620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos += 1;
   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos = realloc(clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos*sizeof(Object));
clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->pos[clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_pos-1] = (Object)behavior;
   behavior->block = make__52170800();

   return behavior;
}

Behavior __59973400;

Behavior make__59973400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59973400 = behavior;
   behavior->owner = (Object)layer__output_58_84_49897620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_49344420_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   req_49344420_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   req_49344420_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(req_49344420_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,req_49344420_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
req_49344420_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[req_49344420_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_52581420_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   ack__mac_52581420_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   ack__mac_52581420_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(ack__mac_52581420_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,ack__mac_52581420_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
ack__mac_52581420_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[ack__mac_52581420_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59949120();

   return behavior;
}

Behavior __59967840;

Behavior make__59967840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59967840 = behavior;
   behavior->owner = (Object)layer__output_58_84_49897620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_52581440_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   ack_52581440_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   ack_52581440_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(ack_52581440_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,ack_52581440_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
ack_52581440_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[ack_52581440_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_53736680_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   value__z0_53736680_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   value__z0_53736680_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(value__z0_53736680_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,value__z0_53736680_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
value__z0_53736680_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[value__z0_53736680_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a10_54219140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   ack__a10_54219140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   ack__a10_54219140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(ack__a10_54219140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,ack__a10_54219140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
ack__a10_54219140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[ack__a10_54219140_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59949340();

   return behavior;
}

Behavior __59967660;

Behavior make__59967660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59967660 = behavior;
   behavior->owner = (Object)layer__output_58_84_49897620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_52620640_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   ack__mac_52620640_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   ack__mac_52620640_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(ack__mac_52620640_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,ack__mac_52620640_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
ack__mac_52620640_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[ack__mac_52620640_counter1_58_840_52622560_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_52156360_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   a_52156360_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   a_52156360_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(a_52156360_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,a_52156360_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
a_52156360_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[a_52156360_func10_58_840_49804500_layer__output_58_84_49897620_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59949280();

   return behavior;
}

Scope makelayer__output_58_84_49897620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer__output_58_84_49897620 = scope;
   scope->owner = (Object)layer__output_58_840_49346740;
   scope->name = "layer_output:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter1_52620500();
   scope->systemIs[1] = makefunc10_52156120();
   scope->num_inners = 19;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_52581500();
   scope->inners[1] = makeack_52581440();
   scope->inners[2] = makeack__mac_52581420();
   scope->inners[3] = makeack__add_52581400();
   scope->inners[4] = make_58249_52766320();
   scope->inners[5] = make_58247_52766260();
   scope->inners[6] = make_58248_52766140();
   scope->inners[7] = make_58266_52995640();
   scope->inners[8] = make_58292_53266900();
   scope->inners[9] = make_58315_53519280();
   scope->inners[10] = makevalue__z0_53736680();
   scope->inners[11] = makevalue__a10_54219200();
   scope->inners[12] = makeflag__z0_54219180();
   scope->inners[13] = makeack__a10_54219140();
   scope->inners[14] = make_58251_54219120();
   scope->inners[15] = make_58252_54219020();
   scope->inners[16] = make_58253_54446360();
   scope->inners[17] = make_58303_53152160();
   scope->inners[18] = make_58304_53152080();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58235_49921280();
   scope->scopes[1] = makechannel__accum_58264_54576720();
   scope->scopes[2] = makemac__n1_58289_49530180();
   scope->scopes[3] = makechannel__bias_58290_53072180();
   scope->scopes[4] = makechannel__z_58313_50103120();
   scope->scopes[5] = makeadd__n_58336_53319160();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54172620();
   scope->behaviors[1] = make__52170920();
   scope->behaviors[2] = make__49347060();
   scope->behaviors[3] = make__59973400();
   scope->behaviors[4] = make__59967840();
   scope->behaviors[5] = make__59967660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer__output_58_840_49346740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer__output_58_840_49346740 = systemT;
systemT->owner = NULL;
   systemT->name = "layer_output:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_49344480();
   systemT->inputs[1] = makerst_49344460();
   systemT->inputs[2] = makefill_49344440();
   systemT->inputs[3] = makereq_49344420();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__1_49344380();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer__output_58_84_49897620();

   return systemT;
}