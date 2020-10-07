#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT neural__network_58_840_52240940;

SignalI clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeclk_52290940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)neural__network_58_840_52240940;
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

SignalI rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makerst_52290880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)neural__network_58_840_52240940;
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

SignalI req_52290700_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makereq_52290700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_52290700_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)neural__network_58_840_52240940;
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

SignalI fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makefill_52290620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)neural__network_58_840_52240940;
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

SignalI ack__network_52290540_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeack__network_52290540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_52290540_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)neural__network_58_840_52240940;
   signalI->name = "ack_network";
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

Block __51100760;

Block __51100240;

void code__51100240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57963920(),ack__0_49406660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57963840(),ack__1_49406640_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__51100240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51100240 = block;
   block->owner = (Object)__51100760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51100240;

   return block;
};

void code__51100760() {
   {
      Value cond = rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51100240();
   }
      }
   }
}

Block make__51100760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51100760 = block;
   block->owner = (Object)__51098040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51100760;

   return block;
};

Block __51097460;

Block __51096940;

Block __51096380;

void code__51096380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57963600(),_5818_50121960_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__51096380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51096380 = block;
   block->owner = (Object)__51096940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51096380;

   return block;
};

void code__51096940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57963700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51096380();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57963540(),_5817_50122260_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__51096940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51096940 = block;
   block->owner = (Object)__51097460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51096940;

   return block;
};

Block __51094100;

void code__51094100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57963380(),address__inputs_49406540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57963300(),ack__inputs_49406520_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__51094100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51094100 = block;
   block->owner = (Object)__51097460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51094100;

   return block;
};

Block __51116860;

Block __51116580;

Block __51115920;

void code__51115920() {
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
                  src0 = _5818_50121960_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57962660();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_50121960_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57962520(),_5817_50122260_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = rom__inputs_50122280_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
            idx = value2integer(address__inputs_49406540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_5819_50198340_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__51115920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51115920 = block;
   block->owner = (Object)__51116580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51115920;

   return block;
};

void code__51116580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57963120();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51115920();
   }
      }
   }
}

Block make__51116580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51116580 = block;
   block->owner = (Object)__51116860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51116580;

   return block;
};

void code__51116860() {
 code__51116580();
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
                  src0 = address__inputs_49406540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57961960();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_49406540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__51116860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51116860 = block;
   block->owner = (Object)__51097460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51116860;

   return block;
};

Block __52243220;

void code__52243220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57961580(),ack__inputs_49406520_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__52243220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52243220 = block;
   block->owner = (Object)__51097460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52243220;

   return block;
};

void code__51097460() {
 code__51096940();
   {
      Value cond = rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51094100();
   }
      }
   }
   {
      Value cond = fill__inputs_49406620_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51116860();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__inputs_49406540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57961660();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52243220();
   }
      }
   }
}

Block make__51097460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51097460 = block;
   block->owner = (Object)__52241340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51097460;

   return block;
};

Block __55137160;

void code__55137160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__inputs_49406520_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_49406620_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__55137160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55137160 = block;
   block->owner = (Object)__55136920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55137160;

   return block;
};

Block __57312860;

void code__57312860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_49406640_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,ack__network_52290540_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,clk_58231120_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,rst_58231100_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,fill_58231080_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_52290700_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,req_58231060_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,clk_49473200_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,rst_49473180_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,fill_49473140_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49406660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,req_49473040_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__57312860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57312860 = block;
   block->owner = (Object)__55136760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57312860;

   return block;
};

Block __57312800;

void code__57312800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_58332700_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,ack__0_49406660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_50698160_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,ack__1_49406640_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__57312800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57312800 = block;
   block->owner = (Object)__55136560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57312800;

   return block;
};

Block __51355560;

Block __51789020;

void code__51789020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50971600_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,make_ref_rangeS(mem_51099640_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820,value2integer(abus__w_50971440_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value),value2integer(abus__w_50971440_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__51789020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51789020 = block;
   block->owner = (Object)__51355560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51789020;

   return block;
};

void code__51355560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51099640_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
            idx = value2integer(abus__r_50971520_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50884280_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_50780560_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51789020();
   }
      }
   }
}

Block make__51355560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51355560 = block;
   block->owner = (Object)__52082980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51355560;

   return block;
};

Block __55135200;

void code__55135200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_50780560_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_5817_50122260_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__55135200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55135200 = block;
   block->owner = (Object)__55134980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55135200;

   return block;
};

Block __55134940;

void code__55134940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_50122260_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,trig__w_50780560_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__55134940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55134940 = block;
   block->owner = (Object)__55134780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55134940;

   return block;
};

Block __55134480;

void code__55134480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50971440_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_5818_50121960_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__55134480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55134480 = block;
   block->owner = (Object)__55134280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55134480;

   return block;
};

Block __55134240;

void code__55134240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_50121960_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,abus__w_50971440_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__55134240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55134240 = block;
   block->owner = (Object)__55134020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55134240;

   return block;
};

Block __55133600;

void code__55133600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50971600_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_5819_50198340_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__55133600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55133600 = block;
   block->owner = (Object)__55133220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55133600;

   return block;
};

Block __55133180;

void code__55133180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_50198340_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,dbus__w_50971600_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__55133180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55133180 = block;
   block->owner = (Object)__55132960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55133180;

   return block;
};

Block __55132180;

void code__55132180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50884280_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_5815_58332740_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__55132180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55132180 = block;
   block->owner = (Object)__57621800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55132180;

   return block;
};

Block __55156640;

void code__55156640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_58332680_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,trig__r_50780580_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_58332600_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,abus__r_50971520_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__55156640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55156640 = block;
   block->owner = (Object)__57621580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55156640;

   return block;
};

Block __57618980;

void code__57618980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52414780_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_5832_51025780_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__57618980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57618980 = block;
   block->owner = (Object)__57618800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57618980;

   return block;
};

Block __57618760;

void code__57618760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_51025780_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,reg__0_52414780_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__57618760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57618760 = block;
   block->owner = (Object)__57618560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57618760;

   return block;
};

Block __57614980;

void code__57614980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_5855_58393760_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__57614980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57614980 = block;
   block->owner = (Object)__57614780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57614980;

   return block;
};

Block __57614740;

void code__57614740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5855_58393760_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__57614740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57614740 = block;
   block->owner = (Object)__57614520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57614740;

   return block;
};

Block __57670260;

void code__57670260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_5856_58479500_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__57670260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57670260 = block;
   block->owner = (Object)__57669940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57670260;

   return block;
};

Block __57669900;

void code__57669900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5856_58479500_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__57669900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57669900 = block;
   block->owner = (Object)__57669700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57669900;

   return block;
};

Block __57899360;

void code__57899360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_52876120_rinc_5865_52876500_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__57899360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57899360 = block;
   block->owner = (Object)__57898900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57899360;

   return block;
};

Block __57898840;

void code__57898840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,abus__r_52876120_rinc_5865_52876500_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__57898840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57898840 = block;
   block->owner = (Object)__57898300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57898840;

   return block;
};

Block __57668780;

void code__57668780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_5866_49906340_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->c_value,_5867_50698360_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
      set_value_pos(pool_state);
   }
}

Block make__57668780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57668780 = block;
   block->owner = (Object)__57898100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57668780;

   return block;
};

Value make__57965760() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57965740() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57963920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57963840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57963700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57963600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57963540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57963380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57963300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57963120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57962660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57962520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57961960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57961660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57961580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope neural__network_58_84_49045520;

SignalI ack__0_49406660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeack__0_49406660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49406660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)neural__network_58_84_49045520;
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

SignalI ack__1_49406640_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeack__1_49406640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49406640_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)neural__network_58_84_49045520;
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

SignalI fill__inputs_49406620_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makefill__inputs_49406620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_49406620_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)neural__network_58_84_49045520;
   signalI->name = "fill_inputs";
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

SignalI address__inputs_49406540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeaddress__inputs_49406540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_49406540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)neural__network_58_84_49045520;
   signalI->name = "address_inputs";
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

SignalI ack__inputs_49406520_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeack__inputs_49406520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_49406520_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)neural__network_58_84_49045520;
   signalI->name = "ack_inputs";
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

SignalI rom__inputs_50122280_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makerom__inputs_50122280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rom__inputs_50122280_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)neural__network_58_84_49045520;
   signalI->name = "rom_inputs";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__57965760();
         src1 = make__57965740();
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

SignalI _5817_50122260_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_5817_50122260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_50122260_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)neural__network_58_84_49045520;
   signalI->name = ":17";
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

SignalI _5818_50121960_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_5818_50121960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_50121960_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)neural__network_58_84_49045520;
   signalI->name = ":18";
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

SignalI _5819_50198340_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI make_5819_50198340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_50198340_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)neural__network_58_84_49045520;
   signalI->name = ":19";
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

SystemI layer0_58479320;

SystemI makelayer0_58479320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_58479320 = systemI;
   systemI->owner = (Object)neural__network_58_84_49045520;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_58233540;

   return systemI;
};

SystemI layer1_51025380;

SystemI makelayer1_51025380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_51025380 = systemI;
   systemI->owner = (Object)neural__network_58_84_49045520;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_49478680;

   return systemI;
};

Scope channel__input_581_50200240;

SignalI trig__r_50780580_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI maketrig__r_50780580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50780580_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__input_581_50200240;
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

SignalI trig__w_50780560_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI maketrig__w_50780560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_50780560_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__input_581_50200240;
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

SignalI dbus__r_50884280_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makedbus__r_50884280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50884280_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__input_581_50200240;
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

SignalI dbus__w_50971600_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makedbus__w_50971600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50971600_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__input_581_50200240;
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

SignalI abus__r_50971520_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__r_50971520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50971520_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__input_581_50200240;
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

SignalI abus__w_50971440_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__w_50971440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50971440_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__input_581_50200240;
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

SignalI mem_51099640_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makemem_51099640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51099640_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__input_581_50200240;
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

Scope raddr_582_50199940;

Scope makeraddr_582_50199940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_50199940 = scope;
   scope->owner = (Object)channel__input_581_50200240;
   scope->name = "raddr:2";
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

Scope waddr_587_50199520;

Scope makewaddr_587_50199520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_50199520 = scope;
   scope->owner = (Object)channel__input_581_50200240;
   scope->name = "waddr:7";
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

Scope rinc_5812_50199100;

Behavior __57621800;

Behavior make__57621800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57621800 = behavior;
   behavior->owner = (Object)rinc_5812_50199100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50884280_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   dbus__r_50884280_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   dbus__r_50884280_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(dbus__r_50884280_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,dbus__r_50884280_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
dbus__r_50884280_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[dbus__r_50884280_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__55132180();

   return behavior;
}

Behavior __57621580;

Behavior make__57621580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57621580 = behavior;
   behavior->owner = (Object)rinc_5812_50199100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_58332680_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _5813_58332680_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _5813_58332680_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_5813_58332680_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_5813_58332680_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_5813_58332680_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_5813_58332680_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_58332600_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _5814_58332600_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _5814_58332600_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_5814_58332600_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_5814_58332600_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_5814_58332600_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_5814_58332600_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__55156640();

   return behavior;
}

Scope makerinc_5812_50199100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_50199100 = scope;
   scope->owner = (Object)channel__input_581_50200240;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57621800();
   scope->behaviors[1] = make__57621580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_50781860;

Scope makewinc_5816_50781860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_50781860 = scope;
   scope->owner = (Object)channel__input_581_50200240;
   scope->name = "winc:16";
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

Scope rdec_5820_50781440;

Scope makerdec_5820_50781440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_50781440 = scope;
   scope->owner = (Object)channel__input_581_50200240;
   scope->name = "rdec:20";
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

Scope wdec_5825_50781020;

Scope makewdec_5825_50781020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_50781020 = scope;
   scope->owner = (Object)channel__input_581_50200240;
   scope->name = "wdec:25";
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

Behavior __52082980;

Behavior make__52082980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52082980 = behavior;
   behavior->owner = (Object)channel__input_581_50200240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_neg += 1;
   clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->neg = realloc(clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->neg,clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_neg*sizeof(Object));
clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->neg[clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_neg-1] = (Object)behavior;
   behavior->block = make__51355560();

   return behavior;
}

Behavior __55134980;

Behavior make__55134980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55134980 = behavior;
   behavior->owner = (Object)channel__input_581_50200240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_50780560_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   trig__w_50780560_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   trig__w_50780560_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(trig__w_50780560_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,trig__w_50780560_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
trig__w_50780560_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[trig__w_50780560_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__55135200();

   return behavior;
}

Behavior __55134780;

Behavior make__55134780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55134780 = behavior;
   behavior->owner = (Object)channel__input_581_50200240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_50122260_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _5817_50122260_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _5817_50122260_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_5817_50122260_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_5817_50122260_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_5817_50122260_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_5817_50122260_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__55134940();

   return behavior;
}

Behavior __55134280;

Behavior make__55134280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55134280 = behavior;
   behavior->owner = (Object)channel__input_581_50200240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50971440_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   abus__w_50971440_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   abus__w_50971440_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(abus__w_50971440_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,abus__w_50971440_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
abus__w_50971440_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[abus__w_50971440_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__55134480();

   return behavior;
}

Behavior __55134020;

Behavior make__55134020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55134020 = behavior;
   behavior->owner = (Object)channel__input_581_50200240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_50121960_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _5818_50121960_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _5818_50121960_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_5818_50121960_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_5818_50121960_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_5818_50121960_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_5818_50121960_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__55134240();

   return behavior;
}

Behavior __55133220;

Behavior make__55133220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55133220 = behavior;
   behavior->owner = (Object)channel__input_581_50200240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50971600_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   dbus__w_50971600_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   dbus__w_50971600_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(dbus__w_50971600_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,dbus__w_50971600_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
dbus__w_50971600_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[dbus__w_50971600_channel__input_581_50200240_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__55133600();

   return behavior;
}

Behavior __55132960;

Behavior make__55132960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55132960 = behavior;
   behavior->owner = (Object)channel__input_581_50200240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_50198340_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _5819_50198340_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _5819_50198340_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_5819_50198340_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_5819_50198340_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_5819_50198340_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_5819_50198340_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__55133180();

   return behavior;
}

Scope makechannel__input_581_50200240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__input_581_50200240 = scope;
   scope->owner = (Object)neural__network_58_84_49045520;
   scope->name = "channel_input:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50780580();
   scope->inners[1] = maketrig__w_50780560();
   scope->inners[2] = makedbus__r_50884280();
   scope->inners[3] = makedbus__w_50971600();
   scope->inners[4] = makeabus__r_50971520();
   scope->inners[5] = makeabus__w_50971440();
   scope->inners[6] = makemem_51099640();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_50199940();
   scope->scopes[1] = makewaddr_587_50199520();
   scope->scopes[2] = makerinc_5812_50199100();
   scope->scopes[3] = makewinc_5816_50781860();
   scope->scopes[4] = makerdec_5820_50781440();
   scope->scopes[5] = makewdec_5825_50781020();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52082980();
   scope->behaviors[1] = make__55134980();
   scope->behaviors[2] = make__55134780();
   scope->behaviors[3] = make__55134280();
   scope->behaviors[4] = make__55134020();
   scope->behaviors[5] = make__55133220();
   scope->behaviors[6] = make__55132960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__output_5830_52082860;

SignalI reg__0_52414780_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makereg__0_52414780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52414780_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__output_5830_52082860;
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

Scope anum_5831_52082560;

Behavior __57618800;

Behavior make__57618800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57618800 = behavior;
   behavior->owner = (Object)anum_5831_52082560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52414780_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   reg__0_52414780_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   reg__0_52414780_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(reg__0_52414780_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,reg__0_52414780_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
reg__0_52414780_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[reg__0_52414780_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__57618980();

   return behavior;
}

Behavior __57618560;

Behavior make__57618560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57618560 = behavior;
   behavior->owner = (Object)anum_5831_52082560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_51025780_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _5832_51025780_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _5832_51025780_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_5832_51025780_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_5832_51025780_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_5832_51025780_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_5832_51025780_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__57618760();

   return behavior;
}

Scope makeanum_5831_52082560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_52082560 = scope;
   scope->owner = (Object)channel__output_5830_52082860;
   scope->name = "anum:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57618800();
   scope->behaviors[1] = make__57618560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5833_52297520;

Scope makeraddr_5833_52297520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5833_52297520 = scope;
   scope->owner = (Object)channel__output_5830_52082860;
   scope->name = "raddr:33";
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

Scope waddr_5836_52297100;

Scope makewaddr_5836_52297100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5836_52297100 = scope;
   scope->owner = (Object)channel__output_5830_52082860;
   scope->name = "waddr:36";
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

Scope rinc_5839_52296680;

SignalI abus__r_52296300_rinc_5839_52296680_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__r_52296300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52296300_rinc_5839_52296680_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)rinc_5839_52296680;
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

Scope makerinc_5839_52296680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5839_52296680 = scope;
   scope->owner = (Object)channel__output_5830_52082860;
   scope->name = "rinc:39";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52296300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5842_52296180;

SignalI abus__w_52295800_winc_5842_52296180_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__w_52295800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52295800_winc_5842_52296180_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)winc_5842_52296180;
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

Scope makewinc_5842_52296180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5842_52296180 = scope;
   scope->owner = (Object)channel__output_5830_52082860;
   scope->name = "winc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52295800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5845_52295680;

SignalI abus__r_52295300_rdec_5845_52295680_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__r_52295300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52295300_rdec_5845_52295680_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)rdec_5845_52295680;
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

Scope makerdec_5845_52295680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5845_52295680 = scope;
   scope->owner = (Object)channel__output_5830_52082860;
   scope->name = "rdec:45";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52295300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5849_52295180;

SignalI abus__w_52294800_wdec_5849_52295180_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__w_52294800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52294800_wdec_5849_52295180_channel__output_5830_52082860_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)wdec_5849_52295180;
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

Scope makewdec_5849_52295180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5849_52295180 = scope;
   scope->owner = (Object)channel__output_5830_52082860;
   scope->name = "wdec:49";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52294800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__output_5830_52082860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__output_5830_52082860 = scope;
   scope->owner = (Object)neural__network_58_84_49045520;
   scope->name = "channel_output:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52414780();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_52082560();
   scope->scopes[1] = makeraddr_5833_52297520();
   scope->scopes[2] = makewaddr_5836_52297100();
   scope->scopes[3] = makerinc_5839_52296680();
   scope->scopes[4] = makewinc_5842_52296180();
   scope->scopes[5] = makerdec_5845_52295680();
   scope->scopes[6] = makewdec_5849_52295180();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5853_52414660;

SignalI reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makereg__0_49186300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__a0_5853_52414660;
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

SignalI reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makereg__1_49406880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)channel__a0_5853_52414660;
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

Scope anum_5854_52414360;

Behavior __57614780;

Behavior make__57614780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57614780 = behavior;
   behavior->owner = (Object)anum_5854_52414360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__57614980();

   return behavior;
}

Behavior __57614520;

Behavior make__57614520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57614520 = behavior;
   behavior->owner = (Object)anum_5854_52414360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5855_58393760_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _5855_58393760_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _5855_58393760_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_5855_58393760_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_5855_58393760_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_5855_58393760_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_5855_58393760_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__57614740();

   return behavior;
}

Behavior __57669940;

Behavior make__57669940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57669940 = behavior;
   behavior->owner = (Object)anum_5854_52414360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__57670260();

   return behavior;
}

Behavior __57669700;

Behavior make__57669700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57669700 = behavior;
   behavior->owner = (Object)anum_5854_52414360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5856_58479500_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _5856_58479500_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _5856_58479500_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_5856_58479500_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_5856_58479500_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_5856_58479500_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_5856_58479500_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__57669900();

   return behavior;
}

Scope makeanum_5854_52414360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5854_52414360 = scope;
   scope->owner = (Object)channel__a0_5853_52414660;
   scope->name = "anum:54";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57614780();
   scope->behaviors[1] = make__57614520();
   scope->behaviors[2] = make__57669940();
   scope->behaviors[3] = make__57669700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5857_52877340;

Scope makeraddr_5857_52877340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5857_52877340 = scope;
   scope->owner = (Object)channel__a0_5853_52414660;
   scope->name = "raddr:57";
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

Scope waddr_5861_52876920;

Scope makewaddr_5861_52876920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5861_52876920 = scope;
   scope->owner = (Object)channel__a0_5853_52414660;
   scope->name = "waddr:61";
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

Scope rinc_5865_52876500;

SignalI abus__r_52876120_rinc_5865_52876500_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__r_52876120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52876120_rinc_5865_52876500_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)rinc_5865_52876500;
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

Behavior __57898900;

Behavior make__57898900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57898900 = behavior;
   behavior->owner = (Object)rinc_5865_52876500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_52876120_rinc_5865_52876500_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   abus__r_52876120_rinc_5865_52876500_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   abus__r_52876120_rinc_5865_52876500_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(abus__r_52876120_rinc_5865_52876500_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,abus__r_52876120_rinc_5865_52876500_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
abus__r_52876120_rinc_5865_52876500_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[abus__r_52876120_rinc_5865_52876500_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__57899360();

   return behavior;
}

Behavior __57898300;

Behavior make__57898300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57898300 = behavior;
   behavior->owner = (Object)rinc_5865_52876500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   _5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   _5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(_5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,_5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
_5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[_5868_50697720_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__57898840();

   return behavior;
}

Behavior __57898100;

Behavior make__57898100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57898100 = behavior;
   behavior->owner = (Object)rinc_5865_52876500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[reg__0_49186300_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[reg__1_49406880_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__57668780();

   return behavior;
}

Scope makerinc_5865_52876500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5865_52876500 = scope;
   scope->owner = (Object)channel__a0_5853_52414660;
   scope->name = "rinc:65";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52876120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57898900();
   scope->behaviors[1] = make__57898300();
   scope->behaviors[2] = make__57898100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5869_48372220;

SignalI abus__w_48371820_winc_5869_48372220_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__w_48371820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48371820_winc_5869_48372220_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)winc_5869_48372220;
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

Scope makewinc_5869_48372220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5869_48372220 = scope;
   scope->owner = (Object)channel__a0_5853_52414660;
   scope->name = "winc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48371820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5873_48371700;

SignalI abus__r_48371280_rdec_5873_48371700_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__r_48371280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48371280_rdec_5873_48371700_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)rdec_5873_48371700;
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

Scope makerdec_5873_48371700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5873_48371700 = scope;
   scope->owner = (Object)channel__a0_5853_52414660;
   scope->name = "rdec:73";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48371280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5878_48371160;

SignalI abus__w_48370680_wdec_5878_48371160_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820;

SignalI makeabus__w_48370680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48370680_wdec_5878_48371160_channel__a0_5853_52414660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820 = signalI;
   signalI->owner = (Object)wdec_5878_48371160;
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

Scope makewdec_5878_48371160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5878_48371160 = scope;
   scope->owner = (Object)channel__a0_5853_52414660;
   scope->name = "wdec:78";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48370680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5853_52414660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5853_52414660 = scope;
   scope->owner = (Object)neural__network_58_84_49045520;
   scope->name = "channel_a0:53";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49186300();
   scope->inners[1] = makereg__1_49406880();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5854_52414360();
   scope->scopes[1] = makeraddr_5857_52877340();
   scope->scopes[2] = makewaddr_5861_52876920();
   scope->scopes[3] = makerinc_5865_52876500();
   scope->scopes[4] = makewinc_5869_48372220();
   scope->scopes[5] = makerdec_5873_48371700();
   scope->scopes[6] = makewdec_5878_48371160();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51098040;

Behavior make__51098040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51098040 = behavior;
   behavior->owner = (Object)neural__network_58_84_49045520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos += 1;
   clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos = realloc(clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos,clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos*sizeof(Object));
clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos[clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos-1] = (Object)behavior;
   behavior->block = make__51100760();

   return behavior;
}

Behavior __52241340;

Behavior make__52241340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52241340 = behavior;
   behavior->owner = (Object)neural__network_58_84_49045520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos += 1;
   clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos = realloc(clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos,clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos*sizeof(Object));
clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->pos[clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_pos-1] = (Object)behavior;
   behavior->block = make__51097460();

   return behavior;
}

Behavior __55136920;

Behavior make__55136920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55136920 = behavior;
   behavior->owner = (Object)neural__network_58_84_49045520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_49406520_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   ack__inputs_49406520_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   ack__inputs_49406520_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(ack__inputs_49406520_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,ack__inputs_49406520_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
ack__inputs_49406520_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[ack__inputs_49406520_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__55137160();

   return behavior;
}

Behavior __55136760;

Behavior make__55136760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55136760 = behavior;
   behavior->owner = (Object)neural__network_58_84_49045520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_49406640_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   ack__1_49406640_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   ack__1_49406640_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(ack__1_49406640_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,ack__1_49406640_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
ack__1_49406640_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[ack__1_49406640_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[clk_52290940_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[rst_52290880_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[fill_52290620_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,req_52290700_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   req_52290700_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   req_52290700_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(req_52290700_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,req_52290700_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
req_52290700_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[req_52290700_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__0_49406660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   ack__0_49406660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   ack__0_49406660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(ack__0_49406660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,ack__0_49406660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
ack__0_49406660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[ack__0_49406660_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__57312860();

   return behavior;
}

Behavior __55136560;

Behavior make__55136560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55136560 = behavior;
   behavior->owner = (Object)neural__network_58_84_49045520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_58332700_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   ack__layer_58332700_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   ack__layer_58332700_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(ack__layer_58332700_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,ack__layer_58332700_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
ack__layer_58332700_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[ack__layer_58332700_layer0_58_840_58233540_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_50698160_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820);
   ack__layer_50698160_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any += 1;
   ack__layer_50698160_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any = realloc(ack__layer_50698160_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any,ack__layer_50698160_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any*sizeof(Object));
ack__layer_50698160_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->any[ack__layer_50698160_layer1_58_840_49478680_neural__network_58_84_49045520_neural__network_58_840_52240940______58_84_49046220______58_840_52643820->num_any-1] = (Object)behavior;
   behavior->block = make__57312800();

   return behavior;
}

Scope makeneural__network_58_84_49045520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   neural__network_58_84_49045520 = scope;
   scope->owner = (Object)neural__network_58_840_52240940;
   scope->name = "neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_58479320();
   scope->systemIs[1] = makelayer1_51025380();
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_49406660();
   scope->inners[1] = makeack__1_49406640();
   scope->inners[2] = makefill__inputs_49406620();
   scope->inners[3] = makeaddress__inputs_49406540();
   scope->inners[4] = makeack__inputs_49406520();
   scope->inners[5] = makerom__inputs_50122280();
   scope->inners[6] = make_5817_50122260();
   scope->inners[7] = make_5818_50121960();
   scope->inners[8] = make_5819_50198340();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__input_581_50200240();
   scope->scopes[1] = makechannel__output_5830_52082860();
   scope->scopes[2] = makechannel__a0_5853_52414660();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51098040();
   scope->behaviors[1] = make__52241340();
   scope->behaviors[2] = make__55136920();
   scope->behaviors[3] = make__55136760();
   scope->behaviors[4] = make__55136560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makeneural__network_58_840_52240940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   neural__network_58_840_52240940 = systemT;
systemT->owner = NULL;
   systemT->name = "neural_network:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_52290940();
   systemT->inputs[1] = makerst_52290880();
   systemT->inputs[2] = makereq_52290700();
   systemT->inputs[3] = makefill_52290620();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__network_52290540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makeneural__network_58_84_49045520();

   return systemT;
}